/*
 * XREFs of ?PresentCddPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEAVCOREDEVICEACCESS@@@Z @ 0x1C0213B08
 * Callers:
 *     ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x1C00DD900 (-DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z.c)
 *     ?PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I@Z @ 0x1C0190FD4 (-PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I@Z.c)
 *     ?DxgkpDelayPresentCddPrimary@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z @ 0x1C0212570 (-DxgkpDelayPresentCddPrimary@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z.c)
 *     DxgkGetSharedPrimaryHandle @ 0x1C02236C0 (DxgkGetSharedPrimaryHandle.c)
 * Callees:
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C00099A8 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C000A3B8 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000B3EC (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEAD@Z @ 0x1C000B8EC (-AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEAD@Z.c)
 *     ?GetCddDisplayMode@ADAPTER_DISPLAY@@QEBAAEBU_D3DKMT_DISPLAYMODE@@I@Z @ 0x1C000D3D8 (-GetCddDisplayMode@ADAPTER_DISPLAY@@QEBAAEBU_D3DKMT_DISPLAYMODE@@I@Z.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00271E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00274C0 (memset.c)
 *     ?FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z @ 0x1C00E4748 (-FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x1C013BF44 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 *     ?GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z @ 0x1C01495E0 (-GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::PresentCddPrimary(
        ADAPTER_DISPLAY *this,
        struct DXGCONTEXT *a2,
        unsigned int a3,
        struct COREDEVICEACCESS *a4)
{
  __int64 v5; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rbx
  _QWORD *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  struct DXGADAPTERALLOCATION *CddPrimaryAllocation; // r14
  __int64 v19; // rdx
  __int64 v20; // rax
  _QWORD *v21; // rbx
  const struct _D3DKMT_DISPLAYMODE *CddDisplayMode; // rax
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  int v26; // eax
  _QWORD *v28; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD *v29; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v30[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v31; // [rsp+50h] [rbp-B0h] BYREF
  int v32; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v33; // [rsp+64h] [rbp-9Ch]
  int v34; // [rsp+6Ch] [rbp-94h]
  _QWORD *v35; // [rsp+70h] [rbp-90h]
  __int128 v36; // [rsp+78h] [rbp-88h]
  __int64 v37; // [rsp+88h] [rbp-78h]
  _QWORD v38[18]; // [rsp+90h] [rbp-70h] BYREF

  v5 = a3;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*((PERESOURCE **)this + 2)) )
  {
    if ( !a4 )
    {
      v10 = WdLogNewEntry5_WdAssertion(v9, v8);
      *(_QWORD *)(v10 + 24) = 1559LL;
      WdLogEvent5_WdAssertion(v10);
    }
    COREDEVICEACCESS::Release(a4, v8);
    v11 = COREDEVICEACCESS::AcquireExclusive((__int64)a4, 1u);
    v14 = v11;
    if ( v11 < 0 )
    {
      v15 = (_QWORD *)WdLogNewEntry5_WdError(v13, v12);
      v15[3] = *((_QWORD *)this + 2);
      v15[4] = v14;
LABEL_14:
      WdLogEvent5_WdError(v15);
      return (unsigned int)v14;
    }
  }
  if ( !ADAPTER_DISPLAY::IsVidPnSourceActive(this, (unsigned int)v5) )
  {
    v15 = (_QWORD *)WdLogNewEntry5_WdError(v17, v16);
    v14 = -1071775738LL;
LABEL_13:
    v15[3] = v5;
    v15[4] = *((_QWORD *)this + 2);
    v15[5] = v14;
    goto LABEL_14;
  }
  CddPrimaryAllocation = ADAPTER_DISPLAY::GetCddPrimaryAllocation(this, (unsigned int)v5, 0);
  if ( CddPrimaryAllocation )
  {
    DXGDEVICE::FlushScheduler(*((_QWORD **)a2 + 2), 1u);
    v19 = *((_QWORD *)CddPrimaryAllocation + 1);
    v28 = v30;
    v30[0] = *((_QWORD *)a2 + 23);
    v30[1] = *((_QWORD *)CddPrimaryAllocation + 2);
    v20 = *((_QWORD *)this + 2);
    v31 = 0LL;
    v21 = *(_QWORD **)(v20 + 2704);
    (*(void (__fastcall **)(_QWORD, __int64, __int128 *, char *, _QWORD))(*(_QWORD *)(v21[80] + 8LL) + 224LL))(
      v21[81],
      v19,
      &v31,
      (char *)&v31 + 8,
      0LL);
    memset(v38, 0, sizeof(v38));
    LODWORD(v38[2]) = 3;
    v29 = v38;
    HIDWORD(v38[3]) = 1;
    v38[4] = &v28;
    CddDisplayMode = ADAPTER_DISPLAY::GetCddDisplayMode((DXGADAPTER **)this, v5);
    *(_QWORD *)((char *)&v38[7] + 4) = 0LL;
    HIDWORD(v38[8]) = CddDisplayMode->Width;
    LODWORD(CddDisplayMode) = CddDisplayMode->Height;
    v33 = 0LL;
    v37 = 0LL;
    LODWORD(v38[9]) = (_DWORD)CddDisplayMode;
    HIDWORD(v38[13]) = 1;
    v32 = v5;
    *(_OWORD *)((char *)&v38[11] + 4) = *(_OWORD *)((char *)&v38[7] + 4);
    v34 = 1;
    *(_OWORD *)((char *)&v38[9] + 4) = *(_OWORD *)((char *)&v38[7] + 4);
    v35 = &v29;
    v36 = 0LL;
    v23 = (*(__int64 (__fastcall **)(_QWORD, int *))(*(_QWORD *)(v21[77] + 8LL) + 824LL))(v21[78], &v32);
    v14 = v23;
    if ( v23 < 0
      || (v26 = ADAPTER_DISPLAY::SetVidPnSourceVisibility(this, (unsigned int)v5, 1u, 32, 1u), v14 = v26, v26 < 0) )
    {
      v15 = (_QWORD *)WdLogNewEntry5_WdError(v25, v24);
      goto LABEL_13;
    }
  }
  else
  {
    LODWORD(v14) = -1073741811;
  }
  return (unsigned int)v14;
}
