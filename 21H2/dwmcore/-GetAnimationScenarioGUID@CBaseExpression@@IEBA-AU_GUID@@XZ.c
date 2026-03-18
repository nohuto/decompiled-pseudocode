/*
 * XREFs of ?GetAnimationScenarioGUID@CBaseExpression@@IEBA?AU_GUID@@XZ @ 0x1800447A4
 * Callers:
 *     ?UnregisterForTelemetry@CBaseExpression@@IEAAXXZ @ 0x180042FA4 (-UnregisterForTelemetry@CBaseExpression@@IEAAXXZ.c)
 *     ?NotifyAnimationStarted@CBaseExpression@@IEAAXXZ @ 0x180052BA0 (-NotifyAnimationStarted@CBaseExpression@@IEAAXXZ.c)
 * Callees:
 *     <none>
 */

struct _GUID *__fastcall CBaseExpression::GetAnimationScenarioGUID(
        CBaseExpression *this,
        struct _GUID *__return_ptr retstr)
{
  __int64 v2; // rcx
  __int64 i; // rcx
  struct _GUID v4; // xmm0
  struct _GUID *result; // rax

  v2 = *((_QWORD *)this + 41);
  if ( *(int *)(v2 + 4) >= 0 )
  {
    v4 = 0LL;
  }
  else
  {
    for ( i = v2 + 12; (*(_DWORD *)i & 0x7F000000) != 0x1000000; i += (*(_DWORD *)i & 0xFFFFFF) + 4LL )
      ;
    v4 = *(struct _GUID *)(i + 4);
  }
  result = retstr;
  *retstr = v4;
  return result;
}
