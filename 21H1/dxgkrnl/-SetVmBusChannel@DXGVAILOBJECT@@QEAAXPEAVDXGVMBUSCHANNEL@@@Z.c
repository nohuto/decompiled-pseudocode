/*
 * XREFs of ?SetVmBusChannel@DXGVAILOBJECT@@QEAAXPEAVDXGVMBUSCHANNEL@@@Z @ 0x1C004BAC4
 * Callers:
 *     ??1DXGVAILOBJECT@@UEAA@XZ @ 0x1C02AF658 (--1DXGVAILOBJECT@@UEAA@XZ.c)
 *     ?InitializeVmBus@DXGVAILOBJECT@@QEAAJPEAX@Z @ 0x1C02B0DA4 (-InitializeVmBus@DXGVAILOBJECT@@QEAAJPEAX@Z.c)
 * Callees:
 *     ?DestroyVmBusChannel@@YAXPEAVDXGVMBUSCHANNEL@@@Z @ 0x1C02B07FC (-DestroyVmBusChannel@@YAXPEAVDXGVMBUSCHANNEL@@@Z.c)
 */

void __fastcall DXGVAILOBJECT::SetVmBusChannel(DXGVAILOBJECT *this, struct DXGVMBUSCHANNEL *a2)
{
  struct DXGVMBUSCHANNEL *v4; // rcx

  v4 = (struct DXGVMBUSCHANNEL *)*((_QWORD *)this + 13);
  if ( v4 )
    DestroyVmBusChannel(v4);
  *((_QWORD *)this + 13) = a2;
}
