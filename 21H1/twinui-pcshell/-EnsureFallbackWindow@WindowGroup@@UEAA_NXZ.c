/*
 * XREFs of ?EnsureFallbackWindow@WindowGroup@@UEAA_NXZ @ 0x180277A10
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x18008D658 (memset_0.c)
 */

char __fastcall WindowGroup::EnsureFallbackWindow(WindowGroup *this)
{
  WNDCLASSEXW v3; // [rsp+70h] [rbp-58h] BYREF

  if ( *((_QWORD *)this + 9) )
    return 0;
  v3.cbSize = 80;
  memset_0(&v3.style, 0, 0x4CuLL);
  v3.cbWndExtra = 8;
  v3.lpfnWndProc = (WNDPROC)CWRLImpWndProc<WindowGroup>::s_WndProcBase;
  v3.hInstance = &_ImageBase;
  v3.lpszClassName = L"FallbackWindowClassName";
  RegisterClassExW(&v3);
  CreateWindowInBandEx(
    136315008LL,
    L"FallbackWindowClassName",
    0LL,
    2161049600LL,
    0,
    0,
    0,
    0,
    0LL,
    0LL,
    &_ImageBase,
    (char *)this - 8,
    1,
    1);
  return 1;
}
