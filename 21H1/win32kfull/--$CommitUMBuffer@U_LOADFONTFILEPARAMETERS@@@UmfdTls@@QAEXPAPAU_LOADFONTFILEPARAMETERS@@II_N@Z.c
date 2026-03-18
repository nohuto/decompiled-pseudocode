/*
 * XREFs of ??$CommitUMBuffer@U_LOADFONTFILEPARAMETERS@@@UmfdTls@@QAEXPAPAU_LOADFONTFILEPARAMETERS@@II_N@Z @ 0xDC12C
 * Callers:
 *     ?CreateUsermodeParameters@LoadFontFileRequest@@UAEJPAVUmfdTls@@PAPAX@Z @ 0xDBF9C (-CreateUsermodeParameters@LoadFontFileRequest@@UAEJPAVUmfdTls@@PAPAX@Z.c)
 * Callees:
 *     ?ULongAdd@@YGJKKPAK@Z @ 0x4591A (-ULongAdd@@YGJKKPAK@Z.c)
 *     ?CommitUMBuffer@UmfdTls@@QAEPAXK_N@Z @ 0x8C446 (-CommitUMBuffer@UmfdTls@@QAEPAXK_N@Z.c)
 */

void *__thiscall UmfdTls::CommitUMBuffer<_LOADFONTFILEPARAMETERS>(
        UmfdTls *this,
        _DWORD *a2,
        size_t Size,
        int a4,
        int a5)
{
  void *result; // eax
  unsigned int v7; // [esp+0h] [ebp-4h]
  unsigned int *savedregs; // [esp+4h] [ebp+0h]

  if ( (ULongAdd(a4, Size, (int *)&Size, v7, savedregs) & 0x80000000) != 0 )
    result = 0;
  else
    result = UmfdTls::CommitUMBuffer(this, Size, 0);
  *a2 = result;
  return result;
}
