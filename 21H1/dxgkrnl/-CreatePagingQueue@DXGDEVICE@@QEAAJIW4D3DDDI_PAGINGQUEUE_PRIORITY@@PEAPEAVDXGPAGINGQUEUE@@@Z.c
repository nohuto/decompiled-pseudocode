/*
 * XREFs of ?CreatePagingQueue@DXGDEVICE@@QEAAJIW4D3DDDI_PAGINGQUEUE_PRIORITY@@PEAPEAVDXGPAGINGQUEUE@@@Z @ 0x1C00F1870
 * Callers:
 *     ?DxgkCreatePagingQueueInternal@@YAJPEAU_D3DKMT_CREATEPAGINGQUEUE@@H@Z @ 0x1C0126F20 (-DxgkCreatePagingQueueInternal@@YAJPEAU_D3DKMT_CREATEPAGINGQUEUE@@H@Z.c)
 * Callees:
 *     ??_GDXGPAGINGQUEUE@@IEAAPEAXI@Z @ 0x1C00081C8 (--_GDXGPAGINGQUEUE@@IEAAPEAXI@Z.c)
 *     ??2?$DXGQUOTAALLOCATOR@$00$0ELGHHIEE@@@SAPEAX_K@Z @ 0x1C000A238 (--2-$DXGQUOTAALLOCATOR@$00$0ELGHHIEE@@@SAPEAX_K@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000A6B4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     ?DestroyCoreState@DXGPAGINGQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C00DCB40 (-DestroyCoreState@DXGPAGINGQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?Initialize@DXGPAGINGQUEUE@@IEAAJIW4D3DDDI_PAGINGQUEUE_PRIORITY@@@Z @ 0x1C00F19A0 (-Initialize@DXGPAGINGQUEUE@@IEAAJIW4D3DDDI_PAGINGQUEUE_PRIORITY@@@Z.c)
 *     ?MapGuestFenceCpuVaToHost@@YAJ_KPEAPEAXPEA_KPEAI@Z @ 0x1C02366E4 (-MapGuestFenceCpuVaToHost@@YAJ_KPEAPEAXPEA_KPEAI@Z.c)
 *     ?VmBusSendCreatePagingQueue@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIPEBU_D3DKMT_CREATEPAGINGQUEUE@@PEAUDXGKVMB_COMMAND_CREATEPAGINGQUEUE_RETURN@@@Z @ 0x1C0243238 (-VmBusSendCreatePagingQueue@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIPEBU_D3DKMT_CREATEPAGINGQUEUE@@PE.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C02809D4 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 */

