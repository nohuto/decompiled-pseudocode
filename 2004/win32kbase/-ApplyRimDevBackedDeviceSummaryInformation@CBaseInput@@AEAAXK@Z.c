/*
 * XREFs of ?ApplyRimDevBackedDeviceSummaryInformation@CBaseInput@@AEAAXK@Z @ 0x1C00C1ED0
 * Callers:
 *     ?RIMCallBack@CBaseInput@@AEAAXPEAURIMDevChangeStruct@@@Z @ 0x1C00AF5FC (-RIMCallBack@CBaseInput@@AEAAXPEAURIMDevChangeStruct@@@Z.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C00712F0 (RIMLockExclusive.c)
 *     ApiSetApplyGatheredDeviceInfoSummaryInformation @ 0x1C00C2010 (ApiSetApplyGatheredDeviceInfoSummaryInformation.c)
 *     ?GatherDeviceInfoSummaryInformation@CBaseInput@@AEAAXPEAUDEVICEINFO@@PEAK1PEAH111@Z @ 0x1C00C20FC (-GatherDeviceInfoSummaryInformation@CBaseInput@@AEAAXPEAUDEVICEINFO@@PEAK1PEAH111@Z.c)
 */

void __fastcall CBaseInput::ApplyRimDevBackedDeviceSummaryInformation(CBaseInput *this, int a2)
{
  unsigned int v2; // ebx
  unsigned int v3; // r14d
  int v4; // r15d
  unsigned int v5; // r12d
  unsigned int v6; // r13d
  CBaseInput *v8; // rcx
  struct DEVICEINFO *v9; // rdi
  int v10; // eax
  __int64 v11; // rax
  unsigned int v12; // [rsp+40h] [rbp-10h] BYREF
  unsigned int v13; // [rsp+44h] [rbp-Ch] BYREF
  unsigned int v14; // [rsp+48h] [rbp-8h] BYREF
  unsigned int v15; // [rsp+90h] [rbp+40h] BYREF
  int v16; // [rsp+94h] [rbp+44h]
  unsigned int v17; // [rsp+A0h] [rbp+50h] BYREF
  int v18; // [rsp+A8h] [rbp+58h] BYREF

  v16 = HIDWORD(this);
  v2 = 0;
  v14 = 0;
  v3 = 0;
  v4 = 0;
  v15 = 0;
  v5 = 0;
  v17 = 0;
  v6 = 0;
  v18 = 0;
  v12 = 0;
  v13 = 0;
  RIMLockExclusive((__int64)&CBaseInput::_sLock);
  v9 = CBaseInput::_spDevList;
  if ( CBaseInput::_spDevList )
  {
    while ( 1 )
    {
      v10 = *((unsigned __int8 *)v9 + 48);
      if ( v10 == a2 )
      {
        CBaseInput::GatherDeviceInfoSummaryInformation(v8, v9, &v15, &v17, &v18, &v12, &v13, &v14);
        v2 = v15;
        goto LABEL_7;
      }
      if ( a2 != 2 )
        break;
      if ( !(_BYTE)v10 )
        goto LABEL_5;
LABEL_7:
      v9 = (struct DEVICEINFO *)*((_QWORD *)v9 + 7);
      if ( !v9 )
      {
        v3 = v17;
        v4 = v18;
        v5 = v12;
        v6 = v13;
        goto LABEL_9;
      }
    }
    if ( a2 )
      goto LABEL_7;
    if ( (_BYTE)v10 != 2 )
      goto LABEL_7;
    v11 = *((_QWORD *)v9 + 60);
    if ( !v11 || (unsigned int)(*(_DWORD *)(v11 + 24) - 1) > 6 )
      goto LABEL_7;
LABEL_5:
    v15 = ++v2;
    goto LABEL_7;
  }
LABEL_9:
  qword_1C0250418 = 0LL;
  ExReleasePushLockExclusiveEx(&CBaseInput::_sLock, 0LL);
  KeLeaveCriticalRegion();
  ApiSetApplyGatheredDeviceInfoSummaryInformation(a2, v2, v5, v3, v4, v6, v14);
}
