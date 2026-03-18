/*
 * XREFs of MmAllocateMappingAddressEx @ 0x1407F9D50
 * Callers:
 *     MmAllocateMappingAddress @ 0x1407F9D30 (MmAllocateMappingAddress.c)
 *     PnprInitializeMappingReserve @ 0x1409525B4 (PnprInitializeMappingReserve.c)
 *     EtwpSavePersistedLogger @ 0x1409ED100 (EtwpSavePersistedLogger.c)
 * Callees:
 *     MiWritePteShadow @ 0x1402294F0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140229550 (MiPteHasShadow.c)
 *     MiAllocatePool @ 0x1402828F0 (MiAllocatePool.c)
 *     MiReservePtes @ 0x1403095B0 (MiReservePtes.c)
 *     MiPteInShadowRange @ 0x140317A80 (MiPteInShadowRange.c)
 *     MiInsertMappingNode @ 0x140386294 (MiInsertMappingNode.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     MiInsertPteTracker @ 0x1405B6C18 (MiInsertPteTracker.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MmAllocateMappingAddressEx(__int64 a1, unsigned int a2, int a3)
{
  __int64 v3; // r15
  unsigned __int64 v5; // rdi
  ULONG_PTR v6; // rax
  _QWORD *v7; // r14
  unsigned int v8; // r12d
  __int64 v9; // rbp
  unsigned __int64 v10; // rbx
  int v11; // r13d
  bool v13; // zf
  _QWORD *Pool; // [rsp+30h] [rbp-88h]
  _QWORD v15[5]; // [rsp+38h] [rbp-80h] BYREF
  int v16; // [rsp+60h] [rbp-58h]
  int v17; // [rsp+64h] [rbp-54h]
  __int64 v18; // [rsp+68h] [rbp-50h]
  ULONG_PTR BugCheckParameter4; // [rsp+B8h] [rbp+0h]

  v3 = a2;
  if ( (a3 & 0xFFFFFFFE) != 0 )
    return 0LL;
  v5 = (unsigned __int64)(a1 + 4095) >> 12;
  if ( !v5 )
    KeBugCheckEx(0xDAu, 0x100uLL, 0LL, a2, BugCheckParameter4);
  if ( !a2 )
    return 0LL;
  if ( v5 >= 0x100000000LL )
    return 0LL;
  Pool = MiAllocatePool(64, 0x30uLL, 0x6D72694Du);
  if ( !Pool )
    return 0LL;
  v6 = MiReservePtes((__int64)&qword_140C534C0, v5);
  v7 = (_QWORD *)v6;
  if ( !v6 )
  {
    ExFreePoolWithTag(Pool, 0);
    return 0LL;
  }
  v8 = 0;
  Pool[4] = v5;
  v9 = (__int64)(v6 << 25) >> 16;
  Pool[3] = v9;
  *((_DWORD *)Pool + 10) = v3;
  *((_DWORD *)Pool + 11) = a3;
  do
  {
    v10 = ZeroPte;
    v11 = 0;
    if ( !MiPteInShadowRange((unsigned __int64)v7) )
      goto LABEL_9;
    if ( (unsigned int)MiPteHasShadow() )
    {
      v11 = 1;
      if ( HIBYTE(word_140C51864) )
        goto LABEL_9;
      v13 = (ZeroPte & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_9;
      v13 = (ZeroPte & 1) == 0;
    }
    if ( !v13 )
      v10 = ZeroPte | 0x8000000000000000uLL;
LABEL_9:
    *v7 = v10;
    if ( v11 )
      MiWritePteShadow((__int64)v7, v10);
    ++v8;
    ++v7;
  }
  while ( v8 < v5 );
  if ( (dword_140D051BC & 1) != 0 )
  {
    v15[0] = 0LL;
    v15[1] = 0LL;
    v16 = 0;
    v17 = 0;
    v18 = 0LL;
    v15[3] = v9;
    v15[4] = v3;
    v15[2] = v5 << 12;
    MiInsertPteTracker((__int64)v15, 2, 0, 1);
  }
  MiInsertMappingNode(Pool);
  return v9;
}
