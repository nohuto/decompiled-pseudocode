/*
 * XREFs of ?FindImeHotKeyByID@@YAPEAU_tagIMEHOTKEYOBJ@@PEBU1@K@Z @ 0x1C010D4A8
 * Callers:
 *     SetImeHotKey @ 0x1C010D378 (SetImeHotKey.c)
 *     NtUserGetImeHotKey @ 0x1C01FA960 (NtUserGetImeHotKey.c)
 * Callees:
 *     <none>
 */

struct _tagIMEHOTKEYOBJ *__fastcall FindImeHotKeyByID(const struct _tagIMEHOTKEYOBJ *a1, int a2)
{
  struct _tagIMEHOTKEYOBJ *result; // rax

  for ( result = (struct _tagIMEHOTKEYOBJ *)gpImeHotKeyListHeader;
        result && *((_DWORD *)result + 2) != a2;
        result = *(struct _tagIMEHOTKEYOBJ **)result )
  {
    ;
  }
  return result;
}
