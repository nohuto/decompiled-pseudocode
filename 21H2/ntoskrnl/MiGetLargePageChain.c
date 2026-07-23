/*
 * XREFs of MiGetLargePageChain @ 0x14023D194
 * Callers:
 *     MiInitializePoolCommitPacket @ 0x140316928 (MiInitializePoolCommitPacket.c)
 * Callees:
 *     MiGetLargePagesDemoteAsNeeded @ 0x1403F5870 (MiGetLargePagesDemoteAsNeeded.c)
 *     MiFreeLargePageChain @ 0x140556C90 (MiFreeLargePageChain.c)
 */

_QWORD *__fastcall MiGetLargePageChain(unsigned int a1, unsigned __int64 a2)
{
  _QWORD *v3; // rsi
  unsigned __int64 v4; // rbp
  BOOL v5; // ebx
  unsigned __int64 v6; // r14
  _QWORD *LargePagesDemoteAsNeeded; // rax

  if ( *(_QWORD *)(4544LL * a1 + qword_140C50DD0 + 4176) || (MiFlags & 0x30) == 0 )
  {
    v3 = 0LL;
    v4 = a2 >> 9;
    v5 = BugCheckParameter3 > 0x110000;
    v6 = 0LL;
    if ( !(a2 >> 9) )
      return v3;
    while ( 1 )
    {
      LargePagesDemoteAsNeeded = (_QWORD *)MiGetLargePagesDemoteAsNeeded(
                                             (unsigned int)&MiSystemPartition,
                                             a1,
                                             512,
                                             512,
                                             0,
                                             v5,
                                             1);
      if ( !LargePagesDemoteAsNeeded )
        break;
      ++v6;
      *LargePagesDemoteAsNeeded = v3;
      v3 = LargePagesDemoteAsNeeded;
      if ( v6 >= v4 )
        return v3;
    }
    MiFreeLargePageChain(v3);
  }
  return 0LL;
}
