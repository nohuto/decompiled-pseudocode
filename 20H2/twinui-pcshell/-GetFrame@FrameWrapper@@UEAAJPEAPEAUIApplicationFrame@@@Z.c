/*
 * XREFs of ?GetFrame@FrameWrapper@@UEAAJPEAPEAUIApplicationFrame@@@Z @ 0x180184BF0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall FrameWrapper::GetFrame(FrameWrapper *this, struct IApplicationFrame **a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, struct IApplicationFrame **))this + 2))(
         *((_QWORD *)this + 2),
         &GUID_143715d9_a015_40ea_b695_d5cc267e36ee,
         a2);
  v3 = v2;
  if ( v2 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x59,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\framefactory.cpp",
      (const char *)(unsigned int)v2);
  return v3;
}
