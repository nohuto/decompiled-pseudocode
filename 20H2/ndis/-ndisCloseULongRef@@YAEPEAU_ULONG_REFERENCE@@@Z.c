/*
 * XREFs of ?ndisCloseULongRef@@YAEPEAU_ULONG_REFERENCE@@@Z @ 0x1C00AB800
 * Callers:
 *     ?ndisInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEBU_UNICODE_STRING@@PEAX@Z @ 0x1C0034FD4 (-ndisInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEBU_UNICODE_STRI.c)
 *     ?ndisMHaltMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C006C99C (-ndisMHaltMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall ndisCloseULongRef(PKSPIN_LOCK SpinLock)
{
  char v2; // bl
  KIRQL v3; // al

  v2 = 1;
  v3 = KeAcquireSpinLockRaiseToDpc(SpinLock);
  if ( *((_BYTE *)SpinLock + 12) )
    v2 = 0;
  else
    *((_BYTE *)SpinLock + 12) = 1;
  KeReleaseSpinLock(SpinLock, v3);
  return v2;
}
