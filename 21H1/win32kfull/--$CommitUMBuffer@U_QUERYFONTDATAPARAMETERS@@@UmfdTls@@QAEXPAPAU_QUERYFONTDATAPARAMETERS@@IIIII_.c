/*
 * XREFs of ??$CommitUMBuffer@U_QUERYFONTDATAPARAMETERS@@@UmfdTls@@QAEXPAPAU_QUERYFONTDATAPARAMETERS@@IIIII_N@Z @ 0x8C3E4
 * Callers:
 *     ?CreateUsermodeParameters@QueryGlyphMetricsPlusBitsRequest@@UAEJPAVUmfdTls@@PAPAX@Z @ 0xF8A50 (-CreateUsermodeParameters@QueryGlyphMetricsPlusBitsRequest@@UAEJPAVUmfdTls@@PAPAX@Z.c)
 * Callees:
 *     ?ULongAdd@@YGJKKPAK@Z @ 0x4591A (-ULongAdd@@YGJKKPAK@Z.c)
 *     ??$CommitUMBuffer@U_QUERYFONTDATAPARAMETERS@@@UmfdTls@@QAEXPAPAU_QUERYFONTDATAPARAMETERS@@IIII_N@Z @ 0x8B1A0 (--$CommitUMBuffer@U_QUERYFONTDATAPARAMETERS@@@UmfdTls@@QAEXPAPAU_QUERYFONTDATAPARAMETERS@@IIII_N.c)
 */

_DWORD *__thiscall UmfdTls::CommitUMBuffer<_QUERYFONTDATAPARAMETERS>(
        UmfdTls *this,
        _DWORD *a2,
        size_t Size,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        int a7,
        int a8)
{
  int v9; // ecx
  _DWORD *result; // eax
  unsigned int v11; // [esp+0h] [ebp-4h]
  unsigned int *savedregs; // [esp+4h] [ebp+0h]

  if ( (ULongAdd(a7, a6, (int *)&a6, v11, savedregs) & 0x80000000) == 0 )
    return UmfdTls::CommitUMBuffer<_QUERYFONTDATAPARAMETERS>(this, a2, Size, a4, a5, a6, v9);
  result = a2;
  *a2 = 0;
  return result;
}
