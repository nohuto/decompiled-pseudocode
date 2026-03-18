/*
 * XREFs of _SetImeHotKey@20 @ 0xA639E
 * Callers:
 *     _NtUserSetImeHotKey@20 @ 0xA636A (_NtUserSetImeHotKey@20.c)
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     ?AddImeHotKey@@YGXPAPAU_tagIMEHOTKEYOBJ@@PAU1@@Z @ 0xA6466 (-AddImeHotKey@@YGXPAPAU_tagIMEHOTKEYOBJ@@PAU1@@Z.c)
 *     ?FindImeHotKeyByID@@YGPAU_tagIMEHOTKEYOBJ@@PBU1@K@Z @ 0xA6490 (-FindImeHotKeyByID@@YGPAU_tagIMEHOTKEYOBJ@@PBU1@K@Z.c)
 *     ?FindImeHotKeyByKeyWithLang@@YGPAU_tagIMEHOTKEYOBJ@@PAU1@IIIG@Z @ 0xA64A6 (-FindImeHotKeyByKeyWithLang@@YGPAU_tagIMEHOTKEYOBJ@@PAU1@IIIG@Z.c)
 *     ?GetHotKeyLangID@@YGGK@Z @ 0xA651E (-GetHotKeyLangID@@YGGK@Z.c)
 *     ?DeleteImeHotKey@@YGPAU_tagIMEHOTKEYOBJ@@PAPAU1@PAU1@@Z @ 0x1809D7 (-DeleteImeHotKey@@YGPAU_tagIMEHOTKEYOBJ@@PAPAU1@PAU1@@Z.c)
 */

int __fastcall SetImeHotKey(int a1, int a2, unsigned int a3, int a4, int a5)
{
  unsigned __int16 HotKeyLangID; // ax
  struct _tagIMEHOTKEYOBJ *ImeHotKeyByKeyWithLang; // eax
  struct _tagIMEHOTKEYOBJ *ImeHotKeyByID; // ecx
  _DWORD *v10; // edx
  _DWORD *v12; // eax
  _DWORD *v13; // esi
  int v14; // ecx
  struct _tagIMEHOTKEYOBJ *v15; // eax
  struct _tagIMEHOTKEYOBJ *v16; // edx
  int v17; // [esp-4h] [ebp-10h]
  const struct _tagIMEHOTKEYOBJ *v18; // [esp+0h] [ebp-Ch]
  unsigned int v19; // [esp+0h] [ebp-Ch]
  const struct _tagIMEHOTKEYOBJ *v20; // [esp+0h] [ebp-Ch]
  struct _tagIMEHOTKEYOBJ **v21; // [esp+0h] [ebp-Ch]
  unsigned int v22; // [esp+4h] [ebp-8h]
  struct _tagIMEHOTKEYOBJ *v23; // [esp+4h] [ebp-8h]
  struct _tagIMEHOTKEYOBJ *v24; // [esp+4h] [ebp-8h]

  switch ( a5 )
  {
    case 1:
      if ( !FindImeHotKeyByID(v18, v22) )
      {
        v17 = 87;
        goto LABEL_23;
      }
      v15 = DeleteImeHotKey(v21, v24);
      if ( v15 == v16 )
      {
        Win32FreePool(v16);
        return 1;
      }
      break;
    case 2:
      if ( (_WORD)a3 != 231 )
      {
        HotKeyLangID = GetHotKeyLangID((unsigned int)v18);
        ImeHotKeyByKeyWithLang = FindImeHotKeyByKeyWithLang(
                                   (struct _tagIMEHOTKEYOBJ *)(a2 & 0xC000),
                                   a3,
                                   HotKeyLangID,
                                   v19,
                                   v22);
        ImeHotKeyByID = ImeHotKeyByKeyWithLang;
        if ( ImeHotKeyByKeyWithLang )
        {
          if ( *((_DWORD *)ImeHotKeyByKeyWithLang + 1) != a1 )
          {
            v14 = 1409;
LABEL_24:
            UserSetLastError((struct _NT_TIB *)v14);
            return 0;
          }
        }
        else
        {
          ImeHotKeyByID = FindImeHotKeyByID(v20, (unsigned int)v23);
        }
        if ( ImeHotKeyByID )
        {
          *((_DWORD *)ImeHotKeyByID + 3) = a2;
          *((_DWORD *)ImeHotKeyByID + 2) = a3;
          *((_DWORD *)ImeHotKeyByID + 4) = a4;
          return 1;
        }
        v10 = (_DWORD *)Win32AllocPool(20, 1751741269);
        if ( v10 )
        {
          *v10 = 0;
          v10[1] = a1;
          v10[3] = a2;
          v10[2] = a3;
          v10[4] = a4;
          AddImeHotKey((struct _tagIMEHOTKEYOBJ **)v20, v23);
          return 1;
        }
        v17 = 14;
LABEL_23:
        v14 = v17;
        goto LABEL_24;
      }
      break;
    case 3:
      v12 = (_DWORD *)gpImeHotKeyListHeader;
      if ( gpImeHotKeyListHeader )
      {
        do
        {
          v13 = (_DWORD *)*v12;
          Win32FreePool(v12);
          v12 = v13;
        }
        while ( v13 );
      }
      gpImeHotKeyListHeader = 0;
      return 1;
  }
  return 0;
}
