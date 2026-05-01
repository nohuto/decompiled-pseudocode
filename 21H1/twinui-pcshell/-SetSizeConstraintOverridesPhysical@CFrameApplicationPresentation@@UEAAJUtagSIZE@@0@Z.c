/*
 * XREFs of ?SetSizeConstraintOverridesPhysical@CFrameApplicationPresentation@@UEAAJUtagSIZE@@0@Z @ 0x180074D20
 * Callers:
 *     <none>
 * Callees:
 *     CFrameApplicationPresentation::_AddTaskToQueue__lambda_963b63a3e68d50a8e9a7cd84e91426d9___ @ 0x180074D5C (CFrameApplicationPresentation--_AddTaskToQueue__lambda_963b63a3e68d50a8e9a7cd84e91426d9___.c)
 */

__int64 __fastcall CFrameApplicationPresentation::SetSizeConstraintOverridesPhysical(
        CFrameApplicationPresentation *this,
        struct tagSIZE a2,
        struct tagSIZE a3)
{
  __int128 v4; // [rsp+20h] [rbp-48h]
  __int128 v5; // [rsp+40h] [rbp-28h] BYREF
  struct tagSIZE v6; // [rsp+50h] [rbp-18h]

  *((struct tagSIZE *)&v4 + 1) = a2;
  *(_QWORD *)&v4 = this;
  v5 = v4;
  v6 = a3;
  return CFrameApplicationPresentation::_AddTaskToQueue__lambda_963b63a3e68d50a8e9a7cd84e91426d9___(this, &v5);
}
