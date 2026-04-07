/*
 * XREFs of ?OnHostWindowDying@CWindowList@@CAXPEAVCWindowData@@@Z @ 0x180055E9C
 * Callers:
 *     ?ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18001472C (-ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180056410 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CWindowList::OnHostWindowDying(struct CWindowData *a1)
{
  *(_QWORD *)(*((_QWORD *)a1 + 74) + 600LL) = 0LL;
  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 65)
                                                         + 112LL))(
    *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 65),
    *((_QWORD *)a1 + 5),
    0LL,
    *(_QWORD *)(*((_QWORD *)a1 + 74) + 40LL));
}
