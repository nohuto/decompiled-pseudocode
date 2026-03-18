/*
 * XREFs of ?RIMCallBack@CBaseInput@@AEAAXPEAURIMDevChangeStruct@@@Z @ 0x1C009D69C
 * Callers:
 *     ?_RIMCallBack@CBaseInput@@CAXPEAURIMDevChangeStruct@@@Z @ 0x1C009D680 (-_RIMCallBack@CBaseInput@@CAXPEAURIMDevChangeStruct@@@Z.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0069440 (RIMLockExclusive.c)
 *     W32GetThreadWin32Thread @ 0x1C0085450 (W32GetThreadWin32Thread.c)
 *     ?PerformPnpNotification@CBaseInput@@AEAAXPEBU_DevicePnpNotification@@@Z @ 0x1C009D838 (-PerformPnpNotification@CBaseInput@@AEAAXPEBU_DevicePnpNotification@@@Z.c)
 *     ?ExecutingOnSensorHostingThread@CBaseInput@@QEBA_NXZ @ 0x1C009E350 (-ExecutingOnSensorHostingThread@CBaseInput@@QEBA_NXZ.c)
 *     RIMHandleAnySignalledReadsOnDestroyed @ 0x1C009EFA8 (RIMHandleAnySignalledReadsOnDestroyed.c)
 *     ?ApplyRimDevBackedDeviceSummaryInformation@CBaseInput@@AEAAXK@Z @ 0x1C00C1164 (-ApplyRimDevBackedDeviceSummaryInformation@CBaseInput@@AEAAXK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CBaseInput::RIMCallBack(CBaseInput *this, struct RIMDevChangeStruct *a2)
{
  unsigned __int64 v2; // rsi
  __int64 v5; // rcx
  unsigned int v6; // edx
  __int64 v7; // r14
  char v8; // bp
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rcx
  int v12; // r14d
  CBaseInput *v13; // rcx
  int v14; // eax
  __int64 *v15; // rbx
  int v16; // eax
  _QWORD v17[2]; // [rsp+20h] [rbp-48h] BYREF
  int v18; // [rsp+30h] [rbp-38h]
  int v19; // [rsp+34h] [rbp-34h]
  _QWORD v20[2]; // [rsp+38h] [rbp-30h] BYREF
  int v21; // [rsp+48h] [rbp-20h]
  int v22; // [rsp+4Ch] [rbp-1Ch]

  v2 = *((_QWORD *)a2 + 3);
  RIMHandleAnySignalledReadsOnDestroyed(a2);
  v6 = *(_DWORD *)a2 - 1;
  if ( v6 < 5 )
  {
    v7 = 2LL * v6;
    if ( *((_DWORD *)&off_1C020B910 + 4 * v6 + 2) != *(_DWORD *)a2 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v5);
    v8 = *((_DWORD *)a2 + 1) != 3;
    if ( !CBaseInput::ExecutingOnSensorHostingThread(this) )
    {
      v16 = *(_DWORD *)a2;
      if ( *(_DWORD *)a2 == 1 )
      {
        v8 = 0;
        *(_DWORD *)(v2 + 272) |= 0x8000000u;
      }
      else
      {
        if ( v16 == 2 )
          KeBugCheck(0x164u);
        if ( (unsigned int)(v16 - 3) > 1 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v9);
        v8 &= -(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) != 0);
      }
    }
    if ( *(_DWORD *)a2 == 1 || ((v2 + 88) & -(__int64)(v2 != 0)) == 0 )
      v10 = 0LL;
    else
      v10 = *(_QWORD *)((v2 + 88) & -(__int64)(v2 != 0));
    RIMLockExclusive((__int64)&CBaseInput::_sLock);
    v12 = ((__int64 (__fastcall *)(CBaseInput *, unsigned __int64))*(&off_1C020B910 + v7))(this, v2);
    if ( *(_DWORD *)a2 == 1 )
    {
      if ( v10 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v11);
      v15 = (__int64 *)((v2 + 88) & ((unsigned __int128)-(__int128)v2 >> 64));
      if ( v15 )
        v10 = *v15;
      else
        v10 = 0LL;
    }
    qword_1C02563A8 = 0LL;
    ExReleasePushLockExclusiveEx(&CBaseInput::_sLock, 0LL);
    KeLeaveCriticalRegion();
    if ( ((*(_DWORD *)a2 - 2) & 0xFFFFFFFD) == 0 )
      CBaseInput::ApplyRimDevBackedDeviceSummaryInformation(v13, *((_DWORD *)a2 + 1));
    if ( v8 )
    {
      if ( *((_DWORD *)a2 + 1) == 3 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v13);
      v14 = *(_DWORD *)(v2 + 272);
      if ( (v14 & 0x8000000) != 0 )
      {
        *(_DWORD *)(v2 + 272) = v14 & 0xF7FFFFFF;
        if ( *(_DWORD *)a2 == 2 )
        {
          v18 = 0;
          v17[0] = v2 + 88;
          v17[1] = v10;
          v19 = 1;
          CBaseInput::PerformPnpNotification(this, (const struct _DevicePnpNotification *)v17);
        }
        else
        {
          v8 = 0;
        }
      }
      if ( v8 )
      {
        v20[1] = v10;
        v20[0] = v2 + 88;
        v22 = *(_DWORD *)a2;
        v21 = v12;
        CBaseInput::PerformPnpNotification(this, (const struct _DevicePnpNotification *)v20);
      }
    }
  }
}
