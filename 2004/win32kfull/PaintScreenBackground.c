/*
 * XREFs of PaintScreenBackground @ 0x1C012A620
 * Callers:
 *     <none>
 * Callees:
 *     FillRect @ 0x1C0062024 (FillRect.c)
 */

__int64 PaintScreenBackground()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  HDC v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  RECT v8; // [rsp+30h] [rbp-18h] BYREF

  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  EnterRenderBlock();
  UserSessionSwitchLeaveCrit(v1, v0, v2);
  EnterSharedCrit(0LL, 1LL);
  EnterSharedRenderCrit();
  v3 = *(HDC *)(gpDispInfo + 56LL);
  v8 = *(RECT *)(*gpDispInfo + 24LL);
  FillRect(v3, &v8, *(HBRUSH *)(gpsi + 4704LL));
  LeaveRenderBlock();
  LeaveRenderCrit();
  UserSessionSwitchLeaveCrit(v5, v4, v6);
  return EnterCrit(0LL, 1LL);
}
