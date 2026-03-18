/*
 * XREFs of MmNewProcessInitialized @ 0x1406F6B68
 * Callers:
 *     PspAllocateProcess @ 0x1406F3CB0 (PspAllocateProcess.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x14025E290 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402A88C0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     MiSetProcessPebHotPatchState @ 0x1408C9D14 (MiSetProcessPebHotPatchState.c)
 */

__int64 __fastcall MmNewProcessInitialized(_KPROCESS *a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  unsigned int v4; // ebx
  __int64 v7; // r8
  _DWORD *v8; // r9
  _OWORD v9[3]; // [rsp+20h] [rbp-48h] BYREF

  v4 = 0;
  if ( a1[2].ActiveProcessors.Bitmap[2] )
  {
    memset(v9, 0, sizeof(v9));
    KiStackAttachProcess(a1, 0LL, (__int64)v9, a4);
    v4 = MiSetProcessPebHotPatchState(a1);
    KiUnstackDetachProcess((__int64)v9, 0LL, v7, v8);
  }
  return v4;
}
