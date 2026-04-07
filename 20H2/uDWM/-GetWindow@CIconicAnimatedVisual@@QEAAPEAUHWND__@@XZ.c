/*
 * XREFs of ?GetWindow@CIconicAnimatedVisual@@QEAAPEAUHWND__@@XZ @ 0x1800B8C44
 * Callers:
 *     ?ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18001472C (-ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 * Callees:
 *     <none>
 */

HWND __fastcall CIconicAnimatedVisual::GetWindow(CIconicAnimatedVisual *this)
{
  __int64 v1; // rdx
  HWND result; // rax

  v1 = *((_QWORD *)this + 37);
  result = 0LL;
  if ( v1 )
    return *(HWND *)(v1 + 40);
  return result;
}
