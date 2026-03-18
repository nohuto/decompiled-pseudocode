/*
 * XREFs of ?clear_region@?$vector_facade@VCUnpinResource@CD3DDevice@@V?$buffer_impl@VCUnpinResource@CD3DDevice@@$06$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800059FC
 * Callers:
 *     ?erase@?$vector_facade@VCUnpinResource@CD3DDevice@@V?$buffer_impl@VCUnpinResource@CD3DDevice@@$06$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@VCUnpinResource@CD3DDevice@@@2@V?$basic_iterator@$$CBVCUnpinResource@CD3DDevice@@@2@@Z @ 0x1800059A8 (-erase@-$vector_facade@VCUnpinResource@CD3DDevice@@V-$buffer_impl@VCUnpinResource@CD3DDevice@@$0.c)
 *     ??1CD3DDevice@@MEAA@XZ @ 0x1800213C4 (--1CD3DDevice@@MEAA@XZ.c)
 * Callees:
 *     ??$destruct_range@VCUnpinResource@CD3DDevice@@@detail@@YAXPEAVCUnpinResource@CD3DDevice@@0@Z @ 0x180008A14 (--$destruct_range@VCUnpinResource@CD3DDevice@@@detail@@YAXPEAVCUnpinResource@CD3DDevice@@0@Z.c)
 *     ??$move@V?$move_iterator@PEAVCUnpinResource@CD3DDevice@@@std@@V?$checked_array_iterator@PEAVCUnpinResource@CD3DDevice@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAVCUnpinResource@CD3DDevice@@@stdext@@V?$move_iterator@PEAVCUnpinResource@CD3DDevice@@@0@0V12@@Z @ 0x180008D2C (--$move@V-$move_iterator@PEAVCUnpinResource@CD3DDevice@@@std@@V-$checked_array_iterator@PEAVCUnp.c)
 */

__int64 __fastcall detail::vector_facade<CD3DDevice::CUnpinResource,detail::buffer_impl<CD3DDevice::CUnpinResource,7,1,detail::liberal_expansion_policy>>::clear_region(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rbx
  __int64 v5; // r8
  unsigned __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 result; // rax
  __int128 v11; // [rsp+20h] [rbp-48h] BYREF
  __int64 v12; // [rsp+30h] [rbp-38h]
  __int128 v13; // [rsp+40h] [rbp-28h] BYREF
  __int64 v14; // [rsp+50h] [rbp-18h]

  v5 = *a1;
  v7 = (a1[1] - *a1) >> 5;
  v8 = a2 + a3;
  if ( a2 + a3 > v7 )
  {
    std::_Xoverflow_error("overflow");
    __debugbreak();
    goto LABEL_12;
  }
  v3 = v5 + 32 * v7;
  if ( v8 != v7 )
  {
    *(_QWORD *)&v11 = v5;
    *((_QWORD *)&v11 + 1) = v7;
    if ( !a2 )
    {
LABEL_7:
      v12 = a2;
      v13 = v11;
      v14 = a2;
      std::move<std::move_iterator<CD3DDevice::CUnpinResource *>,stdext::checked_array_iterator<CD3DDevice::CUnpinResource *>>(
        &v11,
        32 * v8 + v5,
        v3,
        &v13);
      goto LABEL_8;
    }
    if ( !v5 )
    {
LABEL_9:
      _o__invalid_parameter_noinfo_noreturn();
      __debugbreak();
      JUMPOUT(0x180005AC7LL);
    }
    if ( a2 >= 0 )
    {
      if ( v7 >= a2 )
        goto LABEL_7;
      goto LABEL_9;
    }
LABEL_12:
    if ( !a2 )
      goto LABEL_7;
    goto LABEL_9;
  }
LABEL_8:
  v9 = 32 * a3;
  result = detail::destruct_range<CD3DDevice::CUnpinResource>((CD3DDevice::CUnpinResource *)(v3 - v9));
  a1[1] -= v9;
  return result;
}
