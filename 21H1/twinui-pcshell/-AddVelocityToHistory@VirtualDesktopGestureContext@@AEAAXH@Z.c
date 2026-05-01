/*
 * XREFs of ?AddVelocityToHistory@VirtualDesktopGestureContext@@AEAAXH@Z @ 0x18041F44C
 * Callers:
 *     ?Commit@VirtualDesktopGestureContext@@QEAAJPEAUIVirtualDesktopGestureHandlerPrivate@@H@Z @ 0x18041F5B8 (-Commit@VirtualDesktopGestureContext@@QEAAJPEAUIVirtualDesktopGestureHandlerPrivate@@H@Z.c)
 *     ?UpdateOffset@VirtualDesktopGestureContext@@QEAAXHH@Z @ 0x180421EAC (-UpdateOffset@VirtualDesktopGestureContext@@QEAAXHH@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall VirtualDesktopGestureContext::AddVelocityToHistory(VirtualDesktopGestureContext *this, int a2)
{
  ULONGLONG i; // r9
  __int64 v5; // rcx
  unsigned __int64 v6; // rcx

  for ( i = GetTickCount64(); i > *((_QWORD *)this + 21) + 10LL; *((_DWORD *)this + (int)v6 + 26) = a2 )
  {
    v5 = *((int *)this + 41);
    *((_QWORD *)this + 21) += 10LL;
    v6 = (v5 + 1) % 0xFuLL;
    *((_DWORD *)this + 41) = v6;
  }
  *((_DWORD *)this + *((int *)this + 41) + 26) = a2;
}
