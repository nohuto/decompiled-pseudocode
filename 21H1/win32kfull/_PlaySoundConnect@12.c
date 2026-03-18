/*
 * XREFs of _PlaySoundConnect@12 @ 0x27A9D0
 * Callers:
 *     ?Connect@CUserPlaySound@@AAEJPAX@Z @ 0xEA274 (-Connect@CUserPlaySound@@AAEJPAX@Z.c)
 * Callees:
 *     _StringCchPrintfW @ 0xD54EC (_StringCchPrintfW.c)
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 *     _PlaySoundConnect@12 @ 0x27A9D0 (_PlaySoundConnect@12.c)
 */

RPC_STATUS __fastcall PlaySoundConnect(int a1, int a2, RPC_BINDING_HANDLE *a3)
{
  RPC_STATUS v3; // esi
  RPC_BINDING_HANDLE *v4; // edi
  RPC_STATUS result; // eax
  _DWORD v6[8]; // [esp+10h] [ebp-ECh] BYREF
  RPC_BINDING_HANDLE_SECURITY_V1_W Security; // [esp+30h] [ebp-CCh] BYREF
  RPC_BINDING_HANDLE *v8; // [esp+48h] [ebp-B4h]
  RPC_BINDING_HANDLE *Binding; // [esp+4Ch] [ebp-B0h]
  RPC_STATUS v10; // [esp+50h] [ebp-ACh]
  RPC_BINDING_HANDLE_TEMPLATE_V1_W Template; // [esp+54h] [ebp-A8h] BYREF
  wchar_t pszDest[52]; // [esp+7Ch] [ebp-80h] BYREF
  CPPEH_RECORD ms_exc; // [esp+E4h] [ebp-18h]

  Binding = a3;
  v8 = a3;
  v3 = 0;
  v10 = 0;
  Template.Version = 1;
  Template.Flags = 0;
  Template.ProtocolSequence = 3;
  memset(&Template.NetworkAddress, 0, 28);
  v6[0] = 4;
  v6[1] = 1;
  v6[2] = 0;
  v6[3] = 2;
  v6[4] = 0;
  v6[5] = 0;
  v6[7] = 1;
  Security.Version = 1;
  Security.ServerPrincName = 0;
  Security.AuthnLevel = 6;
  Security.AuthnSvc = 10;
  Security.AuthIdentity = 0;
  Security.SecurityQos = (RPC_SECURITY_QOS *)v6;
  v6[6] = a2;
  if ( StringCchPrintfW(pszDest, 0x32u, L"PlaySoundKRpc%X", a1) < 0 )
    return v3;
  ms_exc.registration.TryLevel = 0;
  Template.StringEndpoint = pszDest;
  v4 = Binding;
  result = RpcBindingCreateW(&Template, &Security, &Options, Binding);
  v3 = result;
  v10 = result;
  if ( !result )
  {
    result = RpcBindingBind(0, *v4, &unk_2501E8);
    v3 = result;
    v10 = result;
  }
  ms_exc.registration.TryLevel = -2;
  if ( v3 && *v4 )
  {
    RpcBindingFree(v4);
    *v4 = 0;
    return v3;
  }
  return result;
}
