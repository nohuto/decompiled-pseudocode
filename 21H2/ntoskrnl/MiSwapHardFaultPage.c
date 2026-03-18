/*
 * XREFs of MiSwapHardFaultPage @ 0x1405C4C94
 * Callers:
 *     MiHardFaultPageRelease @ 0x140231A68 (MiHardFaultPageRelease.c)
 *     MiIdealClusterPage @ 0x1405C3C6C (MiIdealClusterPage.c)
 * Callees:
 *     MiWritePteShadow @ 0x1402294F0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140229550 (MiPteHasShadow.c)
 *     MiLockNestedPageAtDpcInline @ 0x140239060 (MiLockNestedPageAtDpcInline.c)
 *     MiUpdateTransitionPteFrame @ 0x1402E7D14 (MiUpdateTransitionPteFrame.c)
 *     MiCopyPfnEntryEx @ 0x1402E8154 (MiCopyPfnEntryEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140317A80 (MiPteInShadowRange.c)
 *     MiRemoveLockedPageCharge @ 0x1403377E0 (MiRemoveLockedPageCharge.c)
 *     MiPfnReferenceCountIsZero @ 0x140338500 (MiPfnReferenceCountIsZero.c)
 *     MiSetPfnIdentity @ 0x14033C300 (MiSetPfnIdentity.c)
 */

__int64 __fastcall MiSwapHardFaultPage(__int64 *a1, __m128i *a2, __m128i *a3)
{
  __int64 v6; // rax
  __int64 updated; // rbx
  int v8; // ebp
  __int64 v9; // rcx
  __int64 result; // rax

  v6 = MI_READ_PTE_LOCK_FREE((unsigned __int64)a1);
  updated = MiUpdateTransitionPteFrame(v6, 0xAAAAAAAAAAAAAAABuLL * ((__int64)a3[0x22000000000LL].m128i_i64 >> 4));
  v8 = 0;
  if ( MiPteInShadowRange((unsigned __int64)a1) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v8 = 1;
      if ( HIBYTE(word_140C51864) )
        goto LABEL_8;
    }
    else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
    {
      goto LABEL_8;
    }
    if ( (updated & 1) != 0 )
      updated |= 0x8000000000000000uLL;
  }
LABEL_8:
  *a1 = updated;
  if ( v8 )
    MiWritePteShadow((__int64)a1, updated);
  MiLockNestedPageAtDpcInline((__int64)a3);
  MiCopyPfnEntryEx(a3, a2);
  if ( (((unsigned __int64)a2[2].m128i_i64[1] >> 60) & 7) == 3 )
    MiSetPfnIdentity((__int64)a3, 3);
  a3[1].m128i_i64[1] &= 0xC000000000000000uLL;
  a2[1].m128i_i64[1] |= 0x4000000000000000uLL;
  v9 = a2[1].m128i_i64[0];
  if ( (v9 & 4) != 0 )
  {
    v9 &= ~4uLL;
    a2[1].m128i_i64[0] = v9;
  }
  if ( (v9 & 2) != 0 )
    a2[1].m128i_i64[0] = v9 & 0xFFFFFFFFFFFFFFFDuLL;
  if ( (unsigned int)MiRemoveLockedPageCharge((__int64)a2) )
    MiPfnReferenceCountIsZero((ULONG_PTR)a2, 0xAAAAAAAAAAAAAAABuLL * ((__int64)a2[0x22000000000LL].m128i_i64 >> 4));
  else
    a3[2].m128i_i16[0] = 1;
  result = 0x7FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64(&a2[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
  return result;
}
