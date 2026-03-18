/*
 * XREFs of ?RIMCallBack@CBaseInput@@AEAAXPEAURIMDevChangeStruct@@@Z @ 0x1C00AF5FC
 * Callers:
 *     ?_RIMCallBack@CBaseInput@@CAXPEAURIMDevChangeStruct@@@Z @ 0x1C00B02E0 (-_RIMCallBack@CBaseInput@@CAXPEAURIMDevChangeStruct@@@Z.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C00712F0 (RIMLockExclusive.c)
 *     W32GetThreadWin32Thread @ 0x1C0087B20 (W32GetThreadWin32Thread.c)
 *     RIMHandleAnySignalledReadsOnDestroyed @ 0x1C00AEB4C (RIMHandleAnySignalledReadsOnDestroyed.c)
 *     ?PerformPnpNotification@CBaseInput@@AEAAXPEBU_DevicePnpNotification@@@Z @ 0x1C00AF798 (-PerformPnpNotification@CBaseInput@@AEAAXPEBU_DevicePnpNotification@@@Z.c)
 *     ?ExecutingOnSensorHostingThread@CBaseInput@@QEBA_NXZ @ 0x1C00B02B0 (-ExecutingOnSensorHostingThread@CBaseInput@@QEBA_NXZ.c)
 *     ?ApplyRimDevBackedDeviceSummaryInformation@CBaseInput@@AEAAXK@Z @ 0x1C00C1ED0 (-ApplyRimDevBackedDeviceSummaryInformation@CBaseInput@@AEAAXK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CBaseInput::RIMCallBack(CBaseInput *this, struct RIMDevChangeStruct *a2)
{
  unsigned __int64 v2; // rsi
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // r14
  char v10; // bp
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  int v20; // r14d
  __int64 v21; // rdx
  CBaseInput *v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  int v25; // eax
  __int64 *v26; // rbx
  int v27; // eax
  _QWORD v28[2]; // [rsp+20h] [rbp-48h] BYREF
  int v29; // [rsp+30h] [rbp-38h]
  int v30; // [rsp+34h] [rbp-34h]
  _QWORD v31[2]; // [rsp+38h] [rbp-30h] BYREF
  int v32; // [rsp+48h] [rbp-20h]
  int v33; // [rsp+4Ch] [rbp-1Ch]

  v2 = *((_QWORD *)a2 + 3);
  RIMHandleAnySignalledReadsOnDestroyed((__int64)a2);
  v8 = (unsigned int)(*(_DWORD *)a2 - 1);
  if ( (unsigned int)v8 < 5 )
  {
    v9 = 2LL * (unsigned int)v8;
    if ( *((_DWORD *)&off_1C0205900 + 4 * (unsigned int)v8 + 2) != *(_DWORD *)a2 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v8, v6, v7);
    v10 = *((_DWORD *)a2 + 1) != 3;
    if ( !CBaseInput::ExecutingOnSensorHostingThread(this) )
    {
      v27 = *(_DWORD *)a2;
      if ( *(_DWORD *)a2 == 1 )
      {
        v10 = 0;
        *(_DWORD *)(v2 + 272) |= 0x8000000u;
      }
      else
      {
        if ( v27 == 2 )
          KeBugCheck(0x164u);
        if ( (unsigned int)(v27 - 3) > 1 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11, v13, v14);
        v10 &= -(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) != 0);
      }
    }
    if ( *(_DWORD *)a2 == 1 || ((v2 + 88) & -(__int64)(v2 != 0)) == 0 )
      v15 = 0LL;
    else
      v15 = *(_QWORD *)((v2 + 88) & -(__int64)(v2 != 0));
    RIMLockExclusive((__int64)&CBaseInput::_sLock);
    v20 = ((__int64 (__fastcall *)(CBaseInput *, unsigned __int64))*(&off_1C0205900 + v9))(this, v2);
    if ( *(_DWORD *)a2 == 1 )
    {
      if ( v15 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v17, v16, v18, v19);
      v26 = (__int64 *)((v2 + 88) & ((unsigned __int128)-(__int128)v2 >> 64));
      if ( v26 )
        v15 = *v26;
      else
        v15 = 0LL;
    }
    qword_1C0250418 = 0LL;
    ExReleasePushLockExclusiveEx(&CBaseInput::_sLock, 0LL);
    KeLeaveCriticalRegion();
    if ( ((*(_DWORD *)a2 - 2) & 0xFFFFFFFD) == 0 )
      CBaseInput::ApplyRimDevBackedDeviceSummaryInformation(v22, *((_DWORD *)a2 + 1));
    if ( v10 )
    {
      if ( *((_DWORD *)a2 + 1) == 3 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v22, v21, v23, v24);
      v25 = *(_DWORD *)(v2 + 272);
      if ( (v25 & 0x8000000) != 0 )
      {
        *(_DWORD *)(v2 + 272) = v25 & 0xF7FFFFFF;
        if ( *(_DWORD *)a2 == 2 )
        {
          v29 = 0;
          v28[0] = v2 + 88;
          v28[1] = v15;
          v30 = 1;
          CBaseInput::PerformPnpNotification(this, (const struct _DevicePnpNotification *)v28);
        }
        else
        {
          v10 = 0;
        }
      }
      if ( v10 )
      {
        v31[1] = v15;
        v31[0] = v2 + 88;
        v33 = *(_DWORD *)a2;
        v32 = v20;
        CBaseInput::PerformPnpNotification(this, (const struct _DevicePnpNotification *)v31);
      }
    }
  }
}
