/*
 * XREFs of VidSchiCheckHwProgress @ 0x1C00978E0
 * Callers:
 *     VidSchWaitForEvents @ 0x1C0002F70 (VidSchWaitForEvents.c)
 *     VidSchiScheduleCommandToRun @ 0x1C0009B20 (VidSchiScheduleCommandToRun.c)
 *     VidSchiWaitForSchedulerEvents @ 0x1C0097530 (VidSchiWaitForSchedulerEvents.c)
 * Callees:
 *     VidSchIsTDRPending @ 0x1C000AD70 (VidSchIsTDRPending.c)
 *     VidSchiCheckFlipQueueTimeout @ 0x1C000AD90 (VidSchiCheckFlipQueueTimeout.c)
 *     VidSchiCheckTimeoutForced @ 0x1C000AE80 (VidSchiCheckTimeoutForced.c)
 *     VidSchiNeedToForcePreemptNode @ 0x1C001773C (VidSchiNeedToForcePreemptNode.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 *     VidSchiReportHwHang @ 0x1C0044C40 (VidSchiReportHwHang.c)
 *     VidSchiCheckNodeTimeout @ 0x1C0097B40 (VidSchiCheckNodeTimeout.c)
 *     VidSchiSubmitPreemptionCommand @ 0x1C009A910 (VidSchiSubmitPreemptionCommand.c)
 *     VidSchResetFlipQueueTimeout @ 0x1C00F2CA4 (VidSchResetFlipQueueTimeout.c)
 *     VidSchResetGPUTimeout @ 0x1C00F2D0C (VidSchResetGPUTimeout.c)
 *     VidSchiPrepareToResetEngine @ 0x1C00F34CC (VidSchiPrepareToResetEngine.c)
 *     VidSchiResetEngines @ 0x1C00F35F0 (VidSchiResetEngines.c)
 */

