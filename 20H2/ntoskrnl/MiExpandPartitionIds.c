/*
 * XREFs of MiExpandPartitionIds @ 0x1408DD698
 * Callers:
 *     MiAllocatePartitionId @ 0x1408CA2DC (MiAllocatePartitionId.c)
 * Callees:
 *     RtlClearAllBits @ 0x140204890 (RtlClearAllBits.c)
 *     MiAllocatePool @ 0x14022D320 (MiAllocatePool.c)
 *     MiGetPteAddress @ 0x140230160 (MiGetPteAddress.c)
 *     MiReservePtes @ 0x140285DC0 (MiReservePtes.c)
 *     MiReleasePtes @ 0x140294430 (MiReleasePtes.c)
 *     MiMakeZeroedPageTables @ 0x14039E200 (MiMakeZeroedPageTables.c)
 *     memmove @ 0x140411040 (memmove.c)
 *     memset @ 0x140411300 (memset.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 MiExpandPartitionIds()
{
  unsigned int v0; // ebx
  _RTL_BITMAP *Pool; // rax
  __int64 v2; // rsi
  _RTL_BITMAP *v3; // rdi
  ULONG_PTR v5; // rax
  unsigned __int64 v6; // rbx
  _QWORD *PteAddress; // rbp
  unsigned __int64 SizeOfBitMap; // rax

  v0 = 512;
  if ( (__int64 *)qword_140C4E4C8 != &qword_140C4E4C0 )
    v0 = qword_140C4E4A8->SizeOfBitMap + 512;
  if ( v0 <= qword_140C4E4A8->SizeOfBitMap || v0 > 0x400 )
  {
    v2 = 0LL;
    v3 = 0LL;
  }
  else
  {
    Pool = (_RTL_BITMAP *)MiAllocatePool(64, 8 * ((v0 >> 6) + ((v0 & 0x3F) != 0) + 2), 0x20206D4Du);
    v2 = 0LL;
    v3 = Pool;
    if ( !Pool )
      return 0LL;
    Pool->SizeOfBitMap = v0;
    Pool->Buffer = &Pool[1].SizeOfBitMap;
  }
  if ( !v3 )
    return 0LL;
  if ( (__int64 *)qword_140C4E4C8 == &qword_140C4E4C0 )
  {
    v5 = MiReservePtes((__int64)&qword_140C4EDC0, 2u);
    if ( !v5 )
      goto LABEL_18;
    v6 = (__int64)(v5 << 25) >> 16;
    if ( !v6 )
      goto LABEL_18;
  }
  else
  {
    v6 = qword_140C4E4C8 + 8LL * qword_140C4E4A8->SizeOfBitMap;
  }
  PteAddress = (_QWORD *)MiGetPteAddress(v6);
  if ( !(unsigned int)MiMakeZeroedPageTables((__int64)PteAddress, (__int64)PteAddress, 0x21u, 9) )
  {
    if ( (__int64 *)qword_140C4E4C8 == &qword_140C4E4C0 )
      MiReleasePtes((__int64)&qword_140C4EDC0, PteAddress, 1u);
LABEL_18:
    ExFreePoolWithTag(v3, 0);
    return 0LL;
  }
  memset((void *)v6, 0, 0x1000uLL);
  if ( (__int64 *)qword_140C4E4C8 == &qword_140C4E4C0 )
  {
    *(_QWORD *)v6 = *(_QWORD *)qword_140C4E4C8;
    qword_140C4E4C8 = v6;
  }
  RtlClearAllBits(v3);
  SizeOfBitMap = qword_140C4E4A8->SizeOfBitMap;
  LOBYTE(v2) = (SizeOfBitMap & 0x3F) != 0;
  memmove(v3->Buffer, qword_140C4E4A8->Buffer, 8 * ((SizeOfBitMap >> 6) + v2));
  if ( qword_140C4E4A8 != (PRTL_BITMAP)&dword_140C4E4B0 )
    ExFreePoolWithTag(qword_140C4E4A8, 0);
  qword_140C4E4A8 = v3;
  return 1LL;
}
