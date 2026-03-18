/*
 * XREFs of ?DestroyContext@DXGCONTEXT@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C016CC98
 * Callers:
 *     ?CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_CLIENTHINT@@E@Z @ 0x1C016A9E0 (-CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_.c)
 *     ?DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C016CBAC (-DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C016D390 (-DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?NotifyContextCreation@DXGADAPTER@@QEAAXPEAVDXGCONTEXT@@EI@Z @ 0x1C0009C68 (-NotifyContextCreation@DXGADAPTER@@QEAAXPEAVDXGCONTEXT@@EI@Z.c)
 *     ?RemoveFromCddPrimarySyncContextListSafe@ADAPTER_RENDER@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C000A618 (-RemoveFromCddPrimarySyncContextListSafe@ADAPTER_RENDER@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000C10C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C000D96C (--3@YAXPEAX@Z.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z @ 0x1C000EE78 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C000EEA8 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00131F8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??_GDXGDEVICESYNCOBJECT@@QEAAPEAXI@Z @ 0x1C001E3F0 (--_GDXGDEVICESYNCOBJECT@@QEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pqqqqqqqqppp_EtwWriteTransfer @ 0x1C004B43C (McTemplateK0pqqqqqqqqppp_EtwWriteTransfer.c)
 *     ?DdiDestroyContext@ADAPTER_RENDER@@QEAAJPEAX@Z @ 0x1C016D060 (-DdiDestroyContext@ADAPTER_RENDER@@QEAAJPEAX@Z.c)
 *     ?DestroyCoreState@DXGDEVICESYNCOBJECT@@QEAAXXZ @ 0x1C0186AFC (-DestroyCoreState@DXGDEVICESYNCOBJECT@@QEAAXXZ.c)
 *     ?DestroyCoreState@DXGHWQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C030E1A0 (-DestroyCoreState@DXGHWQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C033633C (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 *     ?VmBusSendDestroyContext@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXII@Z @ 0x1C03767EC (-VmBusSendDestroyContext@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXII@Z.c)
 */

