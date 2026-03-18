/*
 * XREFs of ??$CommitUMBuffer@U_QUERYFONTDATAPARAMETERS@@@UmfdTls@@QAEXPAPAU_QUERYFONTDATAPARAMETERS@@III_N@Z @ 0x8B1DC
 * Callers:
 *     ??$CommitUMBuffer@U_QUERYFONTDATAPARAMETERS@@@UmfdTls@@QAEXPAPAU_QUERYFONTDATAPARAMETERS@@IIII_N@Z @ 0x8B1A0 (--$CommitUMBuffer@U_QUERYFONTDATAPARAMETERS@@@UmfdTls@@QAEXPAPAU_QUERYFONTDATAPARAMETERS@@IIII_N.c)
 * Callees:
 *     ?ULongAdd@@YGJKKPAK@Z @ 0x4591A (-ULongAdd@@YGJKKPAK@Z.c)
 *     ??$CommitUMBuffer@U_QUERYFONTPARAMETERS@@@UmfdTls@@QAEXPAPAU_QUERYFONTPARAMETERS@@II_N@Z @ 0x8B16A (--$CommitUMBuffer@U_QUERYFONTPARAMETERS@@@UmfdTls@@QAEXPAPAU_QUERYFONTPARAMETERS@@II_N@Z.c)
 */

_DWORD *__thiscall UmfdTls::CommitUMBuffer<_QUERYFONTDATAPARAMETERS>(
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
    return UmfdTls::CommitUMBuffer<_QUERYFONTPARAMETERS>(this, a2, Size, a4, v7);
  result = a2;
  *a2 = 0;
  return result;
}
