/*
 * XREFs of ?ADAPTER_RENDER_DdiPreemptCommand@@YAJPEAVADAPTER_RENDER@@PEBU_DXGKARG_PREEMPTCOMMAND@@@Z @ 0x1C001A620
 * Callers:
 *     <none>
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C000B800 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C000B8C0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C000BB00 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0046D24 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C017D000 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 */

__int64 __fastcall ADAPTER_RENDER_DdiPreemptCommand(
        struct ADAPTER_RENDER *a1,
        const struct _DXGKARG_PREEMPTCOMMAND *a2,
        __int64 a3)
{
  KIRQL CurrentIrql; // al
  __int64 v6; // r15
  struct DXGTHREAD *v7; // rbx
  int v8; // esi
  __int64 v9; // r14
  __int64 v10; // rdx
  __int64 v11; // rcx
  _QWORD *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r8
  struct DXGTHREAD *Current; // rax
  KIRQL v17; // al
  int v18; // edx
  int v19; // ecx
  int v20; // r8d
  __int64 v21; // [rsp+60h] [rbp-29h] BYREF
  __int64 v22; // [rsp+68h] [rbp-21h]
  char v23; // [rsp+70h] [rbp-19h]
  _BYTE v24[8]; // [rsp+78h] [rbp-11h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+80h] [rbp-9h] BYREF

  LODWORD(v21) = -1;
  v22 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v23 = 1;
    LODWORD(v21) = 5014;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 5014LL);
  }
  else
  {
    v23 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v21, 5014);
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)a1 + 2), 1);
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)a1 + 2) + 4484LL));
  CurrentIrql = KeGetCurrentIrql();
  v6 = CurrentIrql;
  v7 = 0LL;
  if ( CurrentIrql < 2u && (Current = DXGTHREAD::GetCurrent(), (v7 = Current) != 0LL) )
    v8 = *((_DWORD *)Current + 12);
  else
    v8 = 0;
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
    (DXGVALIDATIONPROCESSATTACH *)v24,
    *((struct DXGADAPTER **)a1 + 2));
  v9 = (*(int (__fastcall **)(_QWORD, const struct _DXGKARG_PREEMPTCOMMAND *))(*((_QWORD *)a1 + 2) + 528LL))(
         *(_QWORD *)(*((_QWORD *)a1 + 2) + 280LL),
         a2);
  if ( v24[0] )
    KeUnstackDetachProcess(&ApcState);
  if ( (_BYTE)v6 != KeGetCurrentIrql() )
  {
    v17 = KeGetCurrentIrql();
    WdLogSingleEntry5(0LL, 275LL, 16LL, a1, v6, v17);
  }
  if ( v7 )
  {
    v11 = *((int *)v7 + 12);
    if ( (_DWORD)v11 != v8 )
      WdLogSingleEntry5(0LL, 275LL, 38LL, v11, v8, 0LL);
  }
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)a1 + 2) + 4484LL));
  v12 = (_QWORD *)WdLogNewEntry5_WdTrace(v11, v10);
  v12[3] = v9;
  v12[4] = a2->Flags.Value;
  v12[5] = a2->PreemptionFenceId;
  if ( (_DWORD)v9 )
  {
    WdLogSingleEntry1(2LL, v9);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v19,
          v18,
          v20,
          0,
          0,
          -1,
          (__int64)L"Driver returned an invalid NTSTATUS code: 0x%I64x",
          v9,
          0LL,
          0LL,
          0LL,
          0LL,
          v21,
          v22);
    }
  }
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)a1 + 2));
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v21);
  if ( v23 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v13, &EventProfilerExit, v14, (unsigned int)v21);
  return (unsigned int)v9;
}
