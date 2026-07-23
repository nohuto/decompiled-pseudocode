/*
 * XREFs of LdrpCheckRedirection @ 0x1800D4F30
 * Callers:
 *     LdrpResolveProcedureAddress @ 0x1800303F4 (LdrpResolveProcedureAddress.c)
 *     LdrpHandleProtectedDelayload @ 0x1800318A0 (LdrpHandleProtectedDelayload.c)
 *     LdrpSnapModule @ 0x1800323F0 (LdrpSnapModule.c)
 *     LdrpResolveForwarder @ 0x1800332E8 (LdrpResolveForwarder.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A08F0 (_guard_dispatch_icall_nop.c)
 *     LdrpLogDbgPrint @ 0x1800CDAE8 (LdrpLogDbgPrint.c)
 *     LdrpCompareRedirectedFunction @ 0x1800D510C (LdrpCompareRedirectedFunction.c)
 *     LdrpHashAsciizString @ 0x1800D557C (LdrpHashAsciizString.c)
 */

__int64 __fastcall LdrpCheckRedirection(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rsi
  int v7; // eax
  __int128 v8; // xmm0
  unsigned __int64 Root; // rbx
  __int64 v10; // r8
  int v11; // edi
  int v12; // eax
  unsigned __int64 v13; // rax
  _QWORD **v14; // rax
  unsigned __int64 v15; // rcx
  _QWORD *v16; // rcx
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  _UNICODE_STRING RedirectionDllName; // [rsp+58h] [rbp-9h] BYREF
  __int128 v21; // [rsp+68h] [rbp+7h] BYREF
  __int128 v22; // [rsp+78h] [rbp+17h] BYREF
  _DWORD v23[2]; // [rsp+88h] [rbp+27h] BYREF
  __int64 v24; // [rsp+90h] [rbp+2Fh]
  __int128 v25; // [rsp+98h] [rbp+37h]

  v6 = -4530927LL;
  v7 = LdrpHashAsciizString(a3, a2, a3);
  v8 = *(_OWORD *)(a2 + 88);
  Root = (unsigned __int64)LdrpRedirectionTree.Root;
  v23[0] = v7;
  v23[1] = *(_DWORD *)(a2 + 264);
  v24 = v10;
  v25 = v8;
  if ( (*(_BYTE *)&LdrpRedirectionTree.0 & 1) != 0 && LdrpRedirectionTree.Root )
    Root = (unsigned __int64)&LdrpRedirectionTree ^ (unsigned __int64)LdrpRedirectionTree.Root;
  v11 = *(_BYTE *)&LdrpRedirectionTree.0 & 1;
  while ( Root )
  {
    v12 = LdrpCompareRedirectedFunction(v23, Root);
    if ( v12 < 0 )
    {
      v13 = *(_QWORD *)Root;
      goto LABEL_9;
    }
    if ( v12 <= 0 )
      break;
    v13 = *(_QWORD *)(Root + 8);
LABEL_9:
    if ( v11 && v13 )
      Root ^= v13;
    else
      Root = v13;
  }
  while ( Root && !(unsigned int)LdrpCompareRedirectedFunction(v23, Root) )
  {
    if ( !LdrpRedirectionByFunctionCalloutFunc
      || (unsigned __int8)LdrpRedirectionByFunctionCalloutFunc(*(_QWORD *)(a1 + 80), *(unsigned int *)(Root + 64)) )
    {
      v6 = *(_QWORD *)(Root + 56);
      if ( (LdrpDebugFlags & 5) != 0 )
      {
        v17 = *(_OWORD *)(a2 + 88);
        RedirectionDllName = NtCurrentPeb()->ProcessParameters->RedirectionDllName;
        v18 = *(_OWORD *)(a1 + 88);
        v21 = v17;
        v22 = v18;
        LdrpLogDbgPrint(
          (unsigned int)"minkernel\\ntdll\\ldrredirect.c",
          299,
          "LdrpCheckRedirection",
          2,
          "Import Redirection: %wZ %wZ!%s redirected to %wZ\n",
          &v22,
          &v21,
          a3,
          &RedirectionDllName);
      }
      return v6;
    }
    v14 = *(_QWORD ***)(Root + 8);
    v15 = Root;
    if ( v14 )
    {
      v16 = *v14;
      for ( Root = *(_QWORD *)(Root + 8); v16; v16 = (_QWORD *)*v16 )
        Root = (unsigned __int64)v16;
    }
    else
    {
      while ( 1 )
      {
        Root = *(_QWORD *)(Root + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !Root || *(_QWORD *)Root == v15 )
          break;
        v15 = Root;
      }
    }
  }
  return v6;
}
