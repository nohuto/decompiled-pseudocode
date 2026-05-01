/*
 * XREFs of ?_RegisterWindowClass@CDragVisual@@AEAAXXZ @ 0x180428148
 * Callers:
 *     ?_Initialize@CDragVisual@@AEAAJW4DragVisualMode@@@Z @ 0x1804272A0 (-_Initialize@CDragVisual@@AEAAJW4DragVisualMode@@@Z.c)
 * Callees:
 *     memset_0 @ 0x18008DA68 (memset_0.c)
 */

void __fastcall CDragVisual::_RegisterWindowClass(CDragVisual *this)
{
  HBRUSH StockObject; // rax
  WNDCLASSEXW v2; // [rsp+20h] [rbp-58h] BYREF

  v2.cbSize = 80;
  memset_0(&v2.style, 0, 0x4CuLL);
  v2.style = 3;
  v2.lpfnWndProc = (WNDPROC)CDragVisual::s_WndProc;
  v2.hInstance = &_ImageBase;
  v2.hCursor = LoadCursorW(0LL, (LPCWSTR)0x7F00);
  StockObject = (HBRUSH)GetStockObject(4);
  v2.cbWndExtra = 8;
  v2.hbrBackground = StockObject;
  v2.lpszClassName = L"ImmersiveDragVisual";
  RegisterClassExW(&v2);
}
