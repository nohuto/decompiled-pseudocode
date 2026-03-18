/*
 * XREFs of ?FindImeHotKeyByKey@@YGPAU_tagIMEHOTKEYOBJ@@PAU1@III@Z @ 0xA3098
 * Callers:
 *     _CheckImeHotKey@12 @ 0xA2E9A (_CheckImeHotKey@12.c)
 * Callees:
 *     _GetActiveHKL@0 @ 0xA3110 (_GetActiveHKL@0.c)
 *     ?GetHotKeyLangID@@YGGK@Z @ 0xA651E (-GetHotKeyLangID@@YGGK@Z.c)
 *     ?GetLangIdMatchLevel@@YGHPAUHKL__@@G@Z @ 0x180A00 (-GetLangIdMatchLevel@@YGHPAUHKL__@@G@Z.c)
 */

struct _tagIMEHOTKEYOBJ *__userpurge FindImeHotKeyByKey@<eax>(
        int a1@<edx>,
        struct _tagIMEHOTKEYOBJ *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5)
{
  _DWORD *v5; // esi
  _DWORD *v6; // edi
  __int16 v7; // bx
  unsigned int v8; // eax
  int v10; // ecx
  int v11; // edx
  int LangIdMatchLevel; // eax
  unsigned int v13; // [esp+0h] [ebp-18h]
  HKL v14; // [esp+0h] [ebp-18h]
  unsigned __int16 v15; // [esp+4h] [ebp-14h]
  int v17; // [esp+14h] [ebp-4h]

  v5 = (_DWORD *)gpImeHotKeyListHeader;
  v6 = 0;
  v17 = 0;
  v7 = GetActiveHKL() & 0x3FF;
  if ( !v5 )
    return (struct _tagIMEHOTKEYOBJ *)v6;
  v8 = a3;
  while ( v5[2] != v8 )
  {
LABEL_4:
    v5 = (_DWORD *)*v5;
    if ( !v5 )
      return (struct _tagIMEHOTKEYOBJ *)v6;
  }
  v10 = v5[3];
  v11 = 0;
  if ( (v10 & 0x400) != 0 )
  {
    v11 = 1;
  }
  else if ( (v5[3] & 0xF) != a1 )
  {
LABEL_8:
    v8 = a3;
    goto LABEL_4;
  }
  if ( (struct _tagIMEHOTKEYOBJ *)(v5[3] & 0xC000) == a2 || ((unsigned __int16)a2 & (unsigned __int16)v10 & 0xC000) != 0 )
    v11 = 1;
  if ( !v11 )
    goto LABEL_8;
  GetHotKeyLangID(v13);
  LangIdMatchLevel = GetLangIdMatchLevel(v14, v15);
  if ( LangIdMatchLevel != 3 )
  {
    if ( v7 != 18 && LangIdMatchLevel && LangIdMatchLevel > v17 )
    {
      v17 = LangIdMatchLevel;
      v6 = v5;
    }
    goto LABEL_8;
  }
  return (struct _tagIMEHOTKEYOBJ *)v5;
}
