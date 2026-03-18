/*
 * XREFs of ?BeginFigure@CPathEmitterEdge@EmitterShapes@@EEAAXUD2D_POINT_2F@@W4D2D1_FIGURE_BEGIN@@@Z @ 0x180205F90
 * Callers:
 *     <none>
 * Callees:
 *     ?_Tidy@?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@std@@@std@@@std@@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@std@@@std@@@std@@@2@@std@@AEAAXXZ @ 0x1800D5D7C (-_Tidy@-$vector@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@QEAVCInte.c)
 *     ?_Tidy@?$vector@MV?$allocator@M@std@@@std@@AEAAXXZ @ 0x180173A14 (-_Tidy@-$vector@MV-$allocator@M@std@@@std@@AEAAXXZ.c)
 *     ??$_Emplace_reallocate@AEBM@?$vector@MV?$allocator@M@std@@@std@@QEAAPEAMQEAMAEBM@Z @ 0x1801DBEF0 (--$_Emplace_reallocate@AEBM@-$vector@MV-$allocator@M@std@@@std@@QEAAPEAMQEAMAEBM@Z.c)
 *     ??$_Emplace_reallocate@AEBUfloat2@Numerics@Foundation@Windows@@@?$vector@Ufloat2@Numerics@Foundation@Windows@@V?$allocator@Ufloat2@Numerics@Foundation@Windows@@@std@@@std@@QEAAPEAUfloat2@Numerics@Foundation@Windows@@QEAU2345@AEBU2345@@Z @ 0x1801DBFE4 (--$_Emplace_reallocate@AEBUfloat2@Numerics@Foundation@Windows@@@-$vector@Ufloat2@Numerics@Founda.c)
 *     ??$_Emplace_reallocate@AEBUFigure@CPathEmitterEdge@EmitterShapes@@@?$vector@UFigure@CPathEmitterEdge@EmitterShapes@@V?$allocator@UFigure@CPathEmitterEdge@EmitterShapes@@@std@@@std@@QEAAPEAUFigure@CPathEmitterEdge@EmitterShapes@@QEAU234@AEBU234@@Z @ 0x180204D2C (--$_Emplace_reallocate@AEBUFigure@CPathEmitterEdge@EmitterShapes@@@-$vector@UFigure@CPathEmitter.c)
 *     ??0?$vector@MV?$allocator@M@std@@@std@@QEAA@AEBV01@@Z @ 0x180205A6C (--0-$vector@MV-$allocator@M@std@@@std@@QEAA@AEBV01@@Z.c)
 *     ??0?$vector@Ufloat2@Numerics@Foundation@Windows@@V?$allocator@Ufloat2@Numerics@Foundation@Windows@@@std@@@std@@QEAA@AEBV01@@Z @ 0x180205B18 (--0-$vector@Ufloat2@Numerics@Foundation@Windows@@V-$allocator@Ufloat2@Numerics@Foundation@Window.c)
 */

void __fastcall EmitterShapes::CPathEmitterEdge::BeginFigure(
        EmitterShapes::CPathEmitterEdge *this,
        struct D2D_POINT_2F a2,
        enum D2D1_FIGURE_BEGIN a3)
{
  __int64 v4; // rdx
  __int64 v5; // rdi
  int v6; // xmm0_4
  __int128 v7; // [rsp+20h] [rbp-40h] BYREF
  __int64 v8; // [rsp+30h] [rbp-30h]
  __int128 v9; // [rsp+38h] [rbp-28h] BYREF
  __int64 v10; // [rsp+48h] [rbp-18h]
  int v11; // [rsp+50h] [rbp-10h]
  struct D2D_POINT_2F v12; // [rsp+80h] [rbp+20h] BYREF
  struct D2D_POINT_2F v13; // [rsp+98h] [rbp+38h] BYREF

  v12 = a2;
  v7 = 0LL;
  v9 = 0LL;
  v13 = a2;
  v8 = 0LL;
  v10 = 0LL;
  std::vector<Windows::Foundation::Numerics::float2>::_Emplace_reallocate<Windows::Foundation::Numerics::float2 const &>(
    (__int64 *)&v7,
    0LL,
    &v13);
  v4 = *((_QWORD *)&v9 + 1);
  v12.x = 0.0;
  if ( v10 == *((_QWORD *)&v9 + 1) )
  {
    std::vector<float>::_Emplace_reallocate<float const &>((const void **)&v9, *((_BYTE **)&v9 + 1), &v12);
  }
  else
  {
    **((_DWORD **)&v9 + 1) = 0;
    *((_QWORD *)&v9 + 1) = v4 + 4;
  }
  v5 = *((_QWORD *)this + 3);
  if ( *((_QWORD *)this + 4) == v5 )
  {
    std::vector<EmitterShapes::CPathEmitterEdge::Figure>::_Emplace_reallocate<EmitterShapes::CPathEmitterEdge::Figure const &>(
      (__int64 *)this + 2,
      *((_QWORD *)this + 3),
      (__int64)&v7);
  }
  else
  {
    std::vector<Windows::Foundation::Numerics::float2>::vector<Windows::Foundation::Numerics::float2>(
      *((_QWORD **)this + 3),
      (__int64)&v7);
    std::vector<float>::vector<float>((_QWORD *)(v5 + 24), (__int64)&v9);
    v6 = v11;
    *((_QWORD *)this + 3) += 56LL;
    *(_DWORD *)(v5 + 48) = v6;
  }
  std::vector<float>::_Tidy((__int64)&v9);
  std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<CInteractionTracker * const,enum InteractionTrackerBindingModeFlags>>>>>::_Tidy((__int64)&v7);
}
