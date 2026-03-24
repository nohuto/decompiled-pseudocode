/*
 * XREFs of MmNewProcessInitialized @ 0x1406D9630
 * Callers:
 *     PspAllocateProcess @ 0x1406D6638 (PspAllocateProcess.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140207000 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14025C2E0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     MiSetProcessPebHotPatchState @ 0x1408CE664 (MiSetProcessPebHotPatchState.c)
 */

__int64 __fastcall MmNewProcessInitialized(_KPROCESS *a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  unsigned int v4; // ebx
  _OWORD v7[3]; // [rsp+20h] [rbp-48h] BYREF

  v4 = 0;
  if ( a1[2].ActiveProcessors.Bitmap[2] )
  {
    memset(v7, 0, sizeof(v7));
    KiStackAttachProcess(a1, 0LL, (__int64)v7, a4);
    v4 = MiSetProcessPebHotPatchState(a1);
    KiUnstackDetachProcess((__int64)v7, 0);
  }
  return v4;
}
