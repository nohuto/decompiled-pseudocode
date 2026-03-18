/*
 * XREFs of _GetImeHotKey@16 @ 0x180AF8
 * Callers:
 *     _NtUserGetImeHotKey@16 @ 0x163009 (_NtUserGetImeHotKey@16.c)
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     ?FindImeHotKeyByID@@YGPAU_tagIMEHOTKEYOBJ@@PBU1@K@Z @ 0xA6490 (-FindImeHotKeyByID@@YGPAU_tagIMEHOTKEYOBJ@@PBU1@K@Z.c)
 */

int __fastcall GetImeHotKey(int a1, _DWORD *a2, _DWORD *a3, _DWORD *a4)
{
  struct _tagIMEHOTKEYOBJ *ImeHotKeyByID; // eax
  int v6; // ecx

  ImeHotKeyByID = FindImeHotKeyByID(a1, a1);
  if ( !ImeHotKeyByID )
  {
    v6 = 1419;
LABEL_3:
    UserSetLastError((struct _NT_TIB *)v6);
    return 0;
  }
  if ( a4 )
  {
    *a4 = *((_DWORD *)ImeHotKeyByID + 4);
  }
  else if ( *((_DWORD *)ImeHotKeyByID + 4) )
  {
    v6 = 87;
    goto LABEL_3;
  }
  *a2 = *((_DWORD *)ImeHotKeyByID + 3);
  *a3 = *((_DWORD *)ImeHotKeyByID + 2);
  return 1;
}
