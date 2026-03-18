/*
 * XREFs of ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@U2@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapSz@D@@ABU?$_tlgWrapperByVal@$03@@44@Z @ 0x1AD8A9
 * Callers:
 *     ?SetDeviceComponentResolution@InteractiveControlManager@@QAEJKW4_INTERACTIVECTRL_COMPONENT_TYPE@@JPAW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z @ 0x1AE72E (-SetDeviceComponentResolution@InteractiveControlManager@@QAEJKW4_INTERACTIVECTRL_COMPONENT_TYPE@.c)
 *     ?SetDeviceFocus@InteractiveControlManager@@QAEJKW4tagINTERACTIVECTRL_PROMOTION_TYPE@@PAUtagWND@@@Z @ 0x1AE851 (-SetDeviceFocus@InteractiveControlManager@@QAEJKW4tagINTERACTIVECTRL_PROMOTION_TYPE@@PAUtagWND@@.c)
 *     ?QueueAndGenerateInput@InteractiveControlDevice@@QAEJPAXK@Z @ 0x1B24C8 (-QueueAndGenerateInput@InteractiveControlDevice@@QAEJPAXK@Z.c)
 *     ?GetScaledComponentValue@InteractiveControlParser@@SGJPAUtagINTERACTIVECTRL_COMPONENT_ENTRY@@J@Z @ 0x1B5F36 (-GetScaledComponentValue@InteractiveControlParser@@SGJPAUtagINTERACTIVECTRL_COMPONENT_ENTRY@@J@Z.c)
 * Callees:
 *     __tlgWriteTransfer_EtwWriteTransfer@24 @ 0xE8E1E (__tlgWriteTransfer_EtwWriteTransfer@24.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

NTSTATUS __fastcall _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        int a1,
        unsigned __int8 *a2,
        int a3,
        int a4,
        const char **a5,
        int a6,
        int a7,
        int a8)
{
  const char *v9; // edx
  unsigned int v10; // ecx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [esp+8h] [ebp-64h] BYREF
  const char *v13; // [esp+28h] [ebp-44h]
  int v14; // [esp+2Ch] [ebp-40h]
  unsigned int v15; // [esp+30h] [ebp-3Ch]
  int v16; // [esp+34h] [ebp-38h]
  int v17; // [esp+38h] [ebp-34h]
  int v18; // [esp+3Ch] [ebp-30h]
  int v19; // [esp+40h] [ebp-2Ch]
  int v20; // [esp+44h] [ebp-28h]
  int v21; // [esp+48h] [ebp-24h]
  int v22; // [esp+4Ch] [ebp-20h]
  int v23; // [esp+50h] [ebp-1Ch]
  int v24; // [esp+54h] [ebp-18h]
  int v25; // [esp+58h] [ebp-14h]
  int v26; // [esp+5Ch] [ebp-10h]
  int v27; // [esp+60h] [ebp-Ch]
  int v28; // [esp+64h] [ebp-8h]

  v25 = a8;
  v21 = a7;
  v17 = a6;
  v26 = 0;
  v9 = *a5;
  v27 = 4;
  v28 = 0;
  v22 = 0;
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
  return _tlgWriteTransfer_EtwWriteTransfer((int)&dword_2662F8, a2, 0, 0, 6u, &UserData);
}
