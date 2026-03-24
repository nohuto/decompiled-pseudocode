/*
 * XREFs of VidSchiCheckHwProgress @ 0x1C0080BC0
 * Callers:
 *     VidSchiScheduleCommandToRun @ 0x1C000B040 (VidSchiScheduleCommandToRun.c)
 *     VidSchWaitForEvents @ 0x1C0011AA4 (VidSchWaitForEvents.c)
 *     VidSchiWaitForSchedulerEvents @ 0x1C0080820 (VidSchiWaitForSchedulerEvents.c)
 * Callees:
 *     VidSchIsTDRPending @ 0x1C000C0E0 (VidSchIsTDRPending.c)
 *     VidSchiCheckFlipQueueTimeout @ 0x1C000C100 (VidSchiCheckFlipQueueTimeout.c)
 *     VidSchiCheckTimeoutForced @ 0x1C000C320 (VidSchiCheckTimeoutForced.c)
 *     VidSchiNeedToForcePreemptNode @ 0x1C00156F8 (VidSchiNeedToForcePreemptNode.c)
 *     _guard_dispatch_icall_nop @ 0x1C0018BF0 (_guard_dispatch_icall_nop.c)
 *     VidSchiReportHwHang @ 0x1C003D0B4 (VidSchiReportHwHang.c)
 *     VidSchiCheckNodeTimeout @ 0x1C0080D90 (VidSchiCheckNodeTimeout.c)
 *     VidSchiSubmitPreemptionCommand @ 0x1C0089ABC (VidSchiSubmitPreemptionCommand.c)
 *     VidSchResetFlipQueueTimeout @ 0x1C00CF834 (VidSchResetFlipQueueTimeout.c)
 *     VidSchResetGPUTimeout @ 0x1C00CF88C (VidSchResetGPUTimeout.c)
 *     VidSchiPrepareToResetEngine @ 0x1C00D019C (VidSchiPrepareToResetEngine.c)
 *     VidSchiResetEngines @ 0x1C00D02E4 (VidSchiResetEngines.c)
 */

