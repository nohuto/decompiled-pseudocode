/*
 * XREFs of MicrosoftTelemetryAssertTriggeredWorker @ 0x1C00511BC
 * Callers:
 *     MicrosoftTelemetryAssertTriggeredMsgKM @ 0x1C005118C (MicrosoftTelemetryAssertTriggeredMsgKM.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0018EB0 (__security_check_cookie.c)
 *     GetImageTuple @ 0x1C005113C (GetImageTuple.c)
 *     _tlgCreate1Sz_char @ 0x1C0051864 (_tlgCreate1Sz_char.c)
 *     _tlgKeywordOn @ 0x1C00518A4 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00518D0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 */

void __fastcall MicrosoftTelemetryAssertTriggeredWorker(
        unsigned __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6)
{
  KIRQL v7; // al
  __int64 *v8; // rcx
  KIRQL v9; // r14
  __int64 *v10; // rdi
  unsigned __int64 *Pool2; // rax
  __int64 v12; // rbx
  ULONG TimeIncrement; // eax
  _QWORD *v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rbx
  __int64 v17; // rcx
  int ImageTuple; // eax
  __int64 v19; // r10
  __int64 v20; // r12
  int v21; // r15d
  unsigned int v22; // ebx
  unsigned int v23; // eax
  int v24; // edi
  const char *v25; // r14
  const char *v26; // rdx
  KIRQL CurrentIrql; // al
  __int64 v28; // r8
  const char *v29; // rax
  int v30; // r8d
  int v31; // r9d
  int v32; // edi
  __int64 v33; // r8
  int v34; // ecx
  int v35; // r8d
  int v36; // r9d
  ULONG v37; // r10d
  KIRQL v38; // al
  __int64 *v39; // rcx
  unsigned int v40; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v41; // [rsp+54h] [rbp-ACh] BYREF
  int v42; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v43; // [rsp+5Ch] [rbp-A4h] BYREF
  int v44; // [rsp+60h] [rbp-A0h] BYREF
  int v45; // [rsp+64h] [rbp-9Ch] BYREF
  int v46; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v47; // [rsp+6Ch] [rbp-94h] BYREF
  int v48; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v49; // [rsp+74h] [rbp-8Ch]
  __int64 v50; // [rsp+78h] [rbp-88h]
  struct _EVENT_DATA_DESCRIPTOR v51; // [rsp+80h] [rbp-80h] BYREF
  int *v52; // [rsp+A0h] [rbp-60h]
  __int64 v53; // [rsp+A8h] [rbp-58h]
  int *v54; // [rsp+B0h] [rbp-50h]
  __int64 v55; // [rsp+B8h] [rbp-48h]
  int *v56; // [rsp+C0h] [rbp-40h]
  __int64 v57; // [rsp+C8h] [rbp-38h]
  int *v58; // [rsp+D0h] [rbp-30h]
  __int64 v59; // [rsp+D8h] [rbp-28h]
  char v60[16]; // [rsp+E0h] [rbp-20h] BYREF
  int *v61; // [rsp+F0h] [rbp-10h]
  __int64 v62; // [rsp+F8h] [rbp-8h]
  int *v63; // [rsp+100h] [rbp+0h]
  __int64 v64; // [rsp+108h] [rbp+8h]
  int *v65; // [rsp+110h] [rbp+10h]
  __int64 v66; // [rsp+118h] [rbp+18h]
  struct _EVENT_DATA_DESCRIPTOR v67; // [rsp+120h] [rbp+20h] BYREF
  int *v68; // [rsp+140h] [rbp+40h]
  __int64 v69; // [rsp+148h] [rbp+48h]
  int *v70; // [rsp+150h] [rbp+50h]
  __int64 v71; // [rsp+158h] [rbp+58h]
  int *v72; // [rsp+160h] [rbp+60h]
  __int64 v73; // [rsp+168h] [rbp+68h]
  int *v74; // [rsp+170h] [rbp+70h]
  __int64 v75; // [rsp+178h] [rbp+78h]
  char v76[16]; // [rsp+180h] [rbp+80h] BYREF
  int *v77; // [rsp+190h] [rbp+90h]
  __int64 v78; // [rsp+198h] [rbp+98h]
  int *v79; // [rsp+1A0h] [rbp+A0h]
  __int64 v80; // [rsp+1A8h] [rbp+A8h]
  int *v81; // [rsp+1B0h] [rbp+B0h]
  int v82; // [rsp+1B8h] [rbp+B8h]
  int v83; // [rsp+1BCh] [rbp+BCh]
  char v84[16]; // [rsp+1C0h] [rbp+C0h] BYREF

  v50 = a6;
  if ( !_InterlockedExchangeAdd(&g_AssertsOperational, 0) )
    return;
  v7 = KeAcquireSpinLockRaiseToDpc(&g_AssertSpinLock);
  v8 = (__int64 *)g_MicrosoftTelemetryAssertsTriggeredList;
  v9 = v7;
  if ( &g_MicrosoftTelemetryAssertsTriggeredList == (__int64 *)g_MicrosoftTelemetryAssertsTriggeredList )
  {
LABEL_5:
    Pool2 = (unsigned __int64 *)ExAllocatePool2(66LL, 48LL, 1953657665LL);
    v10 = (__int64 *)Pool2;
    if ( !Pool2 )
    {
LABEL_37:
      KeReleaseSpinLock(&g_AssertSpinLock, v9);
      return;
    }
    v12 = MEMORY[0xFFFFF78000000320];
    *Pool2 = a1;
    TimeIncrement = KeQueryTimeIncrement();
    *((_DWORD *)v10 + 4) = 0;
    *((_DWORD *)v10 + 5) = 0;
    *((_DWORD *)v10 + 6) = 0;
    v10[1] = ((__int64)((unsigned __int128)(v12 * TimeIncrement * (__int128)0x346DC5D63886594BLL) >> 64) >> 11)
           + ((unsigned __int64)((unsigned __int128)(v12 * TimeIncrement * (__int128)0x346DC5D63886594BLL) >> 64) >> 63)
           - 60001;
    v14 = v10 + 4;
    v15 = g_MicrosoftTelemetryAssertsTriggeredList;
    if ( *(__int64 **)(g_MicrosoftTelemetryAssertsTriggeredList + 8) != &g_MicrosoftTelemetryAssertsTriggeredList )
      __fastfail(3u);
    *v14 = g_MicrosoftTelemetryAssertsTriggeredList;
    v10[5] = (__int64)&g_MicrosoftTelemetryAssertsTriggeredList;
    *(_QWORD *)(v15 + 8) = v14;
    g_MicrosoftTelemetryAssertsTriggeredList = (__int64)(v10 + 4);
  }
  else
  {
    while ( 1 )
    {
      v10 = v8 - 4;
      if ( *(v8 - 4) == a1 )
        break;
      v8 = (__int64 *)*v8;
      if ( &g_MicrosoftTelemetryAssertsTriggeredList == v8 )
        goto LABEL_5;
    }
  }
  ++*((_DWORD *)v10 + 4);
  ++*((_DWORD *)v10 + 5);
  v16 = MEMORY[0xFFFFF78000000320];
  v41 = 0;
  v40 = 0;
  v17 = v16 * KeQueryTimeIncrement();
  if ( (unsigned __int64)(v17 / 10000 - v10[1]) <= 0xEA60 )
    goto LABEL_37;
  ImageTuple = GetImageTuple(v17, &v41, &v40);
  v20 = v40;
  v21 = ImageTuple;
  if ( ImageTuple
    && a1 >= 0x1C0000000LL
    && 0x1C0000000LL + (unsigned __int64)v40 > 0x1C0000000LL
    && a1 <= 0x1C0000000LL + (unsigned __int64)v40 )
  {
    v22 = a1 - 0xC0000000;
  }
  else
  {
    v22 = 0;
  }
  v40 = *((_DWORD *)v10 + 4);
  v23 = *((_DWORD *)v10 + 5);
  v10[1] = v19;
  v24 = *((_DWORD *)v10 + 6);
  v49 = v23;
  KeReleaseSpinLock(&g_AssertSpinLock, v9);
  v25 = "<unknown>";
  if ( (unsigned int)dword_1C006A040 > 5 && (unsigned __int8)tlgKeywordOn(&dword_1C006A040, 0x400000000000LL) )
  {
    v42 = 10;
    v68 = &v42;
    v26 = "<unknown>";
    v69 = 4LL;
    v70 = (int *)&v43;
    v43 = v22;
    v71 = 4LL;
    v72 = &v44;
    v44 = v21 != 0 ? v41 : 0;
    v73 = 4LL;
    v74 = &v45;
    v45 = v21 != 0 ? v20 : 0;
    v75 = 4LL;
    if ( g_ModuleName )
      v26 = (const char *)g_ModuleName;
    tlgCreate1Sz_char(v76, v26, 0LL);
    v77 = &v46;
    v47 = v49;
    v79 = (int *)&v47;
    v46 = v40;
    v78 = 4LL;
    v80 = 4LL;
    CurrentIrql = KeGetCurrentIrql();
    v83 = 0;
    v48 = CurrentIrql;
    v81 = &v48;
    v29 = (const char *)v50;
    v82 = 4;
    if ( !v50 )
      v29 = "<unknown>";
    tlgCreate1Sz_char(v84, v29, v28);
    tlgWriteTransfer_EtwWriteTransfer((int)&v67, (int)&dword_1C0055563, v30, v31, 0xBu, &v67);
  }
  if ( dword_1C006A078 && !v24 && !KeGetCurrentIrql() )
  {
    v32 = DbgkWerCaptureLiveKernelDump(L"TELASSERT", 465LL, v22, g_ModuleName, v41, v20, 0LL, 0LL, 0);
    if ( (unsigned int)dword_1C006A040 > 5 && (unsigned __int8)tlgKeywordOn(&dword_1C006A040, 0x400000000000LL) )
    {
      v53 = 4LL;
      v52 = &v48;
      v48 = 10;
      v54 = (int *)&v47;
      v47 = v22;
      v55 = 4LL;
      v56 = &v46;
      v46 = v21 != 0 ? v41 : 0;
      v57 = 4LL;
      v59 = 4LL;
      v45 = v21 != 0 ? v20 : 0;
      v58 = &v45;
      if ( g_ModuleName )
        v25 = (const char *)g_ModuleName;
      tlgCreate1Sz_char(v60, v25, v33);
      v44 = v40;
      v61 = &v44;
      v43 = v49;
      v63 = (int *)&v43;
      v65 = &v42;
      v62 = 4LL;
      v64 = 4LL;
      v42 = v32;
      v66 = 4LL;
      tlgWriteTransfer_EtwWriteTransfer(v34, (int)&dword_1C00555D0, v35, v36, v37, &v51);
    }
    if ( !v32 )
    {
      v38 = KeAcquireSpinLockRaiseToDpc(&g_AssertSpinLock);
      v39 = (__int64 *)g_MicrosoftTelemetryAssertsTriggeredList;
      v9 = v38;
      if ( &g_MicrosoftTelemetryAssertsTriggeredList != (__int64 *)g_MicrosoftTelemetryAssertsTriggeredList )
      {
        while ( *(v39 - 4) != a1 )
        {
          v39 = (__int64 *)*v39;
          if ( &g_MicrosoftTelemetryAssertsTriggeredList == v39 )
            goto LABEL_37;
        }
        ++*((_DWORD *)v39 - 2);
      }
      goto LABEL_37;
    }
  }
}
