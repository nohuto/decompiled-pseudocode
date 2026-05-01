/*
 * XREFs of sub_1800427F0 @ 0x1800427F0
 * Callers:
 *     sub_1800425F4 @ 0x1800425F4 (sub_1800425F4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800427F0(RPC_BINDING_VECTOR **a1)
{
  int v2; // eax
  DWORD LastError; // ebx
  RPC_STATUS v4; // eax
  bool v5; // cc
  RPC_BINDING_VECTOR *v6; // rax
  RPC_BINDING_VECTOR *BindingVector; // [rsp+58h] [rbp+10h] BYREF
  HLOCAL hMem; // [rsp+60h] [rbp+18h] BYREF

  hMem = 0LL;
  BindingVector = 0LL;
  if ( !ConvertStringSecurityDescriptorToSecurityDescriptorW(
          L"D:(A;;GRGWGX;;;SY)(A;;GRGWGX;;;LS)(A;;GR;;;NS)(A;;GR;;;IU)",
          1u,
          &hMem,
          0LL) )
  {
    if ( (int)GetLastError() <= 0 )
    {
      LastError = GetLastError();
      goto LABEL_6;
    }
    LOWORD(v2) = GetLastError();
    goto LABEL_14;
  }
  v2 = RpcServerRegisterIf3(&unk_18008D6B0, 0LL, 0LL, 41LL, 1234, 0, 0LL, hMem);
  LastError = v2;
  if ( v2 )
  {
    if ( v2 <= 0 )
      goto LABEL_6;
LABEL_14:
    LastError = (unsigned __int16)v2 | 0xC0070000;
    goto LABEL_6;
  }
  v4 = RpcServerInqBindings(&BindingVector);
  LastError = v4;
  v5 = v4 <= 0;
  if ( v4 || (v4 = RpcEpRegisterW(&unk_18008D6B0, BindingVector, 0LL, 0LL), LastError = v4, v5 = v4 <= 0, v4) )
  {
    if ( !v5 )
      LastError = (unsigned __int16)v4 | 0xC0070000;
    RpcServerUnregisterIf(&unk_18008D6B0, 0LL, 0);
  }
  else
  {
    v6 = BindingVector;
    BindingVector = 0LL;
    *a1 = v6;
  }
LABEL_6:
  if ( hMem )
    LocalFree(hMem);
  if ( BindingVector )
    RpcBindingVectorFree(&BindingVector);
  return LastError;
}
