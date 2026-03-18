/*
 * XREFs of ??$CommitUMBuffer@U_QUERYFONTPARAMETERS@@@UmfdTls@@QAEXPAPAU_QUERYFONTPARAMETERS@@II_N@Z @ 0x8B16A
 * Callers:
 *     ?CreateUsermodeParameters@QueryFontTreeRequest@@UAEJPAVUmfdTls@@PAPAX@Z @ 0x8B0CC (-CreateUsermodeParameters@QueryFontTreeRequest@@UAEJPAVUmfdTls@@PAPAX@Z.c)
 *     ??$CommitUMBuffer@U_QUERYFONTDATAPARAMETERS@@@UmfdTls@@QAEXPAPAU_QUERYFONTDATAPARAMETERS@@III_N@Z @ 0x8B1DC (--$CommitUMBuffer@U_QUERYFONTDATAPARAMETERS@@@UmfdTls@@QAEXPAPAU_QUERYFONTDATAPARAMETERS@@III_N@.c)
 *     ?CreateUsermodeParameters@QueryFontRequest@@UAEJPAVUmfdTls@@PAPAX@Z @ 0xE0700 (-CreateUsermodeParameters@QueryFontRequest@@UAEJPAVUmfdTls@@PAPAX@Z.c)
 *     ?CreateUsermodeParameters@QueryFontFileRequest@@UAEJPAVUmfdTls@@PAPAX@Z @ 0xE29FC (-CreateUsermodeParameters@QueryFontFileRequest@@UAEJPAVUmfdTls@@PAPAX@Z.c)
 * Callees:
 *     ?ULongAdd@@YGJKKPAK@Z @ 0x4591A (-ULongAdd@@YGJKKPAK@Z.c)
 *     ?CommitUMBuffer@UmfdTls@@QAEPAXK_N@Z @ 0x8C446 (-CommitUMBuffer@UmfdTls@@QAEPAXK_N@Z.c)
 */

void *__thiscall UmfdTls::CommitUMBuffer<_QUERYFONTPARAMETERS>(UmfdTls *this, _DWORD *a2, size_t Size, int a4, int a5)
{
  void *result; // eax
  unsigned int v7; // [esp+0h] [ebp-4h]
  unsigned int *savedregs; // [esp+4h] [ebp+0h]

  if ( (ULongAdd(a4, Size, (int *)&Size, v7, savedregs) & 0x80000000) != 0 )
    result = 0;
  else
    result = UmfdTls::CommitUMBuffer(this, Size, 1);
  *a2 = result;
  return result;
}
