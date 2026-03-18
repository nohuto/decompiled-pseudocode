/*
 * XREFs of DrvProcessDxgkDisplayCallout @ 0x1C0149088
 * Callers:
 *     VideoPortCalloutThread @ 0x1C011F704 (VideoPortCalloutThread.c)
 * Callees:
 *     DrvQueryMDEVPowerState @ 0x1C006E140 (DrvQueryMDEVPowerState.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00D3740 (memset.c)
 *     ?DrvProcessSetDisplayConfigParameters@@YAJAEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@IPEAUtagDESKTOP@@PEAEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0145A7C (-DrvProcessSetDisplayConfigParameters@@YAJAEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@IPEAUtagDESK.c)
 *     ?DrvUpdateDpiInfoOnOptimizedModeChange@@YAJPEAU_MDEV@@PEAE@Z @ 0x1C014668C (-DrvUpdateDpiInfoOnOptimizedModeChange@@YAJPEAU_MDEV@@PEAE@Z.c)
 */

__int64 __fastcall DrvProcessDxgkDisplayCallout(
        struct _MDEV *a1,
        __int64 a2,
        unsigned __int8 *a3,
        bool *a4,
        bool *a5,
        _BYTE *a6)
{
  struct tagDESKTOP *v7; // rdi
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rdx
  char v17; // cl
  int updated; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rax
  __int64 v23; // rdx
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  int v28; // eax
  int v29; // eax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rdi
  __int64 v34; // rax
  __int64 v35; // rdx
  int v36; // eax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  unsigned __int8 v41[4]; // [rsp+40h] [rbp-79h] BYREF
  _DWORD v42[3]; // [rsp+44h] [rbp-75h] BYREF
  char v43; // [rsp+50h] [rbp-69h] BYREF
  _BYTE v44[111]; // [rsp+51h] [rbp-68h] BYREF

  v7 = grpdeskRitInput;
  memset(v44, 0, 0x67uLL);
  v43 = 0x80;
  v10 = ((__int64 (__fastcall *)(char *))qword_1C024A910)(&v43);
  v14 = v10;
  if ( v10 >= 0 )
  {
    v17 = v43;
    *a4 = (v43 & 0x20) != 0;
    *a5 = (v17 & 0x10) != 0;
    *a6 = v17 & 1;
    if ( (v17 & 2) != 0 )
    {
      v42[0] = PsGetCurrentProcessSessionId();
      updated = ZwUpdateWnfStateData(&WNF_DX_MONITOR_CHANGE_NOTIFICATION, 0LL, 0LL, 0LL, v42, 0, 0);
      v14 = updated;
      if ( updated < 0 )
      {
        v22 = WdLogNewEntry5_WdError(v20, v19, v21);
        *(_QWORD *)(v22 + 24) = v14;
        *(_QWORD *)(v22 + 32) = v42[0];
        WdLogEvent5_WdError(v22, v23);
        LODWORD(v14) = 0;
      }
      v17 = v43;
    }
  }
  else
  {
    v15 = WdLogNewEntry5_WdError(v12, v11, v13);
    *(_QWORD *)(v15 + 24) = v14;
    WdLogEvent5_WdError(v15, v16);
    memset(v44, 0, 0x67uLL);
    v17 = 4;
    v43 = 4;
  }
  if ( (v17 & 4) != 0 )
  {
    v24 = *(_DWORD *)&v44[3];
    if ( !*(_DWORD *)&v44[3] )
      v24 = 2191;
    *(_DWORD *)&v44[3] = v24;
    if ( (v17 & 8) != 0 )
      *(_DWORD *)&v44[3] = v24 | 0x100;
    if ( (unsigned int)DrvQueryMDEVPowerState((__int64)a1) )
    {
      v41[0] = 0;
      v36 = DrvProcessSetDisplayConfigParameters(
              (struct _D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION *)&v43,
              *(unsigned int *)&v44[3],
              v7,
              v41,
              (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)&v44[23]);
      v33 = v36;
      if ( v36 < 0 )
      {
        LODWORD(v14) = v36;
        v34 = WdLogNewEntry5_WdError(v38, v37, v39);
        *(_QWORD *)(v34 + 32) = 1LL;
        goto LABEL_16;
      }
      if ( v41[0] )
      {
        DrvUpdateDpiInfoOnOptimizedModeChange(a1, a3);
        v44[0] &= ~1u;
      }
    }
    else
    {
      v28 = *(_DWORD *)&v44[3];
      if ( (*(_WORD *)&v44[3] & 0x200) != 0 )
      {
        v29 = DrvProcessSetDisplayConfigParameters(
                (struct _D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION *)&v43,
                *(_DWORD *)&v44[3] & 0xFFFFFF7F,
                v7,
                0LL,
                (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)&v44[23]);
        v33 = v29;
        if ( v29 < 0 )
        {
          LODWORD(v14) = v29;
          v34 = WdLogNewEntry5_WdError(v31, v30, v32);
          *(_QWORD *)(v34 + 32) = 0LL;
LABEL_16:
          *(_QWORD *)(v34 + 24) = v33;
LABEL_17:
          WdLogEvent5_WdError(v34, v35);
          goto LABEL_28;
        }
        v28 = *(_WORD *)&v44[3] & 0x1100 | 0x88F;
        *(_DWORD *)&v44[3] = v28;
      }
      else if ( (v44[3] & 0xF) == 0 )
      {
        v34 = WdLogNewEntry5_WdError(v26, v25, v27);
        goto LABEL_17;
      }
      gulDelayedSwitchAction = v28;
    }
  }
  if ( (v44[0] & 1) != 0 )
    DrvUpdateDpiInfoOnOptimizedModeChange(a1, a3);
LABEL_28:
  if ( *(_QWORD *)&v44[15] )
    ExFreePoolWithTag(*(PVOID *)&v44[15], 0);
  if ( *(_QWORD *)&v44[95] )
    **(_DWORD **)&v44[95] = v14;
  return (unsigned int)v14;
}
