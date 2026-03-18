/*
 * XREFs of MicrosoftTelemetryAssertTriggeredWorker @ 0x1C00823E0
 * Callers:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C00823B0 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C0012AB4 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C001A400 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     GetImageTuple @ 0x1C0082360 (GetImageTuple.c)
 *     _tlgCreate1Sz_char @ 0x1C0082904 (_tlgCreate1Sz_char.c)
 *     TakeTelemetryAssertsLock @ 0x1C0082938 (TakeTelemetryAssertsLock.c)
 */

void __fastcall MicrosoftTelemetryAssertTriggeredWorker(unsigned __int64 a1)
{
  __int64 v2; // r9
  __int64 *v3; // rcx
  __int64 *v4; // rdi
  unsigned __int64 *Pool2; // rax
  __int64 v6; // rbx
  ULONG TimeIncrement; // eax
  _QWORD *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rcx
  int ImageTuple; // eax
  __int64 v13; // r10
  __int64 v14; // r15
  int v15; // r14d
  unsigned int v16; // ebx
  unsigned int v17; // eax
  int v18; // r13d
  struct _FAST_MUTEX *v19; // rcx
  int v20; // edi
  KIRQL CurrentIrql; // al
  __int64 v22; // r8
  __int64 v23; // rdx
  __int64 v24; // rcx
  int v25; // edi
  __int64 v26; // r8
  char v27; // al
  const GUID *v28; // r8
  ULONG v29; // r10d
  __int64 *v30; // rcx
  unsigned int v31; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v32; // [rsp+54h] [rbp-ACh] BYREF
  int v33; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v34; // [rsp+5Ch] [rbp-A4h] BYREF
  int v35; // [rsp+60h] [rbp-A0h] BYREF
  int v36; // [rsp+64h] [rbp-9Ch] BYREF
  int v37; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v38; // [rsp+6Ch] [rbp-94h] BYREF
  int v39; // [rsp+70h] [rbp-90h] BYREF
  int v40; // [rsp+74h] [rbp-8Ch] BYREF
  unsigned int v41; // [rsp+78h] [rbp-88h] BYREF
  int v42; // [rsp+7Ch] [rbp-84h] BYREF
  int v43; // [rsp+80h] [rbp-80h] BYREF
  int v44; // [rsp+84h] [rbp-7Ch] BYREF
  unsigned int v45; // [rsp+88h] [rbp-78h] BYREF
  int v46; // [rsp+8Ch] [rbp-74h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v47; // [rsp+90h] [rbp-70h] BYREF
  int *v48; // [rsp+B0h] [rbp-50h]
  __int64 v49; // [rsp+B8h] [rbp-48h]
  int *v50; // [rsp+C0h] [rbp-40h]
  __int64 v51; // [rsp+C8h] [rbp-38h]
  int *v52; // [rsp+D0h] [rbp-30h]
  __int64 v53; // [rsp+D8h] [rbp-28h]
  int *v54; // [rsp+E0h] [rbp-20h]
  __int64 v55; // [rsp+E8h] [rbp-18h]
  char v56[16]; // [rsp+F0h] [rbp-10h] BYREF
  int *v57; // [rsp+100h] [rbp+0h]
  __int64 v58; // [rsp+108h] [rbp+8h]
  int *v59; // [rsp+110h] [rbp+10h]
  __int64 v60; // [rsp+118h] [rbp+18h]
  int *v61; // [rsp+120h] [rbp+20h]
  __int64 v62; // [rsp+128h] [rbp+28h]
  struct _EVENT_DATA_DESCRIPTOR v63; // [rsp+130h] [rbp+30h] BYREF
  int *v64; // [rsp+150h] [rbp+50h]
  __int64 v65; // [rsp+158h] [rbp+58h]
  int *v66; // [rsp+160h] [rbp+60h]
  __int64 v67; // [rsp+168h] [rbp+68h]
  int *v68; // [rsp+170h] [rbp+70h]
  __int64 v69; // [rsp+178h] [rbp+78h]
  int *v70; // [rsp+180h] [rbp+80h]
  __int64 v71; // [rsp+188h] [rbp+88h]
  char v72[16]; // [rsp+190h] [rbp+90h] BYREF
  int *v73; // [rsp+1A0h] [rbp+A0h]
  __int64 v74; // [rsp+1A8h] [rbp+A8h]
  int *v75; // [rsp+1B0h] [rbp+B0h]
  __int64 v76; // [rsp+1B8h] [rbp+B8h]
  int *v77; // [rsp+1C0h] [rbp+C0h]
  int v78; // [rsp+1C8h] [rbp+C8h]
  int v79; // [rsp+1CCh] [rbp+CCh]
  char v80[16]; // [rsp+1D0h] [rbp+D0h] BYREF

  if ( !_InterlockedExchangeAdd(&g_AssertsOperational, 0)
    || (unsigned int)((__int64 (*)(void))TakeTelemetryAssertsLock)() )
  {
    return;
  }
  v3 = (__int64 *)g_MicrosoftTelemetryAssertsTriggeredList;
  if ( &g_MicrosoftTelemetryAssertsTriggeredList == (__int64 *)g_MicrosoftTelemetryAssertsTriggeredList )
  {
LABEL_6:
    Pool2 = (unsigned __int64 *)ExAllocatePool2(66LL, 48LL, 1953657665LL, v2);
    v4 = (__int64 *)Pool2;
    if ( !Pool2 )
    {
LABEL_33:
      ExReleaseFastMutex(g_AssertFastMutex);
      return;
    }
    v6 = MEMORY[0xFFFFF78000000320];
    *Pool2 = a1;
    TimeIncrement = KeQueryTimeIncrement();
    *((_DWORD *)v4 + 4) = 0;
    *((_DWORD *)v4 + 5) = 0;
    *((_DWORD *)v4 + 6) = 0;
    v4[1] = ((__int64)((unsigned __int128)(v6 * TimeIncrement * (__int128)0x346DC5D63886594BLL) >> 64) >> 11)
          + ((unsigned __int64)((unsigned __int128)(v6 * TimeIncrement * (__int128)0x346DC5D63886594BLL) >> 64) >> 63)
          - 60001;
    v8 = v4 + 4;
    v9 = g_MicrosoftTelemetryAssertsTriggeredList;
    if ( *(__int64 **)(g_MicrosoftTelemetryAssertsTriggeredList + 8) != &g_MicrosoftTelemetryAssertsTriggeredList )
      __fastfail(3u);
    *v8 = g_MicrosoftTelemetryAssertsTriggeredList;
    v4[5] = (__int64)&g_MicrosoftTelemetryAssertsTriggeredList;
    *(_QWORD *)(v9 + 8) = v8;
    g_MicrosoftTelemetryAssertsTriggeredList = (__int64)(v4 + 4);
  }
  else
  {
    while ( 1 )
    {
      v4 = v3 - 4;
      if ( *(v3 - 4) == a1 )
        break;
      v3 = (__int64 *)*v3;
      if ( &g_MicrosoftTelemetryAssertsTriggeredList == v3 )
        goto LABEL_6;
    }
  }
  ++*((_DWORD *)v4 + 4);
  ++*((_DWORD *)v4 + 5);
  v10 = MEMORY[0xFFFFF78000000320];
  v32 = 0;
  v31 = 0;
  v11 = v10 * KeQueryTimeIncrement();
  if ( (unsigned __int64)(v11 / 10000 - v4[1]) <= 0xEA60 )
    goto LABEL_33;
  ImageTuple = GetImageTuple(v11, &v32, &v31);
  v14 = v31;
  v15 = ImageTuple;
  if ( ImageTuple
    && a1 >= 0x1C0000000LL
    && 0x1C0000000LL + (unsigned __int64)v31 > 0x1C0000000LL
    && a1 <= 0x1C0000000LL + (unsigned __int64)v31 )
  {
    v16 = a1 - 0xC0000000;
  }
  else
  {
    v16 = 0;
  }
  v17 = *((_DWORD *)v4 + 5);
  v18 = *((_DWORD *)v4 + 4);
  v19 = g_AssertFastMutex;
  v4[1] = v13;
  v20 = *((_DWORD *)v4 + 6);
  v31 = v17;
  ExReleaseFastMutex(v19);
  if ( (unsigned int)dword_1C0156040 > 5 && tlgKeywordOn((__int64)&dword_1C0156040, 0x400000000000LL) )
  {
    v33 = 10;
    v64 = &v33;
    v65 = 4LL;
    v66 = (int *)&v34;
    v34 = v16;
    v67 = 4LL;
    v68 = &v35;
    v35 = v15 != 0 ? v32 : 0;
    v69 = 4LL;
    v70 = &v36;
    v71 = 4LL;
    v36 = v15 != 0 ? v14 : 0;
    tlgCreate1Sz_char(v72, "<unknown>", 0LL);
    v37 = v18;
    v73 = &v37;
    v38 = v31;
    v75 = (int *)&v38;
    v74 = 4LL;
    v76 = 4LL;
    CurrentIrql = KeGetCurrentIrql();
    v79 = 0;
    v39 = CurrentIrql;
    v77 = &v39;
    v78 = 4;
    tlgCreate1Sz_char(v80, "<unknown>", v22);
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_1C0156040,
      (unsigned __int8 *)dword_1C009B4D2,
      0LL,
      0LL,
      0xBu,
      &v63);
  }
  if ( dword_1C0156078 && !v20 && !KeGetCurrentIrql() )
  {
    v25 = DbgkWerCaptureLiveKernelDump(L"TELASSERT", 465LL, v16, 0LL, v32, v14, 0LL, 0LL, 0);
    if ( (unsigned int)dword_1C0156040 > 5 )
    {
      v27 = tlgKeywordOn((__int64)&dword_1C0156040, 0x400000000000LL);
      v26 = 0LL;
      if ( v27 )
      {
        v49 = 4LL;
        v48 = &v40;
        v40 = 10;
        v50 = (int *)&v41;
        v41 = v16;
        v51 = 4LL;
        v53 = 4LL;
        v52 = &v42;
        v42 = v15 != 0 ? v32 : 0;
        v55 = 4LL;
        v43 = v15 != 0 ? v14 : 0;
        v54 = &v43;
        tlgCreate1Sz_char(v56, "<unknown>", 0LL);
        v44 = v18;
        v57 = &v44;
        v45 = v31;
        v58 = 4LL;
        v59 = (int *)&v45;
        v61 = &v46;
        v60 = 4LL;
        v46 = v25;
        v62 = 4LL;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C0156040,
          (unsigned __int8 *)dword_1C009B53F,
          v28,
          0LL,
          v29,
          &v47);
      }
    }
    if ( !v25 && !(unsigned int)TakeTelemetryAssertsLock(v24, v23, v26) )
    {
      v30 = (__int64 *)g_MicrosoftTelemetryAssertsTriggeredList;
      if ( &g_MicrosoftTelemetryAssertsTriggeredList != (__int64 *)g_MicrosoftTelemetryAssertsTriggeredList )
      {
        while ( *(v30 - 4) != a1 )
        {
          v30 = (__int64 *)*v30;
          if ( &g_MicrosoftTelemetryAssertsTriggeredList == v30 )
            goto LABEL_33;
        }
        ++*((_DWORD *)v30 - 2);
      }
      goto LABEL_33;
    }
  }
}
