/*
 * XREFs of ?RestoreAttributesHelper@XDCOBJ@@AEAAXXZ @ 0x1C013FEDC
 * Callers:
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C001936C (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     GreSetDIBitsToDeviceInternal @ 0x1C0076650 (GreSetDIBitsToDeviceInternal.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C0077CC0 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0079350 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C0079F40 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     NtGdiPatBlt @ 0x1C0084BB0 (NtGdiPatBlt.c)
 *     ?vInit@RESTORESAVEDCATTRS@@QEAAXPEAVXDCOBJ@@@Z @ 0x1C012B654 (-vInit@RESTORESAVEDCATTRS@@QEAAXPEAVXDCOBJ@@@Z.c)
 *     ?GreStartDocInternal@@YAHPEAUHDC__@@PEAU_DOCINFOW@@PEAHH@Z @ 0x1C013FB68 (-GreStartDocInternal@@YAHPEAUHDC__@@PEAU_DOCINFOW@@PEAHH@Z.c)
 *     NtGdiStartPage @ 0x1C013FD90 (NtGdiStartPage.c)
 *     NtGdiEndPage @ 0x1C027DBC0 (NtGdiEndPage.c)
 * Callees:
 *     <none>
 */

void __fastcall XDCOBJ::RestoreAttributesHelper(XDCOBJ *this)
{
  struct _DC_ATTR *UserAttr; // rax

  if ( !*((_DWORD *)this + 3) )
  {
    UserAttr = XDCOBJ::GetUserAttr(this);
    if ( UserAttr )
      DC::RestoreAttributes(*(DC **)this, UserAttr);
  }
}
