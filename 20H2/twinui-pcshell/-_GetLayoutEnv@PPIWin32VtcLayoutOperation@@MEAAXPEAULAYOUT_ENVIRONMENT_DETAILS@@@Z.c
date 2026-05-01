/*
 * XREFs of ?_GetLayoutEnv@PPIWin32VtcLayoutOperation@@MEAAXPEAULAYOUT_ENVIRONMENT_DETAILS@@@Z @ 0x1800BACD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall PPIWin32VtcLayoutOperation::_GetLayoutEnv(
        PPIWin32VtcLayoutOperation *this,
        struct LAYOUT_ENVIRONMENT_DETAILS *a2)
{
  (*(void (__fastcall **)(_QWORD, struct LAYOUT_ENVIRONMENT_DETAILS *))(**((_QWORD **)this + 8) + 24LL))(
    *((_QWORD *)this + 8),
    a2);
}
