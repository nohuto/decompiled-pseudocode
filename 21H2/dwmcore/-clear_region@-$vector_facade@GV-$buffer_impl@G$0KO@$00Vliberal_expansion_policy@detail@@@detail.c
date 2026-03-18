/*
 * XREFs of ?clear_region@?$vector_facade@GV?$buffer_impl@G$0KO@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1801E37E0
 * Callers:
 *     ?Draw@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@@Z @ 0x18005AAF0 (-Draw@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@@Z.c)
 *     ??1CDrawListEntryBuilder@@QEAA@XZ @ 0x1800AF764 (--1CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ?Begin@CDrawListEntryBuilder@@QEAAXAEBUDrawListEntryBuilderSetupParams@@PEAVCRenderingEffect@@@Z @ 0x1800CCFF0 (-Begin@CDrawListEntryBuilder@@QEAAXAEBUDrawListEntryBuilderSetupParams@@PEAVCRenderingEffect@@@Z.c)
 * Callees:
 *     ??$move@V?$move_iterator@PEAG@std@@V?$checked_array_iterator@PEAG@stdext@@@std@@YA?AV?$checked_array_iterator@PEAG@stdext@@V?$move_iterator@PEAG@0@0V12@@Z @ 0x1801E2700 (--$move@V-$move_iterator@PEAG@std@@V-$checked_array_iterator@PEAG@stdext@@@std@@YA-AV-$checked_a.c)
 */

__int64 __fastcall detail::vector_facade<unsigned short,detail::buffer_impl<unsigned short,174,1,detail::liberal_expansion_policy>>::clear_region(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // r9
  __int64 v5; // r10
  __int64 v6; // rax
  __int64 v7; // rcx
  unsigned __int64 v8; // rax
  bool v10; // zf
  __int64 result; // rax
  __int128 v12; // [rsp+20h] [rbp-48h] BYREF
  __int64 v13; // [rsp+30h] [rbp-38h]
  __int128 v14; // [rsp+40h] [rbp-28h] BYREF
  __int64 v15; // [rsp+50h] [rbp-18h]

  v3 = a1[1];
  v5 = *a1;
  v6 = v3 - *a1;
  v7 = a2 + a3;
  v8 = v6 >> 1;
  v10 = a2 + a3 == v8;
  if ( a2 + a3 > v8 )
  {
    std::_Xoverflow_error("overflow");
    __debugbreak();
  }
  if ( !v10 )
  {
    *(_QWORD *)&v12 = v5;
    *((_QWORD *)&v12 + 1) = v8;
    if ( a2 && (!v5 || a2 < 0 || v8 < a2) )
    {
      _o__invalid_parameter_noinfo_noreturn(v7);
      __debugbreak();
      JUMPOUT(0x1801E38A1LL);
    }
    v13 = a2;
    v14 = v12;
    v15 = a2;
    std::move<std::move_iterator<unsigned short *>,stdext::checked_array_iterator<unsigned short *>>(
      (__int64)&v12,
      (const void *)(v5 + 2 * v7),
      v5 + 2 * v8,
      (__int64 *)&v14);
    v3 = a1[1];
  }
  result = 2 * a3;
  a1[1] = v3 - 2 * a3;
  return result;
}
