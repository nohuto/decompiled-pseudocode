/*
 * XREFs of ?CreatePresentUpdateForProducer@CFlipManager@@QEAAJ_N0_KPEAVCFlipPropertySet@@PEAPEAVCFlipPresentUpdate@@@Z @ 0x1C0069140
 * Callers:
 *     ?CreatePresentUpdateForProducer@FlipManagerObject@@QEAAJ_N0_KPEAVCFlipPropertySet@@PEAPEAVCFlipPresentUpdate@@@Z @ 0x1C00682FC (-CreatePresentUpdateForProducer@FlipManagerObject@@QEAAJ_N0_KPEAVCFlipPropertySet@@PEAPEAVCFlipP.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     ??2?$DXGQUOTAALLOCATOR@$00$0HFHAEDEG@@@SAPEAX_K@Z @ 0x1C0068A04 (--2-$DXGQUOTAALLOCATOR@$00$0HFHAEDEG@@@SAPEAX_K@Z.c)
 *     ?PrepareIncrementalUpdateForStateManager@CEndpointResourceStateManager@@QEAAJPEAVCFlipPresentUpdate@@PEA_N@Z @ 0x1C006A9B8 (-PrepareIncrementalUpdateForStateManager@CEndpointResourceStateManager@@QEAAJPEAVCFlipPresentUpd.c)
 *     ?SetFlipPropertySet@CFlipPresentUpdate@@QEAAXPEAVCFlipPropertySet@@@Z @ 0x1C006CC1C (-SetFlipPropertySet@CFlipPresentUpdate@@QEAAXPEAVCFlipPropertySet@@@Z.c)
 */

__int64 __fastcall CFlipManager::CreatePresentUpdateForProducer(
        CFlipManager *this,
        char a2,
        bool a3,
        unsigned __int64 a4,
        struct CFlipPropertySet *a5,
        struct CFlipPresentUpdate **a6)
{
  unsigned __int64 v6; // rsi
  _QWORD *v9; // rax
  _QWORD *v10; // rbx
  __int64 v11; // rcx
  _QWORD *v12; // rax
  int v13; // edi
  struct CFlipPresentUpdate **v14; // rax
  bool v16; // [rsp+40h] [rbp+18h] BYREF

  v16 = a3;
  v6 = a4;
  if ( a4 )
  {
    if ( a4 < *((_QWORD *)this + 28) )
      return (unsigned int)-1073741811;
  }
  else
  {
    v6 = *((_QWORD *)this + 28);
  }
  v9 = DXGQUOTAALLOCATOR<1,1970291526>::operator new();
  v10 = v9;
  if ( v9 )
  {
    v11 = *((_QWORD *)this + 22);
    v9[1] = 0LL;
    v12 = v9 + 3;
    v12[1] = v12;
    *v12 = v12;
    *((_DWORD *)v10 + 10) = 0;
    v10[6] = 0LL;
    v10[7] = 0LL;
    *v10 = &CFlipPresentUpdate::`vftable'{for `CFlipTokenOperation'};
    v10[2] = &CFlipPresentUpdate::`vftable'{for `CFlipQueuedObject'};
    v10[8] = v11;
    *((_BYTE *)v10 + 72) = a2;
    *((_BYTE *)v10 + 73) = 0;
    v10[10] = v6;
  }
  else
  {
    v10 = 0LL;
  }
  if ( v10 )
  {
    v13 = CEndpointResourceStateManager::PrepareIncrementalUpdateForStateManager(
            (CFlipManager *)((char *)this + 56),
            (struct CFlipPresentUpdate *)v10,
            &v16);
    if ( v13 >= 0 )
    {
      if ( v16 )
        *((_BYTE *)v10 + 73) = 1;
      CFlipPresentUpdate::SetFlipPropertySet((CFlipPresentUpdate *)v10, a5);
      v14 = a6;
      *((_QWORD *)this + 28) = v6;
      *v14 = (struct CFlipPresentUpdate *)v10;
      v10 = 0LL;
    }
    if ( v10 )
      (*(void (__fastcall **)(_QWORD *, __int64))(*v10 + 24LL))(v10, 1LL);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v13;
}
