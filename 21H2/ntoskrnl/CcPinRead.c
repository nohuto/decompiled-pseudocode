/*
 * XREFs of CcPinRead @ 0x140706580
 * Callers:
 *     <none>
 * Callees:
 *     CcPinFileData @ 0x14032A380 (CcPinFileData.c)
 *     CcUnpinData @ 0x1406FF050 (CcUnpinData.c)
 *     CcAllocateObcb @ 0x14077D46C (CcAllocateObcb.c)
 */

BOOLEAN __stdcall CcPinRead(
        PFILE_OBJECT FileObject,
        PLARGE_INTEGER FileOffset,
        ULONG Length,
        ULONG Flags,
        PVOID *Bcb,
        PVOID *Buffer)
{
  char v6; // r15
  _DWORD *SharedCacheMap; // r14
  PVOID *v10; // rbx
  unsigned int v11; // esi
  __int64 v12; // rax
  PVOID *v13; // rdi
  BOOLEAN v15; // [rsp+50h] [rbp-68h]
  PVOID Obcb; // [rsp+58h] [rbp-60h] BYREF
  PVOID *v17; // [rsp+60h] [rbp-58h]
  void *v18; // [rsp+68h] [rbp-50h] BYREF
  __int64 v19; // [rsp+C0h] [rbp+8h] BYREF
  LONGLONG QuadPart; // [rsp+C8h] [rbp+10h] BYREF
  ULONG v21; // [rsp+D0h] [rbp+18h]

  v21 = Length;
  v6 = Flags;
  v18 = 0LL;
  v19 = 0LL;
  QuadPart = FileOffset->QuadPart;
  Obcb = 0LL;
  v17 = &Obcb;
  __incgsdword(4 * (Flags & 1) + 33048);
  KeGetCurrentThread()[1].Timer.DueTime.HighPart = 0;
  SharedCacheMap = FileObject->SectionObjectPointer->SharedCacheMap;
  v10 = Buffer;
  v11 = v21;
  v12 = v19;
  v13 = v17;
  do
  {
    if ( Obcb )
    {
      if ( v13 == &Obcb )
      {
        Obcb = (PVOID)CcAllocateObcb(FileOffset, v11);
        v13 = (PVOID *)((char *)Obcb + 16);
        v17 = (PVOID *)((char *)Obcb + 16);
        *v10 = v18;
        v12 = v19;
      }
      v11 += QuadPart - v12;
      v21 = v11;
      QuadPart = v12;
      v17 = ++v13;
    }
    if ( !(unsigned __int8)CcPinFileData(
                             (__int64)FileObject,
                             &QuadPart,
                             v11,
                             (SharedCacheMap[38] & 0x200) == 0,
                             0,
                             v6,
                             (__int64 *)v13,
                             &v18,
                             &v19) )
    {
      __incgsdword(0x8154u);
      v15 = 0;
      goto LABEL_12;
    }
    v12 = v19;
  }
  while ( v19 - QuadPart < v11 );
  *Bcb = Obcb;
  if ( v13 == &Obcb )
    *v10 = v18;
  v15 = 1;
LABEL_12:
  __addgsdword(0x8158u, KeGetCurrentThread()[1].Timer.DueTime.HighPart);
  if ( !v15 && Obcb )
    CcUnpinData(Obcb);
  return v15;
}
