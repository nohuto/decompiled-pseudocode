/*
 * XREFs of ?GetEntryObject@GdiHandleEntryTable@@QEAAPEAVOBJECT@@I@Z @ 0x1C0084130
 * Callers:
 *     NtGdiDeleteObjectApp @ 0x1C006C610 (NtGdiDeleteObjectApp.c)
 *     ?AcquireEntryIndex@GdiHandleManager@@QEAA_NPEAI@Z @ 0x1C007CE20 (-AcquireEntryIndex@GdiHandleManager@@QEAA_NPEAI@Z.c)
 *     ?hSetup@ENTRYOBJ@@SAPEAUHOBJ__@@PEAVOBJECT@@EGI@Z @ 0x1C007D000 (-hSetup@ENTRYOBJ@@SAPEAUHOBJ__@@PEAVOBJECT@@EGI@Z.c)
 *     ?ReleaseLockAndEntry@GdiHandleEntryDirectory@@QEAAXI_N@Z @ 0x1C007FA98 (-ReleaseLockAndEntry@GdiHandleEntryDirectory@@QEAAXI_N@Z.c)
 *     HmgIncrementShareReferenceCount @ 0x1C00804F0 (HmgIncrementShareReferenceCount.c)
 *     GreGetBounds @ 0x1C00811F0 (GreGetBounds.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C0081D80 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0082DC0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

struct OBJECT *__fastcall GdiHandleEntryTable::GetEntryObject(GdiHandleEntryTable *this, unsigned int a2)
{
  if ( a2 >= *((_DWORD *)this + 5) )
    return 0LL;
  else
    return *(struct OBJECT **)(*(_QWORD *)(**((_QWORD **)this + 3) + 8 * ((unsigned __int64)a2 >> 8))
                             + 16LL * (unsigned __int8)a2
                             + 8);
}
