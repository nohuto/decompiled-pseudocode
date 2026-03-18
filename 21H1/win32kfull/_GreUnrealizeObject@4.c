/*
 * XREFs of _GreUnrealizeObject@4 @ 0x21E7AB
 * Callers:
 *     _NtGdiUnrealizeObject@4 @ 0x214456 (_NtGdiUnrealizeObject@4.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QAEXXZ @ 0x98AE4 (-vUnlock@SEMOBJ@@QAEXXZ.c)
 */

int __thiscall GreUnrealizeObject(void *this)
{
  int v1; // edi
  int v2; // esi
  _DWORD *v3; // eax
  _DWORD *v4; // eax
  int v6; // [esp+8h] [ebp-4h] BYREF

  v1 = 0;
  v2 = HmgShareLockCheck(this, 8);
  if ( v2 )
  {
    v6 = _ghsemPalette;
    GreAcquireSemaphore(_ghsemPalette);
    v3 = *(_DWORD **)(v2 + 52);
    if ( v3 )
      *v3 = 0;
    v4 = *(_DWORD **)(v2 + 56);
    if ( v4 )
      *v4 = 0;
    v1 = 1;
    SEMOBJ::vUnlock((SEMOBJ *)&v6);
    DEC_SHARE_REF_CNT(v2);
  }
  return v1;
}