__int64 __fastcall VidSchiCheckHwProgress(struct _VIDSCH_GLOBAL *a1, _BYTE *a2)
{
  bool v2; // zf
  unsigned int v5; // r15d
  LARGE_INTEGER v6; // rcx
  unsigned __int64 v7; // rbp
  unsigned int v8; // edi
  __int64 *v9; // rcx
  __int64 v10; // rsi
  unsigned __int64 v11; // rax
  unsigned int v12; // edi
  struct _VIDSCH_NODE **v13; // rcx
  KSPIN_LOCK *v15; // rax
  KSPIN_LOCK v16; // rdi
  int v17; // esi
  _BYTE *v18; // rdx
  _BYTE *v19; // r9
  __int64 v20; // r8
  char *v21; // rcx
  char v22; // al
  char *v23; // rax
  __int64 v24; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 v25; // [rsp+38h] [rbp-40h] BYREF
  __int64 v26; // [rsp+80h] [rbp+8h] BYREF
  __int64 v27; // [rsp+88h] [rbp+10h] BYREF
  union _ULARGE_INTEGER v28; // [rsp+90h] [rbp+18h] BYREF
  union _LARGE_INTEGER v29; // [rsp+98h] [rbp+20h] BYREF

  v2 = *((_DWORD *)a1 + 1651) == 0;
  *a2 = 0;
  if ( v2 )
  {
    v5 = 0;
    v29.QuadPart = 0LL;
    v6 = KeQueryPerformanceCounter(&v29);
    v27 = ((unsigned __int64)v6.QuadPart * (unsigned __int128)0x989680uLL) >> 64;
    if ( is_mul_ok(v6.QuadPart, 0x989680uLL) )
    {
      if ( v29.QuadPart == 10000000 )
        v7 = 10000000 * v6.QuadPart / 0x989680uLL;
      else
        v7 = (unsigned __int64)(10000000 * v6.QuadPart) / v29.QuadPart;
    }
    else
    {
      v7 = 10000000 * (v6.QuadPart / (unsigned __int64)v29.QuadPart)
         + 10000000 * (v6.QuadPart % (unsigned __int64)v29.QuadPart) / v29.QuadPart;
    }
    if ( *((_BYTE *)a1 + 3152) && v7 >= *((_QWORD *)a1 + 392) )
      (*((void (__fastcall **)(_QWORD, _QWORD))a1 + 387))(*((_QWORD *)a1 + 2), MEMORY[0xFFFFF78000000320]);
    v8 = 0;
    for ( *a2 = 0; v8 < *((_DWORD *)a1 + 20); ++v8 )
    {
      v9 = (__int64 *)*((_QWORD *)a1 + 79);
      if ( v8 < *((_DWORD *)a1 + 176) )
        v9 += v8;
      v10 = *v9;
      v11 = *(_QWORD *)(*v9 + 128);
      if ( v11 && v11 <= v7 )
      {
        if ( VidSchiNeedToForcePreemptNode(*v9) )
        {
          _InterlockedIncrement((volatile signed __int32 *)a1 + 183);
          _InterlockedIncrement((volatile signed __int32 *)(v10 + 2904));
          VidSchiSubmitPreemptionCommand(v10);
        }
        else
        {
          *a2 = 1;
        }
        *(_QWORD *)(v10 + 128) = 0LL;
      }
    }
    if ( VidSchiCheckTimeoutForced((__int64)a1) )
    {
      VidSchiReportHwHang((KSPIN_LOCK *)a1, MEMORY[0xFFFFF78000000320], 1, 0LL);
    }
    else if ( !VidSchIsTDRPending((__int64)a1) )
    {
      v12 = 0;
      v28.QuadPart = 0LL;
      if ( *((_DWORD *)a1 + 20) )
      {
        while ( 1 )
        {
          v13 = (struct _VIDSCH_NODE **)*((_QWORD *)a1 + 79);
          if ( v12 < *((_DWORD *)a1 + 176) )
            v13 += v12;
          if ( (unsigned int)VidSchiCheckNodeTimeout(*v13) )
            break;
          if ( ++v12 >= *((_DWORD *)a1 + 20) )
            goto LABEL_18;
        }
        v15 = (KSPIN_LOCK *)*((_QWORD *)a1 + 79);
        if ( v12 < *((_DWORD *)a1 + 176) )
          v15 += v12;
        v16 = *v15;
        v17 = 0;
        v24 = 0LL;
        if ( *(_DWORD *)(v16 + 2032) )
        {
          LOBYTE(v17) = *(_BYTE *)(v16 + 2025) != 0;
          v17 += 10;
        }
        else if ( !(unsigned __int8)VidSchiPrepareToResetEngine(v16, &v24)
               || !(unsigned __int8)VidSchiResetEngines(v16, v24) )
        {
          v17 = 9;
        }
        *(_BYTE *)(v16 + 2025) = 0;
        v18 = (_BYTE *)(v16 + 2036);
        *(_DWORD *)(v16 + 2028) = 0;
        *(_BYTE *)(v16 + 2026) = 0;
        *(_DWORD *)(v16 + 2032) = 0;
        if ( *(_BYTE *)(v16 + 2036) )
        {
          v19 = (char *)a1 + 3037;
          if ( v16 == -2036LL )
            goto LABEL_49;
          v20 = 15LL;
          v21 = (char *)a1 + 3037;
          do
          {
            if ( v20 == -2147483631 )
              break;
            v22 = v21[v18 - v19];
            if ( !v22 )
              break;
            *v21++ = v22;
            --v20;
          }
          while ( v20 );
          v23 = v21 - 1;
          if ( v20 )
            v23 = v21;
          *v23 = 0;
          if ( !v20 )
LABEL_49:
            *v19 = 0;
          *v18 = 0;
        }
        if ( v17
          && !VidSchIsTDRPending((__int64)a1)
          && !(unsigned int)VidSchiReportHwHang((KSPIN_LOCK *)a1, v28.QuadPart, v17, v16) )
        {
          VidSchResetGPUTimeout(a1);
        }
      }
LABEL_18:
      LODWORD(v26) = 0;
      LODWORD(v27) = 0;
      v25 = 0LL;
      if ( (unsigned int)VidSchiCheckFlipQueueTimeout((KSPIN_LOCK *)a1, (int *)&v27, &v25, &v28, (unsigned int *)&v26)
        && !(unsigned int)VidSchiReportHwHang((KSPIN_LOCK *)a1, v28.QuadPart, 3, (KSPIN_LOCK)&v26) )
      {
        VidSchResetFlipQueueTimeout(a1);
      }
    }
    if ( !VidSchIsTDRPending((__int64)a1) )
      return 1;
    return v5;
  }
  else
  {
    *((_BYTE *)a1 + 3152) = 0;
    return 1LL;
  }
}
