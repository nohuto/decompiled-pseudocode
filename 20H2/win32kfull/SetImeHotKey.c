/*
 * XREFs of SetImeHotKey @ 0x1C010EE18
 * Callers:
 *     NtUserSetImeHotKey @ 0x1C010EDA0 (NtUserSetImeHotKey.c)
 * Callees:
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 *     ?FindImeHotKeyByID@@YAPEAU_tagIMEHOTKEYOBJ@@PEBU1@K@Z @ 0x1C010EF48 (-FindImeHotKeyByID@@YAPEAU_tagIMEHOTKEYOBJ@@PEBU1@K@Z.c)
 *     ?FindImeHotKeyByKeyWithLang@@YAPEAU_tagIMEHOTKEYOBJ@@PEAU1@IIIG@Z @ 0x1C010EF68 (-FindImeHotKeyByKeyWithLang@@YAPEAU_tagIMEHOTKEYOBJ@@PEAU1@IIIG@Z.c)
 *     ?GetHotKeyLangID@@YAGK@Z @ 0x1C010EFEC (-GetHotKeyLangID@@YAGK@Z.c)
 */

__int64 __fastcall SetImeHotKey(const struct _tagIMEHOTKEYOBJ *a1, int a2, unsigned int a3, __int64 a4, int a5)
{
  unsigned int v8; // ebx
  unsigned __int16 HotKeyLangID; // ax
  unsigned __int16 v10; // dx
  struct _tagIMEHOTKEYOBJ *v11; // rcx
  struct _tagIMEHOTKEYOBJ *ImeHotKeyByKeyWithLang; // rax
  __int64 *v13; // rdx
  const struct _tagIMEHOTKEYOBJ *v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rax
  __int64 *v17; // rdx
  __int64 *v18; // r8
  _QWORD *v20; // rcx
  _QWORD *v21; // rbx
  __int64 v22; // rcx
  __int64 *ImeHotKeyByID; // rax
  __int64 *v24; // rcx
  __int64 *v25; // rax

  v8 = (unsigned int)a1;
  switch ( a5 )
  {
    case 1:
      ImeHotKeyByID = (__int64 *)FindImeHotKeyByID(a1, (unsigned int)a1);
      v13 = ImeHotKeyByID;
      if ( !ImeHotKeyByID )
      {
        v22 = 87LL;
        goto LABEL_33;
      }
      v24 = (__int64 *)gpImeHotKeyListHeader;
      if ( ImeHotKeyByID == (__int64 *)gpImeHotKeyListHeader )
      {
        gpImeHotKeyListHeader = *ImeHotKeyByID;
      }
      else
      {
        if ( !gpImeHotKeyListHeader )
          return 0LL;
        while ( 1 )
        {
          v25 = (__int64 *)*v24;
          if ( (__int64 *)*v24 == v13 )
            break;
          v24 = (__int64 *)*v24;
          if ( !v25 )
            return 0LL;
        }
        *v24 = *v13;
      }
      Win32FreePool(v13);
      return 1LL;
    case 2:
      if ( (_WORD)a3 != 231 )
      {
        HotKeyLangID = GetHotKeyLangID((unsigned int)a1);
        ImeHotKeyByKeyWithLang = FindImeHotKeyByKeyWithLang(v11, v10 & 0xF, v10 & 0xC000, a3, HotKeyLangID);
        if ( !ImeHotKeyByKeyWithLang )
        {
          ImeHotKeyByKeyWithLang = FindImeHotKeyByID(v14, v8);
LABEL_6:
          if ( !ImeHotKeyByKeyWithLang )
          {
            v16 = Win32AllocPool(32LL, 1751741269LL);
            if ( v16 )
            {
              *(_QWORD *)v16 = 0LL;
              *(_DWORD *)(v16 + 8) = v8;
              *(_DWORD *)(v16 + 16) = a2;
              *(_DWORD *)(v16 + 12) = a3;
              *(_QWORD *)(v16 + 24) = a4;
              v17 = (__int64 *)gpImeHotKeyListHeader;
              if ( gpImeHotKeyListHeader )
              {
                v18 = *(__int64 **)gpImeHotKeyListHeader;
                if ( *(_QWORD *)gpImeHotKeyListHeader )
                {
                  do
                  {
                    v17 = v18;
                    v18 = (__int64 *)*v18;
                  }
                  while ( v18 );
                }
                *v17 = v16;
              }
              else
              {
                gpImeHotKeyListHeader = v16;
              }
              return 1LL;
            }
            v22 = 14LL;
            goto LABEL_33;
          }
          *((_DWORD *)ImeHotKeyByKeyWithLang + 4) = a2;
          *((_DWORD *)ImeHotKeyByKeyWithLang + 3) = a3;
          *((_QWORD *)ImeHotKeyByKeyWithLang + 3) = a4;
          return 1LL;
        }
        if ( *((_DWORD *)ImeHotKeyByKeyWithLang + 2) == v8 )
          goto LABEL_6;
        v22 = 1409LL;
LABEL_33:
        UserSetLastError(v22, (__int64)v13, v15);
      }
      break;
    case 3:
      v20 = (_QWORD *)gpImeHotKeyListHeader;
      if ( gpImeHotKeyListHeader )
      {
        do
        {
          v21 = (_QWORD *)*v20;
          Win32FreePool(v20);
          v20 = v21;
        }
        while ( v21 );
      }
      gpImeHotKeyListHeader = 0LL;
      return 1LL;
  }
  return 0LL;
}
