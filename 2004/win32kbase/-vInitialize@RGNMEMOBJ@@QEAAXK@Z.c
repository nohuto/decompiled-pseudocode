/*
 * XREFs of ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x1C0080B34
 * Callers:
 *     ?InternalCombine@CRegion@@QEAAJAEBV1@W4CombineMode@1@@Z @ 0x1C0014CE8 (-InternalCombine@CRegion@@QEAAJAEBV1@W4CombineMode@1@@Z.c)
 *     ?AddRect@CRegion@@UEAAJAEBUtagRECT@@@Z @ 0x1C0014E70 (-AddRect@CRegion@@UEAAJAEBUtagRECT@@@Z.c)
 *     ?bCopy@RGNOBJAPI@@QEAAHAEAVRGNOBJ@@@Z @ 0x1C00266F0 (-bCopy@RGNOBJAPI@@QEAAHAEAVRGNOBJ@@@Z.c)
 *     ??0RGNMEMOBJ@@QEAA@W4DestructorDisposition@0@@Z @ 0x1C00434F0 (--0RGNMEMOBJ@@QEAA@W4DestructorDisposition@0@@Z.c)
 *     EngUpdateDeviceSurface @ 0x1C0058010 (EngUpdateDeviceSurface.c)
 *     ?bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z @ 0x1C007A854 (-bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z.c)
 *     ?iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z @ 0x1C007B2B0 (-iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z.c)
 *     ?bCopy@RGNOBJ@@QEAAHAEAV1@@Z @ 0x1C007B770 (-bCopy@RGNOBJ@@QEAAHAEAV1@@Z.c)
 *     GreExtCreateRegion @ 0x1C007C1C0 (GreExtCreateRegion.c)
 *     ?bCompute@DC@@QEAAHXZ @ 0x1C007E030 (-bCompute@DC@@QEAAHXZ.c)
 *     ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x1C007F4C0 (-iCombine@DC@@QEAAJPEAU_RECTL@@J@Z.c)
 *     ??0RGNMEMOBJ@@QEAA@K@Z @ 0x1C0080B10 (--0RGNMEMOBJ@@QEAA@K@Z.c)
 *     ?bExpand@RGNOBJ@@QEAAHK@Z @ 0x1C00812E0 (-bExpand@RGNOBJ@@QEAAHK@Z.c)
 *     ?bCreate@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEAVEXFORMOBJ@@@Z @ 0x1C00C4BF0 (-bCreate@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEAVEXFORMOBJ@@@Z.c)
 *     ?iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z @ 0x1C00C5AFC (-iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z @ 0x1C0144370 (-iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z.c)
 *     ?vDuplicateAndScaleRegion@@YAXPEAVREGION@@PEAPEAV1@VPOINTFL@@@Z @ 0x1C0144734 (-vDuplicateAndScaleRegion@@YAXPEAVREGION@@PEAPEAV1@VPOINTFL@@@Z.c)
 *     EngCreateClip @ 0x1C014F740 (EngCreateClip.c)
 *     GreIntersectVisRect @ 0x1C014F940 (GreIntersectVisRect.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C0080D68 (PALLOCMEM2.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C0081030 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 *     ?Allocate@?$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1C01426FC (-Allocate@-$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAPEAXXZ.c)
 */

void __fastcall RGNMEMOBJ::vInitialize(RGNMEMOBJ *this, unsigned int a2)
{
  unsigned int v3; // edi
  __int64 v4; // rbx
  void *v5; // rbp
  int v6; // eax
  __int64 v7; // rax
  _DWORD *v8; // rax
  _QWORD *v9; // rax

  v3 = 112;
  if ( a2 >= 0x70 )
    v3 = a2;
  if ( gpTypeIsolation[7] )
    v4 = NSInstrumentation::CTypeIsolation<28672,112>::Allocate();
  else
    v4 = 0LL;
  if ( v4 )
  {
    if ( v3 == 112 )
    {
      v5 = RGNMEMOBJ::s_pSCANLookAsideList;
      if ( qword_1C0252C50 )
        v6 = qword_1C0252C50();
      else
        v6 = -1073741637;
      if ( v6 >= 0 && qword_1C0252C58 )
        v7 = qword_1C0252C58(v5);
      else
        v7 = 0LL;
    }
    else
    {
      v7 = PALLOCMEM2(v3);
    }
    *(_QWORD *)(v4 + 88) = v7;
    if ( !*(_QWORD *)(v4 + 88) )
    {
      REGION::vDeleteREGION((REGION *)v4);
      v4 = 0LL;
    }
  }
  *(_QWORD *)this = v4;
  if ( v4 )
  {
    *(_DWORD *)(v4 + 96) = 0;
    *(_DWORD *)(v4 + 100) = 0;
    *(_DWORD *)(v4 + 104) = 0;
    *(_DWORD *)(v4 + 108) = 0;
    v8 = *(_DWORD **)(v4 + 88);
    *(_DWORD *)(v4 + 80) = 16;
    *(_DWORD *)(v4 + 84) = 1;
    *v8 = 0;
    v8[3] = 0;
    v8[1] = 0x80000000;
    v8[2] = 0x7FFFFFFF;
    *(_QWORD *)(v4 + 40) = v8 + 4;
    *(_DWORD *)(*(_QWORD *)this + 24LL) = v3;
    *(_DWORD *)(*(_QWORD *)this + 32LL) = 0;
    *(_DWORD *)(*(_QWORD *)this + 28LL) = 0;
    *(_DWORD *)(*(_QWORD *)this + 36LL) = 0;
    v9 = (_QWORD *)(*(_QWORD *)this + 48LL);
    v9[1] = v9;
    *v9 = v9;
  }
}
