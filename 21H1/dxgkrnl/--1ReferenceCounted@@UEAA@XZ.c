/*
 * XREFs of ??1ReferenceCounted@@UEAA@XZ @ 0x1C0010360
 * Callers:
 *     ??_GDXGK_GAMMA_RAMP@@UEAAPEAXI@Z @ 0x1C0010DE0 (--_GDXGK_GAMMA_RAMP@@UEAAPEAXI@Z.c)
 *     ??_E?$rc_buffer@U?$AlpcRequest@$07@DispBroker@@@@UEAAPEAXI@Z @ 0x1C0038F10 (--_E-$rc_buffer@U-$AlpcRequest@$07@DispBroker@@@@UEAAPEAXI@Z.c)
 *     ??1DMMVIDEOPRESENTSOURCESET@@UEAA@XZ @ 0x1C005915C (--1DMMVIDEOPRESENTSOURCESET@@UEAA@XZ.c)
 *     ??1DMMVIDEOPRESENTTARGETSET@@UEAA@XZ @ 0x1C00591C4 (--1DMMVIDEOPRESENTTARGETSET@@UEAA@XZ.c)
 *     ??1DMMVIDPN@@UEAA@XZ @ 0x1C01295F4 (--1DMMVIDPN@@UEAA@XZ.c)
 *     ??1DXGDISPLAYMANAGEROBJECT@@UEAA@XZ @ 0x1C012B420 (--1DXGDISPLAYMANAGEROBJECT@@UEAA@XZ.c)
 *     ??1DMMVIDEOPRESENTTARGET@@UEAA@XZ @ 0x1C02E0A30 (--1DMMVIDEOPRESENTTARGET@@UEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall ReferenceCounted::~ReferenceCounted(ReferenceCounted *this, __int64 a2)
{
  __int64 v3; // rax

  *(_QWORD *)this = &ReferenceCounted::`vftable';
  if ( *((_DWORD *)this + 2) )
  {
    v3 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v3 + 24) = *((int *)this + 2);
    WdLogEvent5_WdError(v3);
  }
}