__int64 __fastcall DXGDEVICE::CreatePagingQueue(
        DXGDEVICE *this,
        unsigned int a2,
        enum D3DDDI_PAGINGQUEUE_PRIORITY a3,
        struct DXGPAGINGQUEUE **a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  _QWORD *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  struct COREDEVICEACCESS *v16; // rdx
  __int64 v17; // rbx
  __int64 v18; // rbp
  DXGPAGINGQUEUE *v19; // rax
  DXGPAGINGQUEUE **v20; // rcx
  __int64 v21; // rdx
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  DXGPROCESS *v27; // rcx
  unsigned int v28; // ebx
  unsigned int HostProcess; // eax
  __int64 v30; // rdx
  int v31; // eax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rax
  _D3DKMT_CREATEPAGINGQUEUE v35; // [rsp+30h] [rbp-78h] BYREF
  unsigned __int64 v36[2]; // [rsp+50h] [rbp-58h] BYREF
  __int64 v37; // [rsp+60h] [rbp-48h]

  if ( !*((_DWORD *)this + 18) && !ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 17)) )
  {
    v23 = WdLogNewEntry5_WdAssertion(v9, v8);
    *(_QWORD *)(v23 + 24) = 7932LL;
    WdLogEvent5_WdAssertion(v23);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    v24 = WdLogNewEntry5_WdAssertion(v11, v10);
    *(_QWORD *)(v24 + 24) = 7933LL;
    WdLogEvent5_WdAssertion(v24);
  }
  if ( !a4 )
  {
    v25 = WdLogNewEntry5_WdAssertion(v11, v10);
    *(_QWORD *)(v25 + 24) = 7934LL;
    WdLogEvent5_WdAssertion(v25);
  }
  v12 = DXGQUOTAALLOCATOR<1,1265072196>::operator new(0x50uLL);
  if ( v12 )
  {
    v12[2] = this;
    *(_OWORD *)v12 = 0LL;
    *((_DWORD *)v12 + 6) = 0;
    *((_DWORD *)v12 + 7) = 0;
    v12[4] = 0LL;
    v12[5] = 0LL;
    *((_DWORD *)v12 + 12) = 0;
    v12[7] = 0LL;
    v12[8] = 1LL;
    *((_BYTE *)v12 + 72) = 0;
  }
  *a4 = (struct DXGPAGINGQUEUE *)v12;
  if ( v12 )
  {
    LODWORD(v17) = DXGPAGINGQUEUE::Initialize((DXGPAGINGQUEUE *)v12, a2, a3);
    if ( (int)v17 >= 0 )
    {
      v18 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
      if ( !*(_BYTE *)(v18 + 209) )
      {
LABEL_13:
        v19 = *a4;
        v20 = (DXGPAGINGQUEUE **)((char *)this + 496);
        v21 = *((_QWORD *)this + 62);
        if ( *(DXGDEVICE **)(v21 + 8) != (DXGDEVICE *)((char *)this + 496) )
          __fastfail(3u);
        *(_QWORD *)v19 = v21;
        *((_QWORD *)v19 + 1) = v20;
        *(_QWORD *)(v21 + 8) = v19;
        *v20 = v19;
        _InterlockedIncrement64((volatile signed __int64 *)this + 8);
        return 0LL;
      }
      v27 = (DXGPROCESS *)*((_QWORD *)this + 5);
      v28 = *((_DWORD *)this + 110);
      memset(&v35, 0, sizeof(v35));
      v35.Priority = a3;
      v35.PhysicalAdapterIndex = a2;
      *(_OWORD *)v36 = 0LL;
      v37 = 0LL;
      HostProcess = DXGPROCESS::GetHostProcess(v27);
      LODWORD(v17) = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendCreatePagingQueue(
                       (DXG_GUEST_VIRTUALGPU_VMBUS *)(v18 + 4208),
                       HostProcess,
                       v28,
                       &v35,
                       (struct DXGKVMB_COMMAND_CREATEPAGINGQUEUE_RETURN *)v36);
      if ( (int)v17 >= 0 )
      {
        v30 = *((_QWORD *)*a4 + 5);
        *((_DWORD *)*a4 + 7) = v36[0];
        *(_DWORD *)(v30 + 44) = HIDWORD(v36[0]);
        v31 = MapGuestFenceCpuVaToHost(
                v36[1],
                (void **)(v30 + 56),
                (unsigned __int64 *)(v30 + 80),
                (unsigned int *)(v30 + 88));
        v17 = v31;
        if ( v31 >= 0 )
          goto LABEL_13;
        v34 = WdLogNewEntry5_WdError(v33, v32);
        *(_QWORD *)(v34 + 24) = v17;
        *(_QWORD *)(v34 + 32) = 7982LL;
        WdLogEvent5_WdError(v34);
      }
    }
  }
  else
  {
    v26 = WdLogNewEntry5_WdWarning(v14, v13, v15);
    LODWORD(v17) = -1073741801;
    *(_QWORD *)(v26 + 24) = this;
    *(_QWORD *)(v26 + 32) = -1073741801LL;
    WdLogEvent5_WdWarning(v26);
  }
  if ( *a4 )
  {
    DXGPAGINGQUEUE::DestroyCoreState(*a4, v16);
    if ( *a4 )
      DXGPAGINGQUEUE::`scalar deleting destructor'(*a4);
    *a4 = 0LL;
  }
  return (unsigned int)v17;
}
