/*
 * XREFs of ?FindLinkedFontEntry@@YGPAU_PFEDATA@@PAU_LIST_ENTRY@@PBG1@Z @ 0xDD2F2
 * Callers:
 *     bAddFlEntry @ 0xDCD78 (bAddFlEntry.c)
 *     bDeleteFlEntry @ 0x1F84B8 (bDeleteFlEntry.c)
 * Callees:
 *     <none>
 */

struct _PFEDATA *__userpurge FindLinkedFontEntry@<eax>(
        const wchar_t *a1@<edx>,
        _DWORD *a2@<ecx>,
        wchar_t *Str2,
        const unsigned __int16 *a4,
        const unsigned __int16 *a5)
{
  _DWORD *v5; // ebx
  _DWORD *i; // edi
  _DWORD *v7; // esi
  int v9; // eax
  const wchar_t *v10; // [esp+8h] [ebp-8h]

  v10 = a1;
  v5 = 0;
  for ( i = (_DWORD *)*a2; i != a2; a1 = v10 )
  {
    v7 = (_DWORD *)i[6];
    v5 = i;
    if ( !__wcsicmp(*(const wchar_t **)(*v7 + 12), a1) )
    {
      v9 = i[3] & 1;
      if ( Str2 )
      {
        if ( !v9 )
          goto LABEL_3;
        v9 = __wcsicmp((const wchar_t *)(v7[5] + *(_DWORD *)(v7[5] + 8)), Str2);
      }
      if ( !v9 )
        return (struct _PFEDATA *)v5;
    }
LABEL_3:
    i = (_DWORD *)*i;
    v5 = 0;
  }
  return (struct _PFEDATA *)v5;
}
