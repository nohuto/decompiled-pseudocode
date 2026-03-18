/*
 * XREFs of ??$CommitUMBuffer@U_QUERYTRUETYPEOUTLINEPARAMETERS@@@UmfdTls@@QAEXPAPAU_QUERYTRUETYPEOUTLINEPARAMETERS@@IIII_N@Z @ 0x24AA32
 * Callers:
 *     ?CreateUsermodeParameters@FontManagementRequest@@UAEJPAVUmfdTls@@PAPAX@Z @ 0x24B270 (-CreateUsermodeParameters@FontManagementRequest@@UAEJPAVUmfdTls@@PAPAX@Z.c)
 *     ?CreateUsermodeParameters@QueryTrueTypeOutlineRequest@@UAEJPAVUmfdTls@@PAPAX@Z @ 0x24B5B0 (-CreateUsermodeParameters@QueryTrueTypeOutlineRequest@@UAEJPAVUmfdTls@@PAPAX@Z.c)
 * Callees:
 *     ?ULongAdd@@YGJKKPAK@Z @ 0x4591A (-ULongAdd@@YGJKKPAK@Z.c)
 *     ??$CommitUMBuffer@U_FONTMANAGEMENTPARAMETERS@@@UmfdTls@@QAEXPAPAU_FONTMANAGEMENTPARAMETERS@@III_N@Z @ 0x24A9C4 (--$CommitUMBuffer@U_FONTMANAGEMENTPARAMETERS@@@UmfdTls@@QAEXPAPAU_FONTMANAGEMENTPARAMETERS@@III_.c)
 */

_DWORD *__thiscall UmfdTls::CommitUMBuffer<_QUERYTRUETYPEOUTLINEPARAMETERS>(
        UmfdTls *this,
        _DWORD *a2,
        size_t Size,
        unsigned int a4,
        unsigned int a5,
        int a6,
        int a7)
{
  int v8; // ecx
  _DWORD *result; // eax
  unsigned int v10; // [esp+0h] [ebp-4h]
  unsigned int *savedregs; // [esp+4h] [ebp+0h]

  if ( (ULongAdd(a6, a5, (int *)&a5, v10, savedregs) & 0x80000000) == 0 )
    return UmfdTls::CommitUMBuffer<_FONTMANAGEMENTPARAMETERS>(this, a2, Size, a4, a5, v8);
  result = a2;
  *a2 = 0;
  return result;
}
