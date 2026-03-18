/*
 * XREFs of ?TryReviveDeadTask@CEffectCompilationService@@AEAAXPEBVCEffectCompilationTask@@@Z @ 0x1800C6A34
 * Callers:
 *     ?BeginCompile@CEffectCompilationService@@QEAAJPEAVCCompiledEffectTemplate@@PEAUIEffectDescription@Composition@UI@Windows@@PEAPEAVCEffectCompilationTask@@@Z @ 0x1800C6714 (-BeginCompile@CEffectCompilationService@@QEAAJPEAVCCompiledEffectTemplate@@PEAUIEffectDescriptio.c)
 * Callees:
 *     ?erase@?$deque@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@QEAA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@@2@V?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@@2@0@Z @ 0x18001A428 (-erase@-$deque@V-$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VCEffec.c)
 *     ??0?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@@std@@QEAA@AEBV01@@Z @ 0x18001A56C (--0-$_Deque_const_iterator@V-$_Deque_val@U-$_Deque_simple_types@V-$ComPtr@VCEffectCompilationTas.c)
 *     std::find_if_std::_Deque_iterator_std::_Deque_val_std::_Deque_simple_types_Microsoft::WRL::ComPtr_CEffectCompilationTask_________lambda_b07e6d4d1a74fa50f03de8a08b13a0b6___ @ 0x1800C6554 (std--find_if_std--_Deque_iterator_std--_Deque_val_std--_Deque_simple_types_Microsoft--WRL--ComPt.c)
 */

void __fastcall CEffectCompilationService::TryReviveDeadTask(
        CEffectCompilationService *this,
        const struct CEffectCompilationTask *a2)
{
  unsigned __int64 *v2; // rdi
  __int64 v3; // rcx
  unsigned __int64 v4; // rdx
  __int64 v5; // rbx
  unsigned __int64 v6; // rax
  _QWORD *v7; // rax
  __int64 v8; // r8
  _QWORD *v9; // rax
  _QWORD v10[3]; // [rsp+20h] [rbp-60h] BYREF
  __int128 v11; // [rsp+38h] [rbp-48h] BYREF
  __int64 v12; // [rsp+48h] [rbp-38h]
  _QWORD v13[3]; // [rsp+50h] [rbp-30h] BYREF
  _QWORD v14[3]; // [rsp+68h] [rbp-18h] BYREF
  const struct CEffectCompilationTask *v15; // [rsp+98h] [rbp+18h] BYREF

  v15 = a2;
  v10[1] = 0LL;
  v2 = (unsigned __int64 *)((char *)this + 176);
  v3 = *((_QWORD *)this + 25);
  v4 = *v2;
  v5 = v3 + v2[4];
  v10[0] = *v2;
  v12 = v3;
  v11 = 0LL;
  v10[2] = v5;
  v6 = 0LL;
  if ( v2 )
    v6 = v4;
  *(_QWORD *)&v11 = v6;
  std::find_if_std::_Deque_iterator_std::_Deque_val_std::_Deque_simple_types_Microsoft::WRL::ComPtr_CEffectCompilationTask_________lambda_b07e6d4d1a74fa50f03de8a08b13a0b6___(
    v13,
    (__int64)&v11,
    (__int64)v10,
    &v15);
  if ( v13[2] != v5 )
  {
    v7 = std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<Microsoft::WRL::ComPtr<CEffectCompilationTask>>>>::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<Microsoft::WRL::ComPtr<CEffectCompilationTask>>>>(
           v10,
           (__int64)v13);
    std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<Microsoft::WRL::ComPtr<CEffectCompilationTask>>>>::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<Microsoft::WRL::ComPtr<CEffectCompilationTask>>>>(
      &v11,
      (__int64)v7);
    ++v12;
    std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<Microsoft::WRL::ComPtr<CEffectCompilationTask>>>>::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<Microsoft::WRL::ComPtr<CEffectCompilationTask>>>>(
      v13,
      (__int64)&v11);
    v9 = std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<Microsoft::WRL::ComPtr<CEffectCompilationTask>>>>::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<Microsoft::WRL::ComPtr<CEffectCompilationTask>>>>(
           v14,
           v8);
    std::deque<Microsoft::WRL::ComPtr<CEffectCompilationTask>>::erase(v2, (__int64)&v11, (__int64)v9);
  }
}
