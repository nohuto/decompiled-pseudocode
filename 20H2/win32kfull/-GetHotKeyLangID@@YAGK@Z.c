/*
 * XREFs of ?GetHotKeyLangID@@YAGK@Z @ 0x1C010EFEC
 * Callers:
 *     ?FindImeHotKeyByKey@@YAPEAU_tagIMEHOTKEYOBJ@@PEAU1@III@Z @ 0x1C00FE040 (-FindImeHotKeyByKey@@YAPEAU_tagIMEHOTKEYOBJ@@PEAU1@III@Z.c)
 *     SetImeHotKey @ 0x1C010EE18 (SetImeHotKey.c)
 *     ?FindImeHotKeyByKeyWithLang@@YAPEAU_tagIMEHOTKEYOBJ@@PEAU1@IIIG@Z @ 0x1C010EF68 (-FindImeHotKeyByKeyWithLang@@YAPEAU_tagIMEHOTKEYOBJ@@PEAU1@IIIG@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetHotKeyLangID(unsigned int a1)
{
  if ( a1 - 16 > 0x7F )
    return 0;
  else
    return (unsigned __int16)word_1C02E9BE0[(unsigned __int64)a1 >> 4];
}
