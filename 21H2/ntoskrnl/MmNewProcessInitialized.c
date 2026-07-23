/*
 * XREFs of MmNewProcessInitialized @ 0x1406B0910
 * Callers:
 *     PspAllocateProcess @ 0x1406AD918 (PspAllocateProcess.c)
 * Callees:
 *     KiStackAttachProcess @ 0x14027D850 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1402AB900 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     MiSetProcessPebHotPatchState @ 0x1408CE7C4 (MiSetProcessPebHotPatchState.c)
 */

__int64 __fastcall MmNewProcessInitialized(_KPROCESS *a1)
{
  unsigned int v1; // ebx
  _OWORD v4[3]; // [rsp+20h] [rbp-48h] BYREF

  v1 = 0;
  if ( a1[2].ActiveProcessors.Bitmap[2] )
  {
    memset(v4, 0, sizeof(v4));
    KiStackAttachProcess(a1, 0, (__int64)v4);
    v1 = MiSetProcessPebHotPatchState(a1);
    KiUnstackDetachProcess((__int64)v4, 0LL);
  }
  return v1;
}
