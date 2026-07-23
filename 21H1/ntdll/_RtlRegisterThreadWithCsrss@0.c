/*
 * XREFs of _RtlRegisterThreadWithCsrss@0 @ 0x4B2B80E0
 * Callers:
 *     _TppWorkerThread@4 @ 0x4B2B58A0 (_TppWorkerThread@4.c)
 * Callees:
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 */

NTSTATUS RtlRegisterThreadWithCsrss(void)
{
  NTSTATUS v0; // edx
  _DWORD v2[11]; // [esp+8h] [ebp-1F0h] BYREF
  _CLIENT_ID ClientId; // [esp+34h] [ebp-1C4h]

  v0 = 0;
  if ( !CsrInitOnceDone || CsrClientProcess || !CsrServerApiRoutine )
    return v0;
  if ( !LdrpIsSecureProcess )
  {
    v2[10] = 0;
    ClientId = NtCurrentTeb()->ClientId;
    v2[1] = 0;
    v2[0] = 3670044;
    v2[6] = 0;
    v2[7] = 65561;
    return CsrServerApiRoutine(CsrServerApiRoutine, v2, v2);
  }
  return -1073741637;
}
