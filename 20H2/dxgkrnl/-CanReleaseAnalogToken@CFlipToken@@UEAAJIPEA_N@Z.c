/*
 * XREFs of ?CanReleaseAnalogToken@CFlipToken@@UEAAJIPEA_N@Z @ 0x1C0063D60
 * Callers:
 *     <none>
 * Callees:
 *     ?TraceStateChanged@CFlipToken@@AEBAXXZ @ 0x1C0010D20 (-TraceStateChanged@CFlipToken@@AEBAXXZ.c)
 *     ?SetSyncRefreshCount@CompositionSurfaceObject@@QEAAXI@Z @ 0x1C001BF7C (-SetSyncRefreshCount@CompositionSurfaceObject@@QEAAXI@Z.c)
 *     ?NotifyTokenInFrame@CompositionSurfaceObject@@QEAAJAEBVCToken@@PEA_N@Z @ 0x1C001C514 (-NotifyTokenInFrame@CompositionSurfaceObject@@QEAAJAEBVCToken@@PEA_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027100 (_guard_dispatch_icall_nop.c)
 *     ?SyncIntervalSatisfied@CompositionSurfaceObject@@QEAAJIPEA_N@Z @ 0x1C00640D8 (-SyncIntervalSatisfied@CompositionSurfaceObject@@QEAAJIPEA_N@Z.c)
 */

__int64 __fastcall CFlipToken::CanReleaseAnalogToken(CompositionSurfaceObject **this, unsigned int a2, bool *a3)
{
  __int64 v6; // rdx
  int v7; // edi
  int v8; // eax
  bool v10; // [rsp+30h] [rbp+8h] BYREF

  v10 = 0;
  v7 = CompositionSurfaceObject::SyncIntervalSatisfied(this[4], a2, &v10);
  if ( v7 >= 0 && *((_DWORD *)this + 6) == 2 )
  {
    *a3 = 1;
    *((_DWORD *)this + 6) = 3;
    v10 = 0;
    CFlipToken::TraceStateChanged((CFlipToken *)this, v6);
    v7 = CompositionSurfaceObject::NotifyTokenInFrame(this[4], (const struct CToken *)this, &v10);
    if ( v7 >= 0 )
    {
      *((_BYTE *)this + 88) = v10;
      v8 = (*((__int64 (__fastcall **)(CompositionSurfaceObject **, _QWORD))*this + 17))(this, a2);
      if ( v8 )
        CompositionSurfaceObject::SetSyncRefreshCount(this[4], v8);
    }
  }
  else
  {
    ++*((_DWORD *)this + 7);
  }
  return (unsigned int)v7;
}
