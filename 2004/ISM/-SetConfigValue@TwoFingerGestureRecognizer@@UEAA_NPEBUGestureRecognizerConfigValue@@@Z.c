/*
 * XREFs of ?SetConfigValue@TwoFingerGestureRecognizer@@UEAA_NPEBUGestureRecognizerConfigValue@@@Z @ 0x1801856C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall TwoFingerGestureRecognizer::SetConfigValue(
        TwoFingerGestureRecognizer *this,
        const struct GestureRecognizerConfigValue *a2)
{
  char result; // al

  if ( (*(unsigned __int8 (__fastcall **)(char *))(*((_QWORD *)this + 2) + 56LL))((char *)this + 16) )
    return 1;
  result = (*(__int64 (__fastcall **)(char *, const struct GestureRecognizerConfigValue *))(*((_QWORD *)this + 11) + 56LL))(
             (char *)this + 88,
             a2);
  if ( result )
    return 1;
  return result;
}
