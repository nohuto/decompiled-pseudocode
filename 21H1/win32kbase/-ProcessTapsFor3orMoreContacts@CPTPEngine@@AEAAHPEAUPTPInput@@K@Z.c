/*
 * XREFs of ?ProcessTapsFor3orMoreContacts@CPTPEngine@@AEAAHPEAUPTPInput@@K@Z @ 0x1C01C91D8
 * Callers:
 *     ?RunStateMachine@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1C01C95CC (-RunStateMachine@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 * Callees:
 *     ?ResetDragThresholds@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1C01C952C (-ResetDragThresholds@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 *     ?Send2FingerTap@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1C01CA5E0 (-Send2FingerTap@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 *     ?SendMouseUpIfPending@CPTPEngine@@AEAAXPEAI@Z @ 0x1C01CABA0 (-SendMouseUpIfPending@CPTPEngine@@AEAAXPEAI@Z.c)
 *     ?SendShellOutput@CBasePTPEngine@@IEAAXW4Action@Shell@Payload@PTPEngineOutput@@@Z @ 0x1C01CACEC (-SendShellOutput@CBasePTPEngine@@IEAAXW4Action@Shell@Payload@PTPEngineOutput@@@Z.c)
 *     ?SendTelemetryOutput@CBasePTPEngine@@IEAAXW4Action@Telemetry@Payload@PTPTelemetryOutput@@TParameters@345@@Z @ 0x1C01CAD7C (-SendTelemetryOutput@CBasePTPEngine@@IEAAXW4Action@Telemetry@Payload@PTPTelemetryOutput@@TParame.c)
 *     ?SuppressContactForMultiFingerTap@CPTPEngine@@AEAAHPEBUCContactState@@@Z @ 0x1C01CB128 (-SuppressContactForMultiFingerTap@CPTPEngine@@AEAAHPEBUCContactState@@@Z.c)
 */

__int64 __fastcall CPTPEngine::ProcessTapsFor3orMoreContacts(CPTPEngine *this, struct PTPInput *a2, unsigned int a3)
{
  unsigned int v3; // r9d
  int v4; // r11d
  unsigned int v5; // r10d
  int v8; // esi
  char *v9; // rdx
  int v10; // r15d
  char *v11; // r8
  unsigned int v12; // eax
  char *v13; // r11
  int v14; // r14d
  unsigned int v15; // r12d
  int *v16; // rdx
  int v17; // r8d
  int v18; // r9d
  int v19; // r10d
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  __int128 v26; // [rsp+20h] [rbp-40h]
  __int128 v27; // [rsp+40h] [rbp-20h] BYREF
  __int64 v28; // [rsp+50h] [rbp-10h]

  v3 = *((_DWORD *)this + 958);
  LOBYTE(v4) = 1;
  v5 = a3;
  v8 = 1;
  if ( (v3 & 1) != 0 || (v3 & 2) != 0 || (v3 & 4) != 0 )
    return 0LL;
  v9 = (char *)this + 1160;
  v10 = 0;
  v11 = (char *)this + 3512;
  while ( v9 != v11 )
  {
    if ( ((unsigned __int8)*(_DWORD *)v9 & (unsigned __int8)v4) != 0 )
    {
      if ( (unsigned int)CPTPEngine::SuppressContactForMultiFingerTap(this, (const struct CContactState *)v9) )
      {
        v10 += v4;
      }
      else if ( *((_DWORD *)v9 + 33) < *((_DWORD *)this + 909) )
      {
        v8 = 0;
      }
    }
    v9 += 392;
  }
  v12 = *((_DWORD *)this + 880);
  if ( (v12 <= 2 || v5 >= v12) && (v3 & 0x1000000) == 0 )
    return 0LL;
  v13 = (char *)a2 + 56;
  v14 = 0;
  v15 = 0;
  if ( !*((_DWORD *)a2 + 12) )
    goto LABEL_34;
  while ( 1 )
  {
    if ( !*((_DWORD *)v13 + 3)
      || (unsigned int)CPTPEngine::SuppressContactForMultiFingerTap(
                         this,
                         (CPTPEngine *)((char *)this
                                      + 392 * (unsigned int)(*((_DWORD *)v13 + 1) % *((_DWORD *)this + 4))
                                      + 1160)) )
    {
      v3 = *((_DWORD *)this + 958);
      goto LABEL_30;
    }
    v20 = *v16;
    if ( (*v16 & 4) != 0 || (v20 & 0x10) != 0 || (v20 & 8) != 0 )
      break;
    if ( v17 )
    {
      if ( (v20 & 0x10000) == 0 )
      {
        *((_DWORD *)this + 958) &= ~0x1000000u;
        v3 = *((_DWORD *)this + 958);
        goto LABEL_34;
      }
    }
    else
    {
      *v16 = v20 | 0x10000;
      v19 = *((_DWORD *)v13 + 3);
    }
    v21 = v14 + 1;
    if ( (v19 & 0x48000) != 0x40000 )
      v21 = v14;
    v14 = v21;
    v3 = *((_DWORD *)this + 958);
    if ( (v3 & 0x1000000) == 0 && v21 )
    {
      v3 |= 0x1000000u;
      v22 = *((_DWORD *)this + 880) - v10;
      *((_DWORD *)this + 958) = v3;
      *((_DWORD *)this + 881) = v22;
    }
LABEL_30:
    ++v15;
    v13 += 96;
    if ( v15 >= *((_DWORD *)a2 + 12) )
      goto LABEL_34;
  }
  v3 = v18 & 0xFEFFFFFF;
  *((_DWORD *)this + 958) = v3;
LABEL_34:
  if ( (v3 & 0x1000000) == 0 )
    return 0LL;
  CPTPEngine::SendMouseUpIfPending(this, (unsigned int *)this + 879);
  v23 = *((_DWORD *)this + 958);
  if ( (v23 & 8) != 0 || (v23 & 0x10) != 0 )
  {
    *((_DWORD *)this + 958) = v23 & 0xFEFFFFFF;
    return 0LL;
  }
  if ( v14 == *((_DWORD *)a2 + 12) - v10 )
  {
    v24 = *((_DWORD *)this + 881);
    if ( v24 == 3 )
    {
      CBasePTPEngine::SendShellOutput(this, 0LL);
      v26 = 0LL;
      LODWORD(v26) = 3;
      goto LABEL_42;
    }
    if ( v24 == 4 )
    {
      CBasePTPEngine::SendShellOutput(this, 1LL);
      v26 = 0LL;
      LODWORD(v26) = 4;
LABEL_42:
      v28 = 0LL;
      v27 = v26;
      CBasePTPEngine::SendTelemetryOutput(this, 4LL, &v27);
    }
    else if ( v24 == 2 && (*((_DWORD *)this + 104) & 0x400) != 0 )
    {
      if ( v8 )
        CPTPEngine::Send2FingerTap(this, a2);
    }
    *((_DWORD *)this + 958) &= ~0x1000000u;
    CPTPEngine::ResetDragThresholds(this, a2);
  }
  return 1LL;
}
