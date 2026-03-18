/*
 * XREFs of MiStopPageAccessor @ 0x140226844
 * Callers:
 *     MiPageListCollision @ 0x140226804 (MiPageListCollision.c)
 *     MiInitializeNewUltraHugeContext @ 0x14025BDC8 (MiInitializeNewUltraHugeContext.c)
 *     MiDecrementHugeContext @ 0x14025E544 (MiDecrementHugeContext.c)
 * Callees:
 *     MiSwizzleInvalidPte @ 0x1402CCC50 (MiSwizzleInvalidPte.c)
 *     MiLocatePageCollisionNodeByPfn @ 0x1405AF30C (MiLocatePageCollisionNodeByPfn.c)
 */

__int64 __fastcall MiStopPageAccessor(ULONG_PTR a1, unsigned __int64 a2)
{
  ULONG_PTR v2; // rdi
  __int64 PageCollisionNodeByPfn; // r8

  v2 = 0LL;
  if ( (_DWORD)a2 )
  {
    PageCollisionNodeByPfn = MiLocatePageCollisionNodeByPfn(a1);
    a2 = *(_QWORD *)a1 & 0xFFFF7FFFFFFFFFFFuLL;
    *(_QWORD *)a1 = a2;
  }
  else
  {
    v2 = a1;
    *(_BYTE *)(a1 + 34) &= ~8u;
    PageCollisionNodeByPfn = *(_QWORD *)(a1 + 16);
  }
  *(_QWORD *)(PageCollisionNodeByPfn + 24) = 0LL;
  *(_BYTE *)(PageCollisionNodeByPfn + 70) = 1;
  if ( v2 )
    *(_QWORD *)(v2 + 16) = MiSwizzleInvalidPte(128LL, a2);
  return PageCollisionNodeByPfn;
}