__int64 __fastcall VidSchiCheckHwProgress(__int64 a1, _BYTE *a2)
{
  bool v2; // zf
  LARGE_INTEGER v5; // rcx
  unsigned __int64 v6; // rbp
  unsigned int v7; // edi
  __int64 *v8; // rcx
  __int64 v9; // rsi
  unsigned __int64 v10; // rax
  unsigned int v11; // ebp
  unsigned int v12; // edi
  struct _VIDSCH_NODE **v13; // rcx
  __int64 *v15; // rax
  __int64 v16; // rdi
  int v17; // esi
  _BYTE *v18; // rdx
  _BYTE *v19; // r9
  __int64 v20; // r8
  _BYTE *v21; // rcx
  char v22; // al
  _BYTE *v23; // rax
  int v24; // [rsp+70h] [rbp+8h] BYREF
  __int64 v25; // [rsp+78h] [rbp+10h] BYREF
  union _LARGE_INTEGER v26; // [rsp+80h] [rbp+18h] BYREF
  __int64 v27; // [rsp+88h] [rbp+20h] BYREF

  v2 = *(_DWORD *)(a1 + 6500) == 0;
  *a2 = 0;
  if ( v2 )
  {
    v26.QuadPart = 0LL;
    v5 = KeQueryPerformanceCounter(&v26);
    if ( is_mul_ok(v5.QuadPart, 0x989680uLL) )
    {
      if ( v26.QuadPart == 10000000 )
        v6 = 10000000 * v5.QuadPart / 0x989680uLL;
      else
        v6 = (unsigned __int64)(10000000 * v5.QuadPart) / v26.QuadPart;
    }
    else
    {
      v6 = 10000000 * (v5.QuadPart % (unsigned __int64)v26.QuadPart) / v26.QuadPart
         + 10000000 * (v5.QuadPart / (unsigned __int64)v26.QuadPart);
    }
    if ( *(_BYTE *)(a1 + 3056) && v6 >= *(_QWORD *)(a1 + 3040) )
      (*(void (__fastcall **)(_QWORD, _QWORD))(a1 + 3000))(*(_QWORD *)(a1 + 16), MEMORY[0xFFFFF78000000320]);
    v7 = 0;
    for ( *a2 = 0; v7 < *(_DWORD *)(a1 + 72); ++v7 )
    {
      v8 = *(__int64 **)(a1 + 624);
      if ( v7 < *(_DWORD *)(a1 + 696) )
        v8 += v7;
      v9 = *v8;
      v10 = *(_QWORD *)(*v8 + 128);
      if ( v10 && v10 <= v6 )
      {
        if ( VidSchiNeedToForcePreemptNode(*v8) )
        {
          _InterlockedIncrement((volatile signed __int32 *)(a1 + 724));
          _InterlockedIncrement((volatile signed __int32 *)(v9 + 2888));
          VidSchiSubmitPreemptionCommand(v9);
        }
        else
        {
          *a2 = 1;
        }
        *(_QWORD *)(v9 + 128) = 0LL;
      }
    }
    v11 = 1;
    if ( VidSchiCheckTimeoutForced(a1) )
    {
      VidSchiReportHwHang(a1, MEMORY[0xFFFFF78000000320], 1, 0LL);
    }
    else if ( !VidSchIsTDRPending(a1) )
    {
      v12 = 0;
      v25 = 0LL;
      if ( *(_DWORD *)(a1 + 72) )
      {
        while ( 1 )
        {
          v13 = *(struct _VIDSCH_NODE ***)(a1 + 624);
          if ( v12 < *(_DWORD *)(a1 + 696) )
            v13 += v12;
          if ( (unsigned int)VidSchiCheckNodeTimeout(*v13) )
            break;
          if ( ++v12 >= *(_DWORD *)(a1 + 72) )
            goto LABEL_18;
        }
        v15 = *(__int64 **)(a1 + 624);
        if ( v12 < *(_DWORD *)(a1 + 696) )
          v15 += v12;
        v16 = *v15;
        v17 = 0;
        v27 = 0LL;
        if ( *(_DWORD *)(v16 + 2024) )
        {
          LOBYTE(v17) = *(_BYTE *)(v16 + 2017) != 0;
          v17 += 10;
        }
        else if ( !(unsigned __int8)VidSchiPrepareToResetEngine(v16, &v27)
               || !(unsigned __int8)VidSchiResetEngines(v16, v27) )
        {
          v17 = 9;
        }
        *(_BYTE *)(v16 + 2017) = 0;
        v18 = (_BYTE *)(v16 + 2028);
        *(_DWORD *)(v16 + 2020) = 0;
        *(_BYTE *)(v16 + 2018) = 0;
        *(_DWORD *)(v16 + 2024) = 0;
        if ( *(_BYTE *)(v16 + 2028) )
        {
          v19 = (_BYTE *)(a1 + 2941);
          if ( v16 == -2028 )
            goto LABEL_49;
          v20 = 15LL;
          v21 = (_BYTE *)(a1 + 2941);
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
        if ( v17 && !VidSchIsTDRPending(a1) && !(unsigned int)VidSchiReportHwHang(a1, v25, v17, v16) )
          VidSchResetGPUTimeout(a1);
      }
LABEL_18:
      v24 = 0;
      if ( (unsigned int)VidSchiCheckFlipQueueTimeout(a1, &v25, &v24)
        && !(unsigned int)VidSchiReportHwHang(a1, v25, 3, (__int64)&v24) )
      {
        VidSchResetFlipQueueTimeout(a1);
      }
    }
    if ( VidSchIsTDRPending(a1) )
      return 0;
    return v11;
  }
  else
  {
    *(_BYTE *)(a1 + 3056) = 0;
    return 1LL;
  }
}
