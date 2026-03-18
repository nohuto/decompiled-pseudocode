/*
 * XREFs of ?CleanupDwmInputThread@CInputManager@@IEAAXXZ @ 0x1C01F4288
 * Callers:
 *     ?NotifyDwmInputThreadShutdown@CInputManager@@SAXPEAU_ETHREAD@@@Z @ 0x1C00D2600 (-NotifyDwmInputThreadShutdown@CInputManager@@SAXPEAU_ETHREAD@@@Z.c)
 *     ?DwmInputThread@CInputManager@@IEAAJPEAX0H@Z @ 0x1C01F4324 (-DwmInputThread@CInputManager@@IEAAJPEAX0H@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C0057A50 (Win32FreePool.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CInputManager::CleanupDwmInputThread(CInputManager *this)
{
  void *v2; // rcx
  void *v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx

  if ( qword_1C0250D18 )
    qword_1C0250D18((char *)this + 16);
  v2 = (void *)*((_QWORD *)this + 2);
  if ( v2 )
  {
    ZwClose(v2);
    *((_QWORD *)this + 2) = 0LL;
  }
  v3 = (void *)*((_QWORD *)this + 3);
  if ( v3 )
  {
    ZwClose(v3);
    *((_QWORD *)this + 3) = 0LL;
  }
  *((_QWORD *)this + 4) = 0LL;
  v4 = *((_QWORD *)this + 5);
  if ( v4 )
  {
    Win32FreePool(v4);
    *((_QWORD *)this + 5) = 0LL;
  }
  v5 = *((_QWORD *)this + 6);
  if ( v5 )
  {
    Win32FreePool(v5);
    *((_QWORD *)this + 6) = 0LL;
  }
  *((_DWORD *)this + 14) = 0;
  if ( !*((_DWORD *)this + 16) )
    *((_QWORD *)this + 1) = 0LL;
}
