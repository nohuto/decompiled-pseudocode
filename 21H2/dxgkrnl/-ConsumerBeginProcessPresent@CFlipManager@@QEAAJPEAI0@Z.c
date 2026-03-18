/*
 * XREFs of ?ConsumerBeginProcessPresent@CFlipManager@@QEAAJPEAI0@Z @ 0x1C007C744
 * Callers:
 *     ?ConsumerBeginProcessPresent@FlipManagerObject@@QEAAJPEAI0@Z @ 0x1C0079C98 (-ConsumerBeginProcessPresent@FlipManagerObject@@QEAAJPEAI0@Z.c)
 * Callees:
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ??2?$DXGQUOTAALLOCATOR@$0BAA@$0HFHAEDEG@@@SAPEAX_K@Z @ 0x1C007C12C (--2-$DXGQUOTAALLOCATOR@$0BAA@$0HFHAEDEG@@@SAPEAX_K@Z.c)
 *     ?ApplyUpdateToConsumer@CFlipManager@@AEAAJPEAVCFlipPresentUpdate@@@Z @ 0x1C007C5F0 (-ApplyUpdateToConsumer@CFlipManager@@AEAAJPEAVCFlipPresentUpdate@@@Z.c)
 *     ?Dequeue@?$CFlipObjectQueue@VCFlipPresentUpdate@@@@QEAAPEAVCFlipPresentUpdate@@XZ @ 0x1C007D564 (-Dequeue@-$CFlipObjectQueue@VCFlipPresentUpdate@@@@QEAAPEAVCFlipPresentUpdate@@XZ.c)
 *     ?FreeCurrentUpdates@CFlipManager@@AEAAXXZ @ 0x1C007D6F8 (-FreeCurrentUpdates@CFlipManager@@AEAAXXZ.c)
 *     ?PrepareIncrementalUpdateForUser@CEndpointResourceStateManager@@QEAAJPEAVCFlipPresentUpdate@@@Z @ 0x1C0080494 (-PrepareIncrementalUpdateForUser@CEndpointResourceStateManager@@QEAAJPEAVCFlipPresentUpdate@@@Z.c)
 *     ?SetFlipPropertySet@CFlipPresentUpdate@@QEAAXPEAVCFlipPropertySet@@@Z @ 0x1C0081910 (-SetFlipPropertySet@CFlipPresentUpdate@@QEAAXPEAVCFlipPropertySet@@@Z.c)
 */

__int64 __fastcall CFlipManager::ConsumerBeginProcessPresent(CFlipManager *this, unsigned int *a2, unsigned int *a3)
{
  unsigned int v3; // edi
  __int64 v7; // rbx
  _QWORD *v8; // r14
  _QWORD *v9; // rcx
  struct CFlipPresentUpdate *v10; // rdx
  int v11; // ebp
  void (__fastcall *v12)(_QWORD, _QWORD); // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  __int64 v18; // rcx
  struct CFlipPresentUpdate *v19; // rdx
  _QWORD *v20; // rax
  __int64 v21; // rax

  v3 = 0;
  v7 = 0LL;
  if ( *((_OWORD *)this + 17) != 0LL
    || (v8 = (_QWORD *)((char *)this + 152), v9 = (_QWORD *)*((_QWORD *)this + 19), v9 == v8) )
  {
    v11 = -1073741823;
  }
  else
  {
    v10 = (struct CFlipPresentUpdate *)((unsigned __int64)(v9 - 3) & -(__int64)(v9 != 0LL));
    *((_QWORD *)this + 34) = v10;
    v11 = CFlipManager::ApplyUpdateToConsumer(this, v10);
    if ( v11 >= 0 )
    {
      CFlipObjectQueue<CFlipPresentUpdate>::Dequeue(v8);
      v12 = *(void (__fastcall **)(_QWORD, _QWORD))(*((_QWORD *)DXGGLOBAL_GetGlobal() + 38073) + 136LL);
      v12(*((unsigned int *)this + 82), --*((_QWORD *)this + 21));
      if ( (_QWORD *)*v8 == v8 )
        KeResetEvent(*((PRKEVENT *)this + 36));
      v17 = DXGQUOTAALLOCATOR<256,1970291526>::operator new(v14, v13, v15, v16);
      v7 = v17;
      if ( v17 )
      {
        v18 = *((_QWORD *)this + 29);
        v19 = (struct CFlipPresentUpdate *)v17;
        *(_QWORD *)(v17 + 8) = 0LL;
        v20 = (_QWORD *)(v17 + 24);
        v20[1] = v20;
        *v20 = v20;
        *(_QWORD *)v7 = &CFlipPresentUpdate::`vftable'{for `CFlipTokenOperation'};
        *(_QWORD *)(v7 + 64) = v18;
        *(_QWORD *)(v7 + 16) = &CFlipPresentUpdate::`vftable'{for `CFlipQueuedObject'};
        *(_DWORD *)(v7 + 40) = 0;
        *(_QWORD *)(v7 + 48) = 0LL;
        *(_QWORD *)(v7 + 56) = 0LL;
        *(_BYTE *)(v7 + 72) = 1;
        *(_QWORD *)(v7 + 80) = 0LL;
        v11 = CEndpointResourceStateManager::PrepareIncrementalUpdateForUser((CFlipManager *)((char *)this + 104), v19);
        if ( v11 >= 0 )
        {
          CFlipPresentUpdate::SetFlipPropertySet(
            (CFlipPresentUpdate *)v7,
            *(struct CFlipPropertySet **)(*((_QWORD *)this + 34) + 56LL));
          *((_QWORD *)this + 35) = v7;
          *a2 = *(_DWORD *)(v7 + 40);
          v21 = *(_QWORD *)(*((_QWORD *)this + 35) + 56LL);
          if ( v21 )
            v3 = *(_DWORD *)(v21 + 32);
          *a3 = v3;
          return (unsigned int)v11;
        }
      }
      else
      {
        v11 = -1073741801;
        v7 = 0LL;
      }
    }
  }
  CFlipManager::FreeCurrentUpdates(this);
  if ( v7 )
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 24LL))(v7, 1LL);
  return (unsigned int)v11;
}
