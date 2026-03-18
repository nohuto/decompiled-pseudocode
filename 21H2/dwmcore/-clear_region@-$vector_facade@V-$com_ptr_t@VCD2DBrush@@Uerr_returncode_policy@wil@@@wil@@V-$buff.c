/*
 * XREFs of ?clear_region@?$vector_facade@V?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@V?$buffer_impl@V?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x18003E0F8
 * Callers:
 *     ??1CGradientSource@@MEAA@XZ @ 0x180040894 (--1CGradientSource@@MEAA@XZ.c)
 *     ?FindExistingGradient@CGradientSource@@IEAA_NPEAVCD3DDevice@@_NAEBVRetrievalParams@1@@Z @ 0x1800AD330 (-FindExistingGradient@CGradientSource@@IEAA_NPEAVCD3DDevice@@_NAEBVRetrievalParams@1@@Z.c)
 *     ?NotifyInvalidResource@CGradientSource@@MEAAXPEBVIDeviceResource@@@Z @ 0x18023A750 (-NotifyInvalidResource@CGradientSource@@MEAAXPEBVIDeviceResource@@@Z.c)
 * Callees:
 *     ??$destruct_range@V?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@detail@@YAXPEAV?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@0@Z @ 0x18003E3A0 (--$destruct_range@V-$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@detail@@YAXPEAV-$c.c)
 *     ??$move@V?$move_iterator@PEAV?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@std@@V?$checked_array_iterator@PEAV?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAV?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdext@@V?$move_iterator@PEAV?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@0@0V12@@Z @ 0x18023A244 (--$move@V-$move_iterator@PEAV-$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@std@@V-$.c)
 */

__int64 __fastcall detail::vector_facade<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy>,detail::buffer_impl<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy>,2,1,detail::liberal_expansion_policy>>::clear_region(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rdi
  __int64 v4; // r9
  __int64 v7; // rax
  __int64 v8; // rcx
  unsigned __int64 v9; // rax
  __int64 v10; // rbx
  __int64 result; // rax
  __int128 v12; // [rsp+20h] [rbp-48h] BYREF
  __int64 v13; // [rsp+30h] [rbp-38h]
  __int128 v14; // [rsp+40h] [rbp-28h] BYREF
  __int64 v15; // [rsp+50h] [rbp-18h]

  v4 = *a1;
  v7 = a1[1] - *a1;
  v8 = a2 + a3;
  v9 = v7 >> 3;
  if ( a2 + a3 > v9 )
  {
    std::_Xoverflow_error("overflow");
    __debugbreak();
  }
  else
  {
    v3 = v4 + 8 * v9;
    if ( a2 + a3 == v9 )
      goto LABEL_3;
  }
  *(_QWORD *)&v12 = v4;
  *((_QWORD *)&v12 + 1) = v9;
  if ( a2 && (!v4 || a2 < 0 || v9 < a2) )
  {
    _o__invalid_parameter_noinfo_noreturn(v8);
    __debugbreak();
    JUMPOUT(0x18012E33CLL);
  }
  v13 = a2;
  v14 = v12;
  v15 = a2;
  std::move<std::move_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>,stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>>(
    &v12,
    v4 + 8 * v8,
    v3,
    &v14);
LABEL_3:
  v10 = 8 * a3;
  result = detail::destruct_range<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy>>((void *)(v3 - v10));
  a1[1] -= v10;
  return result;
}
