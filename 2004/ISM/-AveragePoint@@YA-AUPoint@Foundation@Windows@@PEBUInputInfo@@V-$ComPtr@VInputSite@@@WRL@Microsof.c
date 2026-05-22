/*
 * XREFs of ?AveragePoint@@YA?AUPoint@Foundation@Windows@@PEBUInputInfo@@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@Z @ 0x18017E110
 * Callers:
 *     ?DeliverInput@MagnifierGestureTarget@@UEAAJPEAUInputInfo@@@Z @ 0x18017E230 (-DeliverInput@MagnifierGestureTarget@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?DeliverInput@MagnifierToggleTarget@@UEAAJPEAUInputInfo@@@Z @ 0x18017E3C0 (-DeliverInput@MagnifierToggleTarget@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_J@Z @ 0x180097598 (--0-$extent_type@$0-0@details@gsl@@QEAA@_J@Z.c)
 *     ?GetRelativePoint@InputSite@@QEAA?AV?$tuple@UPoint@Foundation@Windows@@_N@std@@AEBUtagPOINT@@@Z @ 0x1800F0CC0 (-GetRelativePoint@InputSite@@QEAA-AV-$tuple@UPoint@Foundation@Windows@@_N@std@@AEBUtagPOINT@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AveragePoint(__int64 a1, __int64 *a2)
{
  __int64 v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // rcx
  int v6; // edx
  int v7; // r9d
  int v8; // r10d
  __int64 RelativePoint; // rax
  float v10; // xmm0_4
  float v11; // xmm1_4
  __int64 v12; // rcx
  __int64 v14[2]; // [rsp+20h] [rbp-10h] BYREF
  unsigned __int64 v15; // [rsp+50h] [rbp+20h] BYREF
  __int64 *v16; // [rsp+58h] [rbp+28h]
  __int64 v17; // [rsp+60h] [rbp+30h]

  v16 = a2;
  v15 = 0LL;
  v17 = 0LL;
  v3 = a1 + 216;
  gsl::details::extent_type<-1>::extent_type<-1>(v14, *(unsigned int *)(a1 + 212));
  if ( v14[0] < 0 || !v3 && v14[0] )
  {
    _o_terminate(v4);
    return AveragePoint_::_1_::dtor_0();
  }
  else
  {
    v5 = v3 + 144 * v14[0];
    v6 = 0;
    v7 = HIDWORD(v15);
    if ( v3 != v5 )
    {
      v6 = v15;
      do
      {
        v6 += *(_DWORD *)(v3 + 48);
        v7 += *(_DWORD *)(v3 + 52);
        v3 += 144LL;
      }
      while ( v3 != v5 );
    }
    v8 = v6 / SLODWORD(v14[0]);
    LODWORD(v15) = v6 / SLODWORD(v14[0]);
    HIDWORD(v15) = v7 / SLODWORD(v14[0]);
    if ( *a2 )
    {
      RelativePoint = InputSite::GetRelativePoint(*a2, (__int64)v14, (int *)&v15);
      v10 = *(float *)(RelativePoint + 4);
      *(float *)&v17 = v10;
      v11 = *(float *)(RelativePoint + 8);
    }
    else
    {
      v10 = (float)v8;
      *(float *)&v17 = (float)v8;
      v11 = (float)(v7 / SLODWORD(v14[0]));
    }
    *((float *)&v17 + 1) = v11;
    v15 = __PAIR64__(LODWORD(v11), LODWORD(v10));
    v12 = *a2;
    if ( *a2 )
    {
      *a2 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    }
    return v15;
  }
}
