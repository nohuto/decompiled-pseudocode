/*
 * XREFs of VidSchiControlVSync @ 0x1C00A3788
 * Callers:
 *     VidSchiControlVSyncThread @ 0x1C0015040 (VidSchiControlVSyncThread.c)
 *     VidSchSetMonitorPowerState @ 0x1C001AFC0 (VidSchSetMonitorPowerState.c)
 *     ?VidSchiControlIndependentVidPnVSyncThread@@YAXPEAU_VIDSCH_GLOBAL@@@Z @ 0x1C0034A7C (-VidSchiControlIndependentVidPnVSyncThread@@YAXPEAU_VIDSCH_GLOBAL@@@Z.c)
 *     VidSchControlVSyncAdapter @ 0x1C00A3620 (VidSchControlVSyncAdapter.c)
 *     VidSchIsVSyncEnabled @ 0x1C00A3970 (VidSchIsVSyncEnabled.c)
 * Callees:
 *     ?DdiControlInterrupt@DXGADAPTER@@QEAAJW4_DXGK_INTERRUPT_TYPE@@EI@Z @ 0x1C0015184 (-DdiControlInterrupt@DXGADAPTER@@QEAAJW4_DXGK_INTERRUPT_TYPE@@EI@Z.c)
 *     VidSchiSetVSyncSuspended @ 0x1C00151D8 (VidSchiSetVSyncSuspended.c)
 *     VidSchiGetVSyncSuspended @ 0x1C0015F1C (VidSchiGetVSyncSuspended.c)
 *     DxgkLogInternalTriageEvent @ 0x1C001CE40 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x1C002E3C0 (McTemplateK0p_EtwWriteTransfer.c)
 *     ?VidSchiSetInterruptTargetPresentId@@YAJPEAU_VIDSCH_GLOBAL@@II_K_N@Z @ 0x1C0045F30 (-VidSchiSetInterruptTargetPresentId@@YAJPEAU_VIDSCH_GLOBAL@@II_K_N@Z.c)
 */

