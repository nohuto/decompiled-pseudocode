/*
 * XREFs of VslRegisterSecureSystemProcess @ 0x1404FB864
 * Callers:
 *     PspInitPhase1 @ 0x140A654A0 (PspInitPhase1.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1402E51E8 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     memset @ 0x140411300 (memset.c)
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
