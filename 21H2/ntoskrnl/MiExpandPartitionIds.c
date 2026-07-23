/*
 * XREFs of MiExpandPartitionIds @ 0x1408DAFB8
 * Callers:
 *     MiAllocatePartitionId @ 0x1408C7BFC (MiAllocatePartitionId.c)
 * Callees:
 *     MiAllocatePool @ 0x14027C2E0 (MiAllocatePool.c)
 *     MiReservePtes @ 0x1402CAEB0 (MiReservePtes.c)
 *     MiReleasePtes @ 0x1402EA050 (MiReleasePtes.c)
 *     RtlClearAllBits @ 0x1402F70D0 (RtlClearAllBits.c)
 *     MiGetPteAddress @ 0x140322E50 (MiGetPteAddress.c)
 *     MiMakeZeroedPageTables @ 0x14039DF90 (MiMakeZeroedPageTables.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiExpandPartitionIds(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  unsigned int v4; // ebx
  _RTL_BITMAP *Pool; // rax
  __int64 v6; // rsi
  _RTL_BITMAP *v7; // rdi
  ULONG_PTR v9; // rax
  unsigned __int64 v10; // rbx
  _QWORD *PteAddress; // rbp
  unsigned __int64 SizeOfBitMap; // rax

  v4 = 512;
  if ( (__int64 *)qword_140C4E688 != &qword_140C4E680 )
    v4 = qword_140C4E668->SizeOfBitMap + 512;
  if ( v4 <= qword_140C4E668->SizeOfBitMap || v4 > 0x400 )
  {
    v6 = 0LL;
    v7 = 0LL;
  }
  else
  {
    Pool = (_RTL_BITMAP *)MiAllocatePool(64, 8 * ((v4 >> 6) + ((v4 & 0x3F) != 0) + 2), 0x20206D4Du);
    v6 = 0LL;
    v7 = Pool;
    if ( !Pool )
      return 0LL;
    Pool->SizeOfBitMap = v4;
    Pool->Buffer = &Pool[1].SizeOfBitMap;
  }
  if ( !v7 )
    return 0LL;
  if ( (__int64 *)qword_140C4E688 == &qword_140C4E680 )
  {
    v9 = MiReservePtes((__int64)&qword_140C4EF80, 2u, qword_140C4E688, a4);
    if ( !v9 )
      goto LABEL_18;
    v10 = (__int64)(v9 << 25) >> 16;
    if ( !v10 )
      goto LABEL_18;
  }
  else
  {
    v10 = qword_140C4E688 + 8LL * qword_140C4E668->SizeOfBitMap;
  }
  PteAddress = (_QWORD *)MiGetPteAddress(v10);
  if ( !(unsigned int)MiMakeZeroedPageTables((__int64)PteAddress, (__int64)PteAddress, 0x21u, 9) )
  {
    if ( (__int64 *)qword_140C4E688 == &qword_140C4E680 )
      MiReleasePtes((__int64)&qword_140C4EF80, PteAddress, 1u);
LABEL_18:
    ExFreePoolWithTag(v7, 0);
    return 0LL;
  }
  memset((void *)v10, 0, 0x1000uLL);
  if ( (__int64 *)qword_140C4E688 == &qword_140C4E680 )
  {
    *(_QWORD *)v10 = *(_QWORD *)qword_140C4E688;
    qword_140C4E688 = v10;
  }
  RtlClearAllBits(v7);
  SizeOfBitMap = qword_140C4E668->SizeOfBitMap;
  LOBYTE(v6) = (SizeOfBitMap & 0x3F) != 0;
  memmove(v7->Buffer, qword_140C4E668->Buffer, 8 * ((SizeOfBitMap >> 6) + v6));
  if ( qword_140C4E668 != (PRTL_BITMAP)&dword_140C4E670 )
    ExFreePoolWithTag(qword_140C4E668, 0);
  qword_140C4E668 = v7;
  return 1LL;
}
