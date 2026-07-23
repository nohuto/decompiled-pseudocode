/*
 * XREFs of EtwpTraceMessageVa @ 0x14027F090
 * Callers:
 *     WmiTraceMessage @ 0x14024E240 (WmiTraceMessage.c)
 *     NtTraceEvent @ 0x14027E790 (NtTraceEvent.c)
 *     WmiTraceMessageVa @ 0x1405A6A00 (WmiTraceMessageVa.c)
 * Callees:
 *     EtwpOpenLogger @ 0x14027F6C8 (EtwpOpenLogger.c)
 *     EtwpReleaseTraceBuffer @ 0x14027F770 (EtwpReleaseTraceBuffer.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x1402A5670 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1402F6FB0 (PsGetCurrentServerSiloGlobals.c)
 *     EtwpReserveTraceBuffer @ 0x14035B440 (EtwpReserveTraceBuffer.c)
 *     EtwpGetReserveTraceBufferStatus @ 0x14036CF6C (EtwpGetReserveTraceBufferStatus.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     EtwpSendTraceEvent @ 0x1405AAD98 (EtwpSendTraceEvent.c)
 *     EtwpInvokeEventCallback @ 0x1405AB8A8 (EtwpInvokeEventCallback.c)
 */

__int64 __fastcall EtwpTraceMessageVa(
        unsigned __int64 a1,
        char a2,
        signed __int32 *a3,
        __int16 a4,
        __int64 a5,
        unsigned __int8 a6)
{
  unsigned int v7; // ebx
  __int64 v8; // rdi
  unsigned __int64 v9; // r12
  unsigned __int64 v10; // r13
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // r11
  int v14; // eax
  char v15; // si
  char v16; // r14
  __int64 v17; // rax
  unsigned __int64 v18; // rax
  __int64 v19; // rcx
  unsigned __int64 v20; // rcx
  __int64 result; // rax
  int v22; // ecx
  int v23; // r10d
  int v24; // r9d
  int v25; // eax
  int v26; // edx
  unsigned int v27; // r13d
  __int64 v28; // rbx
  signed __int32 v29; // edx
  __int64 v30; // r10
  volatile signed __int32 *v31; // rax
  unsigned __int64 v32; // r8
  __int16 v33; // cx
  signed __int32 *v34; // rax
  signed __int32 *v35; // rbx
  struct _KTHREAD *CurrentThread; // rcx
  _DWORD *v37; // rbx
  unsigned __int64 v38; // rdi
  char *v39; // rdx
  size_t v40; // r15
  int v41; // r9d
  unsigned __int8 v42; // bl
  __int64 v43; // r10
  char v44; // [rsp+30h] [rbp-108h]
  char v45; // [rsp+31h] [rbp-107h]
  unsigned int v46; // [rsp+34h] [rbp-104h]
  char v47; // [rsp+38h] [rbp-100h] BYREF
  unsigned __int8 v48; // [rsp+39h] [rbp-FFh]
  unsigned __int8 v49; // [rsp+40h] [rbp-F8h]
  unsigned int v50; // [rsp+48h] [rbp-F0h]
  _DWORD *v51; // [rsp+50h] [rbp-E8h]
  __int16 v52; // [rsp+58h] [rbp-E0h]
  unsigned int v53; // [rsp+5Ch] [rbp-DCh]
  __int64 v54; // [rsp+60h] [rbp-D8h]
  __int64 v55; // [rsp+68h] [rbp-D0h]
  __int64 v56; // [rsp+70h] [rbp-C8h]
  unsigned __int64 v57; // [rsp+78h] [rbp-C0h]
  unsigned __int64 v58; // [rsp+80h] [rbp-B8h]
  int v59; // [rsp+88h] [rbp-B0h]
  int v60; // [rsp+8Ch] [rbp-ACh]
  int v61; // [rsp+90h] [rbp-A8h]
  int v62; // [rsp+94h] [rbp-A4h]
  __int64 v63; // [rsp+98h] [rbp-A0h] BYREF
  unsigned __int64 v64; // [rsp+A0h] [rbp-98h]
  __int64 v65; // [rsp+A8h] [rbp-90h]
  __int64 v66; // [rsp+B0h] [rbp-88h]
  unsigned int CurrentRunTime; // [rsp+B8h] [rbp-80h]
  int CycleTime; // [rsp+BCh] [rbp-7Ch]
  signed __int32 *v69; // [rsp+C0h] [rbp-78h]
  unsigned __int64 v70; // [rsp+C8h] [rbp-70h]
  __int128 v71; // [rsp+D0h] [rbp-68h] BYREF
  __int64 v72; // [rsp+E0h] [rbp-58h]
  struct _KTHREAD *v73; // [rsp+E8h] [rbp-50h]
  __int128 v74; // [rsp+F0h] [rbp-48h] BYREF

  v52 = a4;
  v69 = a3;
  LOWORD(v7) = a1;
  v58 = a1;
  v8 = a5;
  v48 = a6;
  v49 = a6;
  v71 = 0LL;
  v72 = 0LL;
  v47 = 0;
  v74 = 0LL;
  v9 = 0LL;
  v50 = 0;
  v46 = 0;
  v63 = 0LL;
  v10 = 0LL;
  v57 = 0LL;
  v64 = 0LL;
  if ( a6 )
    v11 = *(_QWORD *)(PsGetCurrentServerSiloGlobals() + 864);
  else
    v11 = EtwpHostSiloState;
  v66 = v11;
  v54 = v11;
  v7 = (unsigned __int16)v7;
  v53 = v7;
  if ( (unsigned int)(unsigned __int16)v7 >= *(_DWORD *)(v11 + 16) )
    return 3221225480LL;
  v12 = EtwpOpenLogger((unsigned __int16)v7, v11, a6, &v47);
  v13 = v12;
  v65 = v12;
  if ( !v12 )
    return 3221225480LL;
  v14 = *(_DWORD *)(v12 + 12);
  if ( (v14 & 0x80u) != 0 )
  {
    result = 3221225506LL;
    goto LABEL_100;
  }
  if ( !a6 && (v14 & 0x1000000) != 0 )
  {
    result = 3221225659LL;
LABEL_100:
    v46 = result;
    goto LABEL_86;
  }
  v55 = 0LL;
  v15 = a2 & 0x40;
  v44 = a2 & 0x40;
  v16 = a2 & 0x80;
  v45 = a2 & 0x80;
  if ( (a2 & 0x40) != 0 )
  {
    v10 = a5 + HIDWORD(v58);
    v57 = v10;
    v64 = v10;
  }
  v58 = 0LL;
  v17 = a5;
  v55 = a5;
  while ( 1 )
  {
    if ( !v15 )
    {
      v18 = v17 + 8;
LABEL_13:
      v19 = *(_QWORD *)(v18 - 8);
      goto LABEL_14;
    }
    if ( !v16 )
    {
      v18 = v17 + 8;
      if ( v18 > v10 )
      {
        result = 3221225990LL;
        v46 = -1073741306;
        v11 = v54;
        goto LABEL_86;
      }
      goto LABEL_13;
    }
    v18 = v17 + 4;
    if ( v18 > v10 )
    {
      result = 3221225990LL;
      v46 = -1073741306;
      v11 = v54;
      goto LABEL_86;
    }
    v19 = *(unsigned int *)(v18 - 4);
LABEL_14:
    v55 = v18;
    if ( !v19 )
      break;
    if ( v15 && v16 )
    {
      v17 = v18 + 4;
      v20 = *(unsigned int *)(v17 - 4);
    }
    else
    {
      v17 = v18 + 8;
      v20 = *(_QWORD *)(v17 - 8);
    }
    v55 = v17;
    if ( v20 )
    {
      v9 += v20;
      v58 = v9;
      if ( v9 < v20 )
      {
        result = 3221225621LL;
        v46 = -1073741675;
        v11 = v54;
        goto LABEL_86;
      }
    }
  }
  if ( !*(_QWORD *)(v13 + 280) )
    a2 &= ~1u;
  v59 = a2 & 1;
  v22 = 4;
  if ( (a2 & 1) != 0 )
    v23 = 4;
  else
    v23 = 0;
  v61 = a2 & 2;
  if ( (a2 & 2) != 0 )
    v24 = 16;
  else
    v24 = 0;
  v60 = a2 & 4;
  if ( (a2 & 4) == 0 )
    v22 = 0;
  v25 = 8;
  if ( (a2 & 0x18) != 0 )
    v26 = 8;
  else
    v26 = 0;
  v62 = a2 & 0x20;
  if ( (a2 & 0x20) == 0 )
    v25 = 0;
  v27 = v9 + v23 + v24 + v22 + v26 + v25 + 8;
  if ( v9 > v27 )
  {
    result = 3221225990LL;
LABEL_99:
    v11 = v54;
    goto LABEL_100;
  }
  v28 = EtwpReserveTraceBuffer(v13, v27, (unsigned int)&v71, (unsigned int)&v63, 0);
  v29 = 0;
  v30 = v65;
  v31 = *(volatile signed __int32 **)(v65 + 280);
  if ( v31 )
  {
    v29 = _InterlockedIncrement(v31);
    v9 = v58;
    v50 = 0;
    v15 = v44;
    v32 = v64;
    v57 = v64;
    v16 = v45;
  }
  else
  {
    v32 = v57;
  }
  if ( !v28 )
  {
    result = EtwpGetReserveTraceBufferStatus(v30, v27, v32);
    v7 = v53;
    goto LABEL_99;
  }
  *(_DWORD *)v28 = -1879048192;
  *(_WORD *)v28 = v27;
  *(_WORD *)(v28 + 4) = v52;
  if ( v16 )
    v33 = 64;
  else
    v33 = 128;
  *(_WORD *)(v28 + 6) = v33 | a2 & 0x3F;
  v34 = v69;
  v74 = *(_OWORD *)v69;
  v35 = (signed __int32 *)(v28 + 8);
  v51 = v35;
  if ( v59 )
  {
    *v35++ = v29;
    v51 = v35;
  }
  if ( v60 )
  {
    *v35++ = *v34;
LABEL_53:
    v51 = v35;
  }
  else if ( v61 )
  {
    *(_OWORD *)v35 = *(_OWORD *)v34;
    v35 += 4;
    goto LABEL_53;
  }
  if ( (a2 & 8) != 0 )
  {
    *(_QWORD *)v35 = v63;
    v35 += 2;
    v51 = v35;
  }
  if ( v62 )
  {
    CurrentThread = KeGetCurrentThread();
    v73 = CurrentThread;
    CurrentRunTime = CurrentThread[1].CurrentRunTime;
    v37 = v51;
    *v51 = CurrentRunTime;
    v51 = ++v37;
    CycleTime = CurrentThread[1].CycleTime;
    *v37 = CycleTime;
    v35 = v37 + 1;
    v51 = v35;
    v9 = v58;
    v50 = 0;
    v15 = v44;
    v32 = v64;
    v57 = v64;
    v16 = v45;
  }
  v70 = v9;
  v56 = a5;
  while ( 1 )
  {
    do
    {
      if ( v15 && v16 )
      {
        v38 = v8 + 4;
        v39 = (char *)*(unsigned int *)(v38 - 4);
      }
      else
      {
        v38 = v8 + 8;
        v39 = *(char **)(v38 - 8);
      }
      v56 = v38;
      if ( !v39 )
      {
        v41 = v50;
        goto LABEL_81;
      }
      if ( !v15 )
        goto LABEL_66;
      if ( v38 >= v32 )
      {
        v41 = -1073741306;
        v50 = -1073741306;
        v46 = -1073741306;
        goto LABEL_81;
      }
      if ( v16 )
      {
        v8 = v38 + 4;
        v40 = *(unsigned int *)(v8 - 4);
      }
      else
      {
LABEL_66:
        v8 = v38 + 8;
        v40 = *(_QWORD *)(v8 - 8);
      }
      v56 = v8;
    }
    while ( !v40 );
    if ( v40 > v9 )
      break;
    if ( v15 && ((unsigned __int64)&v39[v40] > 0x7FFFFFFF0000LL || &v39[v40] < v39) )
      MEMORY[0x7FFFFFFF0000] = 0;
    memmove(v35, v39, v40);
    v9 -= v40;
    v70 = v9;
    v35 = (signed __int32 *)((char *)v35 + v40);
    v51 = v35;
    v32 = v57;
  }
  v41 = -1073741306;
  v50 = -1073741306;
  v46 = -1073741306;
LABEL_81:
  v11 = v54;
  v42 = v48;
  if ( v41 >= 0 )
  {
    v43 = v65;
    if ( (*(_DWORD *)(v65 + 12) & 0x80000) != 0
      && (!(_BYTE)KdDebuggerNotPresent && !KdPitchDebugger || KdEventLoggingPresent) )
    {
      EtwpSendTraceEvent(v65, &v71, v32);
      v43 = v65;
    }
    if ( *(_QWORD *)(v43 + 1272) )
      EtwpInvokeEventCallback(v43, &v71, &v74, v42);
  }
  EtwpReleaseTraceBuffer(&v71, v39, v32);
  result = v50;
  v7 = v53;
LABEL_86:
  if ( v47 )
  {
    ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v11 + 448) + 8LL * v7), 1u);
    KeLeaveCriticalRegionThread(KeGetCurrentThread());
    return v46;
  }
  return result;
}
