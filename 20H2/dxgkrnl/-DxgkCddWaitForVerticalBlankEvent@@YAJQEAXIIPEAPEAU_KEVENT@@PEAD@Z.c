/*
 * XREFs of ?DxgkCddWaitForVerticalBlankEvent@@YAJQEAXIIPEAPEAU_KEVENT@@PEAD@Z @ 0x1C0153380
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CA8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0003FB0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEAD@Z @ 0x1C00056F8 (-AcquireShared@COREACCESS@@QEAAXPEAD@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006148 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C00073A8 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C0007A88 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ?DecrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z @ 0x1C000D390 (-DecrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z.c)
 *     __security_check_cookie @ 0x1C00243B0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C00244B8 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027100 (_guard_dispatch_icall_nop.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C00F6230 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C00FBBA0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C00FBEC0 (-ReleaseCoreResource@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ?ControlVSyncAdapter@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C020FE98 (-ControlVSyncAdapter@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0267C8C (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DxgkCddWaitForVerticalBlankEvent(
        struct DXGADAPTER *a1,
        unsigned int a2,
        __int64 a3,
        PVOID *a4,
        char *a5)
{
  __int64 v6; // r14
  int PairingAdapters; // eax
  DXGADAPTER *v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rsi
  volatile signed __int64 *v11; // rdi
  struct DXGADAPTER *v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // r8
  DXGADAPTER *v15; // rsi
  ADAPTER_DISPLAY **v16; // r12
  ADAPTER_DISPLAY *v17; // rdi
  char v18; // r13
  __int64 v19; // rax
  char *v20; // r15
  __int64 v21; // rdx
  unsigned int v22; // ecx
  __int64 v23; // rdx
  __int64 v24; // rcx
  ADAPTER_DISPLAY *v25; // rdi
  __int64 v26; // rcx
  ULONG v27; // ecx
  PVOID *v28; // rdx
  __int64 v29; // rcx
  unsigned int v30; // esi
  __int64 v31; // rcx
  __int64 v32; // rdi
  DXGGLOBAL **v33; // rcx
  DXGGLOBAL **v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // r8
  _QWORD *v38; // rax
  __int64 v39; // rax
  _QWORD *v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // rax
  _QWORD *v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  _QWORD *v51; // rax
  DXGADAPTER *v52; // rcx
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  int v56; // eax
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // rdi
  __int64 v60; // rax
  __int64 v61; // rax
  char v62; // [rsp+48h] [rbp-C0h]
  DXGADAPTER *v63; // [rsp+50h] [rbp-B8h] BYREF
  ULONG Count[2]; // [rsp+58h] [rbp-B0h]
  __int64 v65; // [rsp+60h] [rbp-A8h]
  PVOID *__attribute__((__org_arrdim(0,0))) Object; // [rsp+68h] [rbp-A0h]
  _QWORD v67[2]; // [rsp+70h] [rbp-98h] BYREF
  char v68; // [rsp+80h] [rbp-88h]
  union _LARGE_INTEGER Timeout; // [rsp+88h] [rbp-80h] BYREF
  unsigned __int64 v70; // [rsp+90h] [rbp-78h] BYREF
  char v71; // [rsp+98h] [rbp-70h] BYREF
  char v72; // [rsp+99h] [rbp-6Fh]
  _BYTE v73[8]; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v74; // [rsp+A8h] [rbp-60h]
  struct DXGADAPTER *v75; // [rsp+B0h] [rbp-58h]
  char v76; // [rsp+B8h] [rbp-50h]
  __int64 v77; // [rsp+C0h] [rbp-48h]
  _BYTE v78[8]; // [rsp+E0h] [rbp-28h] BYREF
  __int64 v79; // [rsp+E8h] [rbp-20h]
  struct DXGADAPTER *v80; // [rsp+F0h] [rbp-18h]
  char v81; // [rsp+F8h] [rbp-10h]
  char *v82; // [rsp+100h] [rbp-8h]
  struct _KWAIT_BLOCK WaitBlockArray; // [rsp+128h] [rbp+20h] BYREF

  Object = a4;
  Count[0] = a3;
  v6 = a2;
  LODWORD(v67[0]) = -1;
  v67[1] = 0LL;
  if ( (qword_1C00AF9B0 & 2) != 0 )
  {
    v68 = 1;
    LODWORD(v67[0]) = 3015;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 3015);
  }
  else
  {
    v68 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)v67, 3015LL);
  v63 = 0LL;
  PairingAdapters = DxgkpGetPairingAdapters(a1, (unsigned int)v6, 0LL, 0LL, &v63, &v70, 0);
  v10 = PairingAdapters;
  if ( PairingAdapters < 0 )
  {
    v38 = (_QWORD *)WdLogNewEntry5_WdError(v9, v8);
    v38[3] = a1;
    v38[4] = v6;
    v38[5] = v10;
    WdLogEvent5_WdError(v38);
    v30 = -1073740759;
    goto LABEL_60;
  }
  v11 = (volatile signed __int64 *)v63;
  if ( !v63 )
  {
    v39 = WdLogNewEntry5_WdAssertion(v9, v8);
    *(_QWORD *)(v39 + 24) = 2481LL;
    WdLogEvent5_WdAssertion(v39);
  }
  v72 = 0;
  v75 = (struct DXGADAPTER *)v11;
  v76 = 0;
  v77 = 0LL;
  if ( v11 )
  {
    _InterlockedIncrement64(v11 + 3);
    v11 = (volatile signed __int64 *)v63;
    v74 = -1LL;
  }
  v80 = (struct DXGADAPTER *)v11;
  v81 = 0;
  v82 = 0LL;
  if ( v11 )
  {
    _InterlockedIncrement64(v11 + 3);
    v11 = (volatile signed __int64 *)v63;
    v79 = -1LL;
  }
  if ( _InterlockedExchangeAdd64(v11 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v63 + 2), v63);
  if ( v81 )
  {
    v40 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v9, v8);
    v40[5] = v78;
    v40[3] = 275LL;
    v40[4] = 4LL;
    v40[6] = 0LL;
    v40[7] = 0LL;
    WdLogEvent5_WdCriticalError(v40);
  }
  v12 = v80;
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v80 + 23) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v80 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q_EtwWriteTransfer(v13, &EventBlockThread, v14, 72);
      KeWaitForSingleObject((char *)v80 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v80, 0LL);
    v12 = v80;
  }
  v82 = 0LL;
  v81 = 1;
  if ( *((_DWORD *)v12 + 50) != 1 )
    goto LABEL_71;
  if ( v75 == v80
    || (COREACCESS::AcquireShared((COREACCESS *)v73, a5),
        v12 = (struct DXGADAPTER *)*((unsigned int *)v75 + 50),
        (_DWORD)v12 == 1) )
  {
    v15 = v63;
    v72 = 1;
    v16 = (ADAPTER_DISPLAY **)((char *)v63 + 2696);
    v17 = (ADAPTER_DISPLAY *)*((_QWORD *)v63 + 337);
    if ( !v17 )
    {
      v41 = WdLogNewEntry5_WdAssertion(v12, v8);
      *(_QWORD *)(v41 + 24) = 2495LL;
      WdLogEvent5_WdAssertion(v41);
      v17 = *v16;
    }
    v18 = 0;
    v62 = 0;
    if ( !v17 )
    {
      v42 = WdLogNewEntry5_WdAssertion(v12, v8);
      *(_QWORD *)(v42 + 24) = 9659LL;
      WdLogEvent5_WdAssertion(v42);
      v17 = *v16;
      if ( !*v16 )
        goto LABEL_78;
    }
    if ( (unsigned int)v6 >= *((_DWORD *)v17 + 20) )
    {
      v43 = WdLogNewEntry5_WdAssertion(v12, v8);
      *(_QWORD *)(v43 + 24) = 6068LL;
      WdLogEvent5_WdAssertion(v43);
    }
    v19 = *((_QWORD *)v17 + 14);
    v65 = 3968 * v6;
    if ( !*(_BYTE *)(v19 + 3968 * v6 + 720) )
      goto LABEL_78;
    v20 = (char *)v15 + 2704;
    v21 = *((_QWORD *)v15 + 338);
    if ( !v21 )
    {
      ADAPTER_DISPLAY::ControlVSyncAdapter(*v16, v6);
      goto LABEL_30;
    }
    v22 = v6;
    if ( (*((_DWORD *)v15 + 642) & 0x10) != 0 )
    {
      if ( (unsigned int)v6 >= 0x10 )
        goto LABEL_29;
    }
    else
    {
      v22 = 0;
    }
    _InterlockedIncrement((volatile signed __int32 *)v15 + v22 + 682);
    v21 = *(_QWORD *)v20;
    v15 = v63;
LABEL_29:
    v18 = 1;
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(v21 + 616) + 8LL) + 544LL))(
           *(_QWORD *)(v21 + 624),
           (unsigned int)v6) )
    {
      goto LABEL_30;
    }
    if ( (*(int (__fastcall **)(_QWORD, __int64, __int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v20 + 616LL) + 8LL)
                                                                 + 552LL))(
           *(_QWORD *)(*(_QWORD *)v20 + 624LL),
           1LL,
           1LL,
           (unsigned int)v6) < 0 )
    {
      DXGADAPTER::DecrementVSyncWaiter(v15, (unsigned int)v6);
      v46 = WdLogNewEntry5_WdError(v45, v44);
      *(_QWORD *)(v46 + 24) = 2540LL;
      WdLogEvent5_WdError(v46);
LABEL_78:
      v30 = -1073740759;
      goto LABEL_48;
    }
    v62 = 1;
LABEL_30:
    if ( v75 != v80 )
      COREACCESS::Release((COREACCESS *)v73);
    if ( !v81 )
    {
      v47 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v24, v23);
      v47[5] = v78;
      v47[3] = 275LL;
      v47[4] = 4LL;
      v47[6] = 0LL;
      v47[7] = 0LL;
      WdLogEvent5_WdCriticalError(v47);
    }
    v81 = 0;
    if ( KeGetCurrentThread() != *((struct _KTHREAD **)v80 + 23) )
      DXGADAPTER::ReleaseCoreResource(v80, v82);
    v82 = 0LL;
    v72 = 0;
    v25 = *v16;
    v26 = *((_QWORD *)*v16 + 2);
    if ( KeGetCurrentThread() == *(struct _KTHREAD **)(v26 + 184)
      || ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v26 + 168)) )
    {
      v48 = WdLogNewEntry5_WdAssertion(v26, v23);
      *(_QWORD *)(v48 + 24) = 7038LL;
      WdLogEvent5_WdAssertion(v48);
    }
    v27 = Count[0];
    if ( Count[0] - 1 > 8 )
    {
      v49 = WdLogNewEntry5_WdError(Count[0], v23);
      v30 = -1073741811;
      *(_QWORD *)(v49 + 24) = -1073741811LL;
      WdLogEvent5_WdError(v49);
    }
    else
    {
      v28 = Object;
      Timeout.QuadPart = -800000LL;
      *Object = (PVOID)(*((_QWORD *)v25 + 14) + v65 + 912);
      v30 = KeWaitForMultipleObjects(v27, v28, WaitAny, Executive, 0, 0, &Timeout, &WaitBlockArray);
    }
    if ( !v18 )
      goto LABEL_47;
    if ( !*(_QWORD *)v20 )
    {
      v50 = WdLogNewEntry5_WdAssertion(v29, v8);
      *(_QWORD *)(v50 + 24) = 2573LL;
      WdLogEvent5_WdAssertion(v50);
    }
    v8 = v63;
    v31 = (unsigned int)v6;
    if ( (*((_DWORD *)v63 + 642) & 0x10) != 0 )
    {
      if ( (unsigned int)v6 >= 0x10 )
      {
LABEL_47:
        if ( v62 )
        {
          if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)&v71, 0LL) < 0 )
          {
            v61 = WdLogNewEntry5_WdWarning(v54, v53, v55);
            *(_QWORD *)(v61 + 24) = 2600LL;
            WdLogEvent5_WdWarning(v61);
          }
          else
          {
            v56 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v20 + 616LL)
                                                                                         + 8LL)
                                                                             + 552LL))(
                    *(_QWORD *)(*(_QWORD *)v20 + 624LL),
                    1LL,
                    0LL,
                    (unsigned int)v6);
            v59 = v56;
            if ( v56 < 0 )
            {
              v60 = WdLogNewEntry5_WdWarning(v57, v8, v58);
              *(_QWORD *)(v60 + 24) = v59;
              WdLogEvent5_WdWarning(v60);
            }
          }
        }
        goto LABEL_48;
      }
    }
    else
    {
      v31 = 0LL;
    }
    v32 = (unsigned int)v31;
    if ( _InterlockedDecrement((volatile signed __int32 *)v63 + (unsigned int)v31 + 682) < 0 )
    {
      v51 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v31, v8);
      v52 = v63;
      v51[5] = v63;
      v51[3] = 275LL;
      v51[4] = 37LL;
      v51[6] = *((unsigned int *)v52 + v32 + 682);
      v51[7] = 0LL;
      WdLogEvent5_WdCriticalError(v51);
    }
    goto LABEL_47;
  }
  COREACCESS::Release((COREACCESS *)v73);
LABEL_71:
  COREACCESS::Release((COREACCESS *)v78);
  v30 = -1073741130;
LABEL_48:
  if ( v72 )
    COREADAPTERACCESS::Release((COREADAPTERACCESS *)&v71);
  if ( v80 )
  {
    if ( v81 )
      COREACCESS::Release((COREACCESS *)v78);
    v33 = (DXGGLOBAL **)v80;
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v80 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(v33[2], (struct DXGADAPTER *)v33);
  }
  if ( v75 )
  {
    if ( v76 )
      COREACCESS::Release((COREACCESS *)v73);
    v34 = (DXGGLOBAL **)v75;
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v75 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(v34[2], (struct DXGADAPTER *)v34);
  }
LABEL_60:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)v67, (__int64)v8);
  if ( v68 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v35, &EventProfilerExit, v36, v67[0]);
  return v30;
}
