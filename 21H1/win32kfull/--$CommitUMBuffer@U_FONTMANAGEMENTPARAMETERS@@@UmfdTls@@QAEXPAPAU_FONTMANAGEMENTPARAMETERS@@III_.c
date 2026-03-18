/*
 * XREFs of ??$CommitUMBuffer@U_FONTMANAGEMENTPARAMETERS@@@UmfdTls@@QAEXPAPAU_FONTMANAGEMENTPARAMETERS@@III_N@Z @ 0x24A9C4
 * Callers:
 *     ??$CommitUMBuffer@U_QUERYTRUETYPEOUTLINEPARAMETERS@@@UmfdTls@@QAEXPAPAU_QUERYTRUETYPEOUTLINEPARAMETERS@@IIII_N@Z @ 0x24AA32 (--$CommitUMBuffer@U_QUERYTRUETYPEOUTLINEPARAMETERS@@@UmfdTls@@QAEXPAPAU_QUERYTRUETYPEO_ea_24AA32.c)
 *     ?CreateUsermodeParameters@EscapeRequest@@UAEJPAVUmfdTls@@PAPAX@Z @ 0x24B15C (-CreateUsermodeParameters@EscapeRequest@@UAEJPAVUmfdTls@@PAPAX@Z.c)
 * Callees:
 *     ?ULongAdd@@YGJKKPAK@Z @ 0x4591A (-ULongAdd@@YGJKKPAK@Z.c)
 *     ??$CommitUMBuffer@U_QUERYTRUETYPEOUTLINEPARAMETERS@@@UmfdTls@@QAEXPAPAU_QUERYTRUETYPEOUTLINEPARAMETERS@@II_N@Z @ 0x24A9FD (--$CommitUMBuffer@U_QUERYTRUETYPEOUTLINEPARAMETERS@@@UmfdTls@@QAEXPAPAU_QUERYTRUETYPEOUTLINEPARA.c)
 */

_DWORD *__thiscall UmfdTls::CommitUMBuffer<_FONTMANAGEMENTPARAMETERS>(
        UmfdTls *this,
        _DWORD *a2,
        size_t Size,
        unsigned int a4,
        int a5,
        int a6)
{
  int v7; // ecx
  _DWORD *result; // eax
  unsigned int v9; // [esp+0h] [ebp-4h]
  unsigned int *savedregs; // [esp+4h] [ebp+0h]

  if ( (ULongAdd(a5, a4, (int *)&a4, v9, savedregs) & 0x80000000) == 0 )
    return (_DWORD *)UmfdTls::CommitUMBuffer<_QUERYTRUETYPEOUTLINEPARAMETERS>(this, (int)a2, Size, a4, v7);
  result = a2;
  *a2 = 0;
  return result;
}
