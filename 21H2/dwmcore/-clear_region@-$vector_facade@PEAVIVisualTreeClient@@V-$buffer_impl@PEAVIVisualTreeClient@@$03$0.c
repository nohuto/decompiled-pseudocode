/*
 * XREFs of ?clear_region@?$vector_facade@PEAVIVisualTreeClient@@V?$buffer_impl@PEAVIVisualTreeClient@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800266D4
 * Callers:
 *     ?RemoveTreeClient@CVisualTree@@QEAAXPEAVIVisualTreeClient@@@Z @ 0x180026678 (-RemoveTreeClient@CVisualTree@@QEAAXPEAVIVisualTreeClient@@@Z.c)
 *     ??1CVisualTree@@UEAA@XZ @ 0x180044294 (--1CVisualTree@@UEAA@XZ.c)
 * Callees:
 *     ??$uninitialized_copy@V?$move_iterator@PEAPEAUIDXGIResource@@@std@@V?$checked_array_iterator@PEAPEAUIDXGIResource@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAPEAUIDXGIResource@@@stdext@@V?$move_iterator@PEAPEAUIDXGIResource@@@0@0V12@@Z @ 0x180154E48 (--$uninitialized_copy@V-$move_iterator@PEAPEAUIDXGIResource@@@std@@V-$checked_array_iterator@PEA.c)
 */

__int64 __fastcall detail::vector_facade<IVisualTreeClient *,detail::buffer_impl<IVisualTreeClient *,4,1,detail::liberal_expansion_policy>>::clear_region(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // r10
  __int64 v5; // r11
  __int64 v6; // r9
  __int64 v7; // rcx
  unsigned __int64 v8; // r9
  bool v10; // zf
  __int64 v11; // r8
  __int64 result; // rax
  bool v13; // sf
  __int128 v14; // [rsp+20h] [rbp-48h] BYREF
  __int64 v15; // [rsp+30h] [rbp-38h]
  __int128 v16; // [rsp+40h] [rbp-28h] BYREF
  __int64 v17; // [rsp+50h] [rbp-18h]

  v3 = a1[1];
  v5 = *a1;
  v6 = v3 - *a1;
  v7 = a2 + a3;
  v8 = v6 >> 3;
  v10 = a2 + a3 == v8;
  if ( a2 + a3 > v8 )
  {
    std::_Xoverflow_error("overflow");
    __debugbreak();
LABEL_5:
    *(_QWORD *)&v14 = v5;
    *((_QWORD *)&v14 + 1) = v8;
    v13 = a2 < 0;
    if ( a2 )
    {
      if ( !v5 )
      {
LABEL_12:
        _o__invalid_parameter_noinfo_noreturn(v7, a2);
        __debugbreak();
LABEL_13:
        v15 = a2;
        v16 = v14;
        v17 = a2;
        std::uninitialized_copy<std::move_iterator<IDXGIResource * *>,stdext::checked_array_iterator<IDXGIResource * *>>(
          &v14,
          v5 + 8 * v7,
          v11,
          &v16);
        v3 = a1[1];
        goto LABEL_3;
      }
      v13 = a2 < 0;
    }
    if ( (!v13 || !a2) && (a2 <= 0 || v8 >= a2) )
      goto LABEL_13;
    goto LABEL_12;
  }
  v11 = v5 + 8 * v8;
  if ( !v10 )
    goto LABEL_5;
LABEL_3:
  result = 8 * a3;
  a1[1] = v3 - 8 * a3;
  return result;
}
