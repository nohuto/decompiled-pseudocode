/*
 * XREFs of ?Create@CContentResource@@SAJ_KPEAVCFlipPropertySet@@PEAPEAVCContentResourceState@@@Z @ 0x1C006D094
 * Callers:
 *     ?AddContent@CFlipManager@@QEAAJ_KPEAVCFlipPropertySet@@@Z @ 0x1C0069B7C (-AddContent@CFlipManager@@QEAAJ_KPEAVCFlipPropertySet@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0027100 (_guard_dispatch_icall_nop.c)
 *     ?Release@CFlipResource@@QEAAKXZ @ 0x1C006ADA8 (-Release@CFlipResource@@QEAAKXZ.c)
 *     ??2?$DXGQUOTAALLOCATOR@$00$0HDHCEDEG@@@SAPEAX_K@Z @ 0x1C006B0C0 (--2-$DXGQUOTAALLOCATOR@$00$0HDHCEDEG@@@SAPEAX_K@Z.c)
 *     ??0CFlipResource@@QEAA@_KPEAVCFlipPropertySet@@@Z @ 0x1C006CAE8 (--0CFlipResource@@QEAA@_KPEAVCFlipPropertySet@@@Z.c)
 *     ?Initialize@CContentResource@@IEAAJXZ @ 0x1C006D1D0 (-Initialize@CContentResource@@IEAAJXZ.c)
 */

__int64 __fastcall CContentResource::Create(__int64 a1, struct CFlipPropertySet *a2, struct CContentResourceState **a3)
{
  struct CContentResourceState *v3; // rbx
  CFlipResource *PoolWithQuotaTag; // rax
  CFlipResource *v8; // rdi
  int v9; // esi
  struct CContentResourceState *v10; // rax
  int v11; // eax

  v3 = 0LL;
  PoolWithQuotaTag = (CFlipResource *)ExAllocatePoolWithQuotaTag((POOL_TYPE)9, 0x48uLL, 0x72634346u);
  v8 = PoolWithQuotaTag;
  if ( PoolWithQuotaTag )
  {
    CFlipResource::CFlipResource(PoolWithQuotaTag, a1, a2);
    *((_QWORD *)v8 + 6) = 0LL;
    *((_QWORD *)v8 + 7) = 0LL;
    *(_QWORD *)v8 = &CContentResource::`vftable';
    *((_BYTE *)v8 + 64) = 0;
  }
  else
  {
    v8 = 0LL;
  }
  if ( v8 )
  {
    v9 = CContentResource::Initialize(v8);
    if ( v9 >= 0 )
    {
      v10 = (struct CContentResourceState *)DXGQUOTAALLOCATOR<1,1936868166>::operator new();
      v3 = v10;
      if ( v10 )
      {
        *((_QWORD *)v10 + 3) = v8;
        *(_QWORD *)v10 = &CFlipResourceState::`vftable';
        *((_BYTE *)v10 + 32) = *((_BYTE *)v10 + 32) & 0xF0 | 1;
        *((_QWORD *)v10 + 2) = (char *)v10 + 8;
        *((_QWORD *)v10 + 1) = (char *)v10 + 8;
        ++*(_DWORD *)(*((_QWORD *)v10 + 3) + 24LL);
        *((_QWORD *)v10 + 5) = 0LL;
        *((_QWORD *)v10 + 6) = 0LL;
        *((_BYTE *)v10 + 56) &= 0xFCu;
        *(_QWORD *)v10 = &CContentResourceState::`vftable';
      }
      else
      {
        v3 = 0LL;
      }
      v11 = v9;
      if ( !v3 )
        v11 = -1073741801;
      v9 = v11;
      if ( v11 >= 0 )
      {
        *a3 = v3;
        v3 = 0LL;
      }
    }
    CFlipResource::Release(v8);
    if ( v3 )
      (*(void (__fastcall **)(struct CContentResourceState *, __int64))(*(_QWORD *)v3 + 32LL))(v3, 1LL);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v9;
}
