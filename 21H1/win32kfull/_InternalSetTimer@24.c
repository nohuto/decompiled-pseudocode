/*
 * XREFs of _InternalSetTimer@24 @ 0x2CB62
 * Callers:
 *     _NtUserSetTimer@20 @ 0x2CA4E (_NtUserSetTimer@20.c)
 *     ?xxxGetNextSysMsg@@YGPAUtagQMSG@@PAUtagTHREADINFO@@PAU1@1PAVCMultiPerObjectLockExclusivePpiPtiQ@@@Z @ 0x3C4EA (-xxxGetNextSysMsg@@YGPAUtagQMSG@@PAUtagTHREADINFO@@PAU1@1PAVCMultiPerObjectLockExclusivePpiPtiQ@.c)
 *     _SetDeepDelayableVisRITTimer@16 @ 0x77F10 (_SetDeepDelayableVisRITTimer@16.c)
 *     _SetRITTimer@16 @ 0xA4BF6 (_SetRITTimer@16.c)
 *     ?AdjustRITDelayableTimers@@YGXH@Z @ 0xAF38E (-AdjustRITDelayableTimers@@YGXH@Z.c)
 *     __SetSystemTimer@20 @ 0xCA7A8 (__SetSystemTimer@20.c)
 *     _SetGDITimer@16 @ 0x1561E1 (_SetGDITimer@16.c)
 *     __SetTimer@20 @ 0x156316 (__SetTimer@20.c)
 *     _xxxSoundSentry@0 @ 0x1782B3 (_xxxSoundSentry@0.c)
 *     ?MNSetTimerToAutoDismiss@@YGXPAUtagMENUSTATE@@PAUtagWND@@@Z @ 0x19699A (-MNSetTimerToAutoDismiss@@YGXPAUtagMENUSTATE@@PAUtagWND@@@Z.c)
 *     ?MNSetTimerToOpenHierarchy@@YGIABV?$SmartObjStackRef@UtagPOPUPMENU@@@@@Z @ 0x1969DC (-MNSetTimerToOpenHierarchy@@YGIABV-$SmartObjStackRef@UtagPOPUPMENU@@@@@Z.c)
 *     _MNSetTimerToCloseHierarchy@4 @ 0x1977B8 (_MNSetTimerToCloseHierarchy@4.c)
 * Callees:
 *     ?CoalescableDueTime@@YGKPBUtagTIMER@@@Z @ 0x2CFDA (-CoalescableDueTime@@YGKPBUtagTIMER@@@Z.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     ?DecTimerCount@@YGXPAUtagTIMER@@@Z @ 0x92FF2 (-DecTimerCount@@YGXPAUtagTIMER@@@Z.c)
 *     ?SetDelayableTimer@@YGXKK@Z @ 0xA7898 (-SetDelayableTimer@@YGXKK@Z.c)
 *     ?SignalRitTimerScanWakeEvent@CRitTimerScanWakeSystem@@SG_NXZ @ 0xA98AC (-SignalRitTimerScanWakeEvent@CRitTimerScanWakeSystem@@SG_NXZ.c)
 *     _IsThreadCrossSessionAttached@0 @ 0xEF2EA (_IsThreadCrossSessionAttached@0.c)
 *     _MicrosoftTelemetryAssertTriggeredNoArgsKM@0 @ 0x24B8D4 (_MicrosoftTelemetryAssertTriggeredNoArgsKM@0.c)
 */

