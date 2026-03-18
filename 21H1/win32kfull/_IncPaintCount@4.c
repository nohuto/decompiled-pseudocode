/*
 * XREFs of _IncPaintCount@4 @ 0x46034
 * Callers:
 *     _InternalInvalidate3@12 @ 0x37E6A (_InternalInvalidate3@12.c)
 * Callees:
 *     _SetWakeBit@8 @ 0x44776 (_SetWakeBit@8.c)
 */

LONG __thiscall IncPaintCount(_DWORD *this)
{
  int v1; // esi
  int v2; // edx
  LONG result; // eax

  v1 = this[2];
  v2 = *(_DWORD *)(v1 + 320);
  result = v2 + 1;
  *(_DWORD *)(v1 + 320) = v2 + 1;
  if ( !v2 )
  {
    EtwTraceWakePump(v1, this, 15);
    return SetWakeBit(v1, 32);
  }
  return result;
}
