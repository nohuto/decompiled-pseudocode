/*
 * XREFs of ??$CommitUMBuffer@U_QUERYTRUETYPEOUTLINEPARAMETERS@@@UmfdTls@@QAEXPAPAU_QUERYTRUETYPEOUTLINEPARAMETERS@@II_N@Z @ 0x24A9FD
 * Callers:
 *     ??$CommitUMBuffer@U_FONTMANAGEMENTPARAMETERS@@@UmfdTls@@QAEXPAPAU_FONTMANAGEMENTPARAMETERS@@III_N@Z @ 0x24A9C4 (--$CommitUMBuffer@U_FONTMANAGEMENTPARAMETERS@@@UmfdTls@@QAEXPAPAU_FONTMANAGEMENTPARAMETERS@@III_.c)
 * Callees:
 *     ?ULongAdd@@YGJKKPAK@Z @ 0x4591A (-ULongAdd@@YGJKKPAK@Z.c)
 *     ?CommitUMBuffer@UmfdTls@@QAEPAXK_N@Z @ 0x8C446 (-CommitUMBuffer@UmfdTls@@QAEPAXK_N@Z.c)
 */

void *__thiscall UmfdTls::CommitUMBuffer<_QUERYTRUETYPEOUTLINEPARAMETERS>(
        UmfdTls *this,
        _DWORD *a2,
        size_t Size,
        int a4,
        int a5)
{
  void *result; // eax
  unsigned int v7; // [esp+0h] [ebp-4h]
  unsigned int *savedregs; // [esp+4h] [ebp+0h]

  if ( (ULongAdd(a4, Size, (int *)&Size, v7, savedregs) & 0x80000000) == 0 )
    result = UmfdTls::CommitUMBuffer(this, Size, 1);
  else
    result = 0;
  *a2 = result;
  return result;
}
