/*
 * XREFs of ?erase@?$deque@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@QEAA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@@2@V?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@@2@0@Z @ 0x1800D9E00
 * Callers:
 *     ?TryReviveDeadTask@CEffectCompilationService@@AEAAXPEBVCEffectCompilationTask@@@Z @ 0x1800DA8A0 (-TryReviveDeadTask@CEffectCompilationService@@AEAAXPEBVCEffectCompilationTask@@@Z.c)
 * Callees:
 *     ??$move_backward@V?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@@std@@V12@@std@@YA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@@0@V10@00@Z @ 0x1800195D0 (--$move_backward@V-$_Deque_iterator@V-$_Deque_val@U-$_Deque_simple_types@V-$ComPtr@VCEffectCompi.c)
 *     ?pop_front@?$deque@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@QEAAXXZ @ 0x18001A2FC (-pop_front@-$deque@V-$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VCE.c)
 *     ??$move@V?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@@std@@V12@@std@@YA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@@0@V10@00@Z @ 0x1800D9C64 (--$move@V-$_Deque_iterator@V-$_Deque_val@U-$_Deque_simple_types@V-$ComPtr@VCEffectCompilationTas.c)
 *     ??0?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@@std@@QEAA@AEBV01@@Z @ 0x1800DAA4C (--0-$_Deque_const_iterator@V-$_Deque_val@U-$_Deque_simple_types@V-$ComPtr@VCEffectCompilationTas.c)
 *     ?pop_back@?$deque@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@QEAAXXZ @ 0x1800DAB54 (-pop_back@-$deque@V-$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VCEf.c)
 */

_QWORD *__fastcall std::deque<Microsoft::WRL::ComPtr<CEffectCompilationTask>>::erase(
        __int64 *a1,
        _QWORD *a2,
        __int64 a3)
{
  __int64 v5; // rbx
  __int64 v6; // r11
  __int64 v7; // rcx
  __int64 **v8; // r9
  __int64 v9; // r10
  __int64 v10; // r11
  unsigned __int64 v11; // r15
  __int64 v12; // r14
  __int64 v13; // r9
  __int64 v15; // r11
  __int64 v16; // [rsp+20h] [rbp-60h] BYREF
  __int64 v17; // [rsp+28h] [rbp-58h]
  __int64 v18; // [rsp+30h] [rbp-50h]
  __int64 v19; // [rsp+38h] [rbp-48h] BYREF
  __int64 v20; // [rsp+40h] [rbp-40h]
  __int64 v21; // [rsp+48h] [rbp-38h]
  __int64 *v22[3]; // [rsp+50h] [rbp-30h] BYREF
  __int64 *v23[3]; // [rsp+68h] [rbp-18h] BYREF

  v5 = 0LL;
  v17 = 0LL;
  v18 = *(_QWORD *)(std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<Microsoft::WRL::ComPtr<CEffectCompilationTask>>>>::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<Microsoft::WRL::ComPtr<CEffectCompilationTask>>>>(
                      v23,
                      a3)
                  + 16);
  if ( a1 )
    v16 = *a1;
  else
    v16 = 0LL;
  v20 = 0LL;
  v7 = *(_QWORD *)(std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<Microsoft::WRL::ComPtr<CEffectCompilationTask>>>>::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<Microsoft::WRL::ComPtr<CEffectCompilationTask>>>>(
                     v23,
                     v6)
                 + 16);
  v21 = v7;
  if ( a1 )
    v19 = *a1;
  else
    v19 = 0LL;
  v10 = a1[3];
  v11 = v9 - v10;
  v12 = v7 - v9;
  if ( v7 == v9 )
  {
    *a2 = 0LL;
    a2[1] = 0LL;
    if ( v8 )
    {
      if ( *v8 )
        v5 = **v8;
      *a2 = v5;
    }
    a2[2] = v9;
  }
  else
  {
    if ( v11 < v10 + a1[4] - v7 )
    {
      std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<Microsoft::WRL::ComPtr<CEffectCompilationTask>>>>::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<Microsoft::WRL::ComPtr<CEffectCompilationTask>>>>(
        v22,
        &v19);
      std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<Microsoft::WRL::ComPtr<CEffectCompilationTask>>>>::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<Microsoft::WRL::ComPtr<CEffectCompilationTask>>>>(
        v23,
        &v16);
      v19 = *a1;
      v20 = 0LL;
      v21 = v15;
      std::move_backward<std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<Microsoft::WRL::ComPtr<CEffectCompilationTask>>>>,std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<Microsoft::WRL::ComPtr<CEffectCompilationTask>>>>>(
        &v16,
        (__int64)&v19,
        v23,
        v22);
      do
      {
        std::deque<Microsoft::WRL::ComPtr<CEffectCompilationTask>>::pop_front(a1);
        --v12;
      }
      while ( v12 );
    }
    else
    {
      std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<Microsoft::WRL::ComPtr<CEffectCompilationTask>>>>::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<Microsoft::WRL::ComPtr<CEffectCompilationTask>>>>(
        v23,
        &v16);
      v16 = *a1;
      v17 = 0LL;
      v18 = v13;
      std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<Microsoft::WRL::ComPtr<CEffectCompilationTask>>>>::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<Microsoft::WRL::ComPtr<CEffectCompilationTask>>>>(
        v22,
        &v19);
      std::move<std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<Microsoft::WRL::ComPtr<CEffectCompilationTask>>>>,std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<Microsoft::WRL::ComPtr<CEffectCompilationTask>>>>>(
        &v19,
        v22,
        (__int64)&v16,
        v23);
      do
      {
        std::deque<Microsoft::WRL::ComPtr<CEffectCompilationTask>>::pop_back(a1);
        --v12;
      }
      while ( v12 );
    }
    v21 = a1[3];
    v19 = *a1;
    v20 = 0LL;
    std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<Microsoft::WRL::ComPtr<CEffectCompilationTask>>>>::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<Microsoft::WRL::ComPtr<CEffectCompilationTask>>>>(
      &v16,
      &v19);
    v18 += v11;
    std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<Microsoft::WRL::ComPtr<CEffectCompilationTask>>>>::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<Microsoft::WRL::ComPtr<CEffectCompilationTask>>>>(
      a2,
      &v16);
  }
  return a2;
}
