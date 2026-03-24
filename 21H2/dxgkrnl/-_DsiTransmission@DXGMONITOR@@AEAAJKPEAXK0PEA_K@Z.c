/*
 * XREFs of ?_DsiTransmission@DXGMONITOR@@AEAAJKPEAXK0PEA_K@Z @ 0x1C02FBA64
 * Callers:
 *     ?_DispatchIoctrls@DXGMONITOR@@QEAAJKKPEAXK0PEA_K@Z @ 0x1C013F4F0 (-_DispatchIoctrls@DXGMONITOR@@QEAAJKKPEAXK0PEA_K@Z.c)
 * Callees:
 *     Feature_MipiDsi2__private_ReportDeviceUsage @ 0x1C00288CC (Feature_MipiDsi2__private_ReportDeviceUsage.c)
 *     Feature_MonitorIoctlTesting__private_IsEnabledDeviceUsage @ 0x1C0028930 (Feature_MonitorIoctlTesting__private_IsEnabledDeviceUsage.c)
 *     ?DdiDsiTransmission@ADAPTER_DISPLAY@@QEAAJIPEAU_DXGK_DSI_TRANSMISSION@@@Z @ 0x1C021A7F8 (-DdiDsiTransmission@ADAPTER_DISPLAY@@QEAAJIPEAU_DXGK_DSI_TRANSMISSION@@@Z.c)
 *     ?_ValidateMipiDsiPackets@DXGMONITOR@@AEAAJPEAU_DXGK_DSI_TRANSMISSION@@@Z @ 0x1C02FBFF8 (-_ValidateMipiDsiPackets@DXGMONITOR@@AEAAJPEAU_DXGK_DSI_TRANSMISSION@@@Z.c)
 */

__int64 __fastcall DXGMONITOR::_DsiTransmission(
        DXGMONITOR *this,
        __int64 a2,
        _BYTE *a3,
        unsigned int a4,
        _BYTE *a5,
        unsigned __int64 *a6)
{
  unsigned __int64 v6; // rbp
  __int64 v8; // rbx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  ADAPTER_DISPLAY *v15; // r12
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  int v24; // ecx
  __int64 v25; // rdx
  unsigned int v26; // eax
  DXGMONITOR *v27; // rcx
  unsigned int v28; // ebp
  __int64 v29; // rbx
  _QWORD *v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  struct _FAST_MUTEX *v35; // rbx
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rsi
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8

  v6 = a4;
  v8 = (unsigned int)a2;
  if ( !a3 )
  {
    v10 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v10);
  }
  if ( !a5 )
  {
    v11 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v11);
  }
  if ( !a6 )
  {
    v12 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v12);
  }
  *a6 = 0LL;
  v13 = *((_QWORD *)this + 4);
  if ( !v13 )
  {
    v14 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v14);
    v13 = *((_QWORD *)this + 4);
  }
  v15 = *(ADAPTER_DISPLAY **)(v13 + 8);
  if ( !v15 )
  {
    v16 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v16);
  }
  Feature_MipiDsi2__private_ReportDeviceUsage();
  if ( !(unsigned __int8)ExIsManufacturingModeEnabled()
    && !(unsigned int)Feature_MonitorIoctlTesting__private_IsEnabledDeviceUsage()
    || (v19 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 4) + 8LL) + 16LL) + 216LL)
                                    + 64LL)
                        + 40LL),
        *(_DWORD *)(v19 + 28) < 0xC002u)
    || (*((_DWORD *)this + 10) & 2) == 0 )
  {
    v20 = WdLogNewEntry5_WdWarning(v19, v17, v18);
    WdLogEvent5_WdWarning(v20);
    return 3221225659LL;
  }
  if ( (unsigned int)v8 < 0x20 )
  {
    v22 = WdLogNewEntry5_WdError(v19, v17);
    *(_QWORD *)(v22 + 24) = 32LL;
    *(_QWORD *)(v22 + 32) = v8;
LABEL_18:
    WdLogEvent5_WdError(v22);
    return 3221225507LL;
  }
  if ( (_DWORD)v8 != (_DWORD)v6 )
  {
    v22 = WdLogNewEntry5_WdError(v19, v17);
    *(_QWORD *)(v22 + 24) = v8;
    *(_QWORD *)(v22 + 32) = v6;
    goto LABEL_18;
  }
  if ( a3 != a5 )
  {
    v23 = WdLogNewEntry5_WdAssertion(v19, v17);
    WdLogEvent5_WdAssertion(v23);
  }
  v24 = (unsigned __int8)a3[4];
  *a6 = v6;
  a3[5] = -1;
  if ( (unsigned __int8)(v24 - 1) > 0x7Fu )
  {
    *((_WORD *)a3 + 7) = 256;
    return 0LL;
  }
  v25 = *((unsigned __int16 *)a3 + 5);
  v26 = *(_DWORD *)a3;
  v27 = (DXGMONITOR *)(unsigned int)(14 * v24);
  v28 = (_DWORD)v27 + v25 + 18;
  if ( (unsigned int)v8 < *(_DWORD *)a3 || v26 < v28 )
  {
    *((_WORD *)a3 + 7) = 256;
    v30 = (_QWORD *)WdLogNewEntry5_WdWarning(v27, v25, v18);
    v30[3] = v8;
    v30[4] = *(unsigned int *)a3;
    v30[5] = v28;
  }
  else
  {
    v29 = 65527LL;
    if ( (unsigned __int16)v25 <= 0xFFF7u )
    {
      v29 = 69632LL;
      if ( v26 <= 0x11000 )
      {
        if ( (int)DXGMONITOR::_ValidateMipiDsiPackets(v27, (struct _DXGK_DSI_TRANSMISSION *)a3) >= 0 )
        {
          v35 = (struct _FAST_MUTEX *)((char *)this + 1256);
          if ( this == (DXGMONITOR *)-1256LL )
          {
            v36 = WdLogNewEntry5_WdAssertion(v33, v32);
            WdLogEvent5_WdAssertion(v36);
          }
          KeAcquireGuardedMutex((PKGUARDED_MUTEX)((char *)this + 1256));
          v39 = (int)ADAPTER_DISPLAY::DdiDsiTransmission(
                       v15,
                       *((_DWORD *)this + 11),
                       (struct _DXGK_DSI_TRANSMISSION *)a3);
          if ( !v35 )
          {
            v40 = WdLogNewEntry5_WdAssertion(v38, v37);
            WdLogEvent5_WdAssertion(v40);
          }
          KeReleaseGuardedMutex(v35);
          if ( (int)v39 >= 0 )
            return 0LL;
          v30 = (_QWORD *)WdLogNewEntry5_WdWarning(v42, v41, v43);
          v30[3] = v39;
          v30[4] = *((unsigned __int16 *)a3 + 6);
        }
        else
        {
          v30 = (_QWORD *)WdLogNewEntry5_WdWarning(v33, v32, v34);
          v30[3] = (unsigned __int8)a3[5];
        }
        goto LABEL_29;
      }
      *((_WORD *)a3 + 7) = 256;
      v30 = (_QWORD *)WdLogNewEntry5_WdWarning(v27, v25, v18);
      v31 = *(unsigned int *)a3;
    }
    else
    {
      *((_WORD *)a3 + 7) = 256;
      v30 = (_QWORD *)WdLogNewEntry5_WdWarning(v27, v25, v18);
      v31 = *((unsigned __int16 *)a3 + 5);
    }
    v30[3] = v31;
    v30[4] = v29;
  }
LABEL_29:
  WdLogEvent5_WdWarning(v30);
  return 0LL;
}
