/*
 * XREFs of MmAllocateMappingAddressEx @ 0x14060CD40
 * Callers:
 *     MmAllocateMappingAddress @ 0x14060CD20 (MmAllocateMappingAddress.c)
 *     PnprInitializeMappingReserve @ 0x1408ADCB4 (PnprInitializeMappingReserve.c)
 *     EtwpSavePersistedLogger @ 0x140948E5C (EtwpSavePersistedLogger.c)
 * Callees:
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiInsertMappingNode @ 0x140240CB8 (MiInsertMappingNode.c)
 *     MiAllocatePool @ 0x14027C2E0 (MiAllocatePool.c)
 *     MiReservePtes @ 0x1402CAEB0 (MiReservePtes.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     MiInsertPteTracker @ 0x14055F020 (MiInsertPteTracker.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MmAllocateMappingAddressEx(__int64 a1, unsigned int a2, int a3)
{
  __int64 v3; // r15
  unsigned __int64 v5; // rdi
  __int64 v6; // r8
  unsigned __int64 v7; // r9
  ULONG_PTR v8; // rax
  _QWORD *v9; // r14
  unsigned int v10; // r12d
  __int64 v11; // rbp
  unsigned __int64 v12; // rbx
  int v13; // r13d
  bool v15; // zf
  PVOID Pool; // [rsp+30h] [rbp-88h]
  _QWORD v17[5]; // [rsp+38h] [rbp-80h] BYREF
  int v18; // [rsp+60h] [rbp-58h]
  int v19; // [rsp+64h] [rbp-54h]
  __int64 v20; // [rsp+68h] [rbp-50h]
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
  v8 = MiReservePtes((__int64)&qword_140C4EF80, v5, v6, v7);
  v9 = (_QWORD *)v8;
  if ( !v8 )
  {
    ExFreePoolWithTag(Pool, 0);
    return 0LL;
  }
  v10 = 0;
  *((_QWORD *)Pool + 4) = v5;
  v11 = (__int64)(v8 << 25) >> 16;
  *((_QWORD *)Pool + 3) = v11;
  *((_DWORD *)Pool + 10) = v3;
  *((_DWORD *)Pool + 11) = a3;
  do
  {
    v12 = ZeroPte;
    v13 = 0;
    if ( !MiPteInShadowRange((unsigned __int64)v9) )
      goto LABEL_9;
    if ( (unsigned int)MiPteHasShadow() )
    {
      v13 = 1;
      if ( HIBYTE(word_140C4E048) )
        goto LABEL_9;
      v15 = (ZeroPte & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_9;
      v15 = (ZeroPte & 1) == 0;
    }
    if ( !v15 )
      v12 = ZeroPte | 0x8000000000000000uLL;
LABEL_9:
    *v9 = v12;
    if ( v13 )
      MiWritePteShadow((__int64)v9, v12);
    ++v10;
    ++v9;
  }
  while ( v10 < v5 );
  if ( (dword_140CFB17C & 1) != 0 )
  {
    v17[0] = 0LL;
    v17[1] = 0LL;
    v18 = 0;
    v19 = 0;
    v20 = 0LL;
    v17[3] = v11;
    v17[4] = v3;
    v17[2] = v5 << 12;
    MiInsertPteTracker((__int64)v17, 2, 0, 1);
  }
  MiInsertMappingNode((__int64)Pool);
  return v11;
}
