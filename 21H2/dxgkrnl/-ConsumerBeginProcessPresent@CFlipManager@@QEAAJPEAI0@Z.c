/*
 * XREFs of ?ConsumerBeginProcessPresent@CFlipManager@@QEAAJPEAI0@Z @ 0x1C006ACF4
 * Callers:
 *     ?ConsumerBeginProcessPresent@FlipManagerObject@@QEAAJPEAI0@Z @ 0x1C00685E8 (-ConsumerBeginProcessPresent@FlipManagerObject@@QEAAJPEAI0@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0028C00 (_guard_dispatch_icall_nop.c)
 *     ??2?$DXGQUOTAALLOCATOR@$00$0HFHAEDEG@@@SAPEAX_K@Z @ 0x1C006A974 (--2-$DXGQUOTAALLOCATOR@$00$0HFHAEDEG@@@SAPEAX_K@Z.c)
 *     ?Dequeue@?$CFlipObjectQueue@VCFlipPresentUpdate@@@@QEAAPEAVCFlipPresentUpdate@@XZ @ 0x1C006B250 (-Dequeue@-$CFlipObjectQueue@VCFlipPresentUpdate@@@@QEAAPEAVCFlipPresentUpdate@@XZ.c)
 *     ?FreeCurrentUpdates@CFlipManager@@AEAAXXZ @ 0x1C006B424 (-FreeCurrentUpdates@CFlipManager@@AEAAXXZ.c)
 *     ?ApplyIncrementalUpdate@CEndpointResourceStateManager@@QEAAJPEBVCFlipPresentUpdate@@@Z @ 0x1C006C0EC (-ApplyIncrementalUpdate@CEndpointResourceStateManager@@QEAAJPEBVCFlipPresentUpdate@@@Z.c)
 *     ?PrepareIncrementalUpdateForUser@CEndpointResourceStateManager@@QEAAJPEAVCFlipPresentUpdate@@@Z @ 0x1C006CC18 (-PrepareIncrementalUpdateForUser@CEndpointResourceStateManager@@QEAAJPEAVCFlipPresentUpdate@@@Z.c)
 *     ?SetFlipPropertySet@CFlipPresentUpdate@@QEAAXPEAVCFlipPropertySet@@@Z @ 0x1C006EB8C (-SetFlipPropertySet@CFlipPresentUpdate@@QEAAXPEAVCFlipPropertySet@@@Z.c)
 */

__int64 __fastcall CFlipManager::ConsumerBeginProcessPresent(CFlipManager *this, unsigned int *a2, unsigned int *a3)
{
  unsigned int v3; // ebx
  _QWORD *v7; // rdi
  _QWORD *v8; // r14
  _QWORD *v9; // rcx
  const struct CFlipPresentUpdate *v10; // rdx
  int v11; // ebp
  _QWORD *v12; // rax
  __int64 v13; // rcx
  _QWORD *v14; // rax
  __int64 v15; // rcx

  v3 = 0;
  v7 = 0LL;
  if ( *((_OWORD *)this + 12) != 0LL
    || (v8 = (_QWORD *)((char *)this + 120), v9 = (_QWORD *)*((_QWORD *)this + 15), v9 == v8) )
  {
    v11 = -1073741823;
  }
  else
  {
    v10 = (const struct CFlipPresentUpdate *)((unsigned __int64)(v9 - 3) & -(__int64)(v9 != 0LL));
    *((_QWORD *)this + 24) = v10;
    v11 = CEndpointResourceStateManager::ApplyIncrementalUpdate((CFlipManager *)((char *)this + 88), v10);
    if ( v11 >= 0 )
    {
      CFlipObjectQueue<CFlipPresentUpdate>::Dequeue(v8);
      if ( (_QWORD *)*v8 == v8 )
        KeResetEvent(*((PRKEVENT *)this + 26));
      v12 = DXGQUOTAALLOCATOR<1,1970291526>::operator new();
      v7 = v12;
      if ( v12 )
      {
        v13 = *((_QWORD *)this + 22);
        v12[1] = 0LL;
        v14 = v12 + 3;
        v14[1] = v14;
        *v14 = v14;
        *v7 = &CFlipPresentUpdate::`vftable'{for `CFlipTokenOperation'};
        v7[2] = &CFlipPresentUpdate::`vftable'{for `CFlipQueuedObject'};
        *((_DWORD *)v7 + 10) = 0;
        v7[6] = 0LL;
        v7[7] = 0LL;
        v7[8] = v13;
        *((_WORD *)v7 + 36) = 1;
        v7[10] = 0LL;
      }
      else
      {
        v7 = 0LL;
      }
      if ( !v7 )
        v11 = -1073741801;
    }
    if ( v11 >= 0 )
    {
      v11 = CEndpointResourceStateManager::PrepareIncrementalUpdateForUser(
              (CFlipManager *)((char *)this + 88),
              (struct CFlipPresentUpdate *)v7);
      if ( v11 >= 0 )
      {
        CFlipPresentUpdate::SetFlipPropertySet(
          (CFlipPresentUpdate *)v7,
          *(struct CFlipPropertySet **)(*((_QWORD *)this + 24) + 56LL));
        *((_QWORD *)this + 25) = v7;
        *a2 = *((_DWORD *)v7 + 10);
        v15 = *(_QWORD *)(*((_QWORD *)this + 25) + 56LL);
        if ( v15 )
          v3 = *(_DWORD *)(v15 + 32);
        *a3 = v3;
        return (unsigned int)v11;
      }
    }
  }
  CFlipManager::FreeCurrentUpdates(this);
  if ( v7 )
    (*(void (__fastcall **)(_QWORD *, __int64))(*v7 + 24LL))(v7, 1LL);
  return (unsigned int)v11;
}
