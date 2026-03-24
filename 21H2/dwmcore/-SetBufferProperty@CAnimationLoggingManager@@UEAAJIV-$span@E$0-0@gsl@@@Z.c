/*
 * XREFs of ?SetBufferProperty@CAnimationLoggingManager@@UEAAJIV?$span@E$0?0@gsl@@@Z @ 0x1801B16F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18014E78C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetCompositorComment@CAnimationLoggingManager@@QEAAJPEBGI@Z @ 0x1801B174C (-SetCompositorComment@CAnimationLoggingManager@@QEAAJPEBGI@Z.c)
 */

__int64 __fastcall CAnimationLoggingManager::SetBufferProperty(CAnimationLoggingManager *a1, int a2, __int64 a3)
{
  int v3; // ebx
  __int64 v4; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 != 3 )
  {
    v3 = -2147024809;
    v4 = 104LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\animationloggingmanager.cpp",
      (const char *)(unsigned int)v3);
    return (unsigned int)v3;
  }
  v3 = CAnimationLoggingManager::SetCompositorComment(a1, *(const unsigned __int16 **)(a3 + 8), *(_QWORD *)a3 >> 1);
  if ( v3 < 0 )
  {
    v4 = 100LL;
    goto LABEL_5;
  }
  return 0LL;
}
