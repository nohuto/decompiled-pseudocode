/*
 * XREFs of ?Create@CContentResource@@SAJ_KPEAVCFlipPropertySet@@PEAPEAVCContentResourceState@@@Z @ 0x1C0081124
 * Callers:
 *     ?AddContent@CFlipManager@@QEAAJ_KPEAVCFlipPropertySet@@@Z @ 0x1C007C3EC (-AddContent@CFlipManager@@QEAAJ_KPEAVCFlipPropertySet@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?Release@CFlipResource@@QEAAKXZ @ 0x1C007BF68 (-Release@CFlipResource@@QEAAKXZ.c)
 *     ??0CFlipResource@@QEAA@_KPEAVCFlipPropertySet@@@Z @ 0x1C007ED28 (--0CFlipResource@@QEAA@_KPEAVCFlipPropertySet@@@Z.c)
 *     ??2?$DXGQUOTAALLOCATOR@$0BAA@$0HDHCEDEG@@@SAPEAX_K@Z @ 0x1C007F548 (--2-$DXGQUOTAALLOCATOR@$0BAA@$0HDHCEDEG@@@SAPEAX_K@Z.c)
 *     ?Initialize@CContentResource@@IEAAJXZ @ 0x1C008124C (-Initialize@CContentResource@@IEAAJXZ.c)
 */

__int64 __fastcall CContentResource::Create(
        __int64 a1,
        struct CFlipPropertySet *a2,
        struct CContentResourceState **a3,
        __int64 a4)
{
  CFlipResource *Pool2; // rax
  CFlipResource *v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // edi
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  __int64 v15; // rdx
  char v16; // cl
  __int64 v17; // rax

  Pool2 = (CFlipResource *)ExAllocatePool2(257LL, 72LL, 1919107910LL, a4);
  v8 = Pool2;
  if ( Pool2 )
  {
    CFlipResource::CFlipResource(Pool2, a1, a2);
    *((_QWORD *)v8 + 6) = 0LL;
    *((_QWORD *)v8 + 7) = 0LL;
    *(_QWORD *)v8 = &CContentResource::`vftable';
    *((_WORD *)v8 + 32) = 0;
    v11 = CContentResource::Initialize(v8);
    if ( v11 >= 0 )
    {
      v14 = DXGQUOTAALLOCATOR<256,1936868166>::operator new(v10, v9, v12, v13);
      v15 = v14;
      if ( v14 )
      {
        v16 = *(_BYTE *)(v14 + 32);
        *(_QWORD *)v14 = &CFlipResourceState::`vftable';
        *(_QWORD *)(v14 + 24) = v8;
        *(_BYTE *)(v14 + 32) = v16 & 0xF0 | 1;
        *(_QWORD *)(v14 + 16) = v14 + 8;
        *(_QWORD *)(v14 + 8) = v14 + 8;
        v17 = *(_QWORD *)(v14 + 24);
        *a3 = (struct CContentResourceState *)v15;
        ++*(_DWORD *)(v17 + 24);
        *(_QWORD *)(v15 + 40) = 0LL;
        *(_QWORD *)(v15 + 48) = 0LL;
        *(_QWORD *)(v15 + 56) = 0LL;
        *(_BYTE *)(v15 + 64) &= 0xFCu;
        *(_QWORD *)v15 = &CContentResourceState::`vftable';
      }
      else
      {
        v11 = -1073741801;
      }
    }
    CFlipResource::Release(v8);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v11;
}
