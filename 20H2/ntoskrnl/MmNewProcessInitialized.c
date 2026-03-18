/*
 * XREFs of MmNewProcessInitialized @ 0x140698C64
 * Callers:
 *     PspAllocateProcess @ 0x140695CA4 (PspAllocateProcess.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140268320 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402D6FA0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     MiSetProcessPebHotPatchState @ 0x1408D0EA4 (MiSetProcessPebHotPatchState.c)
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
    KiUnstackDetachProcess((__int64)v4, 0);
  }
  return v1;
}
