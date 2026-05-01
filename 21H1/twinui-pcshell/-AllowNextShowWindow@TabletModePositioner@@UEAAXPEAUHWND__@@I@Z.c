/*
 * XREFs of ?AllowNextShowWindow@TabletModePositioner@@UEAAXPEAUHWND__@@I@Z @ 0x18008B690
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall TabletModePositioner::AllowNextShowWindow(TabletModePositioner *this, HWND a2, int a3)
{
  *((_QWORD *)this + 46) = a2;
  *((_DWORD *)this + 94) = a3;
}
