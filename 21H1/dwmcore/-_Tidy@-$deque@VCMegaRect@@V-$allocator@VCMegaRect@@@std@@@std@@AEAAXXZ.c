/*
 * XREFs of ?_Tidy@?$deque@VCMegaRect@@V?$allocator@VCMegaRect@@@std@@@std@@AEAAXXZ @ 0x1800A1FD8
 * Callers:
 *     ?Render@CDrawListEntryBatch@@UEAAJXZ @ 0x180073B90 (-Render@CDrawListEntryBatch@@UEAAJXZ.c)
 *     ??_GCDrawListEntryBatch@@EEAAPEAXI@Z @ 0x1800A1BC8 (--_GCDrawListEntryBatch@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??R?$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z @ 0x180010584 (--R-$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180038160 (--3@YAXPEAX_K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18003AF68 (--3@YAXPEAX@Z.c)
 *     ?ReplacePrimitive@CHWDrawListEntry@@QEAA?AV?$unique_ptr@VCDrawListPrimitive@@U?$default_delete@VCDrawListPrimitive@@@std@@@std@@$$QEAV23@AEBVCMILMatrix@@@Z @ 0x180075530 (-ReplacePrimitive@CHWDrawListEntry@@QEAA-AV-$unique_ptr@VCDrawListPrimitive@@U-$default_delete@V.c)
 *     ??_GCRegion@@QEAAPEAXI@Z @ 0x1800A20EC (--_GCRegion@@QEAAPEAXI@Z.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1800BE7C0 (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::deque<CMegaRect>::_Tidy(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rdi
  void *v4; // rcx
  void *v5; // rcx
  __int64 v6; // rcx
  volatile signed __int32 **v7; // rdi
  __int64 (__fastcall ****v8)(_QWORD, __int64); // rsi
  volatile signed __int32 *v9; // rcx
  CRegion *v10; // rcx
  volatile signed __int32 *v11; // rcx
  unsigned __int64 v13; // [rsp+48h] [rbp+10h] BYREF
  void *v14; // [rsp+50h] [rbp+18h] BYREF
  __int64 (__fastcall ***v15)(_QWORD, __int64); // [rsp+58h] [rbp+20h] BYREF

  while ( 1 )
  {
    v2 = a1[4];
    if ( !v2 )
      break;
    v6 = (a1[2] - 1LL) & (a1[3] - 1LL + v2);
    v7 = *(volatile signed __int32 ***)(a1[1] + 8 * v6);
    v8 = (__int64 (__fastcall ****)(_QWORD, __int64))(v7 + 4);
    if ( v7[4] )
    {
      CHWDrawListEntry::ReplacePrimitive(*v7, (__int64 *)&v15, (__int64 *)v7 + 4, (__int64)(v7 + 5));
      if ( v15 )
        std::default_delete<CShape>::operator()(v6, v15);
    }
    if ( *v8 )
      std::default_delete<CShape>::operator()(v6, *v8);
    v9 = v7[2];
    if ( v9 )
      operator delete((void *)v9);
    v10 = (CRegion *)v7[1];
    if ( v10 )
      CRegion::`scalar deleting destructor'(v10, 1u);
    v11 = *v7;
    if ( *v7 )
    {
      *v7 = 0LL;
      if ( _InterlockedExchangeAdd(v11 + 2, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v11 + 16LL))(v11, 1LL);
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
      operator delete(v4);
  }
  v5 = (void *)a1[1];
  if ( v5 )
  {
    v13 = 8LL * a1[2];
    v14 = v5;
    if ( v13 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v14, &v13);
      v5 = v14;
    }
    operator delete(v5);
  }
  a1[2] = 0LL;
  a1[1] = 0LL;
}
