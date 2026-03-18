/*
 * XREFs of ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C00A53E0
 * Callers:
 *     GreStretchDIBitsInternal @ 0x1C009FCF0 (GreStretchDIBitsInternal.c)
 *     GreRealizePalette @ 0x1C01134BC (GreRealizePalette.c)
 *     NtGdiResizePalette @ 0x1C02B6CA0 (NtGdiResizePalette.c)
 * Callees:
 *     <none>
 */

void __fastcall XDCOBJ::RestoreAttributes(XDCOBJ *this)
{
  struct _DC_ATTR *UserAttr; // rax

  if ( *((_DWORD *)this + 2) && (*(_DWORD *)(*(_QWORD *)this + 44LL) & 2) != 0 )
  {
    if ( !*((_DWORD *)this + 3) )
    {
      UserAttr = XDCOBJ::GetUserAttr(this);
      if ( UserAttr )
        DC::RestoreAttributes(*(DC **)this, UserAttr);
    }
    *(_DWORD *)(*(_QWORD *)this + 44LL) &= ~2u;
    *((_DWORD *)this + 2) = 0;
  }
}
