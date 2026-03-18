/*
 * XREFs of ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapperByVal@$01@@U3@U3@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapSz@D@@ABU?$_tlgWrapperByVal@$03@@4ABU?$_tlgWrapperByVal@$01@@55@Z @ 0x1AD9EE
 * Callers:
 *     ?GetReportExtendedUsage@InteractiveControlManager@@QAEJKKGGGPAJ@Z @ 0x1ADF4C (-GetReportExtendedUsage@InteractiveControlManager@@QAEJKKGGGPAJ@Z.c)
 * Callees:
 *     __tlgWriteTransfer_EtwWriteTransfer@24 @ 0xE8E1E (__tlgWriteTransfer_EtwWriteTransfer@24.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

NTSTATUS __fastcall _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>>(
        int a1,
        unsigned __int8 *a2,
        int a3,
        int a4,
        const char **a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10)
{
  const char *v11; // edx
  unsigned int v12; // ecx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [esp+8h] [ebp-84h] BYREF
  const char *v15; // [esp+28h] [ebp-64h]
  int v16; // [esp+2Ch] [ebp-60h]
  unsigned int v17; // [esp+30h] [ebp-5Ch]
  int v18; // [esp+34h] [ebp-58h]
  int v19; // [esp+38h] [ebp-54h]
  int v20; // [esp+3Ch] [ebp-50h]
  int v21; // [esp+40h] [ebp-4Ch]
  int v22; // [esp+44h] [ebp-48h]
  int v23; // [esp+48h] [ebp-44h]
  int v24; // [esp+4Ch] [ebp-40h]
  int v25; // [esp+50h] [ebp-3Ch]
  int v26; // [esp+54h] [ebp-38h]
  int v27; // [esp+58h] [ebp-34h]
  int v28; // [esp+5Ch] [ebp-30h]
  int v29; // [esp+60h] [ebp-2Ch]
  int v30; // [esp+64h] [ebp-28h]
  int v31; // [esp+68h] [ebp-24h]
  int v32; // [esp+6Ch] [ebp-20h]
  int v33; // [esp+70h] [ebp-1Ch]
  int v34; // [esp+74h] [ebp-18h]
  int v35; // [esp+78h] [ebp-14h]
  int v36; // [esp+7Ch] [ebp-10h]
  int v37; // [esp+80h] [ebp-Ch]
  int v38; // [esp+84h] [ebp-8h]

  v35 = a10;
  v31 = a9;
  v27 = a8;
  v23 = a7;
  v19 = a6;
  v37 = 2;
  v33 = 2;
  v11 = *a5;
  v29 = 2;
  v36 = 0;
  v38 = 0;
  v32 = 0;
  v34 = 0;
  v28 = 0;
  v30 = 0;
  v24 = 0;
  v26 = 0;
  v20 = 0;
  v22 = 0;
  v25 = 4;
  v21 = 4;
  if ( v11 )
  {
    v12 = strlen(v11) + 1;
  }
  else
  {
    v11 = byte_FC858;
    v12 = 1;
  }
  v15 = v11;
  v16 = 0;
  v17 = v12;
  v18 = 0;
  return _tlgWriteTransfer_EtwWriteTransfer((int)&dword_2662F8, a2, 0, 0, 8u, &UserData);
}
