/*
 * XREFs of ?_Tidy@?$deque@VCMegaRect@@V?$allocator@VCMegaRect@@@std@@@std@@AEAAXXZ @ 0x180038010
 * Callers:
 *     ??_GCDrawListEntryBatch@@EEAAPEAXI@Z @ 0x180037D60 (--_GCDrawListEntryBatch@@EEAAPEAXI@Z.c)
 *     ?Render@CDrawListEntryBatch@@UEAAJXZ @ 0x180071390 (-Render@CDrawListEntryBatch@@UEAAJXZ.c)
 * Callees:
 *     ??R?$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z @ 0x180008B94 (--R-$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z.c)
 *     ??_GCRegion@@QEAAPEAXI@Z @ 0x180038124 (--_GCRegion@@QEAAPEAXI@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x18004F3A0 (--3@YAXPEAX_K@Z.c)
 *     ?ReplacePrimitive@CHWDrawListEntry@@QEAA?AV?$unique_ptr@VCDrawListPrimitive@@U?$default_delete@VCDrawListPrimitive@@@std@@@std@@$$QEAV23@AEBVCMILMatrix@@@Z @ 0x180072290 (-ReplacePrimitive@CHWDrawListEntry@@QEAA-AV-$unique_ptr@VCDrawListPrimitive@@U-$default_delete@V.c)
 *     ??3@YAXPEAX@Z @ 0x18009F4CC (--3@YAXPEAX@Z.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1800C4BB0 (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::deque<CMegaRect>::_Tidy(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rdi
  void *v4; // rcx
  void *v5; // rcx
  unsigned __int64 v6; // rdx
  __int64 v7; // rcx
  volatile signed __int32 **v8; // rdi
  __int64 (__fastcall ****v9)(_QWORD, __int64); // rsi
  volatile signed __int32 *v10; // rcx
  CRegion *v11; // rcx
  volatile signed __int32 *v12; // rcx
  unsigned __int64 v14; // [rsp+48h] [rbp+10h] BYREF
  void *v15; // [rsp+50h] [rbp+18h] BYREF
  __int64 (__fastcall ***v16)(_QWORD, __int64); // [rsp+58h] [rbp+20h] BYREF

  while ( 1 )
  {
    v2 = a1[4];
    if ( !v2 )
      break;
    v7 = (a1[2] - 1LL) & (a1[3] - 1LL + v2);
    v8 = *(volatile signed __int32 ***)(a1[1] + 8 * v7);
    v9 = (__int64 (__fastcall ****)(_QWORD, __int64))(v8 + 4);
    if ( v8[4] )
    {
      CHWDrawListEntry::ReplacePrimitive(*v8, &v16, v8 + 4, v8 + 5);
      if ( v16 )
        std::default_delete<CShape>::operator()(v7, v16);
    }
    if ( *v9 )
      std::default_delete<CShape>::operator()(v7, *v9);
    v10 = v8[2];
    if ( v10 )
      operator delete((void *)v10);
    v11 = (CRegion *)v8[1];
    if ( v11 )
      CRegion::`scalar deleting destructor'(v11, 1u);
    v12 = *v8;
    if ( *v8 )
    {
      *v8 = 0LL;
      if ( _InterlockedExchangeAdd(v12 + 2, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v12 + 16LL))(v12, 1LL);
    }
    if ( a1[4]-- == 1LL )
      a1[3] = 0LL;
  }
  v3 = a1[2];
  while ( v3 )
  {
    --v3;
    v4 = *(void **)(a1[1] + 8 * v3);
    if ( v4 )
      operator delete(v4, 0x70uLL);
  }
  v5 = (void *)a1[1];
  if ( v5 )
  {
    v6 = 8LL * a1[2];
    v14 = v6;
    v15 = v5;
    if ( v6 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v15, &v14);
      v6 = v14;
      v5 = v15;
    }
    operator delete(v5, v6);
  }
  a1[2] = 0LL;
  a1[1] = 0LL;
}
