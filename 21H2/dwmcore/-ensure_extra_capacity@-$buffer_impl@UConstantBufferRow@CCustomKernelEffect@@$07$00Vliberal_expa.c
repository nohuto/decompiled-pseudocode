/*
 * XREFs of ?ensure_extra_capacity@?$buffer_impl@UConstantBufferRow@CCustomKernelEffect@@$07$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x1800C6F7C
 * Callers:
 *     ?reserve_region@?$vector_facade@UConstantBufferRow@CCustomKernelEffect@@V?$buffer_impl@UConstantBufferRow@CCustomKernelEffect@@$07$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUConstantBufferRow@CCustomKernelEffect@@_K0@Z @ 0x1800C6EA0 (-reserve_region@-$vector_facade@UConstantBufferRow@CCustomKernelEffect@@V-$buffer_impl@UConstant.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18005007C (--2@YAPEAX_K@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ??$uninitialized_move@V?$move_iterator@PEAUConstantBufferRow@CCustomKernelEffect@@@std@@V?$checked_array_iterator@PEAUConstantBufferRow@CCustomKernelEffect@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUConstantBufferRow@CCustomKernelEffect@@@stdext@@V?$move_iterator@PEAUConstantBufferRow@CCustomKernelEffect@@@0@0V12@@Z @ 0x1800C7084 (--$uninitialized_move@V-$move_iterator@PEAUConstantBufferRow@CCustomKernelEffect@@@std@@V-$check.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x1800C8E70 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 */

void __fastcall detail::buffer_impl<CCustomKernelEffect::ConstantBufferRow,8,1,detail::liberal_expansion_policy>::ensure_extra_capacity(
        void **a1,
        unsigned __int64 a2)
{
  _BYTE *v3; // rcx
  _BYTE *v4; // rsi
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // rdi
  LPVOID v7; // rax
  void *v8; // r8
  void *v9; // rdx
  LPVOID v10; // rbx
  void *v11; // rcx
  bool v12; // zf
  __int64 v13; // rsi
  __int128 v14; // [rsp+20h] [rbp-48h] BYREF
  __int64 v15; // [rsp+30h] [rbp-38h]
  __int128 v16; // [rsp+40h] [rbp-28h] BYREF
  __int64 v17; // [rsp+50h] [rbp-18h]

  v3 = a1[2];
  v4 = a1[1];
  if ( (v3 - v4) >> 4 < a2 )
  {
    v5 = (v4 - (_BYTE *)*a1) >> 4;
    if ( v5 + a2 < v5 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
      JUMPOUT(0x1801668B8LL);
    }
    v6 = detail::liberal_expansion_policy::expand(
           (detail::liberal_expansion_policy *)((v3 - (_BYTE *)*a1) >> 4),
           (v3 - (_BYTE *)*a1) >> 4,
           v5 + a2);
    v7 = operator new(saturated_mul(v6, 0x10uLL));
    v8 = a1[1];
    v9 = *a1;
    *(_QWORD *)&v14 = v7;
    *((_QWORD *)&v14 + 1) = v5;
    v10 = v7;
    v15 = 0LL;
    v16 = v14;
    v17 = 0LL;
    ((void (__fastcall *)(__int128 *, void *, void *, __int128 *))std::uninitialized_move<std::move_iterator<CCustomKernelEffect::ConstantBufferRow *>,stdext::checked_array_iterator<CCustomKernelEffect::ConstantBufferRow *>>)(
      &v14,
      v9,
      v8,
      &v16);
    v11 = *a1;
    v12 = *a1 == a1 + 3;
    *a1 = v10;
    if ( v12 )
      v11 = 0LL;
    DefaultHeap::Free(v11);
    v13 = (__int64)*a1 + 16 * v5;
    a1[2] = (char *)*a1 + 16 * v6;
    a1[1] = (void *)v13;
  }
}
