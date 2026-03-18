/*
 * XREFs of RIMCmActivateButtonContact @ 0x1C017E1C4
 * Callers:
 *     rimProcessPointerDeviceButtonContact @ 0x1C017B0F0 (rimProcessPointerDeviceButtonContact.c)
 * Callees:
 *     RIMCmGetButtonContact @ 0x1C017E994 (RIMCmGetButtonContact.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMCmActivateButtonContact(__int64 a1)
{
  __int64 v2; // rcx
  __int64 ButtonContact; // rdi
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rdx
  unsigned int v7; // eax
  _QWORD *v8; // rdi
  __int64 *v9; // rax
  __int64 v10; // rcx
  __int64 result; // rax

  ButtonContact = RIMCmGetButtonContact(a1);
  v6 = *(unsigned int *)(ButtonContact + 32);
  if ( (v6 & 2) != 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v2, v6, v4, v5);
  if ( *(_DWORD *)(ButtonContact + 8) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v2, v6, v4, v5);
  *(_DWORD *)(ButtonContact + 32) |= 6u;
  v7 = *(_DWORD *)(a1 + 952);
  if ( v7 >= *(_DWORD *)(a1 + 720) )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v2, v6, v4, v5);
    v7 = *(_DWORD *)(a1 + 952);
  }
  ++*(_DWORD *)(a1 + 956);
  *(_DWORD *)(a1 + 952) = v7 + 1;
  *(_QWORD *)(ButtonContact + 24) = 0LL;
  v8 = (_QWORD *)(ButtonContact + 16);
  *v8 = 0LL;
  v9 = *(__int64 **)(a1 + 936);
  v10 = *v9;
  if ( *(__int64 **)(*v9 + 8) != v9 )
    __fastfail(3u);
  *v8 = v10;
  v8[1] = v9;
  *(_QWORD *)(v10 + 8) = v8;
  *v9 = (__int64)v8;
  result = *(unsigned int *)(a1 + 956);
  if ( *(_DWORD *)(a1 + 952) < (unsigned int)result )
    return MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v6, v4, v5);
  return result;
}
