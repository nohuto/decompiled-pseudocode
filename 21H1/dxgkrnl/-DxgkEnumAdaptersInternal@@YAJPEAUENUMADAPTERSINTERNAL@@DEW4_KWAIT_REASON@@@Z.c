/*
 * XREFs of ?DxgkEnumAdaptersInternal@@YAJPEAUENUMADAPTERSINTERNAL@@DEW4_KWAIT_REASON@@@Z @ 0x1C0132734
 * Callers:
 *     ?DxgkEnumAdapters2Impl@@YAJPEAU_D3DKMT_ENUMADAPTERS2@@DEW4_KWAIT_REASON@@@Z @ 0x1C01319E0 (-DxgkEnumAdapters2Impl@@YAJPEAU_D3DKMT_ENUMADAPTERS2@@DEW4_KWAIT_REASON@@@Z.c)
 *     ?DxgkEnumAdapters3Impl@@YAJPEAU_D3DKMT_ENUMADAPTERS3@@DEW4_KWAIT_REASON@@@Z @ 0x1C0160B10 (-DxgkEnumAdapters3Impl@@YAJPEAU_D3DKMT_ENUMADAPTERS3@@DEW4_KWAIT_REASON@@@Z.c)
 *     ?DxgkEnumAdaptersImpl@@YAJPEAU_D3DKMT_ENUMADAPTERS@@DEW4_KWAIT_REASON@@@Z @ 0x1C021D2E8 (-DxgkEnumAdaptersImpl@@YAJPEAU_D3DKMT_ENUMADAPTERS@@DEW4_KWAIT_REASON@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000D778 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D7CC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?Acquire@DXGUSERCRIT@@QEAAXH@Z @ 0x1C0011BB8 (-Acquire@DXGUSERCRIT@@QEAAXH@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024408 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     ?DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z @ 0x1C00DAB60 (-DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C011739C (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0119460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     DxgkWaitForPnPTransitionDone @ 0x1C01328EC (DxgkWaitForPnPTransitionDone.c)
 */

