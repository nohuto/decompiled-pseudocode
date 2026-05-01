/*
 * XREFs of _anonymous_namespace_::IsAnimationEnabled @ 0x18032A878
 * Callers:
 *     _lambda_2a6490a8cf13452a213c8a59fbbd282a_::operator() @ 0x1800A0F80 (_lambda_2a6490a8cf13452a213c8a59fbbd282a_--operator().c)
 *     ?AnimateWindow@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrameWrapper@@PEAUHWND__@@AEAVCExperienceManagerAnimationHelper@@_N@Z @ 0x180326CE0 (-AnimateWindow@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrameWrapper@@PEAUHWND__@@AE.c)
 *     ?ShowView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@@Z @ 0x18032EF88 (-ShowView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@@Z.c)
 * Callees:
 *     <none>
 */

bool anonymous_namespace_::IsAnimationEnabled()
{
  char v0; // bl
  __int64 pvParam; // [rsp+30h] [rbp+8h] BYREF

  v0 = 0;
  pvParam = 8LL;
  if ( SystemParametersInfoW(0x48u, 8u, &pvParam, 0) )
    return HIDWORD(pvParam) != 0;
  return v0;
}
