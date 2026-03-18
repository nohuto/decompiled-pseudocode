/*
 * XREFs of ??$Write@U?$_tlgWrapperByRef@$07@@U?$_tlgWrapperByVal@$01@@U1@U?$_tlgWrapperByVal@$03@@U3@U?$_tlgWrapSz@D@@U3@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByRef@$07@@ABU?$_tlgWrapperByVal@$01@@3ABU?$_tlgWrapperByVal@$03@@5ABU?$_tlgWrapSz@D@@5@Z @ 0x14B970
 * Callers:
 *     ?RetrieveMessage@Pointer@InputTraceLogging@@SGXPBUtagQMSG@@_NW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@@Z @ 0x14DA70 (-RetrieveMessage@Pointer@InputTraceLogging@@SGXPBUtagQMSG@@_NW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@.c)
 * Callees:
 *     __tlgWriteTransfer_EtwWriteTransfer@24 @ 0xE8E1E (__tlgWriteTransfer_EtwWriteTransfer@24.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

NTSTATUS __fastcall _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<8>,_tlgWrapperByVal<2>,_tlgWrapperByRef<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
        int a1,
        unsigned __int8 *a2,
        int a3,
        int a4,
        int *a5,
        int a6,
        int *a7,
        int a8,
        int a9,
        const char **a10,
        int a11)
{
  const char *v12; // edx
  unsigned int v14; // ecx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [esp+Ch] [ebp-94h] BYREF
  int v17; // [esp+2Ch] [ebp-74h]
  int v18; // [esp+30h] [ebp-70h]
  int v19; // [esp+34h] [ebp-6Ch]
  int v20; // [esp+38h] [ebp-68h]
  int v21; // [esp+3Ch] [ebp-64h]
  int v22; // [esp+40h] [ebp-60h]
  int v23; // [esp+44h] [ebp-5Ch]
  int v24; // [esp+48h] [ebp-58h]
  int v25; // [esp+4Ch] [ebp-54h]
  int v26; // [esp+50h] [ebp-50h]
  int v27; // [esp+54h] [ebp-4Ch]
  int v28; // [esp+58h] [ebp-48h]
  int v29; // [esp+5Ch] [ebp-44h]
  int v30; // [esp+60h] [ebp-40h]
  int v31; // [esp+64h] [ebp-3Ch]
  int v32; // [esp+68h] [ebp-38h]
  int v33; // [esp+6Ch] [ebp-34h]
  int v34; // [esp+70h] [ebp-30h]
  int v35; // [esp+74h] [ebp-2Ch]
  int v36; // [esp+78h] [ebp-28h]
  const char *v37; // [esp+7Ch] [ebp-24h]
  int v38; // [esp+80h] [ebp-20h]
  unsigned int v39; // [esp+84h] [ebp-1Ch]
  int v40; // [esp+88h] [ebp-18h]
  int v41; // [esp+8Ch] [ebp-14h]
  int v42; // [esp+90h] [ebp-10h]
  int v43; // [esp+94h] [ebp-Ch]
  int v44; // [esp+98h] [ebp-8h]

  v41 = a11;
  v43 = 4;
  v42 = 0;
  v12 = *a10;
  v44 = 0;
  if ( v12 )
  {
    v14 = strlen(v12) + 1;
  }
  else
  {
    v12 = byte_FC858;
    v14 = 1;
  }
  v33 = a9;
  v29 = a8;
  v39 = v14;
  v25 = *a7;
  v21 = a6;
  v35 = 4;
  v31 = 4;
  v17 = *a5;
  v37 = v12;
  v38 = 0;
  v40 = 0;
  v34 = 0;
  v36 = 0;
  v30 = 0;
  v32 = 0;
  v26 = 0;
  v27 = 8;
  v28 = 0;
  v22 = 0;
  v23 = 2;
  v24 = 0;
  v18 = 0;
  v19 = 8;
  v20 = 0;
  return _tlgWriteTransfer_EtwWriteTransfer(a1, a2, 0, 0, 9u, &UserData);
}
