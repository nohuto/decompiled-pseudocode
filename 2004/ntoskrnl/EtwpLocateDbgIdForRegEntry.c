/*
 * XREFs of EtwpLocateDbgIdForRegEntry @ 0x1406FACAC
 * Callers:
 *     EtwpProviderArrivalCallback @ 0x1406FAA60 (EtwpProviderArrivalCallback.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x140224AC0 (RtlImageNtHeaderEx.c)
 *     RtlPcToFileHeader @ 0x14034F460 (RtlPcToFileHeader.c)
 *     VslGetEtwDebugId @ 0x1404F712C (VslGetEtwDebugId.c)
 *     MmGetImageInformation @ 0x1405C7D54 (MmGetImageInformation.c)
 *     EtwpFindDebugId @ 0x1406FAE04 (EtwpFindDebugId.c)
 *     EtwpGetImageSize @ 0x14076F6D8 (EtwpGetImageSize.c)
 */

int __fastcall EtwpLocateDbgIdForRegEntry(char a1, __int64 a2, struct _MDL **a3, ULONG *a4)
{
  int v5; // esi
  void *v7; // rcx
  struct _KTHREAD *CurrentThread; // rax
  int result; // eax
  ULONG64 v10; // rdx
  ULONG64 Size; // [rsp+38h] [rbp-20h] BYREF
  PVOID BaseOfImage; // [rsp+40h] [rbp-18h] BYREF
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+48h] [rbp-10h] BYREF
  int v14; // [rsp+68h] [rbp+10h] BYREF

  v5 = (int)a3;
  v14 = 0;
  OutHeaders = 0LL;
  BaseOfImage = 0LL;
  Size = 0LL;
  v7 = *(void **)(a2 + 88);
  if ( !v7 )
    return -1073741503;
  if ( !a1 )
  {
    RtlPcToFileHeader(v7, &BaseOfImage);
    if ( !BaseOfImage )
      return -1073741275;
LABEL_5:
    result = RtlImageNtHeaderEx(1u, (PVOID)((unsigned __int64)BaseOfImage & 0xFFFFFFFFFFFFFFFCuLL), Size, &OutHeaders);
    if ( result >= 0 )
    {
      v10 = Size;
      if ( !Size )
      {
        result = EtwpGetImageSize(OutHeaders, &Size);
        v10 = Size;
      }
      if ( result >= 0 )
      {
        if ( a1 == 1
          && v10
          && ((unsigned __int64)BaseOfImage + v10 > 0x7FFFFFFF0000LL || (char *)BaseOfImage + v10 < BaseOfImage) )
        {
          MEMORY[0x7FFFFFFF0000] = 0;
          LODWORD(v10) = Size;
        }
        return EtwpFindDebugId((_DWORD)BaseOfImage, v10, 0, v5, (__int64)a4);
      }
    }
    return result;
  }
  CurrentThread = KeGetCurrentThread();
  if ( (CurrentThread->ApcState.Process->SecureState.SecureHandle & 1) != 0 )
    return VslGetEtwDebugId((__int64)CurrentThread->ApcState.Process, *(_QWORD *)(a2 + 88), a3, a4);
  result = MmGetImageInformation((unsigned __int64)v7, &BaseOfImage, &Size, &v14);
  if ( result >= 0 )
    goto LABEL_5;
  return result;
}
