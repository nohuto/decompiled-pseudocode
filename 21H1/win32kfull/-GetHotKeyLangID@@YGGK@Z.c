/*
 * XREFs of ?GetHotKeyLangID@@YGGK@Z @ 0xA651E
 * Callers:
 *     ?FindImeHotKeyByKey@@YGPAU_tagIMEHOTKEYOBJ@@PAU1@III@Z @ 0xA3098 (-FindImeHotKeyByKey@@YGPAU_tagIMEHOTKEYOBJ@@PAU1@III@Z.c)
 *     _SetImeHotKey@20 @ 0xA639E (_SetImeHotKey@20.c)
 *     ?FindImeHotKeyByKeyWithLang@@YGPAU_tagIMEHOTKEYOBJ@@PAU1@IIIG@Z @ 0xA64A6 (-FindImeHotKeyByKeyWithLang@@YGPAU_tagIMEHOTKEYOBJ@@PAU1@IIIG@Z.c)
 * Callees:
 *     <none>
 */

int __fastcall GetHotKeyLangID(unsigned int a1)
{
  if ( a1 - 16 > 0x7F )
    return 0;
  else
    return (unsigned __int16)word_251440[a1 >> 4];
}
