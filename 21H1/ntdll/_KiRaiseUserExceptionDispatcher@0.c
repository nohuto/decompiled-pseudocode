/*
 * XREFs of _KiRaiseUserExceptionDispatcher@0 @ 0x4B2F4EE0
 * Callers:
 *     sub_4B2F4ED4 @ 0x4B2F4ED4 (sub_4B2F4ED4.c)
 * Callees:
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 *     _RtlRaiseException@4 @ 0x4B308940 (_RtlRaiseException@4.c)
 */

int __usercall KiRaiseUserExceptionDispatcher@<eax>(void *a1@<eax>, int a2@<ebp>)
{
  EXCEPTION_RECORD v3; // [esp+0h] [ebp-54h] BYREF
  int v4; // [esp+50h] [ebp-4h]

  if ( !LdrDelegatedKiRaiseUserExceptionDispatcher )
  {
    v4 = a2;
    v3.ExceptionAddress = a1;
    v3.ExceptionCode = NtCurrentTeb()->ExceptionCode;
    v3.ExceptionFlags = 0;
    v3.ExceptionRecord = 0;
    v3.NumberParameters = 0;
    RtlRaiseException(&v3);
  }
  return LdrDelegatedKiRaiseUserExceptionDispatcher();
}
