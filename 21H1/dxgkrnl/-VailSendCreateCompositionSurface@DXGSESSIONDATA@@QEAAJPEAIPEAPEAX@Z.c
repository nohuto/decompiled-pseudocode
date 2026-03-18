/*
 * XREFs of ?VailSendCreateCompositionSurface@DXGSESSIONDATA@@QEAAJPEAIPEAPEAX@Z @ 0x1C02B2D24
 * Callers:
 *     ?DxgkCreateRemoteCompositionSurfaceObjectForPairing@@YAJPEAPEAUIPairedSurfaceObject@@PEAPEAX@Z @ 0x1C0288010 (-DxgkCreateRemoteCompositionSurfaceObjectForPairing@@YAJPEAPEAUIPairedSurfaceObject@@PEAPEAX@Z.c)
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000CF20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000D070 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000DBC4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?SendCreateCompositionSurface@DXG_GUEST_COMPOSITIONOBJECTCHANNEL@@QEAAJPEAIPEAPEAX@Z @ 0x1C02898E4 (-SendCreateCompositionSurface@DXG_GUEST_COMPOSITIONOBJECTCHANNEL@@QEAAJPEAIPEAPEAX@Z.c)
 *     ?ReleaseVailGuestReference@DXGSESSIONDATA@@QEAAXXZ @ 0x1C02B1180 (-ReleaseVailGuestReference@DXGSESSIONDATA@@QEAAXXZ.c)
 */

__int64 __fastcall DXGSESSIONDATA::VailSendCreateCompositionSurface(DXGSESSIONDATA *this, unsigned int *a2, void **a3)
{
  struct DXGFASTMUTEX *v3; // r14
  __int64 v7; // rdx
  __int64 v8; // r8
  struct _EX_RUNDOWN_REF *v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  int CompositionSurface; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rdx
  _BYTE v23[8]; // [rsp+20h] [rbp-10h] BYREF
  char v24; // [rsp+28h] [rbp-8h]

  v3 = (DXGSESSIONDATA *)((char *)this + 18880);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v23, (DXGSESSIONDATA *)((char *)this + 18880), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v23);
  v9 = (struct _EX_RUNDOWN_REF *)*((_QWORD *)this + 2366);
  if ( v9 )
    ++*((_DWORD *)this + 4730);
  if ( v24 )
  {
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v23, v7);
    v9 = (struct _EX_RUNDOWN_REF *)*((_QWORD *)this + 2366);
  }
  if ( v9 && ExAcquireRundownProtection(v9 + 7) )
  {
    if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)(*(_QWORD *)(*((_QWORD *)this + 2366) + 64LL) + 64LL)) )
    {
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v23, (struct DXGFASTMUTEX *const)(*((_QWORD *)this + 2366) + 16LL), 0);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v23);
      CompositionSurface = DXG_GUEST_COMPOSITIONOBJECTCHANNEL::SendCreateCompositionSurface(
                             *(DXG_GUEST_COMPOSITIONOBJECTCHANNEL **)(*((_QWORD *)this + 2366) + 80LL),
                             a2,
                             a3);
      v17 = CompositionSurface;
      if ( CompositionSurface < 0 )
      {
        v18 = WdLogNewEntry5_WdWarning(v15, v14, v16);
        *(_QWORD *)(v18 + 24) = v17;
        WdLogEvent5_WdWarning(v18);
      }
      if ( v24 )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v23, v14);
      ExReleaseRundownProtection((PEX_RUNDOWN_REF)(*(_QWORD *)(*((_QWORD *)this + 2366) + 64LL) + 64LL));
    }
    else
    {
      LODWORD(v17) = -2147483611;
      v19 = WdLogNewEntry5_WdWarning(v11, v10, v12);
      *(_QWORD *)(v19 + 24) = 2LL;
      *(_QWORD *)(v19 + 32) = -2147483611LL;
      WdLogEvent5_WdWarning(v19);
    }
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)(*((_QWORD *)this + 2366) + 56LL));
  }
  else
  {
    LODWORD(v17) = -2147483611;
    v20 = WdLogNewEntry5_WdWarning(v9, v7, v8);
    *(_QWORD *)(v20 + 24) = 1LL;
    *(_QWORD *)(v20 + 32) = -2147483611LL;
    WdLogEvent5_WdWarning(v20);
  }
  if ( *((_QWORD *)this + 2366) )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v23, v3, 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v23);
    DXGSESSIONDATA::ReleaseVailGuestReference(this);
    if ( v24 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v23, v21);
  }
  return (unsigned int)v17;
}
