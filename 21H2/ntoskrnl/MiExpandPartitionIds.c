/*
 * XREFs of MiExpandPartitionIds @ 0x140981778
 * Callers:
 *     MiAllocatePartitionId @ 0x14096C1B0 (MiAllocatePartitionId.c)
 * Callees:
 *     RtlClearAllBits @ 0x14020AE80 (RtlClearAllBits.c)
 *     MiAllocatePool @ 0x1402828F0 (MiAllocatePool.c)
 *     MiReleasePtes @ 0x1402BB6D0 (MiReleasePtes.c)
 *     MiMakeZeroedPageTables @ 0x1402DBF90 (MiMakeZeroedPageTables.c)
 *     MiReservePtes @ 0x1403095B0 (MiReservePtes.c)
 *     MiGetPteAddress @ 0x140313C70 (MiGetPteAddress.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 MiExpandPartitionIds()
{
  unsigned int v0; // ebx
  RTL_BITMAP *Pool; // rax
  __int64 v2; // rsi
  RTL_BITMAP *v3; // rdi
  ULONG_PTR v4; // rax
  unsigned __int64 v5; // rbx
  _QWORD *PteAddress; // rbp
  unsigned __int64 SizeOfBitMap; // rax

  v0 = 512;
  if ( (__int64 *)qword_140C51F48 != &qword_140C51F40 )
    v0 = qword_140C51F28->SizeOfBitMap + 512;
  if ( v0 <= qword_140C51F28->SizeOfBitMap )
    return 0LL;
  if ( v0 > 0x400 )
    return 0LL;
  Pool = (RTL_BITMAP *)MiAllocatePool(64, 8 * ((v0 >> 6) + ((v0 & 0x3F) != 0) + 2), 0x20206D4Du);
  v2 = 0LL;
  v3 = Pool;
  if ( !Pool )
    return 0LL;
  Pool->SizeOfBitMap = v0;
  Pool->Buffer = &Pool[1].SizeOfBitMap;
  if ( (__int64 *)qword_140C51F48 == &qword_140C51F40 )
  {
    v4 = MiReservePtes((__int64)&qword_140C534C0, 2u);
    if ( !v4 )
      goto LABEL_14;
    v5 = (__int64)(v4 << 25) >> 16;
    if ( !v5 )
      goto LABEL_14;
  }
  else
  {
    v5 = qword_140C51F48 + 8LL * qword_140C51F28->SizeOfBitMap;
  }
  PteAddress = (_QWORD *)MiGetPteAddress(v5);
  if ( !(unsigned int)MiMakeZeroedPageTables((__int64)PteAddress, (__int64)PteAddress, 33, 9) )
  {
    if ( (__int64 *)qword_140C51F48 == &qword_140C51F40 )
      MiReleasePtes((__int64)&qword_140C534C0, PteAddress, 1u);
LABEL_14:
    ExFreePoolWithTag(v3, 0);
    return 0LL;
  }
  memset((void *)v5, 0, 0x1000uLL);
  if ( (__int64 *)qword_140C51F48 == &qword_140C51F40 )
  {
    *(_QWORD *)v5 = *(_QWORD *)qword_140C51F48;
    qword_140C51F48 = v5;
  }
  RtlClearAllBits(v3);
  SizeOfBitMap = qword_140C51F28->SizeOfBitMap;
  LOBYTE(v2) = (SizeOfBitMap & 0x3F) != 0;
  memmove(v3->Buffer, qword_140C51F28->Buffer, 8 * ((SizeOfBitMap >> 6) + v2));
  if ( qword_140C51F28 != (PRTL_BITMAP)&dword_140C51F30 )
    ExFreePoolWithTag(qword_140C51F28, 0);
  qword_140C51F28 = v3;
  return 1LL;
}
