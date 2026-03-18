/*
 * XREFs of ?FindImeHotKeyByKeyWithLang@@YGPAU_tagIMEHOTKEYOBJ@@PAU1@IIIG@Z @ 0xA64A6
 * Callers:
 *     _SetImeHotKey@20 @ 0xA639E (_SetImeHotKey@20.c)
 * Callees:
 *     ?GetHotKeyLangID@@YGGK@Z @ 0xA651E (-GetHotKeyLangID@@YGGK@Z.c)
 */

struct _tagIMEHOTKEYOBJ *__userpurge FindImeHotKeyByKeyWithLang@<eax>(
        int a1@<edx>,
        struct _tagIMEHOTKEYOBJ *a2,
        unsigned int a3,
        __int16 a4,
        unsigned int a5,
        unsigned __int16 a6)
{
  _DWORD *v6; // esi
  int v9; // ecx
  int v10; // edx
  unsigned __int16 HotKeyLangID; // ax
  unsigned int v12; // [esp+0h] [ebp-Ch]

  v6 = (_DWORD *)gpImeHotKeyListHeader;
  if ( !gpImeHotKeyListHeader )
    return 0;
  while ( 1 )
  {
    if ( v6[2] != a3 )
      goto LABEL_3;
    v9 = v6[3];
    v10 = 0;
    if ( (v9 & 0x400) != 0 )
      break;
    if ( (v6[3] & 0xF) == a1 )
      goto LABEL_7;
LABEL_3:
    v6 = (_DWORD *)*v6;
    if ( !v6 )
      return 0;
  }
  v10 = 1;
LABEL_7:
  if ( (struct _tagIMEHOTKEYOBJ *)(v6[3] & 0xC000) == a2 || ((unsigned __int16)a2 & (unsigned __int16)v9 & 0xC000) != 0 )
    v10 = 1;
  if ( !v10 )
    goto LABEL_3;
  HotKeyLangID = GetHotKeyLangID(v12);
  if ( a4 != HotKeyLangID )
  {
    if ( HotKeyLangID )
      goto LABEL_3;
  }
  return (struct _tagIMEHOTKEYOBJ *)v6;
}
