/*
 * XREFs of ?vReleaseCache@RFONTOBJ@@QEAAXXZ @ 0x1C0026C9C
 * Callers:
 *     ?vUnlockEUDCFontsGlyphCache@RFONTOBJ@@QEAAXXZ @ 0x1C00261F4 (-vUnlockEUDCFontsGlyphCache@RFONTOBJ@@QEAAXXZ.c)
 *     GreGetGlyphOutlineInternal @ 0x1C00264BC (GreGetGlyphOutlineInternal.c)
 *     ?bSetNewFDX@RFONTOBJ@@QEAAHAEAVXDCOBJ@@AEAU_FD_XFORM@@K@Z @ 0x1C02A757C (-bSetNewFDX@RFONTOBJ@@QEAAHAEAVXDCOBJ@@AEAU_FD_XFORM@@K@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall RFONTOBJ::vReleaseCache(RFONTOBJ *this)
{
  __int64 v1; // rdx
  __int64 v3; // rcx

  v1 = *(_QWORD *)this;
  v3 = *(_QWORD *)(*(_QWORD *)this + 616LL);
  if ( v3 )
  {
    Win32FreePool(v3);
    *(_QWORD *)(*(_QWORD *)this + 624LL) = 0LL;
    *(_QWORD *)(*(_QWORD *)this + 616LL) = 0LL;
    v1 = *(_QWORD *)this;
  }
  EtwTraceGreLockReleaseSemaphore(L"prfnt->hsemCache", *(_QWORD *)(v1 + 504));
  GreReleaseSemaphoreInternal(*(_QWORD *)(*(_QWORD *)this + 504LL));
}
