/*
 * XREFs of VslGetKsrContext @ 0x140A71184
 * Callers:
 *     Phase1InitializationDiscard @ 0x140A37B24 (Phase1InitializationDiscard.c)
 * Callees:
 *     <none>
 */

__int64 *VslGetKsrContext()
{
  if ( !VslVsmEnabled )
    return 0LL;
  VslpIumKsrInitContext = (__int64)VslpKsrEnterIumSecureMode;
  qword_140D56768 = (__int64)VslpRegisterKsrCallback;
  return &VslpIumKsrInitContext;
}
