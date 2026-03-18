/*
 * XREFs of EtwpLocateDbgIdForRegEntry @ 0x1406AFC40
 * Callers:
 *     EtwpProviderArrivalCallback @ 0x1406AFD98 (EtwpProviderArrivalCallback.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x140297270 (RtlImageNtHeaderEx.c)
 *     RtlPcToFileHeader @ 0x1402FEEF0 (RtlPcToFileHeader.c)
 *     VslGetEtwDebugId @ 0x1404FA9BC (VslGetEtwDebugId.c)
 *     MmGetImageInformation @ 0x1405CD098 (MmGetImageInformation.c)
 *     EtwpFindDebugId @ 0x1406AFA1C (EtwpFindDebugId.c)
 *     EtwpGetImageSize @ 0x14077DCE4 (EtwpGetImageSize.c)
 */

__int64 __fastcall EtwpLocateDbgIdForRegEntry(char a1, __int64 a2, void **a3, ULONG *a4)
{
  unsigned __int64 v7; // rcx
  struct _KTHREAD *CurrentThread; // rax
  __int64 result; // rax
  SIZE_T v10; // rdx
  unsigned __int64 v11; // [rsp+38h] [rbp-20h] BYREF
  unsigned __int64 v12; // [rsp+40h] [rbp-18h] BYREF
  __int64 v13; // [rsp+48h] [rbp-10h] BYREF
  int v14; // [rsp+68h] [rbp+10h] BYREF

  v14 = 0;
  v13 = 0LL;
  v12 = 0LL;
  v11 = 0LL;
  v7 = *(_QWORD *)(a2 + 88);
  if ( !v7 )
    return 3221225793LL;
  if ( !a1 )
  {
    RtlPcToFileHeader(v7, &v12, (__int64)a3, (__int64)a4);
    if ( !v12 )
      return 3221226021LL;
LABEL_5:
    result = RtlImageNtHeaderEx(1, v12 & 0xFFFFFFFFFFFFFFFCuLL, v11, &v13);
    if ( (int)result >= 0 )
    {
      v10 = v11;
      if ( !v11 )
      {
        result = EtwpGetImageSize(v13, &v11);
        v10 = v11;
      }
      if ( (int)result >= 0 )
      {
        if ( a1 == 1 && v10 && (v10 + v12 > 0x7FFFFFFF0000LL || v10 + v12 < v12) )
        {
          MEMORY[0x7FFFFFFF0000] = 0;
          v10 = v11;
        }
        return EtwpFindDebugId(v12, v10, 0, a3, a4);
      }
    }
    return result;
  }
  CurrentThread = KeGetCurrentThread();
  if ( (CurrentThread->ApcState.Process->SecureState.SecureHandle & 1) != 0 )
    return VslGetEtwDebugId((__int64)CurrentThread->ApcState.Process, *(_QWORD *)(a2 + 88), (struct _MDL **)a3, a4);
  result = MmGetImageInformation(v7, &v12, &v11, &v14);
  if ( (int)result >= 0 )
    goto LABEL_5;
  return result;
}
