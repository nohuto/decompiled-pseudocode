/*
 * XREFs of ?FindImeHotKeyByID@@YGPAU_tagIMEHOTKEYOBJ@@PBU1@K@Z @ 0xA6490
 * Callers:
 *     _SetImeHotKey@20 @ 0xA639E (_SetImeHotKey@20.c)
 *     _GetImeHotKey@16 @ 0x180AF8 (_GetImeHotKey@16.c)
 * Callees:
 *     <none>
 */

struct _tagIMEHOTKEYOBJ *__fastcall FindImeHotKeyByID(int a1, int a2)
{
  struct _tagIMEHOTKEYOBJ *result; // eax

  for ( result = (struct _tagIMEHOTKEYOBJ *)gpImeHotKeyListHeader; result; result = *(struct _tagIMEHOTKEYOBJ **)result )
  {
    if ( *((_DWORD *)result + 1) == a2 )
      return result;
  }
  return 0;
}
