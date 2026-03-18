/*
 * XREFs of ?GetHotKeyLangID@@YAGK@Z @ 0x1C010D54C
 * Callers:
 *     ?FindImeHotKeyByKey@@YAPEAU_tagIMEHOTKEYOBJ@@PEAU1@III@Z @ 0x1C0101A80 (-FindImeHotKeyByKey@@YAPEAU_tagIMEHOTKEYOBJ@@PEAU1@III@Z.c)
 *     SetImeHotKey @ 0x1C010D378 (SetImeHotKey.c)
 *     ?FindImeHotKeyByKeyWithLang@@YAPEAU_tagIMEHOTKEYOBJ@@PEAU1@IIIG@Z @ 0x1C010D4C8 (-FindImeHotKeyByKeyWithLang@@YAPEAU_tagIMEHOTKEYOBJ@@PEAU1@IIIG@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetHotKeyLangID(unsigned int a1)
{
  if ( a1 - 16 > 0x7F )
    return 0;
  else
    return (unsigned __int16)word_1C02EAB08[(unsigned __int64)a1 >> 4];
}
