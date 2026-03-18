/*
 * XREFs of MicrosoftTelemetryAssertTriggeredWorker @ 0x1C006E86C
 * Callers:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C006E83C (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C000AE58 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0020E7C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     GetImageTuple @ 0x1C006E7EC (GetImageTuple.c)
 *     _tlgCreate1Sz_char @ 0x1C006ED78 (_tlgCreate1Sz_char.c)
 *     TakeTelemetryAssertsLock @ 0x1C006EDAC (TakeTelemetryAssertsLock.c)
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
  __int64 v13; // r15
  int v14; // r14d
  unsigned int v15; // ebx
  unsigned int v16; // eax
  int v17; // r13d
  struct _FAST_MUTEX *v18; // rcx
  int v19; // edi
  __int64 v20; // r8
  unsigned __int8 CurrentIrql; // al
  __int64 v22; // r8
  __int64 v23; // r9
  const GUID *v24; // r9
  __int64 v25; // rdx
  __int64 v26; // rcx
  int v27; // edi
  __int64 v28; // r8
  char v29; // al
  __int64 v30; // r9
  const GUID *v31; // r8
  ULONG v32; // r10d
  __int64 *v33; // rcx
  unsigned int v34; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v35; // [rsp+54h] [rbp-ACh] BYREF
  int v36; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v37; // [rsp+5Ch] [rbp-A4h] BYREF
  int v38; // [rsp+60h] [rbp-A0h] BYREF
  int v39; // [rsp+64h] [rbp-9Ch] BYREF
  int v40; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v41; // [rsp+6Ch] [rbp-94h] BYREF
  int v42; // [rsp+70h] [rbp-90h] BYREF
  int v43; // [rsp+74h] [rbp-8Ch] BYREF
  unsigned int v44; // [rsp+78h] [rbp-88h] BYREF
  int v45; // [rsp+7Ch] [rbp-84h] BYREF
  int v46; // [rsp+80h] [rbp-80h] BYREF
  int v47; // [rsp+84h] [rbp-7Ch] BYREF
  unsigned int v48; // [rsp+88h] [rbp-78h] BYREF
  int v49; // [rsp+8Ch] [rbp-74h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v50; // [rsp+90h] [rbp-70h] BYREF
  int *v51; // [rsp+B0h] [rbp-50h]
  __int64 v52; // [rsp+B8h] [rbp-48h]
  int *v53; // [rsp+C0h] [rbp-40h]
  __int64 v54; // [rsp+C8h] [rbp-38h]
  int *v55; // [rsp+D0h] [rbp-30h]
  __int64 v56; // [rsp+D8h] [rbp-28h]
  int *v57; // [rsp+E0h] [rbp-20h]
  __int64 v58; // [rsp+E8h] [rbp-18h]
  char v59[16]; // [rsp+F0h] [rbp-10h] BYREF
  int *v60; // [rsp+100h] [rbp+0h]
  __int64 v61; // [rsp+108h] [rbp+8h]
  int *v62; // [rsp+110h] [rbp+10h]
  __int64 v63; // [rsp+118h] [rbp+18h]
  int *v64; // [rsp+120h] [rbp+20h]
  __int64 v65; // [rsp+128h] [rbp+28h]
  struct _EVENT_DATA_DESCRIPTOR v66; // [rsp+130h] [rbp+30h] BYREF
  int *v67; // [rsp+150h] [rbp+50h]
  __int64 v68; // [rsp+158h] [rbp+58h]
  int *v69; // [rsp+160h] [rbp+60h]
  __int64 v70; // [rsp+168h] [rbp+68h]
  int *v71; // [rsp+170h] [rbp+70h]
  __int64 v72; // [rsp+178h] [rbp+78h]
  int *v73; // [rsp+180h] [rbp+80h]
  __int64 v74; // [rsp+188h] [rbp+88h]
  char v75[16]; // [rsp+190h] [rbp+90h] BYREF
  int *v76; // [rsp+1A0h] [rbp+A0h]
  __int64 v77; // [rsp+1A8h] [rbp+A8h]
  int *v78; // [rsp+1B0h] [rbp+B0h]
  __int64 v79; // [rsp+1B8h] [rbp+B8h]
  int *v80; // [rsp+1C0h] [rbp+C0h]
  __int64 v81; // [rsp+1C8h] [rbp+C8h]
  char v82[16]; // [rsp+1D0h] [rbp+D0h] BYREF

  if ( !_InterlockedExchangeAdd(&g_AssertsOperational, 0)
    || (unsigned int)((__int64 (*)(void))TakeTelemetryAssertsLock)() )
  {
    return;
  }
  v2 = (__int64 *)g_MicrosoftTelemetryAssertsTriggeredList;
  if ( &g_MicrosoftTelemetryAssertsTriggeredList == (__int64 *)g_MicrosoftTelemetryAssertsTriggeredList )
  {
LABEL_6:
    PoolWithTag = (__int64 *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x30uLL, 0x74727341u);
    v3 = PoolWithTag;
    if ( !PoolWithTag )
    {
LABEL_33:
      ExReleaseFastMutex(g_AssertFastMutex);
      return;
    }
    v5 = MEMORY[0xFFFFF78000000320];
    *PoolWithTag = a1;
    TimeIncrement = KeQueryTimeIncrement();
    *((_DWORD *)v3 + 4) = 0;
    *((_DWORD *)v3 + 5) = 0;
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
  v35 = 0;
  v34 = 0;
  v10 = v9 * KeQueryTimeIncrement();
  if ( (unsigned __int64)(v10 / 10000 - v3[1]) <= 0xEA60 )
    goto LABEL_33;
  ImageTuple = GetImageTuple(v10, &v35, &v34);
  v13 = v34;
  v14 = ImageTuple;
  if ( ImageTuple
    && a1 >= 0x1C0000000LL
    && 0x1C0000000LL + (unsigned __int64)v34 > 0x1C0000000LL
    && a1 <= 0x1C0000000LL + (unsigned __int64)v34 )
  {
    v15 = a1 - 0xC0000000;
  }
  else
  {
    v15 = 0;
  }
  v16 = *((_DWORD *)v3 + 5);
  v17 = *((_DWORD *)v3 + 4);
  v18 = g_AssertFastMutex;
  v3[1] = v12;
  v19 = *((_DWORD *)v3 + 6);
  v34 = v16;
  ExReleaseFastMutex(v18);
  if ( (unsigned int)dword_1C00D4040 > 5 && tlgKeywordOn((__int64)&dword_1C00D4040, 0x400000000000LL) )
  {
    v36 = 10;
    v67 = &v36;
    v68 = 4LL;
    v69 = (int *)&v37;
    v37 = v15;
    v70 = 4LL;
    v71 = &v38;
    v38 = v14 != 0 ? v35 : 0;
    v72 = 4LL;
    v73 = &v39;
    v74 = 4LL;
    v39 = v14 != 0 ? v13 : 0;
    tlgCreate1Sz_char(v75, "<unknown>", v20, 0LL);
    v40 = v17;
    v76 = &v40;
    v41 = v34;
    v78 = (int *)&v41;
    v77 = 4LL;
    v79 = 4LL;
    CurrentIrql = KeGetCurrentIrql();
    v42 = CurrentIrql;
    v80 = &v42;
    v81 = 4LL;
    tlgCreate1Sz_char(v82, "<unknown>", v22, v23);
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_1C00D4040,
      (unsigned __int8 *)dword_1C0081AF7,
      0LL,
      v24,
      0xBu,
      &v66);
  }
  if ( dword_1C00D4078 && !v19 && !KeGetCurrentIrql() )
  {
    v27 = DbgkWerCaptureLiveKernelDump(L"TELASSERT", 465LL, v15, 0LL, v35, v13, 0LL, 0LL, 0);
    if ( (unsigned int)dword_1C00D4040 > 5 )
    {
      v29 = tlgKeywordOn((__int64)&dword_1C00D4040, 0x400000000000LL);
      v28 = 0LL;
      if ( v29 )
      {
        v52 = 4LL;
        v51 = &v43;
        v43 = 10;
        v53 = (int *)&v44;
        v44 = v15;
        v54 = 4LL;
        v56 = 4LL;
        v55 = &v45;
        v45 = v14 != 0 ? v35 : 0;
        v58 = 4LL;
        v46 = v14 != 0 ? v13 : 0;
        v57 = &v46;
        tlgCreate1Sz_char(v59, "<unknown>", 0LL, v30);
        v47 = v17;
        v60 = &v47;
        v48 = v34;
        v61 = 4LL;
        v62 = (int *)&v48;
        v64 = &v49;
        v63 = 4LL;
        v49 = v27;
        v65 = 4LL;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C00D4040,
          (unsigned __int8 *)dword_1C0081B64,
          v31,
          0LL,
          v32,
          &v50);
      }
    }
    if ( !v27 && !(unsigned int)TakeTelemetryAssertsLock(v26, v25, v28) )
    {
      v33 = (__int64 *)g_MicrosoftTelemetryAssertsTriggeredList;
      if ( &g_MicrosoftTelemetryAssertsTriggeredList != (__int64 *)g_MicrosoftTelemetryAssertsTriggeredList )
      {
        while ( *(v33 - 4) != a1 )
        {
          v33 = (__int64 *)*v33;
          if ( &g_MicrosoftTelemetryAssertsTriggeredList == v33 )
            goto LABEL_33;
        }
        ++*((_DWORD *)v33 - 2);
      }
      goto LABEL_33;
    }
  }
}
