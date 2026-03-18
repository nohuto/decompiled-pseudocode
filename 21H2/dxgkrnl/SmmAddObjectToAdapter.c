/*
 * XREFs of SmmAddObjectToAdapter @ 0x1C001B8B0
 * Callers:
 *     ?SmmOpenPhysicalObject@@YAJPEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADAPTER@@@Z @ 0x1C001B7D8 (-SmmOpenPhysicalObject@@YAJPEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADAPTER@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall SmmAddObjectToAdapter(__int64 a1, _QWORD *a2)
{
  KIRQL v4; // al
  _QWORD *v5; // r8

  v4 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 32));
  v5 = *(_QWORD **)(a1 + 48);
  if ( *v5 != a1 + 40 )
    __fastfail(3u);
  *a2 = a1 + 40;
  a2[1] = v5;
  *v5 = a2;
  *(_QWORD *)(a1 + 48) = a2;
  ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 32), v4);
  a2[2] = a1;
}
