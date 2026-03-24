/*
 * XREFs of ?DdiDestroyCpuEvent@ADAPTER_RENDER@@QEAAJQEAX@Z @ 0x1C00D645C
 * Callers:
 *     ?Stop@DXGADAPTERSYNCOBJECT@@QEAAXXZ @ 0x1C015C568 (-Stop@DXGADAPTERSYNCOBJECT@@QEAAXXZ.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CE8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0003ED0 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C0003F90 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C0004030 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006318 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024B10 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1DXGVALIDATIONPROCESSATTACH@@QEAA@XZ @ 0x1C0025A10 (--1DXGVALIDATIONPROCESSATTACH@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028C00 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C00FBBF0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiDestroyCpuEvent(ADAPTER_RENDER *this, void *const a2, __int64 a3)
{
  unsigned __int8 CurrentIrql; // r14
  struct DXGTHREAD *v6; // rbx
  struct DXGTHREAD *Current; // rax
  int v8; // ebp
  __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rcx
  _QWORD *v12; // rax
  unsigned __int8 v13; // cl
  _QWORD *v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  int v21; // [rsp+20h] [rbp-78h] BYREF
  __int64 v22; // [rsp+28h] [rbp-70h]
  char v23; // [rsp+30h] [rbp-68h]
  _BYTE v24[56]; // [rsp+38h] [rbp-60h] BYREF

  v21 = -1;
  v22 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v23 = 1;
    v21 = 5159;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, a3, 5159);
  }
  else
  {
    v23 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v21, 5159LL);
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4364LL));
  CurrentIrql = KeGetCurrentIrql();
  v6 = 0LL;
  if ( CurrentIrql < 2u && (Current = DXGTHREAD::GetCurrent(), (v6 = Current) != 0LL) )
    v8 = *((_DWORD *)Current + 8);
  else
    v8 = 0;
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
    (DXGVALIDATIONPROCESSATTACH *)v24,
    *((struct DXGADAPTER **)this + 2));
  v9 = (*(int (__fastcall **)(_QWORD, void *const))(*((_QWORD *)this + 2) + 1384LL))(
         *(_QWORD *)(*((_QWORD *)this + 2) + 272LL),
         a2);
  DXGVALIDATIONPROCESSATTACH::~DXGVALIDATIONPROCESSATTACH((DXGVALIDATIONPROCESSATTACH *)v24);
  v11 = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v11 )
  {
    v12 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v11, v10);
    v12[3] = 275LL;
    v12[4] = 16LL;
    v12[5] = this;
    v12[6] = CurrentIrql;
    v13 = KeGetCurrentIrql();
    v12[7] = v13;
    WdLogEvent5_WdCriticalError(v12);
  }
  if ( v6 && *((_DWORD *)v6 + 8) != v8 )
  {
    v14 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v11, v10);
    v14[3] = 275LL;
    v14[4] = 38LL;
    v15 = *((int *)v6 + 8);
    v14[7] = 0LL;
    v14[5] = v15;
    v14[6] = v8;
    WdLogEvent5_WdCriticalError(v14);
  }
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4364LL));
  if ( (_DWORD)v9 != -1073741811 && (_DWORD)v9 )
  {
    v16 = WdLogNewEntry5_WdError(v11, v10);
    *(_QWORD *)(v16 + 24) = v9;
    WdLogEvent5_WdError(v16);
  }
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v21, v17);
  if ( v23 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v18, &EventProfilerExit, v19, v21);
  return (unsigned int)v9;
}
