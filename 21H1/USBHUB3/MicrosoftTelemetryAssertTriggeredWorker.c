/*
 * XREFs of MicrosoftTelemetryAssertTriggeredWorker @ 0x1C003F0E8
 * Callers:
 *     MicrosoftTelemetryAssertTriggeredArgsMsgKM @ 0x1C003F67C (MicrosoftTelemetryAssertTriggeredArgsMsgKM.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0001008 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00428D0 (__security_check_cookie.c)
 */

void __fastcall MicrosoftTelemetryAssertTriggeredWorker(unsigned __int64 a1, __int64 a2, __int64 a3, int a4)
{
  KIRQL v5; // al
  __int64 *v6; // rcx
  KIRQL v7; // r12
  __int64 *v8; // rdi
  __int64 *PoolWithTag; // rax
  __int64 v10; // rbx
  ULONG TimeIncrement; // eax
  _QWORD *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // rdx
  __int16 v16; // cx
  unsigned int v17; // r15d
  unsigned int v18; // r14d
  unsigned __int64 v19; // rcx
  unsigned int v20; // ebx
  int v21; // eax
  int v22; // r13d
  int v23; // edi
  __int64 v24; // r8
  int v25; // r12d
  unsigned __int8 CurrentIrql; // al
  int v27; // edi
  __int64 v28; // r9
  KIRQL v29; // al
  __int64 *v30; // rcx
  int v31; // [rsp+58h] [rbp-B0h] BYREF
  int v32; // [rsp+5Ch] [rbp-ACh] BYREF
  unsigned int v33; // [rsp+60h] [rbp-A8h] BYREF
  unsigned int v34; // [rsp+64h] [rbp-A4h] BYREF
  unsigned int v35; // [rsp+68h] [rbp-A0h] BYREF
  int v36; // [rsp+6Ch] [rbp-9Ch] BYREF
  int v37; // [rsp+70h] [rbp-98h] BYREF
  int v38; // [rsp+74h] [rbp-94h]
  int v39; // [rsp+78h] [rbp-90h] BYREF
  int v40; // [rsp+7Ch] [rbp-8Ch] BYREF
  int v41; // [rsp+80h] [rbp-88h] BYREF
  unsigned int v42; // [rsp+84h] [rbp-84h] BYREF
  unsigned int v43; // [rsp+88h] [rbp-80h] BYREF
  unsigned int v44; // [rsp+8Ch] [rbp-7Ch] BYREF
  int v45; // [rsp+90h] [rbp-78h] BYREF
  int v46; // [rsp+94h] [rbp-74h] BYREF
  int v47; // [rsp+98h] [rbp-70h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v48; // [rsp+A8h] [rbp-60h] BYREF
  int *v49; // [rsp+C8h] [rbp-40h]
  __int64 v50; // [rsp+D0h] [rbp-38h]
  int *v51; // [rsp+D8h] [rbp-30h]
  __int64 v52; // [rsp+E0h] [rbp-28h]
  int *v53; // [rsp+E8h] [rbp-20h]
  __int64 v54; // [rsp+F0h] [rbp-18h]
  int *v55; // [rsp+F8h] [rbp-10h]
  __int64 v56; // [rsp+100h] [rbp-8h]
  const char *v57; // [rsp+108h] [rbp+0h]
  __int64 v58; // [rsp+110h] [rbp+8h]
  int *v59; // [rsp+118h] [rbp+10h]
  __int64 v60; // [rsp+120h] [rbp+18h]
  int *v61; // [rsp+128h] [rbp+20h]
  __int64 v62; // [rsp+130h] [rbp+28h]
  int *v63; // [rsp+138h] [rbp+30h]
  __int64 v64; // [rsp+140h] [rbp+38h]
  const char *v65; // [rsp+148h] [rbp+40h]
  __int64 v66; // [rsp+150h] [rbp+48h]
  int *v67; // [rsp+158h] [rbp+50h]
  __int64 v68; // [rsp+160h] [rbp+58h]
  int *v69; // [rsp+168h] [rbp+60h]
  __int64 v70; // [rsp+170h] [rbp+68h]
  const char *v71; // [rsp+178h] [rbp+70h]
  __int64 v72; // [rsp+180h] [rbp+78h]
  struct _EVENT_DATA_DESCRIPTOR v73; // [rsp+188h] [rbp+80h] BYREF
  int *v74; // [rsp+1A8h] [rbp+A0h]
  __int64 v75; // [rsp+1B0h] [rbp+A8h]
  int *v76; // [rsp+1B8h] [rbp+B0h]
  __int64 v77; // [rsp+1C0h] [rbp+B8h]
  int *v78; // [rsp+1C8h] [rbp+C0h]
  __int64 v79; // [rsp+1D0h] [rbp+C8h]
  int *v80; // [rsp+1D8h] [rbp+D0h]
  __int64 v81; // [rsp+1E0h] [rbp+D8h]
  const char *v82; // [rsp+1E8h] [rbp+E0h]
  __int64 v83; // [rsp+1F0h] [rbp+E8h]
  int *v84; // [rsp+1F8h] [rbp+F0h]
  __int64 v85; // [rsp+200h] [rbp+F8h]
  int *v86; // [rsp+208h] [rbp+100h]
  __int64 v87; // [rsp+210h] [rbp+108h]
  int *v88; // [rsp+218h] [rbp+110h]
  __int64 v89; // [rsp+220h] [rbp+118h]

  v38 = a4;
  if ( !_InterlockedExchangeAdd(&g_AssertsOperational, 0) )
    return;
  v5 = KeAcquireSpinLockRaiseToDpc(&g_AssertSpinLock);
  v6 = (__int64 *)g_MicrosoftTelemetryAssertsTriggeredList;
  v7 = v5;
  if ( &g_MicrosoftTelemetryAssertsTriggeredList == (__int64 *)g_MicrosoftTelemetryAssertsTriggeredList )
  {
LABEL_5:
    PoolWithTag = (__int64 *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x30uLL, 0x74727341u);
    v8 = PoolWithTag;
    if ( !PoolWithTag )
    {
LABEL_37:
      KeReleaseSpinLock(&g_AssertSpinLock, v7);
      return;
    }
    v10 = MEMORY[0xFFFFF78000000320];
    *PoolWithTag = a1;
    TimeIncrement = KeQueryTimeIncrement();
    v8[2] = 0LL;
    *((_DWORD *)v8 + 6) = 0;
    v8[1] = ((__int64)((unsigned __int128)(v10 * TimeIncrement * (__int128)0x346DC5D63886594BLL) >> 64) >> 11)
          + ((unsigned __int64)((unsigned __int128)(v10 * TimeIncrement * (__int128)0x346DC5D63886594BLL) >> 64) >> 63)
          - 60001;
    v12 = v8 + 4;
    v13 = g_MicrosoftTelemetryAssertsTriggeredList;
    if ( *(__int64 **)(g_MicrosoftTelemetryAssertsTriggeredList + 8) != &g_MicrosoftTelemetryAssertsTriggeredList )
      __fastfail(3u);
    *v12 = g_MicrosoftTelemetryAssertsTriggeredList;
    v8[5] = (__int64)&g_MicrosoftTelemetryAssertsTriggeredList;
    *(_QWORD *)(v13 + 8) = v12;
    g_MicrosoftTelemetryAssertsTriggeredList = (__int64)(v8 + 4);
  }
  else
  {
    while ( 1 )
    {
      v8 = v6 - 4;
      if ( *(v6 - 4) == a1 )
        break;
      v6 = (__int64 *)*v6;
      if ( &g_MicrosoftTelemetryAssertsTriggeredList == v6 )
        goto LABEL_5;
    }
  }
  ++*((_DWORD *)v8 + 4);
  ++*((_DWORD *)v8 + 5);
  v14 = MEMORY[0xFFFFF78000000320];
  v15 = v14 * KeQueryTimeIncrement() / 10000;
  if ( (unsigned __int64)(v15 - v8[1]) <= 0xEA60 )
    goto LABEL_37;
  v16 = *(_WORD *)(0x1C0000018LL + MEMORY[0x1C000003C]);
  if ( v16 == 267 || v16 == 523 )
  {
    v17 = *(_DWORD *)(0x1C0000008LL + MEMORY[0x1C000003C]);
    v18 = *(_DWORD *)(0x1C0000050LL + MEMORY[0x1C000003C]);
  }
  else
  {
    v17 = 0;
    v18 = 0;
  }
  if ( a1 < 0x1C0000000LL || (v19 = 0x1C0000000LL + v18, v19 <= 0x1C0000000LL) || a1 > v19 )
    v20 = 0;
  else
    v20 = a1 - 0xC0000000;
  v21 = *((_DWORD *)v8 + 5);
  v22 = *((_DWORD *)v8 + 4);
  v8[1] = v15;
  v23 = *((_DWORD *)v8 + 6);
  v31 = v21;
  KeReleaseSpinLock(&g_AssertSpinLock, v7);
  if ( (unsigned int)dword_1C0070040 > 5
    && (qword_1C0070050 & 0x400000000000LL) != 0
    && (qword_1C0070058 & 0x400000000000LL) == qword_1C0070058 )
  {
    v25 = v31;
    v49 = &v32;
    v32 = 10;
    v51 = (int *)&v33;
    v53 = (int *)&v34;
    v55 = (int *)&v35;
    v59 = &v36;
    v61 = &v31;
    v50 = 4LL;
    v33 = v20;
    v52 = 4LL;
    v34 = v17;
    v54 = 4LL;
    v35 = v18;
    v56 = 4LL;
    v57 = "<unknown>";
    v58 = 10LL;
    v36 = v22;
    v60 = 4LL;
    v62 = 4LL;
    CurrentIrql = KeGetCurrentIrql();
    v63 = &v37;
    v65 = "usbhub3.sys";
    v39 = v38;
    v67 = &v39;
    v69 = &v40;
    v71 = "WdfDeviceStopIdle failed";
    v40 = 0;
    v37 = CurrentIrql;
    v64 = 4LL;
    v66 = 12LL;
    v68 = 4LL;
    v70 = 4LL;
    v72 = 25LL;
    tlgWriteTransfer_EtwWriteTransfer(CurrentIrql, (unsigned __int8 *)dword_1C00627D9, v24, 10LL, 0xEu, &v48);
  }
  else
  {
    v25 = v31;
  }
  if ( dword_1C0070078 && !v23 && !KeGetCurrentIrql() )
  {
    v27 = DbgkWerCaptureLiveKernelDump(L"TELASSERT", 465LL, v20, 0LL, v17, v18, 0LL, 0LL, 0);
    if ( (unsigned int)dword_1C0070040 > 5
      && (qword_1C0070050 & 0x400000000000LL) != 0
      && (qword_1C0070058 & 0x400000000000LL) == qword_1C0070058 )
    {
      v75 = 4LL;
      v41 = 10;
      v74 = &v41;
      v42 = v20;
      v76 = (int *)&v42;
      v78 = (int *)&v43;
      v80 = (int *)&v44;
      v82 = "<unknown>";
      v84 = &v45;
      v86 = &v46;
      v88 = &v47;
      v77 = 4LL;
      v43 = v17;
      v79 = 4LL;
      v44 = v18;
      v81 = 4LL;
      v83 = 10LL;
      v45 = v22;
      v85 = 4LL;
      v46 = v25;
      v87 = 4LL;
      v47 = v27;
      v89 = 4LL;
      tlgWriteTransfer_EtwWriteTransfer(
        qword_1C0070058 & 0x400000000000LL,
        (unsigned __int8 *)dword_1C00628F0,
        10LL,
        v28,
        0xAu,
        &v73);
    }
    if ( !v27 )
    {
      v29 = KeAcquireSpinLockRaiseToDpc(&g_AssertSpinLock);
      v30 = (__int64 *)g_MicrosoftTelemetryAssertsTriggeredList;
      v7 = v29;
      if ( &g_MicrosoftTelemetryAssertsTriggeredList != (__int64 *)g_MicrosoftTelemetryAssertsTriggeredList )
      {
        while ( *(v30 - 4) != a1 )
        {
          v30 = (__int64 *)*v30;
          if ( &g_MicrosoftTelemetryAssertsTriggeredList == v30 )
            goto LABEL_37;
        }
        ++*((_DWORD *)v30 - 2);
      }
      goto LABEL_37;
    }
  }
}
