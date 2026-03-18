/*
 * XREFs of ?clear_region@?$vector_facade@VCUnpinResource@CD3DDevice@@V?$buffer_impl@VCUnpinResource@CD3DDevice@@$06$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x18023F150
 * Callers:
 *     ??1CD3DDevice@@MEAA@XZ @ 0x1800AFA10 (--1CD3DDevice@@MEAA@XZ.c)
 *     ?erase@?$vector_facade@VCUnpinResource@CD3DDevice@@V?$buffer_impl@VCUnpinResource@CD3DDevice@@$06$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@VCUnpinResource@CD3DDevice@@@2@V?$basic_iterator@$$CBVCUnpinResource@CD3DDevice@@@2@@Z @ 0x18023F35C (-erase@-$vector_facade@VCUnpinResource@CD3DDevice@@V-$buffer_impl@VCUnpinResource@CD3DDevice@@$0.c)
 * Callees:
 *     ??$destruct_range@VCUnpinResource@CD3DDevice@@@detail@@YAXPEAVCUnpinResource@CD3DDevice@@0@Z @ 0x18023B6CC (--$destruct_range@VCUnpinResource@CD3DDevice@@@detail@@YAXPEAVCUnpinResource@CD3DDevice@@0@Z.c)
 *     ??$move@V?$move_iterator@PEAVCUnpinResource@CD3DDevice@@@std@@V?$checked_array_iterator@PEAVCUnpinResource@CD3DDevice@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAVCUnpinResource@CD3DDevice@@@stdext@@V?$move_iterator@PEAVCUnpinResource@CD3DDevice@@@0@0V12@@Z @ 0x18023B704 (--$move@V-$move_iterator@PEAVCUnpinResource@CD3DDevice@@@std@@V-$checked_array_iterator@PEAVCUnp.c)
 */

void __fastcall detail::vector_facade<CD3DDevice::CUnpinResource,detail::buffer_impl<CD3DDevice::CUnpinResource,7,1,detail::liberal_expansion_policy>>::clear_region(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // r8
  unsigned __int64 v6; // r9
  __int64 v7; // rcx
  char *v8; // rbx
  bool v9; // sf
  __int64 v10; // rdi
  __int128 v11; // [rsp+20h] [rbp-48h] BYREF
  __int64 v12; // [rsp+30h] [rbp-38h]
  __int128 v13; // [rsp+40h] [rbp-28h] BYREF
  __int64 v14; // [rsp+50h] [rbp-18h]

  v4 = *a1;
  v6 = (a1[1] - *a1) >> 4;
  v7 = a2 + a3;
  if ( a2 + a3 > v6 )
  {
    std::_Xoverflow_error("overflow");
    __debugbreak();
  }
  v8 = (char *)(v4 + 16 * v6);
  if ( v7 != v6 )
  {
    *(_QWORD *)&v11 = v4;
    *((_QWORD *)&v11 + 1) = v6;
    v9 = a2 < 0;
    if ( a2 )
    {
      if ( !v4 )
      {
LABEL_11:
        _o__invalid_parameter_noinfo_noreturn(v7, a2);
        __debugbreak();
LABEL_12:
        v12 = a2;
        v13 = v11;
        v14 = a2;
        std::move<std::move_iterator<CD3DDevice::CUnpinResource *>,stdext::checked_array_iterator<CD3DDevice::CUnpinResource *>>(
          (__int64)&v11,
          (char *)(v4 + 16 * v7),
          v8,
          &v13);
        goto LABEL_13;
      }
      v9 = a2 < 0;
    }
    if ( (!v9 || !a2) && (a2 <= 0 || v6 >= a2) )
      goto LABEL_12;
    goto LABEL_11;
  }
LABEL_13:
  v10 = 16 * a3;
  detail::destruct_range<CD3DDevice::CUnpinResource>((__int64 *)&v8[-v10], (__int64 *)v8);
  a1[1] -= v10;
}
