/*
 * XREFs of ?FxIFRValidateLogHeader@@YAJPEAU_WDF_IFR_HEADER@@@Z @ 0x1C003D47C
 * Callers:
 *     ?FxIFRCreateSnapshot@@YAPEAU_WDF_IFR_HEADER@@PEBDPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003CB74 (-FxIFRCreateSnapshot@@YAPEAU_WDF_IFR_HEADER@@PEBDPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 * Callees:
 *     FxIsEqualGuid @ 0x1C0039BCC (FxIsEqualGuid.c)
 */

__int64 __fastcall FxIFRValidateLogHeader(_WDF_IFR_HEADER *Header)
{
  unsigned int Size; // eax
  unsigned int v3; // ecx

  Size = Header->Size;
  if ( Size + 72 < Size )
    return 3221225621LL;
  if ( Size - 4024 > 0xF000 )
    return 3221225990LL;
  if ( FxIsEqualGuid(&Header->Guid, &WdfTraceGuid) )
  {
    v3 = Header->Size;
    if ( Header->Offset.u.s.Current <= v3 && Header->Offset.u.s.Previous <= v3 )
      return 0LL;
  }
  return 3221225473LL;
}
