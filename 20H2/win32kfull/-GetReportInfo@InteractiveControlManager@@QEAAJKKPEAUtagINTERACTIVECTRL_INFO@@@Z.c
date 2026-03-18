/*
 * XREFs of ?GetReportInfo@InteractiveControlManager@@QEAAJKKPEAUtagINTERACTIVECTRL_INFO@@@Z @ 0x1C0251DC0
 * Callers:
 *     NtUserGetInteractiveControlInfo @ 0x1C01F9DC0 (NtUserGetInteractiveControlInfo.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00B3898 (HMValidateHandleNoSecure.c)
 *     GetDPITransformationMonitor @ 0x1C01E4F00 (GetDPITransformationMonitor.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1C0251114 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1C02511BC (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     ?FindDevice@InteractiveControlManager@@AEAAJKPEAXPEAPEAVInteractiveControlDevice@@PEAK@Z @ 0x1C0251798 (-FindDevice@InteractiveControlManager@@AEAAJKPEAXPEAPEAVInteractiveControlDevice@@PEAK@Z.c)
 *     ?GetInputReport@InteractiveControlDevice@@QEAAHKPEAPEAVInteractiveControlInput@@@Z @ 0x1C0256D98 (-GetInputReport@InteractiveControlDevice@@QEAAHKPEAPEAVInteractiveControlInput@@@Z.c)
 */

__int64 __fastcall InteractiveControlManager::GetReportInfo(
        InteractiveControlManager *this,
        int a2,
        __int64 a3,
        struct tagINTERACTIVECTRL_INFO *a4)
{
  unsigned __int16 v5; // bx
  int Device; // eax
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int v11; // edi
  struct InteractiveControlInput *v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rsi
  int v17; // [rsp+40h] [rbp-30h] BYREF
  _DWORD v18[3]; // [rsp+44h] [rbp-2Ch] BYREF
  struct InteractiveControlInput *v19; // [rsp+50h] [rbp-20h] BYREF
  __int64 DPITransformationMonitor; // [rsp+58h] [rbp-18h] BYREF
  __int64 v21[2]; // [rsp+60h] [rbp-10h] BYREF

  *(_QWORD *)&v18[1] = 0LL;
  v19 = 0LL;
  v5 = a3;
  DPITransformationMonitor = 0LL;
  if ( (unsigned int)dword_1C032A2F8 > 4 )
  {
    v18[0] = a2;
    v21[0] = (__int64)"InteractiveControlManager::GetReportInfo entry";
    v17 = a3;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)&dword_1C032A2F8,
      byte_1C02F1ED5,
      a3,
      (__int64)a4,
      (void **)v21,
      (__int64)v18,
      (__int64)&v17);
  }
  Device = InteractiveControlManager::FindDevice(this, a2, 0LL, (struct InteractiveControlDevice **)&v18[1], 0LL);
  v11 = Device;
  if ( Device >= 0 )
  {
    if ( (unsigned int)InteractiveControlDevice::GetInputReport(*(InteractiveControlDevice **)&v18[1], v5, &v19) )
    {
      v12 = v19;
      *(_OWORD *)a4 = *(_OWORD *)((char *)v19 + 52);
      *((_QWORD *)a4 + 2) = *(_QWORD *)((char *)v12 + 68);
      *((_DWORD *)a4 + 6) = *((_DWORD *)v12 + 19);
      v15 = HMValidateHandleNoSecure(*((_QWORD *)v12 + 2), 1);
      if ( v15 )
      {
        if ( PsGetCurrentProcessWin32Process(v14, v13, v9) == *(_QWORD *)(*(_QWORD *)(v15 + 16) + 424LL) )
        {
          DPITransformationMonitor = GetDPITransformationMonitor(*(_QWORD *)((char *)a4 + 4), v15);
          PhysicalToLogicalDPIPoint((char *)a4 + 4, (char *)a4 + 4, 0LL, &DPITransformationMonitor);
        }
        else
        {
          v11 = -1073741727;
        }
      }
    }
    else
    {
      v11 = -1073741811;
    }
  }
  else if ( (unsigned int)dword_1C032A2F8 > 2 )
  {
    v18[0] = Device;
    v21[0] = (__int64)"Function failed.";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
      (__int64)&dword_1C032A2F8,
      byte_1C02F1BF0,
      v9,
      v10,
      (void **)v21,
      (__int64)v18);
  }
  if ( (unsigned int)dword_1C032A2F8 > 4 )
  {
    v18[0] = v11;
    v21[0] = (__int64)"InteractiveControlManager::GetReportInfo exit";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
      (__int64)&dword_1C032A2F8,
      byte_1C02F1B7D,
      v9,
      v10,
      (void **)v21,
      (__int64)v18);
  }
  return v11;
}
