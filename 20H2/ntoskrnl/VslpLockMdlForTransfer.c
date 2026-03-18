/*
 * XREFs of VslpLockMdlForTransfer @ 0x140393DDC
 * Callers:
 *     VslpLockPagesForTransfer @ 0x140393C58 (VslpLockPagesForTransfer.c)
 *     VslLoadEnclaveData @ 0x1408927EC (VslLoadEnclaveData.c)
 *     VslLoadEnclaveModule @ 0x1408928E8 (VslLoadEnclaveModule.c)
 * Callees:
 *     MmBuildMdlForNonPagedPool @ 0x140254270 (MmBuildMdlForNonPagedPool.c)
 *     MiProbeAndLockPages @ 0x14026BB80 (MiProbeAndLockPages.c)
 */

__int64 __fastcall VslpLockMdlForTransfer(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // r10
  struct _MDL *v4; // rcx

  *(_QWORD *)a1 = a2;
  *(_DWORD *)(a1 + 64) = 0;
  v3 = *(__int16 *)(a2 + 8);
  v4 = (struct _MDL *)(a1 + 8);
  v4->Next = 0LL;
  v4->Size = 8 * ((((unsigned __int64)(a2 & 0xFFF) + v3 + 4095) >> 12) + 6);
  v4->MdlFlags = 0;
  v4->StartVa = (PVOID)(a2 & 0xFFFFFFFFFFFFF000uLL);
  v4->ByteOffset = a2 & 0xFFF;
  v4->ByteCount = v3;
  if ( (a3 & 4) != 0 )
    MmBuildMdlForNonPagedPool(v4);
  else
    MiProbeAndLockPages((__int64)v4, 0, 0);
  return 0LL;
}
