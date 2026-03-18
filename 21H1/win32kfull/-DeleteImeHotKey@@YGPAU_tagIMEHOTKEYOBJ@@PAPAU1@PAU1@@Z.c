/*
 * XREFs of ?DeleteImeHotKey@@YGPAU_tagIMEHOTKEYOBJ@@PAPAU1@PAU1@@Z @ 0x1809D7
 * Callers:
 *     _SetImeHotKey@20 @ 0xA639E (_SetImeHotKey@20.c)
 * Callees:
 *     <none>
 */

struct _tagIMEHOTKEYOBJ *__fastcall DeleteImeHotKey(int a1, int *a2)
{
  int *v2; // ecx

  v2 = (int *)gpImeHotKeyListHeader;
  if ( a2 == (int *)gpImeHotKeyListHeader )
  {
    gpImeHotKeyListHeader = *a2;
  }
  else
  {
    while ( 1 )
    {
      if ( !v2 )
        return 0;
      if ( (int *)*v2 == a2 )
        break;
      v2 = (int *)*v2;
    }
    *v2 = *a2;
  }
  return (struct _tagIMEHOTKEYOBJ *)a2;
}