// write access to const memory has been detected, the output may be wrong!
int __fastcall InternalSetTimer(unsigned int a1, char *a2, unsigned int a3, int a4, int a5, int a6)
{
  unsigned int v8; // edi
  PKTHREAD CurrentThread; // ebx
  _DWORD *ThreadWin32Thread; // eax
  _DWORD *v11; // ecx
  _DWORD *v12; // eax
  unsigned int v13; // ebx
  char *v14; // edx
  _DWORD *v15; // eax
  _DWORD *v16; // esi
  unsigned int v17; // eax
  _DWORD *v18; // ecx
  _DWORD *v19; // esi
  char **v20; // ecx
  char *CurrentProcessWin32Process; // eax
  _DWORD *v22; // eax
  int v23; // ecx
  int v24; // edx
  signed int v25; // ecx
  int v26; // eax
  _DWORD *v27; // ecx
  char *v28; // eax
  int v29; // ecx
  int v30; // eax
  int v31; // edi
  unsigned int v32; // edx
  int v33; // ecx
  unsigned int v34; // eax
  int v35; // ecx
  int v36; // ecx
  int v37; // edi
  int v38; // ebx
  unsigned int v39; // edx
  unsigned int v40; // edi
  unsigned int v41; // eax
  unsigned int v42; // ebx
  unsigned int v43; // edx
  unsigned int v44; // ecx
  int v45; // eax
  unsigned int v46; // eax
  const struct tagTIMER *v47; // [esp-8h] [ebp-38h]
  unsigned int v48; // [esp-8h] [ebp-38h]
  struct tagTIMER *v49; // [esp+0h] [ebp-30h]
  _DWORD *v51; // [esp+10h] [ebp-20h]
  _DWORD *v53; // [esp+18h] [ebp-18h]
  _DWORD *v54; // [esp+1Ch] [ebp-14h]
  _DWORD *v55; // [esp+20h] [ebp-10h]
  _DWORD *v56; // [esp+24h] [ebp-Ch]
  unsigned int v57; // [esp+2Ch] [ebp-4h]

  if ( gbCleanupInitiated )
  {
    UserSetLastError(641);
    return 0;
  }
  v8 = a3;
  if ( a3 < 0xA )
    v8 = 10;
  if ( v8 > 0x7FFFFFFF )
    v8 = 0x7FFFFFFF;
  CurrentThread = KeGetCurrentThread();
  v53 = 0;
  if ( IsThreadCrossSessionAttached() || (ThreadWin32Thread = (_DWORD *)PsGetThreadWin32Thread(CurrentThread)) == 0 )
  {
    v11 = 0;
  }
  else
  {
    v11 = (_DWORD *)*ThreadWin32Thread;
    v53 = (_DWORD *)*ThreadWin32Thread;
  }
  v12 = v11;
  v54 = v11;
  if ( !v11 || (a6 & 4) != 0 )
  {
    v12 = (_DWORD *)_gptiRit;
    goto LABEL_19;
  }
  if ( a1 && ((v11[66] & 2) == 0 || (a6 & 0x40) != 0) )
  {
    v12 = *(_DWORD **)(a1 + 8);
LABEL_19:
    v54 = v12;
  }
  if ( a5 == -1 || !a5 && v12 && (v12[89] & 8) != 0 )
    v13 = a6 & 0xFFFFFDFF;
  else
    v13 = a6 | 0x200;
  v14 = a2;
  v57 = a1 >> 4;
  v15 = (_DWORD *)((char *)&_gTimerHashTable + 8 * (((unsigned __int8)(a1 >> 4) + (_BYTE)a2) & 0x3F));
  v16 = (_DWORD *)*v15;
  v51 = v15;
  v56 = (_DWORD *)*v15;
  if ( (_DWORD *)*v15 != v15 )
  {
    v17 = a1;
    v18 = v51;
    do
    {
      v19 = v16 - 16;
      v55 = v19;
      if ( v19[13] == v17 && (char *)v19[14] == v14 )
      {
        v20 = (char **)v19[7];
        if ( (((unsigned __int8)v13 ^ *((_BYTE *)v19 + 28)) & 6) != 0 )
        {
          v17 = a1;
        }
        else
        {
          if ( ((unsigned __int8)v20 & 0x40) != 0
            || (CurrentProcessWin32Process = (char *)PsGetCurrentProcessWin32Process(),
                v20 = (char **)v19[3],
                CurrentProcessWin32Process == v20[58]) )
          {
LABEL_35:
            if ( (v19[7] & 1) != 0 )
              DecTimerCount(v49);
            goto LABEL_55;
          }
          v17 = a1;
          if ( !a1 )
          {
            if ( (((unsigned __int8)v13 ^ *((_BYTE *)v19 + 28)) & 4) == 0 )
              goto LABEL_35;
            v17 = 0;
          }
          v14 = a2;
        }
        v18 = v51;
      }
      v16 = (_DWORD *)*v56;
      v56 = v16;
    }
    while ( v16 != v18 );
  }
  v22 = (_DWORD *)HMAllocObject(v54, 0, 16, 80);
  v19 = v22;
  v55 = v22;
  if ( !v22 )
    return 0;
  v22[13] = 0;
  if ( a1 )
  {
    v26 = (int)a2;
  }
  else
  {
    v23 = g_cTimerId;
    v24 = g_cTimerId;
    while ( 1 )
    {
      v25 = v23 - 1;
      g_cTimerId = v25;
      if ( v25 < 0 )
      {
        g_cTimerId = 32511;
        v25 = 32511;
      }
      if ( !_bittestandset(_gTimerId, v25) )
        break;
      v23 = g_cTimerId;
      if ( g_cTimerId == v24 )
      {
        UserSetLastError(8);
        HMFreeObject(v19);
        return 0;
      }
    }
    v26 = g_cTimerId + 256;
  }
  v19[14] = v26;
  v27 = v19 + 11;
  if ( *(_DWORD *)(_gtmrListHead + 4) != _gtmrListHead
    || (*v27 = _gtmrListHead,
        v19[12] = _gtmrListHead,
        *(_DWORD *)(_gtmrListHead + 4) = v27,
        v14 = (char *)(v19 + 16),
        _gtmrListHead = v19 + 11,
        v28 = (char *)&_gTimerHashTable + 8 * (((_BYTE)v57 + (unsigned __int8)v19[14]) & 0x3F),
        v20 = (char **)*((_DWORD *)v28 + 1),
        *v20 != v28) )
  {
    __fastfail(3u);
  }
  *(_DWORD *)v14 = v28;
  v19[17] = v20;
  *v20 = v14;
  *((_DWORD *)v28 + 1) = v14;
LABEL_55:
  v47 = (const struct tagTIMER *)(v19 + 13);
  HMAssignmentLock(v20, v14);
  v19[15] = 0;
  v19[5] = v8;
  v19[8] = v8;
  v19[4] = a4;
  if ( (v13 & 0x200) != 0 )
    v19[6] = a5;
  v29 = MEMORY[0xFFDF0004];
  if ( (unsigned int)MEMORY[0xFFDF0004] < 0x1000000 )
  {
    v31 = MEMORY[0xFFDF0324];
    v32 = MEMORY[0xFFDF0320];
    if ( MEMORY[0xFFDF0324] != MEMORY[0xFFDF0328] )
    {
      do
      {
        _mm_pause();
        v31 = MEMORY[0xFFDF0324];
        v32 = MEMORY[0xFFDF0320];
      }
      while ( MEMORY[0xFFDF0324] != MEMORY[0xFFDF0328] );
      v19 = v53;
      v13 = (unsigned int)v55;
      v29 = MEMORY[0xFFDF0004];
    }
    v30 = v29 * (v31 << 8) + (((unsigned int)v29 * (unsigned __int64)v32) >> 24);
  }
  else
  {
    v30 = ((unsigned int)MEMORY[0xFFDF0004] * (unsigned __int64)MEMORY[0xFFDF0320]) >> 24;
  }
  v19[18] = v30;
  if ( (v13 & 0x80u) == 0 )
  {
    if ( (v13 & 0x100) != 0 )
      v19[15] = v51;
  }
  else
  {
    v13 &= ~0x80u;
  }
  v19[7] = v13 | 8;
  v19[3] = a2;
  v33 = *(_DWORD *)(*((_DWORD *)a2 + 58) + 628);
  if ( v33 )
  {
    v34 = v33 + v19[8];
    if ( v34 >= 0x7FFFFFFF )
      v34 = 0x7FFFFFFF;
    v19[8] = v34;
  }
  EtwTraceInternalSetTimer(v19);
  v35 = 1;
  if ( !gbRITAlerted )
  {
    if ( !gbTimersProcActive )
    {
      v36 = MEMORY[0xFFDF0004];
      if ( (unsigned int)MEMORY[0xFFDF0004] < 0x1000000 )
      {
        v38 = MEMORY[0xFFDF0324];
        v39 = MEMORY[0xFFDF0320];
        if ( MEMORY[0xFFDF0324] != MEMORY[0xFFDF0328] )
        {
          do
          {
            _mm_pause();
            v38 = MEMORY[0xFFDF0324];
            v39 = MEMORY[0xFFDF0320];
          }
          while ( MEMORY[0xFFDF0324] != MEMORY[0xFFDF0328] );
          v19 = v53;
          v36 = MEMORY[0xFFDF0004];
        }
        v37 = v36 * (v38 << 8) + (((unsigned int)v36 * (unsigned __int64)v39) >> 24);
      }
      else
      {
        v37 = ((unsigned int)MEMORY[0xFFDF0004] * (unsigned __int64)MEMORY[0xFFDF0320]) >> 24;
      }
      v40 = v37 - _gcmsLastTimer;
      v41 = CoalescableDueTime(v47);
      v42 = gdmsNextTimer;
      if ( v40 > gdmsNextTimer )
        goto LABEL_90;
      v43 = guNextCoalescableTimerDue;
      if ( v40 > guNextCoalescableTimerDue )
        goto LABEL_90;
      if ( *(_DWORD *)(*(_DWORD *)(v19[3] + 232) + 636) )
        goto LABEL_90;
      v44 = v41 + v40;
      if ( v41 + v40 < v41 )
        goto LABEL_90;
      v45 = v19[8];
      v19[7] &= ~8u;
      v46 = v40 + v45;
      v19[8] = v46;
      if ( v46 < v42 )
        goto LABEL_86;
      if ( v43 <= v44 )
      {
LABEL_90:
        if ( (v19[7] & 8) != 0 )
        {
          gbRITAlerted = CRitTimerScanWakeSystem::SignalRitTimerScanWakeEvent();
          if ( gbRITAlerted != 1 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM();
        }
        v35 = 1;
        goto LABEL_94;
      }
      if ( v46 < v42 )
LABEL_86:
        gdmsNextTimer = v46;
      if ( v43 >= v44 )
        guNextCoalescableTimerDue = v44;
      SetDelayableTimer(v48, a1);
      goto LABEL_90;
    }
    gbRITRescan = 1;
  }
LABEL_94:
  if ( v19[14] )
    return v19[14];
  return v35;
}
