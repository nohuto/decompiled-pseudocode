/*
 * XREFs of MiExpandPartitionIds @ 0x1408D6508
 * Callers:
 *     MiAllocatePartitionId @ 0x1408C314C (MiAllocatePartitionId.c)
 * Callees:
 *     MiReleasePtes @ 0x140247F40 (MiReleasePtes.c)
 *     MiReservePtes @ 0x1402743A0 (MiReservePtes.c)
 *     MiGetPteAddress @ 0x14027AF40 (MiGetPteAddress.c)
 *     MiAllocatePool @ 0x1402A0FB0 (MiAllocatePool.c)
 *     RtlClearAllBits @ 0x1402E0FC0 (RtlClearAllBits.c)
 *     MiMakeZeroedPageTables @ 0x14039A920 (MiMakeZeroedPageTables.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     memset @ 0x140408F80 (memset.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
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
  if ( (__int64 *)qword_140C4E588 != &qword_140C4E580 )
    v0 = qword_140C4E568->SizeOfBitMap + 512;
  if ( v0 <= qword_140C4E568->SizeOfBitMap || v0 > 0x400 )
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
  if ( (__int64 *)qword_140C4E588 == &qword_140C4E580 )
  {
    v5 = MiReservePtes((__int64)&qword_140C4EE80, 2LL);
    if ( !v5 )
      goto LABEL_18;
    v6 = (__int64)(v5 << 25) >> 16;
    if ( !v6 )
      goto LABEL_18;
  }
  else
  {
    v6 = qword_140C4E588 + 8LL * qword_140C4E568->SizeOfBitMap;
  }
  PteAddress = (_QWORD *)MiGetPteAddress(v6);
  if ( !(unsigned int)MiMakeZeroedPageTables((__int64)PteAddress, (__int64)PteAddress, 0x21u, 9) )
  {
    if ( (__int64 *)qword_140C4E588 == &qword_140C4E580 )
      MiReleasePtes((__int64)&qword_140C4EE80, PteAddress, 1u);
LABEL_18:
    ExFreePoolWithTag(v3, 0);
    return 0LL;
  }
  memset((void *)v6, 0, 0x1000uLL);
  if ( (__int64 *)qword_140C4E588 == &qword_140C4E580 )
  {
    *(_QWORD *)v6 = *(_QWORD *)qword_140C4E588;
    qword_140C4E588 = v6;
  }
  RtlClearAllBits(v3);
  SizeOfBitMap = qword_140C4E568->SizeOfBitMap;
  LOBYTE(v2) = (SizeOfBitMap & 0x3F) != 0;
  memmove(v3->Buffer, qword_140C4E568->Buffer, 8 * ((SizeOfBitMap >> 6) + v2));
  if ( qword_140C4E568 != (PRTL_BITMAP)&dword_140C4E570 )
    ExFreePoolWithTag(qword_140C4E568, 0);
  qword_140C4E568 = v3;
  return 1LL;
}
