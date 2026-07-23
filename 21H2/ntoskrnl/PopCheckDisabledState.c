/*
 * XREFs of PopCheckDisabledState @ 0x14066ED38
 * Callers:
 *     PopFilterCapabilities @ 0x14066EBC4 (PopFilterCapabilities.c)
 * Callees:
 *     <none>
 */

char __fastcall PopCheckDisabledState(int a1)
{
  __int64 *v1; // rdx
  char result; // al

  v1 = (__int64 *)PowerStateDisableReasonListHead;
  result = 0;
  if ( (__int64 *)PowerStateDisableReasonListHead != &PowerStateDisableReasonListHead )
  {
    while ( !*((_BYTE *)v1 + a1 + 16) )
    {
      v1 = (__int64 *)*v1;
      if ( v1 == &PowerStateDisableReasonListHead )
        return result;
    }
    return 1;
  }
  return result;
}
