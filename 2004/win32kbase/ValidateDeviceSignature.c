/*
 * XREFs of ValidateDeviceSignature @ 0x1C01F82F0
 * Callers:
 *     ApiSetValidateDeviceSignature @ 0x1C01CD88C (ApiSetValidateDeviceSignature.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ValidateDeviceSignature(__int64 a1, __int64 a2, __int64 a3)
{
  if ( qword_1C0252EC0 )
    return qword_1C0252EC0(a1, a2, a3);
  else
    return 3221225659LL;
}
