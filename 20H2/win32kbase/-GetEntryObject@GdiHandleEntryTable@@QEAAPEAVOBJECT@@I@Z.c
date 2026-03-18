/*
 * XREFs of ?GetEntryObject@GdiHandleEntryTable@@QEAAPEAVOBJECT@@I@Z @ 0x1C0045770
 * Callers:
 *     NtGdiDeleteObjectApp @ 0x1C003A900 (NtGdiDeleteObjectApp.c)
 *     ?ReleaseLockAndEntry@GdiHandleEntryDirectory@@QEAAXI_N@Z @ 0x1C003EBC8 (-ReleaseLockAndEntry@GdiHandleEntryDirectory@@QEAAXI_N@Z.c)
 *     ?AcquireEntryIndex@GdiHandleManager@@QEAA_NPEAI@Z @ 0x1C0040C10 (-AcquireEntryIndex@GdiHandleManager@@QEAA_NPEAI@Z.c)
 *     ?hSetup@ENTRYOBJ@@SAPEAUHOBJ__@@PEAVOBJECT@@EGI@Z @ 0x1C0040E60 (-hSetup@ENTRYOBJ@@SAPEAUHOBJ__@@PEAVOBJECT@@EGI@Z.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C0042800 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     GreGetBounds @ 0x1C0043020 (GreGetBounds.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C00445F0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     HmgIncrementShareReferenceCount @ 0x1C00471A0 (HmgIncrementShareReferenceCount.c)
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
