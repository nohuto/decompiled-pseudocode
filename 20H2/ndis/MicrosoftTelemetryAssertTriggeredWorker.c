/*
 * XREFs of MicrosoftTelemetryAssertTriggeredWorker @ 0x1C00C611C
 * Callers:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C00C60EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0022E0C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1C0023344 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C003D700 (__security_check_cookie.c)
 *     GetImageTuple @ 0x1C00C609C (GetImageTuple.c)
 *     _tlgCreate1Sz_char @ 0x1C00C667C (_tlgCreate1Sz_char.c)
 */

void __fastcall MicrosoftTelemetryAssertTriggeredWorker(unsigned __int64 a1)
{
  KIRQL v2; // al
  __int64 *v3; // rcx
  KIRQL v4; // r14
  __int64 *v5; // rdi
  __int64 *PoolWithTag; // rax
  __int64 v7; // rbx
  ULONG TimeIncrement; // eax
  _QWORD *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rcx
  int ImageTuple; // eax
  __int64 v14; // r10
  __int64 v15; // r15
  int v16; // r12d
  unsigned int v17; // ebx
  int v18; // eax
  int v19; // edi
  const char *v20; // r13
  __int64 v21; // r14
  __int64 v22; // r8
  const char *v23; // rdx
  unsigned __int8 CurrentIrql; // al
  __int64 v25; // r8
  __int64 v26; // r9
  const GUID *v27; // r9
  int v28; // edi
  __int64 v29; // r9
  const GUID *v30; // r8
  ULONG v31; // r10d
  KIRQL v32; // al
  __int64 *v33; // rcx
  unsigned int v34; // [rsp+58h] [rbp-B0h] BYREF
  int v35; // [rsp+5Ch] [rbp-ACh] BYREF
  unsigned int v36; // [rsp+60h] [rbp-A8h] BYREF
  int v37; // [rsp+64h] [rbp-A4h] BYREF
  unsigned int v38; // [rsp+68h] [rbp-A0h] BYREF
  int v39; // [rsp+6Ch] [rbp-9Ch] BYREF
  int v40; // [rsp+70h] [rbp-98h] BYREF
  unsigned int v41; // [rsp+74h] [rbp-94h] BYREF
  int v42; // [rsp+78h] [rbp-90h] BYREF
  int v43; // [rsp+7Ch] [rbp-8Ch] BYREF
  int v44; // [rsp+80h] [rbp-88h] BYREF
  unsigned int v45; // [rsp+84h] [rbp-84h] BYREF
  int v46; // [rsp+88h] [rbp-80h] BYREF
  int v47; // [rsp+8Ch] [rbp-7Ch] BYREF
  unsigned int v48; // [rsp+90h] [rbp-78h] BYREF
  int v49; // [rsp+94h] [rbp-74h] BYREF
  _EVENT_DATA_DESCRIPTOR v50; // [rsp+98h] [rbp-70h] BYREF
  int *v51; // [rsp+B8h] [rbp-50h]
  __int64 v52; // [rsp+C0h] [rbp-48h]
  int *v53; // [rsp+C8h] [rbp-40h]
  __int64 v54; // [rsp+D0h] [rbp-38h]
  int *v55; // [rsp+D8h] [rbp-30h]
  __int64 v56; // [rsp+E0h] [rbp-28h]
  int *v57; // [rsp+E8h] [rbp-20h]
  __int64 v58; // [rsp+F0h] [rbp-18h]
  char v59[16]; // [rsp+F8h] [rbp-10h] BYREF
  int *v60; // [rsp+108h] [rbp+0h]
  __int64 v61; // [rsp+110h] [rbp+8h]
  int *v62; // [rsp+118h] [rbp+10h]
  __int64 v63; // [rsp+120h] [rbp+18h]
  int *v64; // [rsp+128h] [rbp+20h]
  __int64 v65; // [rsp+130h] [rbp+28h]
  _EVENT_DATA_DESCRIPTOR v66; // [rsp+138h] [rbp+30h] BYREF
  int *v67; // [rsp+158h] [rbp+50h]
  __int64 v68; // [rsp+160h] [rbp+58h]
  int *v69; // [rsp+168h] [rbp+60h]
  __int64 v70; // [rsp+170h] [rbp+68h]
  int *v71; // [rsp+178h] [rbp+70h]
  __int64 v72; // [rsp+180h] [rbp+78h]
  int *v73; // [rsp+188h] [rbp+80h]
  __int64 v74; // [rsp+190h] [rbp+88h]
  char v75[16]; // [rsp+198h] [rbp+90h] BYREF
  int *v76; // [rsp+1A8h] [rbp+A0h]
  __int64 v77; // [rsp+1B0h] [rbp+A8h]
  int *v78; // [rsp+1B8h] [rbp+B0h]
  __int64 v79; // [rsp+1C0h] [rbp+B8h]
  int *v80; // [rsp+1C8h] [rbp+C0h]
  __int64 v81; // [rsp+1D0h] [rbp+C8h]
  char v82[16]; // [rsp+1D8h] [rbp+D0h] BYREF

  if ( !_InterlockedExchangeAdd(&g_AssertsOperational, 0) )
    return;
  v2 = KeAcquireSpinLockRaiseToDpc(&g_AssertSpinLock);
  v3 = (__int64 *)g_MicrosoftTelemetryAssertsTriggeredList;
  v4 = v2;
  if ( &g_MicrosoftTelemetryAssertsTriggeredList == (__int64 *)g_MicrosoftTelemetryAssertsTriggeredList )
  {
LABEL_5:
    PoolWithTag = (__int64 *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x30uLL, 0x74727341u);
    v5 = PoolWithTag;
    if ( !PoolWithTag )
    {
LABEL_35:
      KeReleaseSpinLock(&g_AssertSpinLock, v4);
      return;
    }
    v7 = MEMORY[0xFFFFF78000000320];
    *PoolWithTag = a1;
    TimeIncrement = KeQueryTimeIncrement();
    v5[2] = 0LL;
    *((_DWORD *)v5 + 6) = 0;
    v5[1] = ((__int64)((unsigned __int128)(v7 * TimeIncrement * (__int128)0x346DC5D63886594BLL) >> 64) >> 11)
          + ((unsigned __int64)((unsigned __int128)(v7 * TimeIncrement * (__int128)0x346DC5D63886594BLL) >> 64) >> 63)
          - 60001;
    v9 = v5 + 4;
    v10 = g_MicrosoftTelemetryAssertsTriggeredList;
    if ( *(__int64 **)(g_MicrosoftTelemetryAssertsTriggeredList + 8) != &g_MicrosoftTelemetryAssertsTriggeredList )
      __fastfail(3u);
    *v9 = g_MicrosoftTelemetryAssertsTriggeredList;
    v5[5] = (__int64)&g_MicrosoftTelemetryAssertsTriggeredList;
    *(_QWORD *)(v10 + 8) = v9;
    g_MicrosoftTelemetryAssertsTriggeredList = (__int64)(v5 + 4);
  }
  else
  {
    while ( 1 )
    {
      v5 = v3 - 4;
      if ( *(v3 - 4) == a1 )
        break;
      v3 = (__int64 *)*v3;
      if ( &g_MicrosoftTelemetryAssertsTriggeredList == v3 )
        goto LABEL_5;
    }
  }
  ++*((_DWORD *)v5 + 4);
  ++*((_DWORD *)v5 + 5);
  v11 = MEMORY[0xFFFFF78000000320];
  v12 = v11 * KeQueryTimeIncrement();
  v36 = 0;
  v34 = 0;
  if ( (unsigned __int64)(v12 / 10000 - v5[1]) <= 0xEA60 )
    goto LABEL_35;
  ImageTuple = GetImageTuple(v12, &v36, &v34);
  v15 = v34;
  v16 = ImageTuple;
  if ( ImageTuple
    && a1 >= 0x1C0000000LL
    && 0x1C0000000LL + (unsigned __int64)v34 > 0x1C0000000LL
    && a1 <= 0x1C0000000LL + (unsigned __int64)v34 )
  {
    v17 = a1 - 0xC0000000;
  }
  else
  {
    v17 = 0;
  }
  v34 = *((_DWORD *)v5 + 4);
  v18 = *((_DWORD *)v5 + 5);
  v5[1] = v14;
  v19 = *((_DWORD *)v5 + 6);
  v35 = v18;
  KeReleaseSpinLock(&g_AssertSpinLock, v4);
  v20 = "<unknown>";
  v21 = v36;
  if ( (unsigned int)dword_1C00F7040 > 5 && tlgKeywordOn((__int64)&dword_1C00F7040, 0x400000000000LL) )
  {
    v37 = 10;
    v67 = &v37;
    v23 = "<unknown>";
    v68 = 4LL;
    v69 = (int *)&v38;
    v38 = v17;
    v70 = 4LL;
    v71 = &v39;
    v72 = 4LL;
    v39 = v16 != 0 ? v21 : 0;
    v74 = 4LL;
    v73 = &v40;
    v40 = v16 != 0 ? v15 : 0;
    if ( g_ModuleName )
      v23 = (const char *)g_ModuleName;
    tlgCreate1Sz_char(v75, v23, v22, 0LL);
    v76 = (int *)&v41;
    v42 = v35;
    v78 = &v42;
    v41 = v34;
    v77 = 4LL;
    v79 = 4LL;
    CurrentIrql = KeGetCurrentIrql();
    v43 = CurrentIrql;
    v80 = &v43;
    v81 = 4LL;
    tlgCreate1Sz_char(v82, "<unknown>", v25, v26);
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_1C00F7040,
      (unsigned __int8 *)dword_1C00CFE5B,
      0LL,
      v27,
      0xBu,
      &v66);
  }
  if ( dword_1C00F7078 && !v19 && !KeGetCurrentIrql() )
  {
    v28 = DbgkWerCaptureLiveKernelDump(L"TELASSERT", 465LL, v17, g_ModuleName, v21, v15, 0LL, 0LL, 0);
    if ( (unsigned int)dword_1C00F7040 > 5 && tlgKeywordOn((__int64)&dword_1C00F7040, 0x400000000000LL) )
    {
      v52 = 4LL;
      v51 = &v44;
      v44 = 10;
      v53 = (int *)&v45;
      v45 = v17;
      v54 = 4LL;
      v55 = &v46;
      v56 = 4LL;
      v46 = v16 != 0 ? v21 : 0;
      v58 = 4LL;
      v47 = v16 != 0 ? v15 : 0;
      v57 = &v47;
      if ( g_ModuleName )
        v20 = (const char *)g_ModuleName;
      tlgCreate1Sz_char(v59, v20, 0LL, v29);
      v48 = v34;
      v61 = 4LL;
      v60 = (int *)&v48;
      v62 = &v35;
      v64 = &v49;
      v63 = 4LL;
      v49 = v28;
      v65 = 4LL;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_1C00F7040,
        (unsigned __int8 *)dword_1C00CFEC8,
        v30,
        0LL,
        v31,
        &v50);
    }
    if ( !v28 )
    {
      v32 = KeAcquireSpinLockRaiseToDpc(&g_AssertSpinLock);
      v33 = (__int64 *)g_MicrosoftTelemetryAssertsTriggeredList;
      v4 = v32;
      if ( &g_MicrosoftTelemetryAssertsTriggeredList != (__int64 *)g_MicrosoftTelemetryAssertsTriggeredList )
      {
        while ( *(v33 - 4) != a1 )
        {
          v33 = (__int64 *)*v33;
          if ( &g_MicrosoftTelemetryAssertsTriggeredList == v33 )
            goto LABEL_35;
        }
        ++*((_DWORD *)v33 - 2);
      }
      goto LABEL_35;
    }
  }
}
