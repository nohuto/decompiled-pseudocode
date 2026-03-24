/*
 * XREFs of PopEventCalloutDispatch @ 0x1403A777C
 * Callers:
 *     NtPowerInformation @ 0x1406777D0 (NtPowerInformation.c)
 *     PopDispatchFullWake @ 0x14077A190 (PopDispatchFullWake.c)
 *     PopPolicyTimeChange @ 0x14077A2F0 (PopPolicyTimeChange.c)
 *     PopDispatchCallout @ 0x1407D5750 (PopDispatchCallout.c)
 *     PopDispatchShutdownEvent @ 0x1408F1470 (PopDispatchShutdownEvent.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     PopInvokeWin32Callout @ 0x14067B7C8 (PopInvokeWin32Callout.c)
 */

struct _KTHREAD *__fastcall PopEventCalloutDispatch(int a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 *v3; // r9
  struct _KTHREAD *result; // rax
  __int64 v5; // [rsp+20h] [rbp-28h] BYREF
  _DWORD v6[2]; // [rsp+28h] [rbp-20h] BYREF
  __int64 v7; // [rsp+30h] [rbp-18h]

  v6[1] = 0;
  v6[0] = a1;
  v7 = a2;
  if ( PsWin32CalloutsEstablished )
  {
    v2 = 1LL;
    if ( a1 == 1 )
    {
      LODWORD(v5) = 0;
      v3 = &v5;
    }
    else
    {
      v3 = 0LL;
      if ( a1 == 10 )
        v2 = 0LL;
      else
        v2 = 2LL;
    }
    ((void (__fastcall *)(__int64, _DWORD *, __int64, __int64 *, __int64))PopInvokeWin32Callout)(3LL, v6, v2, v3, v5);
    result = KeGetCurrentThread();
    if ( result->WaitBlock[3].SpareLong )
      __fastfail(0x20u);
  }
  return result;
}
