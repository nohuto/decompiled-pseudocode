/*
 * XREFs of ?RestoreAttributesHelper@XDCOBJ@@AEAAXXZ @ 0x1C0141F4C
 * Callers:
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C0098F74 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     GreSetDIBitsToDeviceInternal @ 0x1C00A16C0 (GreSetDIBitsToDeviceInternal.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C00A37B0 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C00A47D0 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     NtGdiPatBlt @ 0x1C00AF630 (NtGdiPatBlt.c)
 *     ?vInit@RESTORESAVEDCATTRS@@QEAAXPEAVXDCOBJ@@@Z @ 0x1C012D544 (-vInit@RESTORESAVEDCATTRS@@QEAAXPEAVXDCOBJ@@@Z.c)
 *     ?GreStartDocInternal@@YAHPEAUHDC__@@PEAU_DOCINFOW@@PEAHH@Z @ 0x1C0141AB8 (-GreStartDocInternal@@YAHPEAUHDC__@@PEAU_DOCINFOW@@PEAHH@Z.c)
 *     NtGdiStartPage @ 0x1C0141E00 (NtGdiStartPage.c)
 *     NtGdiEndPage @ 0x1C027C650 (NtGdiEndPage.c)
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
