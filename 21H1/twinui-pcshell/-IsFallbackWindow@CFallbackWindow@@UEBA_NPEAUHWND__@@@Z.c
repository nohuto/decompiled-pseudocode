/*
 * XREFs of ?IsFallbackWindow@CFallbackWindow@@UEBA_NPEAUHWND__@@@Z @ 0x180089760
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CFallbackWindow::IsFallbackWindow(CFallbackWindow *this, HWND a2)
{
  return *((_QWORD *)this - 4) == (_QWORD)a2;
}
