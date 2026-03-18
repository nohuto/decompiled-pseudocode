/*
 * XREFs of VslRegisterSecureSystemProcess @ 0x1404F7984
 * Callers:
 *     PspInitPhase1 @ 0x140A60C8C (PspInitPhase1.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14032A7E0 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memset @ 0x140408F80 (memset.c)
 */

NTSTATUS VslRegisterSecureSystemProcess()
{
  ULONG_PTR v0; // rbx
  NTSTATUS result; // eax
  _QWORD v2[14]; // [rsp+20h] [rbp-88h] BYREF

  v0 = PsSecureSystemProcess;
  memset(v2, 0, 0x68uLL);
  v2[1] = *(_QWORD *)(PsSecureSystemProcess + 1088);
  v2[2] = PsSecureSystemProcess;
  result = VslpEnterIumSecureMode(2u, 5, 0, (__int64)v2);
  if ( result >= 0 )
  {
    *(_QWORD *)(v0 + 992) = v2[3];
    *(_QWORD *)(v0 + 992) = v2[3] | 1LL;
  }
  return result;
}
