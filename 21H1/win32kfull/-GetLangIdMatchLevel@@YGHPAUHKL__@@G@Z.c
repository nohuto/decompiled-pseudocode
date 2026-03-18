/*
 * XREFs of ?GetLangIdMatchLevel@@YGHPAUHKL__@@G@Z @ 0x180A00
 * Callers:
 *     ?FindImeHotKeyByKey@@YGPAU_tagIMEHOTKEYOBJ@@PAU1@III@Z @ 0xA3098 (-FindImeHotKeyByKey@@YGPAU_tagIMEHOTKEYOBJ@@PAU1@III@Z.c)
 * Callees:
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

int __fastcall GetLangIdMatchLevel(int a1, __int16 a2)
{
  if ( !a2 )
    return 3;
  if ( ((**(_DWORD **)(_gptiCurrent + 260) >> 9) & 1) != 0 && (HIWORD(a1) & 0xF000) != 0xE000 )
    return 0;
  if ( (_WORD)a1 == a2 )
    return 3;
  if ( (unsigned __int16)KeGetPcr()->NtTib.Self[7].ExceptionList != a2 )
  {
    if ( !glcidSystem )
      ZwQueryDefaultLocale(0, &glcidSystem);
    return (_WORD)glcidSystem == a2;
  }
  return 2;
}
