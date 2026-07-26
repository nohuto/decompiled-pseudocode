/*
 * XREFs of ?ndisAoAcEnableRemoteWake@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PM_NIC_ACTIVE@@E@Z @ 0x1C005A4F8
 * Callers:
 *     ?ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z @ 0x1C012BDB8 (-ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z.c)
 * Callees:
 *     ?ndisAoAcIsD0Required@@YAEPEAU_NDIS_MINIPORT_AOAC@@@Z @ 0x1C005A824 (-ndisAoAcIsD0Required@@YAEPEAU_NDIS_MINIPORT_AOAC@@@Z.c)
 *     WPP_RECORDER_SF_DDLc @ 0x1C005E494 (WPP_RECORDER_SF_DDLc.c)
 *     WPP_RECORDER_SF_DDLcD @ 0x1C005E598 (WPP_RECORDER_SF_DDLcD.c)
 */

__int64 __fastcall ndisAoAcEnableRemoteWake(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_PM_NIC_ACTIVE *a2, char a3)
{
  struct _NDIS_MINIPORT_AOAC *AoAc; // rsi
  unsigned int v6; // ebx
  KIRQL v7; // dl
  KSPIN_LOCK *v8; // rcx
  int v9; // r9d

  AoAc = a1->AoAc;
  v6 = 0;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_DDLc(*((_QWORD *)WPP_GLOBAL_Control + 8), (_DWORD)a2, a3, (*((_QWORD *)a2 + 1) >> 24) & 0xFFFFFF);
  KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)AoAc);
  if ( ndisAoAcIsD0Required(AoAc) )
    *((_BYTE *)AoAc + 386) = a3;
  else
    v6 = -1073741823;
  KeReleaseSpinLock(v8, v7);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_DDLcD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      *((unsigned __int16 *)a2 + 7),
      (*((_QWORD *)a2 + 1) >> 24) & 0xFFFFFF,
      v9);
  return v6;
}
