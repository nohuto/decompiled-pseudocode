/*
 * XREFs of _CPipeInstance::ResolveFormatConflictsRightLeft_::_1_::catch$70 @ 0x1400219E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CPipeInstance::ResolveFormatConflictsRightLeft_::_1_::catch_70(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rbx

  v3 = *(_DWORD **)(a2 + 328);
  if ( *v3 == -1073741571 )
    _o__resetstkoflw();
  *(_DWORD *)(a2 + 72) = *v3;
  return 0LL;
}
