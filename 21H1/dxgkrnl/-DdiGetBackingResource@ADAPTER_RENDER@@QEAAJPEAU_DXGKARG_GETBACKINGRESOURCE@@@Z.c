/*
 * XREFs of ?DdiGetBackingResource@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETBACKINGRESOURCE@@@Z @ 0x1C022E2C8
 * Callers:
 *     ?GetBackingResource@DXGK_VIRTUAL_GPU_GPUP@@UEAAJPEAU_DXGKARG_GETBACKINGRESOURCE@@@Z @ 0x1C0233010 (-GetBackingResource@DXGK_VIRTUAL_GPU_GPUP@@UEAAJPEAU_DXGKARG_GETBACKINGRESOURCE@@@Z.c)
 * Callees:
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C000A490 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C000A550 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C000A5F0 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000D778 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D7CC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024408 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C00FBEF0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiGetBackingResource(
        ADAPTER_RENDER *this,
        struct _DXGKARG_GETBACKINGRESOURCE *a2,
        __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned __int8 CurrentIrql; // r14
  struct DXGTHREAD *v8; // rbx
  struct DXGTHREAD *Current; // rax
  int v10; // esi
  __int64 v11; // rdx
  unsigned int v12; // r15d
  __int64 v13; // rcx
  _QWORD *v14; // rax
  unsigned __int8 v15; // cl
  _QWORD *v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  int v22; // [rsp+20h] [rbp-60h] BYREF
  __int64 v23; // [rsp+28h] [rbp-58h]
  char v24; // [rsp+30h] [rbp-50h]
  _BYTE v25[8]; // [rsp+38h] [rbp-48h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+40h] [rbp-40h] BYREF

  v22 = -1;
  v23 = 0LL;
  if ( (qword_1C00AE9B0 & 2) != 0 )
  {
    v24 = 1;
    v22 = 5137;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, a3, 5137);
  }
  else
  {
    v24 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v22, 5137LL);
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4324LL));
  CurrentIrql = KeGetCurrentIrql();
  v8 = 0LL;
  if ( CurrentIrql < 2u && (Current = DXGTHREAD::GetCurrent(v6, v5), (v8 = Current) != 0LL) )
    v10 = *((_DWORD *)Current + 8);
  else
    v10 = 0;
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
    (DXGVALIDATIONPROCESSATTACH *)v25,
    *((struct DXGADAPTER **)this + 2));
  v12 = (*(__int64 (__fastcall **)(_QWORD, struct _DXGKARG_GETBACKINGRESOURCE *))(*(_QWORD *)(*((_QWORD *)this + 2)
                                                                                            + 976LL)
                                                                                + 32LL))(
          *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 968LL) + 8LL),
          a2);
  if ( v25[0] )
    KeUnstackDetachProcess(&ApcState);
  v13 = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v13 )
  {
    v14 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v13, v11);
    v14[3] = 275LL;
    v14[4] = 16LL;
    v14[5] = this;
    v14[6] = CurrentIrql;
    v15 = KeGetCurrentIrql();
    v14[7] = v15;
    WdLogEvent5_WdCriticalError(v14);
  }
  if ( v8 && *((_DWORD *)v8 + 8) != v10 )
  {
    v16 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v13, v11);
    v16[3] = 275LL;
    v16[4] = 38LL;
    v17 = *((int *)v8 + 8);
    v16[7] = 0LL;
    v16[5] = v17;
    v16[6] = v10;
    WdLogEvent5_WdCriticalError(v16);
  }
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4324LL));
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v22, v18);
  if ( v24 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v19, &EventProfilerExit, v20, v22);
  return v12;
}
