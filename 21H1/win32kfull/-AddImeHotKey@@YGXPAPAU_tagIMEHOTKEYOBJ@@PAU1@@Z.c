/*
 * XREFs of ?AddImeHotKey@@YGXPAPAU_tagIMEHOTKEYOBJ@@PAU1@@Z @ 0xA6466
 * Callers:
 *     _SetImeHotKey@20 @ 0xA639E (_SetImeHotKey@20.c)
 * Callees:
 *     <none>
 */

void __fastcall AddImeHotKey(int a1, int a2)
{
  int *v2; // ecx
  int *v4; // edx

  v2 = (int *)gpImeHotKeyListHeader;
  if ( gpImeHotKeyListHeader )
  {
    v4 = *(int **)gpImeHotKeyListHeader;
    if ( *(_DWORD *)gpImeHotKeyListHeader )
    {
      do
      {
        v2 = v4;
        v4 = (int *)*v4;
      }
      while ( v4 );
    }
    *v2 = a2;
  }
  else
  {
    gpImeHotKeyListHeader = a2;
  }
}
