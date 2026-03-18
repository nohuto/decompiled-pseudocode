/*
 * XREFs of ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapSz@D@@ABU?$_tlgWrapperByVal@$03@@4@Z @ 0x142C21
 * Callers:
 *     _LockQCursor@8 @ 0x9C34C (_LockQCursor@8.c)
 *     ?InjectInput@RIM@InputTraceLogging@@SGXPBURIMDEV@@W4InputTracing_RimInjectionSource@@K@Z @ 0xF0CC8 (-InjectInput@RIM@InputTraceLogging@@SGXPBURIMDEV@@W4InputTracing_RimInjectionSource@@K@Z.c)
 *     ?GetReportExtendedUsage@InteractiveControlManager@@QAEJKKGGGPAJ@Z @ 0x1ADF4C (-GetReportExtendedUsage@InteractiveControlManager@@QAEJKKGGGPAJ@Z.c)
 *     ?GetReportInfo@InteractiveControlManager@@QAEJKKPAUtagINTERACTIVECTRL_INFO@@@Z @ 0x1AE0E2 (-GetReportInfo@InteractiveControlManager@@QAEJKKPAUtagINTERACTIVECTRL_INFO@@@Z.c)
 *     ?SetDeviceHapticsMode@InteractiveControlManager@@QAEJKW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z @ 0x1AE936 (-SetDeviceHapticsMode@InteractiveControlManager@@QAEJKW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z.c)
 *     ?SetComponentResolution@InteractiveControlDevice@@QAEJW4_INTERACTIVECTRL_COMPONENT_TYPE@@JPAW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z @ 0x1B26FC (-SetComponentResolution@InteractiveControlDevice@@QAEJW4_INTERACTIVECTRL_COMPONENT_TYPE@@JPAW4ta.c)
 *     ?Initialize@SimpleHapticsController@@QAEJPAU_UNICODE_STRING@@@Z @ 0x1B44C8 (-Initialize@SimpleHapticsController@@QAEJPAU_UNICODE_STRING@@@Z.c)
 *     ?FindDigitizerForDevice@InteractiveControlParser@@CGJPAVInteractiveControlDevice@@@Z @ 0x1B5C93 (-FindDigitizerForDevice@InteractiveControlParser@@CGJPAVInteractiveControlDevice@@@Z.c)
 * Callees:
 *     __tlgWriteTransfer_EtwWriteTransfer@24 @ 0xE8E1E (__tlgWriteTransfer_EtwWriteTransfer@24.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

NTSTATUS __fastcall _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        int a1,
        unsigned __int8 *a2,
        int a3,
        int a4,
        const char **a5,
        int a6,
        int a7)
{
  const char *v9; // edx
  unsigned int v10; // ecx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [esp+Ch] [ebp-54h] BYREF
  const char *v13; // [esp+2Ch] [ebp-34h]
  int v14; // [esp+30h] [ebp-30h]
  unsigned int v15; // [esp+34h] [ebp-2Ch]
  int v16; // [esp+38h] [ebp-28h]
  int v17; // [esp+3Ch] [ebp-24h]
  int v18; // [esp+40h] [ebp-20h]
  int v19; // [esp+44h] [ebp-1Ch]
  int v20; // [esp+48h] [ebp-18h]
  int v21; // [esp+4Ch] [ebp-14h]
  int v22; // [esp+50h] [ebp-10h]
  int v23; // [esp+54h] [ebp-Ch]
  int v24; // [esp+58h] [ebp-8h]

  v21 = a7;
  v17 = a6;
  v22 = 0;
  v9 = *a5;
  v23 = 4;
  v24 = 0;
  v18 = 0;
  v19 = 4;
  v20 = 0;
  if ( v9 )
  {
    v10 = strlen(v9) + 1;
  }
  else
  {
    v9 = byte_FC858;
    v10 = 1;
  }
  v13 = v9;
  v14 = 0;
  v15 = v10;
  v16 = 0;
  return _tlgWriteTransfer_EtwWriteTransfer(a1, a2, 0, 0, 5u, &UserData);
}
