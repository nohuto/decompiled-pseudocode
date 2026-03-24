/*
 * XREFs of ?clear_region@?$vector_facade@GV?$buffer_impl@G$0BO@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x18019D388
 * Callers:
 *     ??1CDrawListEntryBuilder@@QEAA@XZ @ 0x1800575F0 (--1CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ?Draw@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@@Z @ 0x180068DB0 (-Draw@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@@Z.c)
 *     ?GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z @ 0x180094B70 (-GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z.c)
 *     ?ResetAccumulationBuffers@CDrawListEntryBuilder@@AEAAXXZ @ 0x1800BA254 (-ResetAccumulationBuffers@CDrawListEntryBuilder@@AEAAXXZ.c)
 * Callees:
 *     ??$move@V?$move_iterator@PEAG@std@@V?$checked_array_iterator@PEAG@stdext@@@std@@YA?AV?$checked_array_iterator@PEAG@stdext@@V?$move_iterator@PEAG@0@0V12@@Z @ 0x18019C640 (--$move@V-$move_iterator@PEAG@std@@V-$checked_array_iterator@PEAG@stdext@@@std@@YA-AV-$checked_a.c)
 */

__int64 __fastcall detail::vector_facade<unsigned short,detail::buffer_impl<unsigned short,30,1,detail::liberal_expansion_policy>>::clear_region(
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
  bool v12; // sf
  __int64 result; // rax
  __int128 v14; // [rsp+20h] [rbp-48h] BYREF
  __int64 v15; // [rsp+30h] [rbp-38h]
  __int128 v16; // [rsp+40h] [rbp-28h] BYREF
  __int64 v17; // [rsp+50h] [rbp-18h]

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
  v11 = v5 + 2 * v8;
  if ( !v10 )
  {
    *(_QWORD *)&v14 = v5;
    *((_QWORD *)&v14 + 1) = v8;
    v12 = a2 < 0;
    if ( a2 )
    {
      if ( !v5 )
      {
LABEL_11:
        _o__invalid_parameter_noinfo_noreturn(v7, a2);
        __debugbreak();
LABEL_12:
        v15 = a2;
        v16 = v14;
        v17 = a2;
        std::move<std::move_iterator<unsigned short *>,stdext::checked_array_iterator<unsigned short *>>(
          (__int64)&v14,
          (const void *)(v5 + 2 * v7),
          v11,
          (__int64 *)&v16);
        v3 = a1[1];
        goto LABEL_13;
      }
      v12 = a2 < 0;
    }
    if ( (!v12 || !a2) && (a2 <= 0 || v8 >= a2) )
      goto LABEL_12;
    goto LABEL_11;
  }
LABEL_13:
  result = 2 * a3;
  a1[1] = v3 - 2 * a3;
  return result;
}
