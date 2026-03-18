/*
 * XREFs of IopSymlinkInitializeSymlinkInfo @ 0x1406EF134
 * Callers:
 *     IopSymlinkPropagateToExtensionIfNeeded @ 0x140678DB0 (IopSymlinkPropagateToExtensionIfNeeded.c)
 *     IopSymlinkUpdateECP @ 0x1406EECE8 (IopSymlinkUpdateECP.c)
 *     IopSymlinkRememberJunction @ 0x1406EEE70 (IopSymlinkRememberJunction.c)
 *     IopSymlinkCreateECP @ 0x1406EF00C (IopSymlinkCreateECP.c)
 *     IopGraftName @ 0x1406EF340 (IopGraftName.c)
 * Callees:
 *     memmove @ 0x140409FC0 (memmove.c)
 */

void *__fastcall IopSymlinkInitializeSymlinkInfo(
        __int64 a1,
        __int16 a2,
        const void *a3,
        unsigned __int16 a4,
        __int16 a5,
        void *Src,
        unsigned __int16 a7,
        __int16 a8,
        __int16 a9,
        __int64 a10)
{
  size_t v11; // rbp
  unsigned __int16 v12; // cx
  __int64 v14; // r9
  void *result; // rax
  unsigned __int64 v16; // rsi

  v11 = a4;
  v12 = 0;
  *(_WORD *)(a1 + 4) = a8;
  v14 = a1 + 32;
  *(_WORD *)a1 = a5;
  *(_WORD *)(a1 + 18) = a2 - 32;
  *(_WORD *)(a1 + 2) = a9;
  *(_QWORD *)(a1 + 8) = a10;
  *(_WORD *)(a1 + 6) = 0;
  *(_WORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = a1 + 32;
  if ( Src )
  {
    memmove((void *)(a1 + 32), Src, a7);
    v14 = *(_QWORD *)(a1 + 24);
    v16 = (unsigned __int64)a7 >> 1;
    v12 = a7;
    *(_WORD *)(a1 + 16) = a7;
    if ( *(_WORD *)(v14 + 2 * v16 - 2) != 92 )
    {
      *(_WORD *)(v14 + 2 * v16) = 92;
      *(_WORD *)(a1 + 16) += 2;
      v12 = *(_WORD *)(a1 + 16);
      v14 = *(_QWORD *)(a1 + 24);
    }
  }
  result = memmove((void *)(v14 + v12), a3, v11);
  *(_WORD *)(a1 + 16) += v11;
  return result;
}
