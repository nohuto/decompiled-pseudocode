/*
 * XREFs of ?GetReportExtendedUsage@InteractiveControlManager@@QAEJKKGGGPAJ@Z @ 0x1ADF4C
 * Callers:
 *     _NtUserInteractiveControlQueryUsage@20 @ 0x165A0F (_NtUserInteractiveControlQueryUsage@20.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapSz@D@@ABU?$_tlgWrapperByVal@$03@@4@Z @ 0x142C21 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6GJPBU_tlgProvider.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapSz@D@@ABU?$_tlgWrapperByVal@$03@@@Z @ 0x1AD82B (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapperByVal@$01@@U3@U3@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapSz@D@@ABU?$_tlgWrapperByVal@$03@@4ABU?$_tlgWrapperByVal@$01@@55@Z @ 0x1AD9EE (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapperByVal@$01@@U3@U3@@-$_tlgWrit.c)
 *     ?FindDevice@InteractiveControlManager@@AAEJKPAXPAPAVInteractiveControlDevice@@PAK@Z @ 0x1ADBE0 (-FindDevice@InteractiveControlManager@@AAEJKPAXPAPAVInteractiveControlDevice@@PAK@Z.c)
 *     ?GetInputReport@InteractiveControlDevice@@QAEHKPAPAVInteractiveControlInput@@@Z @ 0x1B1EFB (-GetInputReport@InteractiveControlDevice@@QAEHKPAPAVInteractiveControlInput@@@Z.c)
 *     ?ExtractCustomUsage@InteractiveControlParser@@SGJPAU_HIDP_PREPARSED_DATA@@PAEKGGGPAJ@Z @ 0x1B5C28 (-ExtractCustomUsage@InteractiveControlParser@@SGJPAU_HIDP_PREPARSED_DATA@@PAEKGGGPAJ@Z.c)
 */

int __thiscall InteractiveControlManager::GetReportExtendedUsage(
        InteractiveControlManager *this,
        unsigned int a2,
        unsigned int a3,
        USAGE UsagePage,
        USHORT LinkCollection,
        USAGE Usage,
        int *a7)
{
  InteractiveControlManager *v7; // eax
  int Device; // eax
  int v9; // ecx
  int v10; // esi
  int *v11; // edi
  int CustomUsage; // eax
  unsigned __int16 v14; // [esp+0h] [ebp-30h]
  int *v15; // [esp+4h] [ebp-2Ch]
  USAGE v16; // [esp+12h] [ebp-1Eh] BYREF
  USHORT v17; // [esp+14h] [ebp-1Ch] BYREF
  USAGE v18; // [esp+16h] [ebp-1Ah] BYREF
  struct InteractiveControlDevice *v19; // [esp+18h] [ebp-18h] BYREF
  struct InteractiveControlInput *v20; // [esp+1Ch] [ebp-14h] BYREF
  unsigned int v21; // [esp+20h] [ebp-10h] BYREF
  int v22; // [esp+24h] [ebp-Ch] BYREF
  int v23; // [esp+28h] [ebp-8h] BYREF
  int v24; // [esp+2Ch] [ebp-4h] BYREF

  v19 = 0;
  v7 = this;
  v20 = 0;
  v24 = (int)this;
  if ( (unsigned int)dword_2662F8 > 4 )
  {
    v16 = Usage;
    v17 = LinkCollection;
    v18 = UsagePage;
    v21 = a3;
    v22 = a2;
    v23 = (int)"InteractiveControlManager::GetReportExtendedUsage entry";
    _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>>(
      (int)this,
      byte_256D45,
      (int)this,
      (int)this,
      (const char **)&v23,
      (int)&v22,
      (int)&v21,
      (int)&v18,
      (int)&v17,
      (int)&v16);
    v7 = (InteractiveControlManager *)v24;
  }
  Device = InteractiveControlManager::FindDevice(v7, a2, 0, &v19, 0);
  v10 = Device;
  if ( Device >= 0 )
  {
    v11 = a7;
    if ( InteractiveControlDevice::GetInputReport(v19, (unsigned __int16)a3, &v20) )
    {
      CustomUsage = InteractiveControlParser::ExtractCustomUsage(
                      *((_DWORD *)v20 + 16),
                      UsagePage,
                      LinkCollection,
                      Usage,
                      (unsigned __int16)a7,
                      v14,
                      v15);
      v10 = CustomUsage;
      if ( CustomUsage < 0 && (unsigned int)dword_2662F8 > 2 )
      {
        v24 = CustomUsage;
        v23 = (int)"Function failed.";
        _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
          (int)&dword_2662F8,
          byte_256AC8,
          v9,
          v9,
          (const char **)&v23,
          (int)&v24);
      }
    }
    else
    {
      v10 = -1073741811;
    }
  }
  else
  {
    if ( (unsigned int)dword_2662F8 > 2 )
    {
      v24 = Device;
      v23 = (int)"Function failed.";
      _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
        (int)&dword_2662F8,
        byte_256AC8,
        v9,
        v9,
        (const char **)&v23,
        (int)&v24);
    }
    v11 = a7;
  }
  if ( (unsigned int)dword_2662F8 > 4 )
  {
    v24 = *v11;
    v23 = v10;
    v22 = (int)"InteractiveControlManager::GetReportExtendedUsage exit";
    _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (int)&dword_2662F8,
      byte_256D05,
      v9,
      v9,
      (const char **)&v22,
      (int)&v23,
      (int)&v24);
  }
  return v10;
}
