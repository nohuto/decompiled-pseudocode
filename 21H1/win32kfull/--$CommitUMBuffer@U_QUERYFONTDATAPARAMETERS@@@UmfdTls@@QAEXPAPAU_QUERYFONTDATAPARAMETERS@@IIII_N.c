/*
 * XREFs of ??$CommitUMBuffer@U_QUERYFONTDATAPARAMETERS@@@UmfdTls@@QAEXPAPAU_QUERYFONTDATAPARAMETERS@@IIII_N@Z @ 0x8B1A0
 * Callers:
 *     ?CreateUsermodeParameters@QueryTrueTypeTableRequest@@UAEJPAVUmfdTls@@PAPAX@Z @ 0x8B2C2 (-CreateUsermodeParameters@QueryTrueTypeTableRequest@@UAEJPAVUmfdTls@@PAPAX@Z.c)
 *     ?CreateUsermodeParameters@QueryAdvanceWidthsRequest@@UAEJPAVUmfdTls@@PAPAX@Z @ 0x8B3D4 (-CreateUsermodeParameters@QueryAdvanceWidthsRequest@@UAEJPAVUmfdTls@@PAPAX@Z.c)
 *     ?CreateUsermodeParameters@QueryFontDataRequest@@UAEJPAVUmfdTls@@PAPAX@Z @ 0x8C20A (-CreateUsermodeParameters@QueryFontDataRequest@@UAEJPAVUmfdTls@@PAPAX@Z.c)
 *     ??$CommitUMBuffer@U_QUERYFONTDATAPARAMETERS@@@UmfdTls@@QAEXPAPAU_QUERYFONTDATAPARAMETERS@@IIIII_N@Z @ 0x8C3E4 (--$CommitUMBuffer@U_QUERYFONTDATAPARAMETERS@@@UmfdTls@@QAEXPAPAU_QUERYFONTDATAPARAMETERS@@IIIII_.c)
 * Callees:
 *     ?ULongAdd@@YGJKKPAK@Z @ 0x4591A (-ULongAdd@@YGJKKPAK@Z.c)
 *     ??$CommitUMBuffer@U_QUERYFONTDATAPARAMETERS@@@UmfdTls@@QAEXPAPAU_QUERYFONTDATAPARAMETERS@@III_N@Z @ 0x8B1DC (--$CommitUMBuffer@U_QUERYFONTDATAPARAMETERS@@@UmfdTls@@QAEXPAPAU_QUERYFONTDATAPARAMETERS@@III_N@.c)
 */

_DWORD *__thiscall UmfdTls::CommitUMBuffer<_QUERYFONTDATAPARAMETERS>(
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
    return (_DWORD *)UmfdTls::CommitUMBuffer<_QUERYFONTDATAPARAMETERS>(this, (int)a2, Size, a4, a5, v8);
  result = a2;
  *a2 = 0;
  return result;
}
