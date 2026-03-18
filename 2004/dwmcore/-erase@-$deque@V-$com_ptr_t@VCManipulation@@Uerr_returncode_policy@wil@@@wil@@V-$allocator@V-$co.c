/*
 * XREFs of ?erase@?$deque@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@2@V?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@2@0@Z @ 0x1802138AC
 * Callers:
 *     ?erase@?$deque@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@2@V?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@2@@Z @ 0x180213A74 (-erase@-$deque@V-$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V-$al_ea_180213A74.c)
 * Callees:
 *     ??0?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@@std@@QEAA@AEBV01@@Z @ 0x18001A77C (--0-$_Deque_const_iterator@V-$_Deque_val@U-$_Deque_simple_types@V-$ComPtr@VCEffectCompilationTas.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180024DE0 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?pop_back@?$deque@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAXXZ @ 0x1801CEB78 (-pop_back@-$deque@V-$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V-$allocator@V-.c)
 *     ??$move@V?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@V12@@std@@YA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@0@V10@00@Z @ 0x180211E04 (--$move@V-$_Deque_iterator@V-$_Deque_val@U-$_Deque_simple_types@V-$com_ptr_t@VCManipulation@@Uer.c)
 *     ??$move_backward@V?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@V12@@std@@YA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@0@V10@00@Z @ 0x180211EA8 (--$move_backward@V-$_Deque_iterator@V-$_Deque_val@U-$_Deque_simple_types@V-$com_ptr_t@VCManipula.c)
 *     ??H?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@QEBA?AV01@_J@Z @ 0x180212084 (--H-$_Deque_iterator@V-$_Deque_val@U-$_Deque_simple_types@V-$com_ptr_t@VCManipulation@@Uerr_retu.c)
 */

__int64 __fastcall std::deque<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>::erase(
        unsigned __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v5; // r9
  unsigned __int64 v6; // rcx
  __int64 v7; // r10
  __int64 v8; // rdi
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // rdx
  __int64 v13; // r9
  unsigned __int64 v14; // rax
  __int128 v16; // [rsp+20h] [rbp-60h] BYREF
  __int64 v17; // [rsp+30h] [rbp-50h]
  __int128 v18; // [rsp+38h] [rbp-48h] BYREF
  unsigned __int64 v19; // [rsp+48h] [rbp-38h]
  __int64 *v20[3]; // [rsp+50h] [rbp-30h] BYREF
  _QWORD v21[3]; // [rsp+68h] [rbp-18h] BYREF

  v16 = 0LL;
  v17 = std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<Microsoft::WRL::ComPtr<CEffectCompilationTask>>>>::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<Microsoft::WRL::ComPtr<CEffectCompilationTask>>>>(
          v21,
          a3)[2];
  if ( a1 )
    *(_QWORD *)&v16 = *a1;
  v18 = 0LL;
  v6 = std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<Microsoft::WRL::ComPtr<CEffectCompilationTask>>>>::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<Microsoft::WRL::ComPtr<CEffectCompilationTask>>>>(
         v21,
         v5)[2];
  v19 = v6;
  if ( a1 )
    *(_QWORD *)&v18 = *a1;
  v8 = v6 - v7;
  if ( v7 - a1[3] >= a1[3] + a1[4] - v6 )
  {
    std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<Microsoft::WRL::ComPtr<CEffectCompilationTask>>>>::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<Microsoft::WRL::ComPtr<CEffectCompilationTask>>>>(
      v21,
      (__int64)&v16);
    v16 = *a1;
    v17 = v13;
    std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<Microsoft::WRL::ComPtr<CEffectCompilationTask>>>>::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<Microsoft::WRL::ComPtr<CEffectCompilationTask>>>>(
      v20,
      (__int64)&v18);
    std::move<std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>>>,std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>>>>(
      &v18,
      v20,
      (__int64 **)&v16,
      (__int64)v21);
    for ( ; v8; --v8 )
      std::deque<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>::pop_back(a1);
  }
  else
  {
    std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<Microsoft::WRL::ComPtr<CEffectCompilationTask>>>>::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<Microsoft::WRL::ComPtr<CEffectCompilationTask>>>>(
      v20,
      (__int64)&v18);
    std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<Microsoft::WRL::ComPtr<CEffectCompilationTask>>>>::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<Microsoft::WRL::ComPtr<CEffectCompilationTask>>>>(
      v21,
      (__int64)&v16);
    v9 = *a1;
    v19 = v10;
    v18 = v9;
    std::move_backward<std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>>>,std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>>>>(
      &v16,
      (__int64 **)&v18,
      (__int64)v21,
      (__int64)v20);
    if ( v8 )
    {
      v11 = a1[3];
      do
      {
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)(*(_QWORD *)(a1[1] + 8 * ((a1[2] - 1) & (v11 >> 1))) + 8 * (v11 & 1)));
        if ( a1[4]-- == 1 )
        {
          a1[3] = 0LL;
          v11 = 0LL;
        }
        else
        {
          v11 = ++a1[3];
        }
        --v8;
      }
      while ( v8 );
    }
  }
  v14 = a1[3];
  *((_QWORD *)&v18 + 1) = 0LL;
  v19 = v14;
  *(_QWORD *)&v18 = *a1;
  std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>>>::operator+((__int64)&v18);
  return a2;
}
