/*
 * XREFs of MmNewProcessInitialized @ 0x140613704
 * Callers:
 *     PspAllocateProcess @ 0x140610840 (PspAllocateProcess.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140205370 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14024F890 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     MiSetProcessPebHotPatchState @ 0x1408CB064 (MiSetProcessPebHotPatchState.c)
 */

__int64 __fastcall MmNewProcessInitialized(_KPROCESS *a1)
{
  unsigned int v1; // ebx
  _OWORD v4[3]; // [rsp+20h] [rbp-48h] BYREF

  v1 = 0;
  if ( a1[2].ActiveProcessors.Bitmap[2] )
  {
    memset(v4, 0, sizeof(v4));
    KiStackAttachProcess(a1, 0LL, (__int64)v4);
    v1 = MiSetProcessPebHotPatchState(a1);
    KiUnstackDetachProcess((__int64)v4, 0LL);
  }
  return v1;
}