void __fastcall DXGCONTEXT::DestroyContext(DXGCONTEXT *this, PERESOURCE **a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdi
  __int64 v6; // rax
  char *v7; // rdx
  __int64 v8; // r8
  DXGDEVICESYNCOBJECT *v9; // rcx
  DXGHWQUEUE *i; // rdi
  char v11; // di
  __int64 v12; // rcx
  __int64 v13; // rcx
  char v14; // di
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  DXGDEVICESYNCOBJECT *v19; // rcx
  struct _LOOKASIDE_LIST_EX *v20; // rcx
  void *v21; // rdx
  __int64 v22; // rcx
  __int128 v23; // xmm1
  int v24; // edx
  __int64 v25; // r9
  unsigned int HostProcess; // eax
  __int64 v27; // [rsp+20h] [rbp-88h]
  __int64 v28; // [rsp+28h] [rbp-80h]
  __int64 v29; // [rsp+30h] [rbp-78h]
  __int64 v30; // [rsp+38h] [rbp-70h]
  __int64 v31; // [rsp+40h] [rbp-68h]
  int v32; // [rsp+48h] [rbp-60h]
  int v33; // [rsp+50h] [rbp-58h]
  int v34; // [rsp+58h] [rbp-50h]
  __int128 v35; // [rsp+80h] [rbp-28h] BYREF
  __int128 v36; // [rsp+90h] [rbp-18h]

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)) )
  {
    WdLogSingleEntry1(1LL, 1694LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetRenderCore()->GetAdapter()->IsCoreResourceSharedOwner()",
      1694LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !*((_BYTE *)this + 436) )
  {
    v4 = *((_QWORD *)this + 2);
    *((_BYTE *)this + 436) = 1;
    v5 = *(_QWORD *)(*(_QWORD *)(v4 + 16) + 16LL);
    v6 = v4;
    if ( *(_BYTE *)(v5 + 209) && *((_DWORD *)this + 7) )
    {
      HostProcess = DXGPROCESS::GetHostProcess(*(DXGPROCESS **)(v4 + 40));
      DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendDestroyContext(
        (DXG_GUEST_VIRTUALGPU_VMBUS *)(v5 + 4344),
        HostProcess,
        *((_DWORD *)this + 7));
      v6 = *((_QWORD *)this + 2);
      *((_DWORD *)this + 7) = 0;
    }
    ADAPTER_RENDER::RemoveFromCddPrimarySyncContextListSafe(
      *(ADAPTER_RENDER **)(v6 + 16),
      (struct _LIST_ENTRY *)this + 10);
    v9 = (DXGDEVICESYNCOBJECT *)*((_QWORD *)this + 30);
    if ( v9 )
      DXGDEVICESYNCOBJECT::DestroyCoreState(v9);
    for ( i = (DXGHWQUEUE *)*((_QWORD *)this + 51); i != (DXGCONTEXT *)((char *)this + 408) && i; i = *(DXGHWQUEUE **)i )
      DXGHWQUEUE::DestroyCoreState(i, (struct COREDEVICEACCESS *)a2);
    if ( *((_QWORD *)this + 32) || *((_QWORD *)this + 33) )
    {
      if ( !a2 || DXGADAPTER::IsCoreResourceExclusiveOwner(a2[3]) )
      {
        v11 = 0;
      }
      else
      {
        v11 = 1;
        COREDEVICEACCESS::Release((COREDEVICEACCESS *)a2);
      }
      v12 = *((_QWORD *)this + 32);
      v35 = 0LL;
      LODWORD(v35) = 11;
      if ( v12 )
        (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                            + 624LL)
                                                                + 8LL)
                                                    + 296LL))(
          v12,
          &v35);
      v13 = *((_QWORD *)this + 33);
      if ( v13 )
        (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                            + 624LL)
                                                                + 8LL)
                                                    + 296LL))(
          v13,
          &v35);
      if ( v11 )
        COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)a2, v7);
      if ( *((DXGCONTEXT **)this + 42) != (DXGCONTEXT *)((char *)this + 336)
        || (v14 = 0, *(_QWORD *)(*((_QWORD *)this + 2) + 808LL) != *((_QWORD *)this + 2) + 808LL) )
      {
        v14 = 1;
      }
      v15 = *((_QWORD *)this + 32);
      if ( v15 && v14 )
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                        + 624LL)
                                                            + 8LL)
                                                + 312LL))(
          v15,
          0LL);
      v16 = *((_QWORD *)this + 33);
      if ( v16 && v14 )
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                        + 624LL)
                                                            + 8LL)
                                                + 312LL))(
          v16,
          0LL);
    }
    if ( *((_QWORD *)this + 61) )
    {
      if ( *((_QWORD *)this + 32) )
        _InterlockedExchangeAdd64(
          (volatile signed __int64 *)(*((_QWORD *)this + 61) + 24LL),
          (*(__int64 (**)(void))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 624LL) + 8LL)
                               + 1024LL))());
      if ( *((_QWORD *)this + 35) )
        _InterlockedExchangeAdd64(
          (volatile signed __int64 *)(*((_QWORD *)this + 61) + 24LL),
          (*(__int64 (**)(void))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 624LL) + 8LL)
                               + 1032LL))());
    }
    v17 = *((_QWORD *)this + 44);
    if ( v17 )
    {
      if ( !*((_QWORD *)this + 7) )
      {
        WdLogSingleEntry1(1LL, 1817LL);
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_pCommandBuffer", 1817LL, 0LL, 0LL, 0LL, 0LL);
        v17 = *((_QWORD *)this + 44);
      }
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 648LL) + 8LL)
                                      + 528LL))(v17);
      (*(void (__fastcall **)(_QWORD, char *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 648LL)
                                                         + 8LL)
                                             + 512LL))(
        *((_QWORD *)this + 44),
        (char *)this + 384);
      *((_QWORD *)this + 44) = 0LL;
    }
    v18 = *((_QWORD *)this + 45);
    if ( v18 )
    {
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 648LL)
                                                          + 8LL)
                                              + 512LL))(
        v18,
        0LL);
      *((_QWORD *)this + 45) = 0LL;
    }
    if ( *((_QWORD *)this + 29) )
    {
      (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 648LL) + 8LL) + 464LL))();
      *((_QWORD *)this + 29) = 0LL;
    }
    v19 = (DXGDEVICESYNCOBJECT *)*((_QWORD *)this + 30);
    if ( v19 )
    {
      DXGDEVICESYNCOBJECT::`scalar deleting destructor'(v19);
      *((_QWORD *)this + 30) = 0LL;
    }
    if ( *((_QWORD *)this + 34) )
    {
      (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 648LL) + 8LL) + 1016LL))();
      *((_QWORD *)this + 34) = 0LL;
    }
    if ( *((_QWORD *)this + 32) )
    {
      (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 624LL) + 8LL) + 240LL))();
      *((_QWORD *)this + 32) = 0LL;
    }
    if ( *((_QWORD *)this + 36) )
    {
      (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 624LL) + 8LL) + 264LL))();
      *((_QWORD *)this + 36) = 0LL;
    }
    if ( *((_QWORD *)this + 35) )
    {
      (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 624LL) + 8LL) + 248LL))();
      *((_QWORD *)this + 35) = 0LL;
    }
    if ( *((_QWORD *)this + 33) )
    {
      (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 624LL) + 8LL) + 240LL))();
      *((_QWORD *)this + 33) = 0LL;
    }
    v20 = (struct _LOOKASIDE_LIST_EX *)*((_QWORD *)this + 62);
    if ( v20 )
    {
      ExDeleteLookasideListEx(v20);
      operator delete(*((void **)this + 62));
      *((_QWORD *)this + 62) = 0LL;
    }
    if ( (*((_DWORD *)this + 10) & 1) != 0 )
    {
      v21 = (void *)*((_QWORD *)this + 23);
      if ( v21 )
      {
        ADAPTER_RENDER::DdiDestroyContext(*(ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 16LL), v21);
        *((_QWORD *)this + 23) = 0LL;
      }
    }
    if ( bTracingEnabled )
    {
      v22 = *((unsigned int *)this + 99);
      v23 = *(_OWORD *)((char *)this + 216);
      v24 = *((_DWORD *)this + 98);
      v25 = *((_QWORD *)this + 2);
      v35 = *(_OWORD *)((char *)this + 200);
      v36 = v23;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
      {
        v34 = 0;
        v33 = v36;
        v32 = HIDWORD(v35);
        LODWORD(v31) = DWORD2(v35);
        LODWORD(v30) = DWORD1(v35);
        LODWORD(v29) = v35;
        LODWORD(v28) = v22;
        LODWORD(v27) = v24;
        McTemplateK0pqqqqqqqqppp_EtwWriteTransfer(
          v22,
          &EventDestroyContext,
          v8,
          v25,
          v27,
          v28,
          v29,
          v30,
          v31,
          v32,
          v33,
          v34,
          this,
          0LL,
          0LL);
      }
    }
    if ( !*((_BYTE *)this + 437) )
      DXGADAPTER::NotifyContextCreation(
        *(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL),
        this,
        0,
        *((_DWORD *)this + 98));
  }
}
