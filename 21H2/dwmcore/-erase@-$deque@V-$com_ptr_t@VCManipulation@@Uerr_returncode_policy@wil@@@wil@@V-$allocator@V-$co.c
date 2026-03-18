/*
 * XREFs of ?erase@?$deque@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@2@V?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@2@0@Z @ 0x180265718
 * Callers:
 *     ?erase@?$deque@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@2@V?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@2@@Z @ 0x1802658EC (-erase@-$deque@V-$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V-$al_ea_1802658EC.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001EB80 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@@std@@QEAA@AEBV01@@Z @ 0x1800DAA4C (--0-$_Deque_const_iterator@V-$_Deque_val@U-$_Deque_simple_types@V-$ComPtr@VCEffectCompilationTas.c)
 *     ?pop_back@?$deque@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAXXZ @ 0x18021E8D0 (-pop_back@-$deque@V-$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V-$allocator@V-.c)
 *     ??$move@V?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@V12@@std@@YA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@0@V10@00@Z @ 0x180263AB4 (--$move@V-$_Deque_iterator@V-$_Deque_val@U-$_Deque_simple_types@V-$com_ptr_t@VCManipulation@@Uer.c)
 *     ??$move_backward@V?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@V12@@std@@YA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@0@V10@00@Z @ 0x180263B5C (--$move_backward@V-$_Deque_iterator@V-$_Deque_val@U-$_Deque_simple_types@V-$com_ptr_t@VCManipula.c)
 *     ??0?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@QEAA@$$QEAV01@@Z @ 0x180263C04 (--0-$_Deque_const_iterator@V-$_Deque_val@U-$_Deque_simple_types@V-$com_ptr_t@VCManipulation@@Uer.c)
 *     ??H?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@QEBA?AV01@_J@Z @ 0x180263DA4 (--H-$_Deque_iterator@V-$_Deque_val@U-$_Deque_simple_types@V-$com_ptr_t@VCManipulation@@Uerr_retu.c)
 */

_QWORD *__fastcall std::deque<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>::erase(
        __int64 **a1,
        _QWORD *a2,
        __int64 a3)
{
  __int64 v5; // r9
  __int64 *v6; // rcx
  __int64 *v7; // r10
  __int64 v8; // rdi
  __int64 *v9; // rax
  __int64 *v10; // r9
  __int64 *v11; // rdx
  bool v12; // zf
  __int64 *v13; // rax
  __int64 v14; // r10
  __int64 *v15; // rax
  __int64 *v17; // [rsp+20h] [rbp-60h] BYREF
  __int64 v18; // [rsp+28h] [rbp-58h]
  __int64 v19; // [rsp+30h] [rbp-50h]
  __int64 *v20; // [rsp+38h] [rbp-48h] BYREF
  __int64 v21; // [rsp+40h] [rbp-40h]
  __int64 *v22; // [rsp+48h] [rbp-38h]
  __int64 *v23[3]; // [rsp+50h] [rbp-30h] BYREF
  __int64 *v24[3]; // [rsp+68h] [rbp-18h] BYREF

  v18 = 0LL;
  v19 = std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<Microsoft::WRL::ComPtr<CEffectCompilationTask>>>>::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<Microsoft::WRL::ComPtr<CEffectCompilationTask>>>>(
          v24,
          a3)[2];
  if ( a1 )
    v17 = *a1;
  else
    v17 = 0LL;
  v21 = 0LL;
  v6 = (__int64 *)std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<Microsoft::WRL::ComPtr<CEffectCompilationTask>>>>::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<Microsoft::WRL::ComPtr<CEffectCompilationTask>>>>(
                    v24,
                    v5)[2];
  v22 = v6;
  if ( a1 )
    v20 = *a1;
  else
    v20 = 0LL;
  v8 = (char *)v6 - (char *)v7;
  if ( v6 == v7 )
  {
    std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>>>::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>>>(
      a2,
      (__int64)&v17);
  }
  else
  {
    if ( (__int64 *)((char *)v7 - (char *)a1[3]) >= (__int64 *)((char *)a1[4] + (_QWORD)a1[3] - (char *)v6) )
    {
      std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<Microsoft::WRL::ComPtr<CEffectCompilationTask>>>>::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<Microsoft::WRL::ComPtr<CEffectCompilationTask>>>>(
        v24,
        (__int64)&v17);
      v13 = *a1;
      v18 = 0LL;
      v17 = v13;
      v19 = v14;
      std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<Microsoft::WRL::ComPtr<CEffectCompilationTask>>>>::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<Microsoft::WRL::ComPtr<CEffectCompilationTask>>>>(
        v23,
        (__int64)&v20);
      std::move<std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>>>,std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>>>>(
        (__int64)&v20,
        v23,
        &v17,
        v24);
      do
      {
        std::deque<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>::pop_back(a1);
        --v8;
      }
      while ( v8 );
    }
    else
    {
      std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<Microsoft::WRL::ComPtr<CEffectCompilationTask>>>>::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<Microsoft::WRL::ComPtr<CEffectCompilationTask>>>>(
        v23,
        (__int64)&v20);
      std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<Microsoft::WRL::ComPtr<CEffectCompilationTask>>>>::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<Microsoft::WRL::ComPtr<CEffectCompilationTask>>>>(
        v24,
        (__int64)&v17);
      v9 = *a1;
      v21 = 0LL;
      v22 = v10;
      v20 = v9;
      std::move_backward<std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>>>,std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>>>>(
        (__int64)&v17,
        &v20,
        (__int64)v24,
        v23);
      v11 = a1[3];
      do
      {
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)(a1[1][((unsigned __int64)a1[2] - 1) & ((unsigned __int64)v11 >> 1)] + 8LL * ((unsigned __int8)v11 & 1)));
        v12 = a1[4] == (__int64 *)1;
        a1[4] = (__int64 *)((char *)a1[4] - 1);
        if ( v12 )
        {
          a1[3] = 0LL;
          v11 = 0LL;
        }
        else
        {
          a1[3] = (__int64 *)((char *)a1[3] + 1);
          v11 = a1[3];
        }
        --v8;
      }
      while ( v8 );
    }
    v15 = a1[3];
    v21 = 0LL;
    v22 = v15;
    v20 = *a1;
    std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>>>::operator+((__int64)&v20);
  }
  return a2;
}
