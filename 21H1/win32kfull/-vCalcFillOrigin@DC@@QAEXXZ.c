/*
 * XREFs of ?vCalcFillOrigin@DC@@QAEXXZ @ 0x9DCE4
 * Callers:
 *     ?NtGdiFlushUserBatchInternal@@YGXPAX@Z @ 0x5EBA0 (-NtGdiFlushUserBatchInternal@@YGXPAX@Z.c)
 *     _GreSetBrushOrg@16 @ 0x721EA (_GreSetBrushOrg@16.c)
 * Callees:
 *     <none>
 */

void __thiscall DC::vCalcFillOrigin(DC *this)
{
  int v1; // edx
  int v2; // esi
  int v3; // edx

  v1 = *((_DWORD *)this + 7) & 1;
  if ( v1 )
    v2 = *((_DWORD *)this + 264);
  else
    v2 = *((_DWORD *)this + 262);
  *((_DWORD *)this + 294) = v2 + *((_DWORD *)this + 21);
  if ( v1 )
    v3 = *((_DWORD *)this + 265);
  else
    v3 = *((_DWORD *)this + 263);
  *((_DWORD *)this + 295) = v3 + *((_DWORD *)this + 22);
}
