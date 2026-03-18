/*
 * XREFs of PWInsertAfter @ 0x1C0022C54
 * Callers:
 *     ?ValidateZorder@@YAHPEAUtagCVR@@@Z @ 0x1C0022ADC (-ValidateZorder@@YAHPEAUtagCVR@@@Z.c)
 *     ?ZOrderByOwner2@@YAPEAUtagSMWP@@PEAU1@H@Z @ 0x1C0024360 (-ZOrderByOwner2@@YAPEAUtagSMWP@@PEAU1@H@Z.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C0068320 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     xxxCreateWindowEx @ 0x1C00A8C10 (xxxCreateWindowEx.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C007059C (HMValidateHandleNoSecure.c)
 */

__int64 __fastcall PWInsertAfter(unsigned __int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( a1 <= 1 || a1 > 0xFFFFFFFFFFFFFFFDuLL )
    return a1;
  LOBYTE(a2) = 1;
  result = HMValidateHandleNoSecure(a1, a2);
  if ( !result || *(char *)(*(_QWORD *)(result + 40) + 19LL) < 0 || !*(_QWORD *)(result + 104) )
    return 0LL;
  return result;
}
