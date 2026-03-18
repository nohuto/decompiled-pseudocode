/*
 * XREFs of ?CleanupDwmInputThread@CInputManager@@IEAAXXZ @ 0x1C01FB5E8
 * Callers:
 *     ?NotifyDwmInputThreadShutdown@CInputManager@@SAXPEAU_ETHREAD@@@Z @ 0x1C00D1C70 (-NotifyDwmInputThreadShutdown@CInputManager@@SAXPEAU_ETHREAD@@@Z.c)
 *     ?DwmInputThread@CInputManager@@IEAAJPEAX0H@Z @ 0x1C01FB684 (-DwmInputThread@CInputManager@@IEAAJPEAX0H@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CInputManager::CleanupDwmInputThread(CInputManager *this, __int64 a2, __int64 a3)
{
  void *v4; // rcx
  void *v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx

  if ( qword_1C0258CD8 )
    qword_1C0258CD8((char *)this + 16);
  v4 = (void *)*((_QWORD *)this + 2);
  if ( v4 )
  {
    ZwClose(v4);
    *((_QWORD *)this + 2) = 0LL;
  }
  v5 = (void *)*((_QWORD *)this + 3);
  if ( v5 )
  {
    ZwClose(v5);
    *((_QWORD *)this + 3) = 0LL;
  }
  *((_QWORD *)this + 4) = 0LL;
  v6 = *((_QWORD *)this + 5);
  if ( v6 )
  {
    Win32FreePool(v6, a2, a3);
    *((_QWORD *)this + 5) = 0LL;
  }
  v7 = *((_QWORD *)this + 6);
  if ( v7 )
  {
    Win32FreePool(v7, a2, a3);
    *((_QWORD *)this + 6) = 0LL;
  }
  *((_DWORD *)this + 14) = 0;
  if ( !*((_DWORD *)this + 16) )
    *((_QWORD *)this + 1) = 0LL;
}
