/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U1@U1@U1@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByVal@$03@@ABU?$_tlgWrapSz@D@@4333@Z @ 0x148ED2
 * Callers:
 *     ?InjectInput@RIM@InputTraceLogging@@SGXPBURIMDEV@@W4InputTracing_RimInjectionSource@@K@Z @ 0xF0CC8 (-InjectInput@RIM@InputTraceLogging@@SGXPBURIMDEV@@W4InputTracing_RimInjectionSource@@K@Z.c)
 * Callees:
 *     __tlgWriteTransfer_EtwWriteTransfer@24 @ 0xE8E1E (__tlgWriteTransfer_EtwWriteTransfer@24.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

NTSTATUS __fastcall _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        int a1,
        unsigned __int8 *a2,
        int a3,
        int a4,
        int a5,
        const char **a6,
        const char **a7,
        int a8,
        int a9,
        int a10)
{
  unsigned int v12; // esi
  const char *v13; // edx
  unsigned int v14; // ecx
  int v15; // ecx
  const char *v16; // edx
  int v18; // [esp+Ch] [ebp-88h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [esp+10h] [ebp-84h] BYREF
  int v20; // [esp+30h] [ebp-64h]
  int v21; // [esp+34h] [ebp-60h]
  int v22; // [esp+38h] [ebp-5Ch]
  int v23; // [esp+3Ch] [ebp-58h]
  const char *v24; // [esp+40h] [ebp-54h]
  int v25; // [esp+44h] [ebp-50h]
  unsigned int v26; // [esp+48h] [ebp-4Ch]
  int v27; // [esp+4Ch] [ebp-48h]
  const char *v28; // [esp+50h] [ebp-44h]
  int v29; // [esp+54h] [ebp-40h]
  int v30; // [esp+58h] [ebp-3Ch]
  int v31; // [esp+5Ch] [ebp-38h]
  int v32; // [esp+60h] [ebp-34h]
  int v33; // [esp+64h] [ebp-30h]
  int v34; // [esp+68h] [ebp-2Ch]
  int v35; // [esp+6Ch] [ebp-28h]
  int v36; // [esp+70h] [ebp-24h]
  int v37; // [esp+74h] [ebp-20h]
  int v38; // [esp+78h] [ebp-1Ch]
  int v39; // [esp+7Ch] [ebp-18h]
  int v40; // [esp+80h] [ebp-14h]
  int v41; // [esp+84h] [ebp-10h]
  int v42; // [esp+88h] [ebp-Ch]
  int v43; // [esp+8Ch] [ebp-8h]

  v40 = a10;
  v36 = a9;
  v32 = a8;
  v12 = 1;
  v42 = 4;
  v38 = 4;
  v34 = 4;
  v13 = *a7;
  v18 = (int)a2;
  v41 = 0;
  v43 = 0;
  v37 = 0;
  v39 = 0;
  v33 = 0;
  v35 = 0;
  if ( v13 )
  {
    v14 = strlen(v13);
    a2 = (unsigned __int8 *)v18;
    v15 = v14 + 1;
  }
  else
  {
    v13 = byte_FC858;
    v15 = 1;
  }
  v29 = 0;
  v28 = v13;
  v30 = v15;
  v16 = *a6;
  v31 = 0;
  if ( v16 )
    v12 = strlen(v16) + 1;
  else
    v16 = byte_FC858;
  v20 = a5;
  v24 = v16;
  v25 = 0;
  v26 = v12;
  v27 = 0;
  v21 = 0;
  v22 = 4;
  v23 = 0;
  return _tlgWriteTransfer_EtwWriteTransfer(a1, a2, 0, 0, 8u, &UserData);
}
