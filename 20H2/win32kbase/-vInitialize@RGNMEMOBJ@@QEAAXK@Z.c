/*
 * XREFs of ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x1C003C344
 * Callers:
 *     EngUpdateDeviceSurface @ 0x1C000AD60 (EngUpdateDeviceSurface.c)
 *     ?InternalCombine@CRegion@@QEAAJAEBV1@W4CombineMode@1@@Z @ 0x1C001CED8 (-InternalCombine@CRegion@@QEAAJAEBV1@W4CombineMode@1@@Z.c)
 *     ?AddRect@CRegion@@UEAAJAEBUtagRECT@@@Z @ 0x1C001D060 (-AddRect@CRegion@@UEAAJAEBUtagRECT@@@Z.c)
 *     ?iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z @ 0x1C0037960 (-iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z.c)
 *     ?bCopy@RGNOBJ@@QEAAHAEAV1@@Z @ 0x1C0037E20 (-bCopy@RGNOBJ@@QEAAHAEAV1@@Z.c)
 *     ?bCompute@DC@@QEAAHXZ @ 0x1C0039050 (-bCompute@DC@@QEAAHXZ.c)
 *     ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x1C003A380 (-iCombine@DC@@QEAAJPEAU_RECTL@@J@Z.c)
 *     ??0RGNMEMOBJ@@QEAA@K@Z @ 0x1C003C320 (--0RGNMEMOBJ@@QEAA@K@Z.c)
 *     ?bExpand@RGNOBJ@@QEAAHK@Z @ 0x1C003CA50 (-bExpand@RGNOBJ@@QEAAHK@Z.c)
 *     ?bSetDefaultRegion@DC@@QEAAHXZ @ 0x1C003ECA0 (-bSetDefaultRegion@DC@@QEAAHXZ.c)
 *     GreExtCreateRegion @ 0x1C005B540 (GreExtCreateRegion.c)
 *     ?bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z @ 0x1C005C9E4 (-bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z.c)
 *     ?bCopy@RGNOBJAPI@@QEAAHAEAVRGNOBJ@@@Z @ 0x1C0090190 (-bCopy@RGNOBJAPI@@QEAAHAEAVRGNOBJ@@@Z.c)
 *     ??0RGNMEMOBJ@@QEAA@W4DestructorDisposition@0@@Z @ 0x1C00A4380 (--0RGNMEMOBJ@@QEAA@W4DestructorDisposition@0@@Z.c)
 *     ?bCreate@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEAVEXFORMOBJ@@@Z @ 0x1C00C3F90 (-bCreate@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEAVEXFORMOBJ@@@Z.c)
 *     ?iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z @ 0x1C00C4CFC (-iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z @ 0x1C0141EE0 (-iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z.c)
 *     ?vDuplicateAndScaleRegion@@YAXPEAVREGION@@PEAPEAV1@VPOINTFL@@@Z @ 0x1C01422A4 (-vDuplicateAndScaleRegion@@YAXPEAVREGION@@PEAPEAV1@VPOINTFL@@@Z.c)
 *     EngCreateClip @ 0x1C014D2B0 (EngCreateClip.c)
 *     GreIntersectVisRect @ 0x1C014D3A0 (GreIntersectVisRect.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C003C5B0 (PALLOCMEM2.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C003C850 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 *     ?Allocate@?$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1C014021C (-Allocate@-$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAPEAXXZ.c)
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
      if ( qword_1C0250C50 )
        v6 = qword_1C0250C50();
      else
        v6 = -1073741637;
      if ( v6 >= 0 && qword_1C0250C58 )
        v7 = qword_1C0250C58(v5);
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
