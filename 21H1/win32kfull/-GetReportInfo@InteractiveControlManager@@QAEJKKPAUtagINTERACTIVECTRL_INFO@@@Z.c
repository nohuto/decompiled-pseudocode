/*
 * XREFs of ?GetReportInfo@InteractiveControlManager@@QAEJKKPAUtagINTERACTIVECTRL_INFO@@@Z @ 0x1AE0E2
 * Callers:
 *     _NtUserGetInteractiveControlInfo@8 @ 0x1631F7 (_NtUserGetInteractiveControlInfo@8.c)
 * Callees:
 *     @HMValidateHandleNoSecure@8 @ 0x3C46E (@HMValidateHandleNoSecure@8.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapSz@D@@ABU?$_tlgWrapperByVal@$03@@4@Z @ 0x142C21 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6GJPBU_tlgProvider.c)
 *     _GetDPITransformationMonitor@12 @ 0x1510B9 (_GetDPITransformationMonitor@12.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapSz@D@@ABU?$_tlgWrapperByVal@$03@@@Z @ 0x1AD82B (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@.c)
 *     ?FindDevice@InteractiveControlManager@@AAEJKPAXPAPAVInteractiveControlDevice@@PAK@Z @ 0x1ADBE0 (-FindDevice@InteractiveControlManager@@AAEJKPAXPAPAVInteractiveControlDevice@@PAK@Z.c)
 *     ?GetInputReport@InteractiveControlDevice@@QAEHKPAPAVInteractiveControlInput@@@Z @ 0x1B1EFB (-GetInputReport@InteractiveControlDevice@@QAEHKPAPAVInteractiveControlInput@@@Z.c)
 */

int __thiscall InteractiveControlManager::GetReportInfo(
        InteractiveControlManager *this,
        unsigned int a2,
        unsigned int a3,
        struct tagINTERACTIVECTRL_INFO *a4)
{
  int Device; // eax
  int v6; // ecx
  int v7; // ebx
  struct InteractiveControlInput *v8; // eax
  _DWORD *v9; // edi
  int CurrentProcessWin32Process; // eax
  struct InteractiveControlDevice *v12; // [esp+10h] [ebp-18h] BYREF
  struct InteractiveControlInput *v13; // [esp+14h] [ebp-14h] BYREF
  int DPITransformationMonitor; // [esp+18h] [ebp-10h] BYREF
  int v15; // [esp+1Ch] [ebp-Ch] BYREF
  int v16; // [esp+20h] [ebp-8h] BYREF
  int v17; // [esp+24h] [ebp-4h] BYREF

  v12 = 0;
  v13 = 0;
  DPITransformationMonitor = 0;
  if ( (unsigned int)dword_2662F8 > 4 )
  {
    v15 = a3;
    v16 = a2;
    v17 = (int)"InteractiveControlManager::GetReportInfo entry";
    _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (int)&dword_2662F8,
      byte_256DAD,
      0,
      0,
      (const char **)&v17,
      (int)&v16,
      (int)&v15);
  }
  Device = InteractiveControlManager::FindDevice(this, a2, 0, &v12, 0);
  v7 = Device;
  if ( Device >= 0 )
  {
    if ( InteractiveControlDevice::GetInputReport(v12, (unsigned __int16)a3, &v13) )
    {
      v8 = v13;
      qmemcpy(a4, (char *)v13 + 32, 0x1Cu);
      v9 = (_DWORD *)HMValidateHandleNoSecure(*((_DWORD *)v8 + 2), 1);
      if ( v9 )
      {
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
        v6 = v9[2];
        if ( CurrentProcessWin32Process == *(_DWORD *)(v6 + 232) )
        {
          DPITransformationMonitor = GetDPITransformationMonitor(v9, *((_DWORD *)a4 + 1), *((_DWORD *)a4 + 2));
          PhysicalToLogicalDPIPoint((char *)a4 + 4, (char *)a4 + 4, 0, &DPITransformationMonitor);
        }
        else
        {
          v7 = -1073741727;
        }
      }
    }
    else
    {
      v7 = -1073741811;
    }
  }
  else if ( (unsigned int)dword_2662F8 > 2 )
  {
    v17 = Device;
    v16 = (int)"Function failed.";
    _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
      (int)&dword_2662F8,
      byte_256AC8,
      v6,
      v6,
      (const char **)&v16,
      (int)&v17);
  }
  if ( (unsigned int)dword_2662F8 > 4 )
  {
    v17 = v7;
    v16 = (int)"InteractiveControlManager::GetReportInfo exit";
    _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
      (int)&dword_2662F8,
      byte_256A55,
      v6,
      v6,
      (const char **)&v16,
      (int)&v17);
  }
  return v7;
}
