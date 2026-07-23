/*
 * XREFs of MiMakeEntireHugePfnGood @ 0x1403F394C
 * Callers:
 *     MiHotRemoveHugeRange @ 0x140532F38 (MiHotRemoveHugeRange.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x1402D9370 (RtlAvlRemoveNode.c)
 *     MiHugePfnPartition @ 0x1403F38E8 (MiHugePfnPartition.c)
 *     MiUnlinkHugeRange @ 0x140533D9C (MiUnlinkHugeRange.c)
 */

unsigned __int64 *__fastcall MiMakeEntireHugePfnGood(int a1)
{
  _QWORD *v1; // rdi
  __int64 v2; // rax
  unsigned __int64 v3; // r8
  __int64 v4; // r9
  unsigned __int64 *v5; // rsi
  unsigned __int64 *v6; // rbx
  unsigned __int64 v7; // rcx

  v1 = (_QWORD *)(qword_140C4E6B0 + 8 * (*(_QWORD *)&a1 & 0x3FFFFLL));
  v2 = MiHugePfnPartition(v1);
  v5 = (unsigned __int64 *)(v2 + 4896);
  v6 = *(unsigned __int64 **)(v2 + 4896);
  while ( v6 )
  {
    v7 = v4 & v6[3];
    if ( v3 > v7 )
    {
      v6 = (unsigned __int64 *)v6[1];
    }
    else
    {
      if ( v3 >= v7 )
        break;
      v6 = (unsigned __int64 *)*v6;
    }
  }
  if ( (*(_DWORD *)v1 & 0x1C0000) == 0x100000LL )
    MiUnlinkHugeRange(v2);
  RtlAvlRemoveNode(v5, v6);
  *v1 &= ~0x10000000000uLL;
  return v6;
}
