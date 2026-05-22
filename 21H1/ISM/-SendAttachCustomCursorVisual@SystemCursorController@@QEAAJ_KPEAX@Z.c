/*
 * XREFs of ?SendAttachCustomCursorVisual@SystemCursorController@@QEAAJ_KPEAX@Z @ 0x18013D0B8
 * Callers:
 *     ?CreateCursorForDevice@SystemCursorService@@QEAAJ_K@Z @ 0x18013F0AC (-CreateCursorForDevice@SystemCursorService@@QEAAJ_K@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035710 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SystemCursorController::SendAttachCustomCursorVisual(
        SystemCursorController *this,
        __int64 a2,
        void *a3)
{
  __int64 v3; // rcx
  int v4; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = *((_QWORD *)this + 8);
  if ( !v3 )
    return 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, __int64, void *))(*(_QWORD *)(v3 + 8) + 40LL))(v3 + 8, a2, a3);
  v5 = v4;
  if ( v4 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x166,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\system"
             "cursorcontroller.cpp",
    (const char *)(unsigned int)v4);
  return v5;
}
