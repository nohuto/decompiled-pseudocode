/*
 * XREFs of ?DestroyVSyncPhaseState@DXGADAPTER@@AEAAXXZ @ 0x1C020C784
 * Callers:
 *     ??1DXGADAPTER@@QEAA@XZ @ 0x1C020B270 (--1DXGADAPTER@@QEAA@XZ.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C0002C80 (--_V@YAXPEAX@Z.c)
 */

void __fastcall DXGADAPTER::DestroyVSyncPhaseState(DXGADAPTER *this)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx
  void *v5; // rcx
  void *v6; // rcx
  void *v7; // rcx
  void *v8; // rcx
  void *v9; // rcx

  v2 = (void *)*((_QWORD *)this + 486);
  if ( v2 )
    operator delete[](v2);
  v3 = (void *)*((_QWORD *)this + 487);
  if ( v3 )
    operator delete[](v3);
  v4 = (void *)*((_QWORD *)this + 488);
  if ( v4 )
    operator delete[](v4);
  v5 = (void *)*((_QWORD *)this + 489);
  if ( v5 )
    operator delete[](v5);
  v6 = (void *)*((_QWORD *)this + 490);
  if ( v6 )
    operator delete[](v6);
  v7 = (void *)*((_QWORD *)this + 491);
  if ( v7 )
    operator delete[](v7);
  v8 = (void *)*((_QWORD *)this + 498);
  if ( v8 )
    operator delete[](v8);
  v9 = (void *)*((_QWORD *)this + 497);
  if ( v9 )
    operator delete[](v9);
}
