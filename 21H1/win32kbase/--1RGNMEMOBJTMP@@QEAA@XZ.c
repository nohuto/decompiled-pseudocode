/*
 * XREFs of ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0074EF0
 * Callers:
 *     ?bCopy@RGNOBJAPI@@QEAAHAEAVRGNOBJ@@@Z @ 0x1C0016C30 (-bCopy@RGNOBJAPI@@QEAAHAEAVRGNOBJ@@@Z.c)
 *     ?bExpand@RGNOBJ@@QEAAHK@Z @ 0x1C0032EF0 (-bExpand@RGNOBJ@@QEAAHK@Z.c)
 *     EngUpdateDeviceSurface @ 0x1C004A300 (EngUpdateDeviceSurface.c)
 *     ?InternalCombine@CRegion@@QEAAJAEBV1@W4CombineMode@1@@Z @ 0x1C0074628 (-InternalCombine@CRegion@@QEAAJAEBV1@W4CombineMode@1@@Z.c)
 *     ?AddRect@CRegion@@UEAAJAEBUtagRECT@@@Z @ 0x1C00747B0 (-AddRect@CRegion@@UEAAJAEBUtagRECT@@@Z.c)
 *     ?bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z @ 0x1C0075008 (-bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z.c)
 *     ?bCopy@RGNOBJ@@QEAAHAEAV1@@Z @ 0x1C0075C60 (-bCopy@RGNOBJ@@QEAAHAEAV1@@Z.c)
 *     GreExtCreateRegion @ 0x1C0076840 (GreExtCreateRegion.c)
 *     ?bCompute@DC@@QEAAHXZ @ 0x1C0078690 (-bCompute@DC@@QEAAHXZ.c)
 *     ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x1C0079500 (-iCombine@DC@@QEAAJPEAU_RECTL@@J@Z.c)
 *     ?bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z @ 0x1C007A650 (-bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z.c)
 *     GreCombineRgn @ 0x1C007DB50 (GreCombineRgn.c)
 *     ?bCreate@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEAVEXFORMOBJ@@@Z @ 0x1C00C43F0 (-bCreate@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEAVEXFORMOBJ@@@Z.c)
 *     ?iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z @ 0x1C00C52FC (-iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z @ 0x1C014A6C0 (-iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z.c)
 *     GreIntersectVisRect @ 0x1C0155C90 (GreIntersectVisRect.c)
 * Callees:
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C008BC60 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     ?Free@?$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1C0129144 (-Free@-$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 */

void __fastcall RGNMEMOBJTMP::~RGNMEMOBJTMP(RGNMEMOBJTMP *this)
{
  __int64 v1; // rbx
  __int64 *v3; // rdi
  __int64 *v4; // rax
  __int64 **v5; // rcx
  __int64 v6; // rdi
  void *v7; // rbp
  int v8; // eax
  unsigned __int8 *v9; // rcx

  v1 = *(_QWORD *)this;
  if ( *(_QWORD *)this )
  {
    v3 = (__int64 *)(v1 + 48);
    if ( v1 != -48 )
    {
      KeEnterCriticalRegion();
      v4 = (__int64 *)*v3;
      if ( *(__int64 **)(*v3 + 8) != v3 || (v5 = *(__int64 ***)(v1 + 56), *v5 != v3) )
        __fastfail(3u);
      *v5 = v4;
      v4[1] = (__int64)v5;
      *(_QWORD *)(v1 + 56) = v1 + 48;
      *v3 = (__int64)v3;
      KeLeaveCriticalRegion();
      v1 = *(_QWORD *)this;
    }
    if ( v1 && (struct REGION *)v1 != prgnDefault )
    {
      v6 = *(_QWORD *)(v1 + 88);
      if ( v6 )
      {
        if ( *(_DWORD *)(v1 + 24) == 112 )
        {
          v7 = RGNMEMOBJ::s_pSCANLookAsideList;
          if ( qword_1C0258C20 )
            v8 = qword_1C0258C20();
          else
            v8 = -1073741637;
          if ( v8 >= 0 && qword_1C0258C28 )
            qword_1C0258C28(v7, v6);
        }
        else if ( *(_DWORD *)(v1 + 24) > 0x70u )
        {
          Win32FreePool(*(_QWORD *)(v1 + 88));
        }
        *(_QWORD *)(v1 + 88) = 0LL;
      }
      v9 = gpTypeIsolation[7];
      if ( v9 )
        NSInstrumentation::CTypeIsolation<28672,112>::Free(v9, v1);
    }
  }
  *(_QWORD *)this = 0LL;
  if ( *((_DWORD *)this + 2) == 1 )
  {
    REGION::vDeleteREGION(0LL);
    *(_QWORD *)this = 0LL;
  }
}
