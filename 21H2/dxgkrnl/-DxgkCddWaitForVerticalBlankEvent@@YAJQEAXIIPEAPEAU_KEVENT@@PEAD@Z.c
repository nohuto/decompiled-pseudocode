/*
 * XREFs of ?DxgkCddWaitForVerticalBlankEvent@@YAJQEAXIIPEAPEAU_KEVENT@@PEAD@Z @ 0x1C01779E0
 * Callers:
 *     <none>
 * Callees:
 *     ?DecrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z @ 0x1C0002580 (-DecrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C000BB70 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEAD@Z @ 0x1C000E694 (-AcquireShared@COREACCESS@@QEAAXPEAD@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C000F718 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C000F7D4 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C01798C0 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C017EB60 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C017ED90 (-ReleaseCoreResource@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ?ControlVSyncAdapter@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C02BF51C (-ControlVSyncAdapter@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C03099FC (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DxgkCddWaitForVerticalBlankEvent(
        struct DXGADAPTER *a1,
        unsigned int a2,
        __int64 a3,
        struct _KEVENT **a4,
        char *a5)
{
  __int64 v6; // r13
  __int64 v7; // r15
  int PairingAdapters; // eax
  volatile signed __int64 *v9; // rdi
  struct DXGADAPTER *v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // r8
  DXGADAPTER *v13; // rsi
  ADAPTER_DISPLAY **v14; // r14
  ADAPTER_DISPLAY *v15; // rdi
  __int64 v16; // rax
  char *v17; // r12
  __int64 v18; // rdx
  unsigned int v19; // ecx
  char v20; // si
  ADAPTER_DISPLAY *v21; // rdi
  __int64 v22; // rcx
  unsigned int v23; // edi
  unsigned int v24; // ecx
  DXGGLOBAL **v25; // rcx
  DXGGLOBAL **v26; // rcx
  __int64 v27; // r8
  __int64 v29; // rbx
  __int64 v30; // r8
  int (__fastcall *v31)(_QWORD, __int64, __int64, _QWORD); // rax
  const wchar_t *v32; // r9
  int v33; // eax
  char v34; // [rsp+58h] [rbp-B0h]
  DXGADAPTER *v35; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v36; // [rsp+68h] [rbp-A0h]
  _QWORD v37[2]; // [rsp+70h] [rbp-98h] BYREF
  char v38; // [rsp+80h] [rbp-88h]
  void *Src; // [rsp+88h] [rbp-80h]
  union _LARGE_INTEGER Timeout; // [rsp+90h] [rbp-78h] BYREF
  unsigned __int64 v41; // [rsp+98h] [rbp-70h] BYREF
  char v42; // [rsp+A8h] [rbp-60h] BYREF
  char v43; // [rsp+A9h] [rbp-5Fh]
  _BYTE v44[8]; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v45; // [rsp+B8h] [rbp-50h]
  struct DXGADAPTER *v46; // [rsp+C0h] [rbp-48h]
  char v47; // [rsp+C8h] [rbp-40h]
  __int64 v48; // [rsp+D0h] [rbp-38h]
  _BYTE v49[8]; // [rsp+F0h] [rbp-18h] BYREF
  __int64 v50; // [rsp+F8h] [rbp-10h]
  struct DXGADAPTER *v51; // [rsp+100h] [rbp-8h]
  char v52; // [rsp+108h] [rbp+0h]
  char *v53; // [rsp+110h] [rbp+8h]
  PVOID Object[64]; // [rsp+138h] [rbp+30h] BYREF
  struct _KWAIT_BLOCK WaitBlockArray; // [rsp+338h] [rbp+230h] BYREF

  Src = a4;
  v6 = (unsigned int)a3;
  v7 = a2;
  LODWORD(v37[0]) = -1;
  v37[1] = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v38 = 1;
    LODWORD(v37[0]) = 3015;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 3015);
  }
  else
  {
    v38 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)v37, 3015);
  v35 = 0LL;
  PairingAdapters = DxgkpGetPairingAdapters(a1, v7, 0LL, 0LL, &v35, &v41, 0);
  if ( PairingAdapters < 0 )
  {
    v29 = PairingAdapters;
    WdLogSingleEntry3(2LL, a1, v7, PairingAdapters);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to get bound render adapter from Adapter 0x%I64x VidPn source ID 0x%I64x in DxgkCddWaitForVertical"
                "BlankEvent (ntStatus = 0x%I64x).",
      (__int64)a1,
      v7,
      v29,
      0LL,
      0LL);
    v23 = -1073740759;
    goto LABEL_64;
  }
  v9 = (volatile signed __int64 *)v35;
  if ( !v35 )
  {
    WdLogSingleEntry1(1LL, 2541LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pDisplayAdapter != NULL", 2541LL, 0LL, 0LL, 0LL, 0LL);
  }
  v43 = 0;
  v46 = (struct DXGADAPTER *)v9;
  v47 = 0;
  v48 = 0LL;
  if ( v9 )
  {
    _InterlockedIncrement64(v9 + 3);
    v9 = (volatile signed __int64 *)v35;
    v45 = -1LL;
  }
  v51 = (struct DXGADAPTER *)v9;
  v52 = 0;
  v53 = 0LL;
  if ( v9 )
  {
    _InterlockedIncrement64(v9 + 3);
    v9 = (volatile signed __int64 *)v35;
    v50 = -1LL;
  }
  if ( _InterlockedExchangeAdd64(v9 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v35 + 2), v35);
  if ( v52 )
    WdLogSingleEntry5(0LL, 275LL, 4LL, v49, 0LL, 0LL);
  v10 = v51;
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v51 + 23) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v51 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v11, (const EVENT_DESCRIPTOR *)"g", v12, 72);
      KeWaitForSingleObject((char *)v51 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v51, 0LL);
    v10 = v51;
  }
  v53 = 0LL;
  v52 = 1;
  if ( *((_DWORD *)v10 + 50) != 1 )
    goto LABEL_78;
  if ( v46 == v51 || (COREACCESS::AcquireShared((COREACCESS *)v44, a5), *((_DWORD *)v46 + 50) == 1) )
  {
    v13 = v35;
    v43 = 1;
    v14 = (ADAPTER_DISPLAY **)((char *)v35 + 2792);
    v15 = (ADAPTER_DISPLAY *)*((_QWORD *)v35 + 349);
    if ( !v15 )
    {
      WdLogSingleEntry1(1LL, 2555LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"pDisplayAdapter->IsDisplayAdapter()",
        2555LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v15 = *v14;
      if ( !*v14 )
      {
        WdLogSingleEntry1(1LL, 10119LL);
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsDisplayAdapter()", 10119LL, 0LL, 0LL, 0LL, 0LL);
        v15 = *v14;
        if ( !*v14 )
          goto LABEL_83;
      }
    }
    if ( (unsigned int)v7 >= *((_DWORD *)v15 + 24) )
    {
      WdLogSingleEntry1(1LL, 6126LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"VidPnSourceId < m_NumVidPnSources",
        6126LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v16 = *((_QWORD *)v15 + 16);
    v36 = 4000 * v7;
    if ( !*(_BYTE *)(v16 + 4000 * v7 + 760) )
      goto LABEL_83;
    v17 = (char *)v13 + 2800;
    v18 = *((_QWORD *)v13 + 350);
    if ( !v18 )
    {
      ADAPTER_DISPLAY::ControlVSyncAdapter(*v14, v7);
      v20 = 0;
      v34 = 0;
LABEL_29:
      if ( v46 != v51 )
        COREACCESS::Release((COREACCESS *)v44);
      if ( !v52 )
        WdLogSingleEntry5(0LL, 275LL, 4LL, v49, 0LL, 0LL);
      v52 = 0;
      if ( KeGetCurrentThread() != *((struct _KTHREAD **)v51 + 23) )
        DXGADAPTER::ReleaseCoreResource(v51, v53);
      v53 = 0LL;
      v43 = 0;
      Timeout.QuadPart = -800000LL;
      v21 = *v14;
      v22 = *((_QWORD *)*v14 + 2);
      if ( KeGetCurrentThread() == *(struct _KTHREAD **)(v22 + 184)
        || ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v22 + 168)) )
      {
        WdLogSingleEntry1(1LL, 7283LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"!IsCoreResourceSharedOwner()",
          7283LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      memset(Object, 0, sizeof(Object));
      if ( !(_DWORD)v6 )
        goto LABEL_41;
      if ( Src )
      {
        if ( (unsigned int)v6 < 0x3F )
        {
          memmove(Object, Src, 8 * v6);
LABEL_41:
          Object[v6] = (PVOID)(*((_QWORD *)v21 + 16) + v36 + 904);
          if ( (unsigned int)(v6 + 1) > 0x40 )
          {
            WdLogSingleEntry1(1LL, 7313LL);
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              -1,
              (__int64)L"Count <= _countof(Objects)",
              7313LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          v23 = KeWaitForMultipleObjects(v6 + 1, Object, WaitAny, Executive, 0, 0, &Timeout, &WaitBlockArray);
LABEL_44:
          if ( v20 )
          {
            if ( !*(_QWORD *)v17 )
            {
              WdLogSingleEntry1(1LL, 2636LL);
              DxgkLogInternalTriageEvent(
                0LL,
                262146,
                -1,
                (__int64)L"pDisplayAdapter->IsRenderAdapter()",
                2636LL,
                0LL,
                0LL,
                0LL,
                0LL);
            }
            v24 = v7;
            if ( (*((_DWORD *)v35 + 666) & 0x10) == 0 )
            {
              v24 = 0;
              goto LABEL_49;
            }
            if ( (unsigned int)v7 < 0x10 )
            {
LABEL_49:
              if ( _InterlockedDecrement((volatile signed __int32 *)v35 + v24 + 706) < 0 )
                WdLogSingleEntry5(0LL, 275LL, 37LL, v35, *((unsigned int *)v35 + v24 + 706), 0LL);
            }
          }
          if ( v34 )
          {
            if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)&v42, 0LL) < 0 )
            {
              WdLogSingleEntry1(3LL, 2663LL);
            }
            else
            {
              v33 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v17 + 624LL)
                                                                                           + 8LL)
                                                                               + 552LL))(
                      *(_QWORD *)(*(_QWORD *)v17 + 632LL),
                      1LL,
                      0LL,
                      (unsigned int)v7);
              if ( v33 < 0 )
                WdLogSingleEntry1(3LL, v33);
            }
          }
          goto LABEL_52;
        }
        v23 = -1073741811;
        WdLogSingleEntry1(2LL, -1073741811LL);
        v32 = L"Invalid number of wait objects in ADAPTER_DISPLAY::WaitForEventsOrVerticalBlankEvent, returning 0x%I64x";
      }
      else
      {
        v23 = -1073741811;
        WdLogSingleEntry1(2LL, -1073741811LL);
        v32 = L"Invalid object array in ADAPTER_DISPLAY::WaitForEventsOrVerticalBlankEvent, returning 0x%I64x";
      }
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v32, -1073741811LL, 0LL, 0LL, 0LL, 0LL);
      goto LABEL_44;
    }
    v19 = v7;
    if ( (*((_DWORD *)v13 + 666) & 0x10) != 0 )
    {
      if ( (unsigned int)v7 >= 0x10 )
        goto LABEL_27;
    }
    else
    {
      v19 = 0;
    }
    _InterlockedIncrement((volatile signed __int32 *)v13 + v19 + 706);
    v18 = *(_QWORD *)v17;
    v13 = v35;
LABEL_27:
    v34 = 0;
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(v18 + 624) + 8LL) + 544LL))(
           *(_QWORD *)(v18 + 632),
           (unsigned int)v7) )
    {
LABEL_28:
      v20 = 1;
      goto LABEL_29;
    }
    v30 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v17 + 624LL) + 8LL);
    v31 = *(int (__fastcall **)(_QWORD, __int64, __int64, _QWORD))(v30 + 552);
    LOBYTE(v30) = 1;
    if ( v31(*(_QWORD *)(*(_QWORD *)v17 + 632LL), 1LL, v30, (unsigned int)v7) >= 0 )
    {
      v34 = 1;
      goto LABEL_28;
    }
    DXGADAPTER::DecrementVSyncWaiter(v13, v7);
    WdLogSingleEntry1(2LL, 2600LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"DxgkCddWaitForVerticalBlankEvent failed to enable VSync",
      2600LL,
      0LL,
      0LL,
      0LL,
      0LL);
LABEL_83:
    v23 = -1073740759;
    goto LABEL_52;
  }
  COREACCESS::Release((COREACCESS *)v44);
LABEL_78:
  COREACCESS::Release((COREACCESS *)v49);
  v23 = -1073741130;
LABEL_52:
  if ( v43 )
    COREADAPTERACCESS::Release((COREADAPTERACCESS *)&v42);
  if ( v51 )
  {
    if ( v52 )
      COREACCESS::Release((COREACCESS *)v49);
    v25 = (DXGGLOBAL **)v51;
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v51 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(v25[2], (struct DXGADAPTER *)v25);
  }
  if ( v46 )
  {
    if ( v47 )
      COREACCESS::Release((COREACCESS *)v44);
    v26 = (DXGGLOBAL **)v46;
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v46 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(v26[2], (struct DXGADAPTER *)v26);
  }
LABEL_64:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)v37);
  if ( v38 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(BYTE1(Microsoft_Windows_DxgKrnlEnableBits), &EventProfilerExit, v27, v37[0]);
  return v23;
}
