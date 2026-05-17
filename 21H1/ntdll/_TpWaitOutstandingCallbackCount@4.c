/*
 * XREFs of _TpWaitOutstandingCallbackCount@4 @ 0x4B2A8156
 * Callers:
 *     _RtlDeregisterWaitEx@8 @ 0x4B2A8010 (_RtlDeregisterWaitEx@8.c)
 * Callees:
 *     _TppWaitpValidateWait@12 @ 0x4B2B7C55 (_TppWaitpValidateWait@12.c)
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 */

int __thiscall TpWaitOutstandingCallbackCount(_DWORD *this)
{
  _DWORD *v2; // edi
  int v3; // esi

  TppWaitpValidateWait(0);
  v2 = this + 36;
  RtlAcquireSRWLockExclusive(this + 36);
  v3 = this[8];
  RtlReleaseSRWLockExclusive(v2);
  return v3;
}