__int64 __fastcall VidSchiControlVSync(
        struct _VIDSCH_GLOBAL *a1,
        enum _DXGK_INTERRUPT_TYPE j,
        __int64 a3,
        unsigned int a4)
{
  unsigned int v4; // r12d
  __int64 v5; // rsi
  int v6; // r15d
  char v7; // bp
  unsigned int v9; // r14d
  char v10; // r9
  __int64 k; // rcx
  int v12; // eax
  int v13; // eax
  __int64 v14; // rcx
  __int64 v16; // rcx
  unsigned int i; // edx
  bool v18; // zf
  unsigned int v19; // r15d
  _BOOL8 v20; // r13
  __int64 v21; // rax
  unsigned int v22; // edx
  unsigned int v23; // ecx
  int v24; // [rsp+90h] [rbp+18h]

  v24 = a3;
  v4 = 0;
  v5 = a4;
  v6 = a3;
  v7 = j;
  v9 = 0;
  if ( !a1 )
  {
    WdLogSingleEntry0(1LL);
    DxgkLogInternalTriageEvent(v16, 0x40000LL);
    return 0LL;
  }
  v10 = *((_BYTE *)a1 + 2212);
  if ( !v10 )
  {
    k = *((unsigned __int8 *)a1 + 1808);
    goto LABEL_4;
  }
  if ( (_DWORD)v5 != -3 )
  {
    k = *((unsigned __int8 *)a1 + v5 + 1808);
LABEL_4:
    if ( (_DWORD)k == ((_BYTE)j != 0) )
      return v9;
    goto LABEL_5;
  }
  a3 = *((unsigned int *)a1 + 10);
  j = 0;
  if ( !(_DWORD)a3 )
    return v9;
  while ( 1 )
  {
    k = *((unsigned __int8 *)a1 + (unsigned int)j + 1808);
    if ( (_DWORD)k != (v7 != 0) )
      break;
    if ( ++j >= (unsigned int)a3 )
      return v9;
  }
LABEL_5:
  if ( v7 )
  {
    if ( v10 )
    {
      if ( (_DWORD)v5 == -3 )
      {
        for ( i = 0; i < *((_DWORD *)a1 + 10); ++i )
        {
          k = i;
          _InterlockedExchange((volatile __int32 *)a1 + k + 568, 1);
        }
      }
      else
      {
        _InterlockedExchange((volatile __int32 *)a1 + v5 + 568, 1);
      }
    }
    else
    {
      _InterlockedExchange((volatile __int32 *)a1 + 568, 1);
    }
    for ( j = 0; (unsigned int)j < *((_DWORD *)a1 + 10); ++j )
    {
      v12 = *((_DWORD *)a1 + 552);
      if ( _bittest(&v12, j) )
      {
        if ( VidSchiGetVSyncSuspended((__int64)a1, j) )
        {
          k = *((_QWORD *)a1 + a3 + 400);
          _InterlockedExchange((volatile __int32 *)(k + 44164), 1);
        }
        *(_QWORD *)(*((_QWORD *)a1 + a3 + 400) + 44168LL) = 0LL;
      }
    }
  }
  if ( !*((_BYTE *)a1 + 59) || ((v6 - 3) & 0xFFFEFFFF) != 0 )
  {
    v9 = DXGADAPTER::DdiControlInterrupt(*((DXGADAPTER **)a1 + 2), j);
    goto LABEL_13;
  }
  v18 = v6 == 3;
  v19 = 0;
  v20 = !v18;
  if ( !*((_DWORD *)a1 + 38) )
  {
LABEL_55:
    v6 = v24;
LABEL_13:
    v13 = 0;
    if ( v9 != -1073741822 )
      v13 = v9;
    v9 = v13;
    if ( v13 < 0 )
      return v9;
    if ( *((_BYTE *)a1 + 2212) )
    {
      if ( (_DWORD)v5 == -3 )
      {
        for ( k = 0LL; (unsigned int)k < *((_DWORD *)a1 + 10); *((_BYTE *)a1 + v21 + 1808) = v7 != 0 )
        {
          v21 = (unsigned int)k;
          k = (unsigned int)(k + 1);
        }
      }
      else
      {
        LOBYTE(k) = v7 != 0;
        *((_BYTE *)a1 + v5 + 1808) = v7 != 0;
      }
    }
    else
    {
      *((_BYTE *)a1 + 1808) = v7 != 0;
    }
    if ( bTracingEnabled )
    {
      if ( !v7 )
      {
        if ( (byte_1C006E942 & 8) != 0 )
          McTemplateK0p_EtwWriteTransfer(k, &EventDisableVSync, a3, *((_QWORD *)a1 + 2));
LABEL_22:
        if ( *((_BYTE *)a1 + 2212) == 1 && (_DWORD)v5 != -3 && (v22 = *((_DWORD *)a1 + 10), v23 = 0, v22) )
        {
          while ( *((_BYTE *)a1 + v23 + 1808) != 1 )
          {
            if ( ++v23 >= v22 )
              goto LABEL_23;
          }
        }
        else
        {
LABEL_23:
          if ( !*((_BYTE *)a1 + 59) || v6 != 3 )
            _InterlockedAnd((volatile signed __int32 *)a1 + 9, 0xFFFFFFEF);
        }
        goto LABEL_28;
      }
      if ( (byte_1C006E942 & 8) != 0 )
        McTemplateK0p_EtwWriteTransfer(k, &EventEnableVSync, a3, *((_QWORD *)a1 + 2));
    }
    else if ( !v7 )
    {
      goto LABEL_22;
    }
    VidSchiSetVSyncSuspended((__int64)a1, v5, 0);
    _InterlockedOr((volatile signed __int32 *)a1 + 9, 0x10u);
LABEL_28:
    v14 = *((unsigned int *)a1 + 1598);
    *((_QWORD *)a1 + v14 + 800) = MEMORY[0xFFFFF78000000320];
    *((_DWORD *)a1 + v14 + 1608) = v6;
    *((_DWORD *)a1 + 1598) = ((unsigned __int8)*((_DWORD *)a1 + 1598) + 1) & 3;
    return v9;
  }
  while ( (_DWORD)v5 != -3 )
  {
    v9 = VidSchiSetInterruptTargetPresentId(a1, v5, v19, v20 - 1, 1);
    if ( (v9 & 0x80000000) != 0 )
      return v9;
LABEL_54:
    if ( ++v19 >= *((_DWORD *)a1 + 38) )
      goto LABEL_55;
  }
  if ( !*((_DWORD *)a1 + 10) )
  {
LABEL_53:
    v4 = 0;
    goto LABEL_54;
  }
  while ( 1 )
  {
    v9 = VidSchiSetInterruptTargetPresentId(a1, v4, v19, v20 - 1, 1);
    if ( (v9 & 0x80000000) != 0 )
      return v9;
    if ( ++v4 >= *((_DWORD *)a1 + 10) )
      goto LABEL_53;
  }
}
