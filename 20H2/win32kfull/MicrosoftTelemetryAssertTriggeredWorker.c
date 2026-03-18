/*
 * XREFs of MicrosoftTelemetryAssertTriggeredWorker @ 0x1C02DE440
 * Callers:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02DE410 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 * Callees:
 *     TakeTelemetryAssertsLock @ 0x1C0128944 (TakeTelemetryAssertsLock.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C01D1B24 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     GetImageTuple @ 0x1C02DE3C0 (GetImageTuple.c)
 *     _tlgCreate1Sz_char @ 0x1C02DE99C (_tlgCreate1Sz_char.c)
 */

void __fastcall MicrosoftTelemetryAssertTriggeredWorker(unsigned __int64 a1)
{
  __int64 *v2; // rcx
  __int64 *v3; // rdi
  __int64 *PoolWithTag; // rax
  __int64 v5; // rbx
  ULONG TimeIncrement; // eax
  _QWORD *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rcx
  int ImageTuple; // eax
  __int64 v12; // r10
  unsigned int v13; // r15d
  int v14; // r14d
  unsigned int v15; // ebx
  struct _FAST_MUTEX *v16; // rcx
  int v17; // eax
  int v18; // edi
  const char *v19; // r12
  int v20; // r13d
  const char *v21; // rdx
  unsigned __int8 CurrentIrql; // al
  int v23; // edi
  ULONG v24; // r10d
  __int64 *v25; // rcx
  unsigned int v26; // [rsp+58h] [rbp-B0h] BYREF
  int v27; // [rsp+5Ch] [rbp-ACh] BYREF
  int v28; // [rsp+60h] [rbp-A8h]
  int v29; // [rsp+64h] [rbp-A4h] BYREF
  unsigned int v30; // [rsp+68h] [rbp-A0h] BYREF
  int v31; // [rsp+6Ch] [rbp-9Ch] BYREF
  int v32; // [rsp+70h] [rbp-98h] BYREF
  unsigned int v33; // [rsp+74h] [rbp-94h] BYREF
  int v34; // [rsp+78h] [rbp-90h] BYREF
  int v35; // [rsp+7Ch] [rbp-8Ch] BYREF
  int v36; // [rsp+80h] [rbp-88h] BYREF
  unsigned int v37; // [rsp+84h] [rbp-84h] BYREF
  int v38; // [rsp+88h] [rbp-80h] BYREF
  int v39; // [rsp+8Ch] [rbp-7Ch] BYREF
  unsigned int v40; // [rsp+90h] [rbp-78h] BYREF
  int v41; // [rsp+94h] [rbp-74h] BYREF
  int v42; // [rsp+98h] [rbp-70h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v43; // [rsp+A8h] [rbp-60h] BYREF
  int *v44; // [rsp+C8h] [rbp-40h]
  __int64 v45; // [rsp+D0h] [rbp-38h]
  int *v46; // [rsp+D8h] [rbp-30h]
  __int64 v47; // [rsp+E0h] [rbp-28h]
  int *v48; // [rsp+E8h] [rbp-20h]
  __int64 v49; // [rsp+F0h] [rbp-18h]
  int *v50; // [rsp+F8h] [rbp-10h]
  __int64 v51; // [rsp+100h] [rbp-8h]
  char v52[16]; // [rsp+108h] [rbp+0h] BYREF
  int *v53; // [rsp+118h] [rbp+10h]
  __int64 v54; // [rsp+120h] [rbp+18h]
  int *v55; // [rsp+128h] [rbp+20h]
  __int64 v56; // [rsp+130h] [rbp+28h]
  int *v57; // [rsp+138h] [rbp+30h]
  __int64 v58; // [rsp+140h] [rbp+38h]
  struct _EVENT_DATA_DESCRIPTOR v59; // [rsp+148h] [rbp+40h] BYREF
  int *v60; // [rsp+168h] [rbp+60h]
  __int64 v61; // [rsp+170h] [rbp+68h]
  int *v62; // [rsp+178h] [rbp+70h]
  __int64 v63; // [rsp+180h] [rbp+78h]
  int *v64; // [rsp+188h] [rbp+80h]
  __int64 v65; // [rsp+190h] [rbp+88h]
  int *v66; // [rsp+198h] [rbp+90h]
  __int64 v67; // [rsp+1A0h] [rbp+98h]
  char v68[16]; // [rsp+1A8h] [rbp+A0h] BYREF
  int *v69; // [rsp+1B8h] [rbp+B0h]
  __int64 v70; // [rsp+1C0h] [rbp+B8h]
  int *v71; // [rsp+1C8h] [rbp+C0h]
  __int64 v72; // [rsp+1D0h] [rbp+C8h]
  int *v73; // [rsp+1D8h] [rbp+D0h]
  __int64 v74; // [rsp+1E0h] [rbp+D8h]
  char v75[16]; // [rsp+1E8h] [rbp+E0h] BYREF

  if ( !_InterlockedExchangeAdd(&g_AssertsOperational, 0) || (unsigned int)TakeTelemetryAssertsLock() )
    return;
  v2 = (__int64 *)g_MicrosoftTelemetryAssertsTriggeredList;
  if ( &g_MicrosoftTelemetryAssertsTriggeredList == (__int64 *)g_MicrosoftTelemetryAssertsTriggeredList )
  {
LABEL_6:
    PoolWithTag = (__int64 *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x30uLL, 0x74727341u);
    v3 = PoolWithTag;
    if ( !PoolWithTag )
    {
LABEL_39:
      ExReleaseFastMutex(g_AssertFastMutex);
      return;
    }
    v5 = MEMORY[0xFFFFF78000000320];
    *PoolWithTag = a1;
    TimeIncrement = KeQueryTimeIncrement();
    v3[2] = 0LL;
    *((_DWORD *)v3 + 6) = 0;
    v3[1] = ((__int64)((unsigned __int128)(v5 * TimeIncrement * (__int128)0x346DC5D63886594BLL) >> 64) >> 11)
          + ((unsigned __int64)((unsigned __int128)(v5 * TimeIncrement * (__int128)0x346DC5D63886594BLL) >> 64) >> 63)
          - 60001;
    v7 = v3 + 4;
    v8 = g_MicrosoftTelemetryAssertsTriggeredList;
    if ( *(__int64 **)(g_MicrosoftTelemetryAssertsTriggeredList + 8) != &g_MicrosoftTelemetryAssertsTriggeredList )
      __fastfail(3u);
    *v7 = g_MicrosoftTelemetryAssertsTriggeredList;
    v3[5] = (__int64)&g_MicrosoftTelemetryAssertsTriggeredList;
    *(_QWORD *)(v8 + 8) = v7;
    g_MicrosoftTelemetryAssertsTriggeredList = (__int64)(v3 + 4);
  }
  else
  {
    while ( 1 )
    {
      v3 = v2 - 4;
      if ( *(v2 - 4) == a1 )
        break;
      v2 = (__int64 *)*v2;
      if ( &g_MicrosoftTelemetryAssertsTriggeredList == v2 )
        goto LABEL_6;
    }
  }
  ++*((_DWORD *)v3 + 4);
  ++*((_DWORD *)v3 + 5);
  v9 = MEMORY[0xFFFFF78000000320];
  v10 = v9 * KeQueryTimeIncrement();
  v27 = 0;
  v26 = 0;
  if ( (unsigned __int64)(v10 / 10000 - v3[1]) <= 0xEA60 )
    goto LABEL_39;
  ImageTuple = GetImageTuple(v10, &v27, &v26);
  v13 = v26;
  v14 = ImageTuple;
  if ( ImageTuple
    && a1 >= 0x1C0000000LL
    && 0x1C0000000LL + (unsigned __int64)v26 > 0x1C0000000LL
    && a1 <= 0x1C0000000LL + (unsigned __int64)v26 )
  {
    v15 = a1 - 0xC0000000;
  }
  else
  {
    v15 = 0;
  }
  v16 = g_AssertFastMutex;
  v26 = *((_DWORD *)v3 + 4);
  v17 = *((_DWORD *)v3 + 5);
  v3[1] = v12;
  v18 = *((_DWORD *)v3 + 6);
  v28 = v17;
  ExReleaseFastMutex(v16);
  v19 = "<unknown>";
  v20 = v27;
  if ( (unsigned int)dword_1C037A040 > 5
    && (qword_1C037A050 & 0x400000000000LL) != 0
    && (qword_1C037A058 & 0x400000000000LL) == qword_1C037A058 )
  {
    v29 = 10;
    v60 = &v29;
    v21 = "<unknown>";
    v61 = 4LL;
    v62 = (int *)&v30;
    v30 = v15;
    v63 = 4LL;
    v64 = &v31;
    v65 = 4LL;
    v31 = v14 != 0 ? v27 : 0;
    v67 = 4LL;
    v66 = &v32;
    v32 = v14 != 0 ? v13 : 0;
    if ( g_ModuleName )
      v21 = (const char *)g_ModuleName;
    tlgCreate1Sz_char(v68, v21);
    v69 = (int *)&v33;
    v34 = v28;
    v71 = &v34;
    v33 = v26;
    v70 = 4LL;
    v72 = 4LL;
    CurrentIrql = KeGetCurrentIrql();
    v35 = CurrentIrql;
    v73 = &v35;
    v74 = 4LL;
    tlgCreate1Sz_char(v75, "<unknown>");
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_1C037A040,
      (unsigned __int8 *)dword_1C02F2DA3,
      0LL,
      0LL,
      0xBu,
      &v59);
  }
  if ( dword_1C037A078 && !v18 && !KeGetCurrentIrql() )
  {
    v23 = DbgkWerCaptureLiveKernelDump(L"TELASSERT", 465LL, v15);
    if ( (unsigned int)dword_1C037A040 > 5
      && (qword_1C037A050 & 0x400000000000LL) != 0
      && (qword_1C037A058 & 0x400000000000LL) == qword_1C037A058 )
    {
      v45 = 4LL;
      v44 = &v36;
      v36 = 10;
      v46 = (int *)&v37;
      v37 = v15;
      v47 = 4LL;
      v48 = &v38;
      v49 = 4LL;
      v38 = v14 != 0 ? v20 : 0;
      v51 = 4LL;
      v39 = v14 != 0 ? v13 : 0;
      v50 = &v39;
      if ( g_ModuleName )
        v19 = (const char *)g_ModuleName;
      tlgCreate1Sz_char(v52, v19);
      v40 = v26;
      v54 = 4LL;
      v53 = (int *)&v40;
      v41 = v28;
      v55 = &v41;
      v57 = &v42;
      v56 = 4LL;
      v42 = v23;
      v58 = 4LL;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_1C037A040,
        (unsigned __int8 *)dword_1C02F2E10,
        0LL,
        0LL,
        v24,
        &v43);
    }
    if ( !v23 && !(unsigned int)TakeTelemetryAssertsLock() )
    {
      v25 = (__int64 *)g_MicrosoftTelemetryAssertsTriggeredList;
      if ( &g_MicrosoftTelemetryAssertsTriggeredList != (__int64 *)g_MicrosoftTelemetryAssertsTriggeredList )
      {
        while ( *(v25 - 4) != a1 )
        {
          v25 = (__int64 *)*v25;
          if ( &g_MicrosoftTelemetryAssertsTriggeredList == v25 )
            goto LABEL_39;
        }
        ++*((_DWORD *)v25 - 2);
      }
      goto LABEL_39;
    }
  }
}
