/*
 * XREFs of ?OnTargetWithFocusChanged@MPCGamepadProcessor@@UEAAJPEAUIInputTarget@@0@Z @ 0x18004A280
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MPCGamepadProcessor::OnTargetWithFocusChanged(
        MPCGamepadProcessor *this,
        struct IInputTarget *a2,
        struct IInputTarget *a3)
{
  return (*(__int64 (__fastcall **)(_QWORD, struct IInputTarget *, struct IInputTarget *))(**((_QWORD **)this + 579)
                                                                                         + 24LL))(
           *((_QWORD *)this + 579),
           a2,
           a3);
}
