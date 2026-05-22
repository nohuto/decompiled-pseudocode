/*
 * XREFs of ?DuplicateHandleForProcess@DWMCursor@@QEAAJKPEAPEAX@Z @ 0x18019C724
 * Callers:
 *     ?CreateMotionTransformAndVerifySend@DWMCursorBroker@@AEAAJPEAVDWMCursor@@I@Z @ 0x18019B6D4 (-CreateMotionTransformAndVerifySend@DWMCursorBroker@@AEAAJPEAVDWMCursor@@I@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800357E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180088F40 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?EnsureDCompTransform@DWMCursor@@AEAAJXZ @ 0x18019C7C0 (-EnsureDCompTransform@DWMCursor@@AEAAJXZ.c)
 */

__int64 __fastcall DWMCursor::DuplicateHandleForProcess(DWMCursor *this, unsigned int a2, void **a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  int v9; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a3 = 0LL;
  v6 = DWMCursor::EnsureDCompTransform(this);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v9 = NtDCompositionDuplicateHandleToProcess(*((_QWORD *)this + 8), a2, a3);
    if ( v9 >= 0 )
      return 0LL;
    else
      return wil::details::in1diag3::Return_NtStatus(
               retaddr,
               (void *)0xA9,
               (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursor.cpp",
               (const char *)(unsigned int)v9);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA5,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursor.cpp",
      (const char *)(unsigned int)v6);
    return v7;
  }
}
