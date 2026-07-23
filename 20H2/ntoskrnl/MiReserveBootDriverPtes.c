/*
 * XREFs of MiReserveBootDriverPtes @ 0x140A69DC8
 * Callers:
 *     MiInitializeDriverPtes @ 0x140A69998 (MiInitializeDriverPtes.c)
 * Callees:
 *     MiAllocatePool @ 0x14022D320 (MiAllocatePool.c)
 *     RtlSetBits @ 0x140343250 (RtlSetBits.c)
 *     memmove @ 0x140411040 (memmove.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiReserveBootDriverPtes(unsigned __int64 a1, int a2)
{
  __int64 v3; // rbp
  __int64 v4; // rcx
  const void **v5; // rbx
  unsigned __int64 v6; // r14
  __int64 v7; // r9
  unsigned __int64 v8; // r10
  __int64 result; // rax
  unsigned int v10; // r12d
  _RTL_BITMAP *v11; // rsi
  unsigned int *v12; // rax

  v3 = ((dword_140C4CB30 & 0xFFF) != 0) + a2 + ((unsigned int)dword_140C4CB30 >> 12);
  v4 = (__int64)(a1 << 25) >> 16;
  if ( (PVOID)v4 != PsHalImageBase && (PVOID)v4 != PsNtosImageBase )
    v3 = (unsigned int)(dword_140C4CACC + v3);
  v5 = (const void **)qword_140C4CBB0;
  v6 = a1 & 0xFFFFFFFFFFFFF000uLL;
  if ( qword_140C4CBB0 )
  {
    v7 = *((_QWORD *)qword_140C4CBB0 + 1);
    v8 = v7 + 8LL * *((unsigned int *)qword_140C4CBB0 + 4);
    if ( a1 + 8 * v3 <= v8 )
    {
      RtlSetBits((PRTL_BITMAP)qword_140C4CBB0 + 1, (__int64)(a1 - v7) >> 3, v3);
      return 1LL;
    }
    v5 = (const void **)((unsigned __int64)qword_140C4CBB0 & -(__int64)(a1 < v8));
    if ( v5 )
      v6 = *(_QWORD *)(((unsigned __int64)qword_140C4CBB0 & -(__int64)(a1 < v8)) + 8);
  }
  v10 = (__int64)(((a1 + 4088 + 8 * v3) & 0xFFFFFFFFFFFFF000uLL) - v6) >> 3;
  result = (__int64)MiAllocatePool(64, ((unsigned __int64)v10 >> 3) + 40, 0x70446D4Du);
  v11 = (_RTL_BITMAP *)result;
  if ( result )
  {
    *(_DWORD *)(result + 16) = v10;
    v12 = (unsigned int *)(result + 40);
    v11[1].Buffer = v12;
    if ( v5 )
    {
      memmove(v12, v5[3], (unsigned __int64)*((unsigned int *)v5 + 4) >> 3);
      qword_140C4CBB0 = (PVOID)*v5;
      ExFreePoolWithTag(v5, 0);
    }
    RtlSetBits(v11 + 1, (__int64)(a1 - v6) >> 3, v3);
    v11[2].SizeOfBitMap = 0;
    *(&v11[2].SizeOfBitMap + 1) = 1;
    v11->Buffer = (unsigned int *)v6;
    *(_QWORD *)&v11->SizeOfBitMap = qword_140C4CBB0;
    qword_140C4CBB0 = v11;
    return 1LL;
  }
  return result;
}
