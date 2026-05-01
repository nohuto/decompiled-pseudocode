/*
 * XREFs of wistd::__function::__func__lambda_cfd27ea05118e91876b01966f7f941a5__void___cdecl(enum_Windows::Internal::Shell::Holographic::ShellState_const_&)_::operator() @ 0x18023F720
 * Callers:
 *     <none>
 * Callees:
 *     CreationThreadDispatcher::RunAsync__lambda_7c0ea6bcd92fa0f22b391c2e3237e792___ @ 0x18023D9D0 (CreationThreadDispatcher--RunAsync__lambda_7c0ea6bcd92fa0f22b391c2e3237e792___.c)
 */

__int64 __fastcall wistd::__function::__func__lambda_cfd27ea05118e91876b01966f7f941a5__void___cdecl_enum_Windows::Internal::Shell::Holographic::ShellState_const____::operator()(
        __int64 a1,
        int *a2)
{
  int v2; // eax
  __int64 v4; // [rsp+20h] [rbp-18h] BYREF
  int v5; // [rsp+28h] [rbp-10h]

  v2 = *a2;
  v4 = *(_QWORD *)(a1 + 8);
  v5 = v2;
  return CreationThreadDispatcher::RunAsync__lambda_7c0ea6bcd92fa0f22b391c2e3237e792___(
           *(_QWORD *)(v4 + 456),
           (volatile int *)&v4);
}
