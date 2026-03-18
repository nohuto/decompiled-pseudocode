/*
 * XREFs of RIMCmActivateButtonContact @ 0x1C01862F4
 * Callers:
 *     rimProcessPointerDeviceButtonContact @ 0x1C0183220 (rimProcessPointerDeviceButtonContact.c)
 * Callees:
 *     RIMCmGetButtonContact @ 0x1C0186AC4 (RIMCmGetButtonContact.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMCmActivateButtonContact(__int64 a1)
{
  __int64 v2; // rcx
  __int64 ButtonContact; // rdi
  unsigned int v4; // eax
  _QWORD *v5; // rdi
  __int64 *v6; // rax
  __int64 v7; // rcx
  __int64 result; // rax

  ButtonContact = RIMCmGetButtonContact(a1);
  if ( (*(_DWORD *)(ButtonContact + 32) & 2) != 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v2);
  if ( *(_DWORD *)(ButtonContact + 8) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v2);
  *(_DWORD *)(ButtonContact + 32) |= 6u;
  v4 = *(_DWORD *)(a1 + 952);
  if ( v4 >= *(_DWORD *)(a1 + 720) )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v2);
    v4 = *(_DWORD *)(a1 + 952);
  }
  ++*(_DWORD *)(a1 + 956);
  *(_DWORD *)(a1 + 952) = v4 + 1;
  *(_QWORD *)(ButtonContact + 24) = 0LL;
  v5 = (_QWORD *)(ButtonContact + 16);
  *v5 = 0LL;
  v6 = *(__int64 **)(a1 + 936);
  v7 = *v6;
  if ( *(__int64 **)(*v6 + 8) != v6 )
    __fastfail(3u);
  *v5 = v7;
  v5[1] = v6;
  *(_QWORD *)(v7 + 8) = v5;
  *v6 = (__int64)v5;
  result = *(unsigned int *)(a1 + 956);
  if ( *(_DWORD *)(a1 + 952) < (unsigned int)result )
    return MicrosoftTelemetryAssertTriggeredNoArgsKM(v7);
  return result;
}
