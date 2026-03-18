/*
 * XREFs of ?GetTargetId@CHolographicInteropTarget@@UEBAJPEAUtagCOMPOSITION_TARGET_ID@@@Z @ 0x1800FC780
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CHolographicInteropTarget::GetTargetId(
        CHolographicInteropTarget *this,
        struct tagCOMPOSITION_TARGET_ID *a2)
{
  *(_QWORD *)a2 = *((_QWORD *)this + 3);
  *((_QWORD *)a2 + 1) = *((_QWORD *)this + 3);
  *((_DWORD *)a2 + 4) = -6;
  *((_DWORD *)a2 + 5) = -6;
  *((_DWORD *)a2 + 6) = (_DWORD)this - 144;
  return 0LL;
}
