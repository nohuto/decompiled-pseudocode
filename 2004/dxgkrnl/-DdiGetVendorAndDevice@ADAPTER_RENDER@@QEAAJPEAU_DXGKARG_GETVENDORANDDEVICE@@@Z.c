/*
 * XREFs of ?DdiGetVendorAndDevice@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETVENDORANDDEVICE@@@Z @ 0x1C023313C
 * Callers:
 *     ?GetVendorAndDevice@DXGK_VIRTUAL_GPU_GPUP@@UEAAJPEAU_DXGKARG_GETVENDORANDDEVICE@@@Z @ 0x1C0237450 (-GetVendorAndDevice@DXGK_VIRTUAL_GPU_GPUP@@UEAAJPEAU_DXGKARG_GETVENDORANDDEVICE@@@Z.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CA8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0003D20 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C0003DE0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C0003E80 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006148 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024458 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C00271E0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C00FAE40 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiGetVendorAndDevice(
        ADAPTER_RENDER *this,
        struct _DXGKARG_GETVENDORANDDEVICE *a2,
        __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned __int8 CurrentIrql; // r14
  struct DXGTHREAD *v8; // rbx
  struct DXGTHREAD *Current; // rax
  int v10; // esi
  __int64 v11; // rdx
  __int64 v12; // rcx
  _QWORD *v13; // rax
  unsigned __int8 v14; // cl
  _QWORD *v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  int v21; // [rsp+20h] [rbp-60h] BYREF
  __int64 v22; // [rsp+28h] [rbp-58h]
  char v23; // [rsp+30h] [rbp-50h]
  _BYTE v24[8]; // [rsp+38h] [rbp-48h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+40h] [rbp-40h] BYREF

  v21 = -1;
  v22 = 0LL;
  if ( (qword_1C00B09B0 & 2) != 0 )
  {
    v23 = 1;
    v21 = 5091;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, a3, 5091);
  }
  else
  {
    v23 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v21, 5091LL);
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4364LL));
  CurrentIrql = KeGetCurrentIrql();
  v8 = 0LL;
  if ( CurrentIrql < 2u && (Current = DXGTHREAD::GetCurrent(v6, v5), (v8 = Current) != 0LL) )
    v10 = *((_DWORD *)Current + 8);
  else
    v10 = 0;
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
    (DXGVALIDATIONPROCESSATTACH *)v24,
    *((struct DXGADAPTER **)this + 2));
  (*(void (__fastcall **)(_QWORD, struct _DXGKARG_GETVENDORANDDEVICE *))(*(_QWORD *)(*((_QWORD *)this + 2) + 952LL)
                                                                       + 72LL))(
    *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 952LL) + 8LL),
    a2);
  if ( v24[0] )
    KeUnstackDetachProcess(&ApcState);
  if ( CurrentIrql != KeGetCurrentIrql() )
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v12, v11);
    v13[3] = 275LL;
    v13[4] = 16LL;
    v13[5] = this;
    v13[6] = CurrentIrql;
    v14 = KeGetCurrentIrql();
    v13[7] = v14;
    WdLogEvent5_WdCriticalError(v13);
  }
  if ( v8 && *((_DWORD *)v8 + 8) != v10 )
  {
    v15 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v12, v11);
    v15[3] = 275LL;
    v15[4] = 38LL;
    v16 = *((int *)v8 + 8);
    v15[7] = 0LL;
    v15[5] = v16;
    v15[6] = v10;
    WdLogEvent5_WdCriticalError(v15);
  }
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4364LL));
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v21, v17);
  if ( v23 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v18, &EventProfilerExit, v19, v21);
  return 0LL;
}