__int64 __fastcall DxgkEnumAdaptersInternal(struct ENUMADAPTERSINTERNAL *a1, char a2, __int64 a3, unsigned int a4)
{
  char v5; // si
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct DXGPROCESS *Current; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct DXGPROCESS *v13; // rdi
  unsigned int ProcessSessionId; // eax
  __int64 v15; // rdx
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  int v25; // edi
  unsigned int v26; // eax
  struct DXGGLOBAL *v27; // rax
  unsigned int v28; // eax
  struct DXGGLOBAL *v29; // rax
  unsigned int v30; // eax
  unsigned int v31; // ebx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  struct _KTHREAD **v47; // rsi
  int v48; // [rsp+20h] [rbp-30h] BYREF
  __int64 v49; // [rsp+28h] [rbp-28h]
  char v50; // [rsp+30h] [rbp-20h]
  char v51[8]; // [rsp+38h] [rbp-18h] BYREF
  struct DXGPROCESS *v52; // [rsp+40h] [rbp-10h]
  char v53; // [rsp+48h] [rbp-8h]

  v48 = -1;
  v49 = 0LL;
  v5 = a3;
  if ( (qword_1C00AE9B0 & 2) != 0 )
  {
    v50 = 1;
    v48 = 2078;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 2078);
  }
  else
  {
    v50 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v48, 2078LL);
  if ( !a1 )
  {
    v35 = WdLogNewEntry5_WdAssertion(v9, v8);
    *(_QWORD *)(v35 + 24) = 1524LL;
    WdLogEvent5_WdAssertion(v35);
  }
  Current = DXGPROCESS::GetCurrent(v9, v8);
  v13 = Current;
  if ( Current )
  {
    if ( v5 )
    {
      ProcessSessionId = PsGetProcessSessionId(*((_QWORD *)Current + 7));
      LOBYTE(v15) = a2;
      v16 = DxgkWaitForPnPTransitionDone(a4, v15, ProcessSessionId, 0LL, v48, v49);
      v19 = v16;
      if ( v16 < 0 )
      {
        v37 = WdLogNewEntry5_WdError(v18, v17);
        *(_QWORD *)(v37 + 24) = v19;
        WdLogEvent5_WdError(v37);
      }
    }
    v52 = v13;
    v53 = 0;
    DXGUSERCRIT::Acquire((DXGUSERCRIT *)v51, 0LL);
    *(_DWORD *)a1 = 0;
    *((_DWORD *)a1 + 2) = 0;
    Global = DXGGLOBAL::GetGlobal(v21, v20);
    v25 = DXGGLOBAL::IterateAdaptersWithCallback(
            (__int64)Global,
            (__int64 (__fastcall *)(_QWORD *, __int64))EnumAdaptersCallback,
            (__int64)a1,
            4);
    v26 = *(_DWORD *)a1;
    if ( *(_DWORD *)a1 > *((_DWORD *)a1 + 1) )
    {
      v38 = WdLogNewEntry5_WdAssertion(v24, v23);
      *(_QWORD *)(v38 + 24) = 1579LL;
      WdLogEvent5_WdAssertion(v38);
      v26 = *(_DWORD *)a1;
    }
    if ( v26 > *((_DWORD *)a1 + 2) )
    {
      v39 = WdLogNewEntry5_WdAssertion(v24, v23);
      *(_QWORD *)(v39 + 24) = 1580LL;
      WdLogEvent5_WdAssertion(v39);
    }
    if ( v25 < 0 )
      goto LABEL_31;
    v27 = DXGGLOBAL::GetGlobal(v24, v23);
    v25 = DXGGLOBAL::IterateAdaptersWithCallback(
            (__int64)v27,
            (__int64 (__fastcall *)(_QWORD *, __int64))EnumAdaptersCallback,
            (__int64)a1,
            3);
    v28 = *(_DWORD *)a1;
    if ( *(_DWORD *)a1 > *((_DWORD *)a1 + 1) )
    {
      v40 = WdLogNewEntry5_WdAssertion(v24, v23);
      *(_QWORD *)(v40 + 24) = 1592LL;
      WdLogEvent5_WdAssertion(v40);
      v28 = *(_DWORD *)a1;
    }
    if ( v28 > *((_DWORD *)a1 + 2) )
    {
      v41 = WdLogNewEntry5_WdAssertion(v24, v23);
      *(_QWORD *)(v41 + 24) = 1593LL;
      WdLogEvent5_WdAssertion(v41);
    }
    if ( v25 < 0 )
      goto LABEL_31;
    v29 = DXGGLOBAL::GetGlobal(v24, v23);
    v25 = DXGGLOBAL::IterateAdaptersWithCallback(
            (__int64)v29,
            (__int64 (__fastcall *)(_QWORD *, __int64))EnumAdaptersCallback,
            (__int64)a1,
            5);
    v30 = *(_DWORD *)a1;
    if ( *(_DWORD *)a1 > *((_DWORD *)a1 + 1) )
    {
      v42 = WdLogNewEntry5_WdAssertion(v24, v23);
      *(_QWORD *)(v42 + 24) = 1606LL;
      WdLogEvent5_WdAssertion(v42);
      v30 = *(_DWORD *)a1;
    }
    if ( v30 > *((_DWORD *)a1 + 2) )
    {
      v43 = WdLogNewEntry5_WdAssertion(v24, v23);
      *(_QWORD *)(v43 + 24) = 1607LL;
      WdLogEvent5_WdAssertion(v43);
    }
    if ( v25 < 0 )
    {
LABEL_31:
      v44 = WdLogNewEntry5_WdError(v24, v23);
      *(_QWORD *)(v44 + 24) = v25;
      WdLogEvent5_WdError(v44);
      v47 = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v46, v45);
      while ( *(_DWORD *)a1 )
        DXGADAPTER::DestroyHandle(v47, *(unsigned int *)(*((_QWORD *)a1 + 2) + 20LL * (unsigned int)--*(_DWORD *)a1));
    }
    v31 = v25;
    if ( v53 )
    {
      v53 = 0;
      (*(void (**)(void))(*((_QWORD *)v52 + 11) + 40LL))();
    }
  }
  else
  {
    v36 = WdLogNewEntry5_WdError(v12, v11);
    v31 = -1073741811;
    *(_QWORD *)(v36 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v36);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v48, v23);
  if ( v50 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v32, &EventProfilerExit, v33, v48);
  return v31;
}
