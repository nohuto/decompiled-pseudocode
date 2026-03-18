/*
 * XREFs of ?VailSendReleaseCompositionSurfaceReference@DXGSESSIONDATA@@QEAAJI@Z @ 0x1C02B7890
 * Callers:
 *     ?SendUnPairAndRelease@DXGCOMPOSITIONSURFACEPROXY@@IEAAJXZ @ 0x1C028E1C8 (-SendUnPairAndRelease@DXGCOMPOSITIONSURFACEPROXY@@IEAAJXZ.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002808 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002BB0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006598 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?SendReleaseCompositionSurfaceReference@DXG_GUEST_COMPOSITIONOBJECTCHANNEL@@QEAAJI@Z @ 0x1C028E0B0 (-SendReleaseCompositionSurfaceReference@DXG_GUEST_COMPOSITIONOBJECTCHANNEL@@QEAAJI@Z.c)
 *     ?ReleaseVailGuestReference@DXGSESSIONDATA@@QEAAXXZ @ 0x1C02B56C0 (-ReleaseVailGuestReference@DXGSESSIONDATA@@QEAAXXZ.c)
 */

__int64 __fastcall DXGSESSIONDATA::VailSendReleaseCompositionSurfaceReference(DXGSESSIONDATA *this, int a2)
{
  struct DXGFASTMUTEX *v2; // r14
  __int64 v5; // rdx
  __int64 v6; // r8
  struct _EX_RUNDOWN_REF *v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rdx
  _BYTE v21[8]; // [rsp+20h] [rbp-10h] BYREF
  char v22; // [rsp+28h] [rbp-8h]

  v2 = (DXGSESSIONDATA *)((char *)this + 18880);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v21, (DXGSESSIONDATA *)((char *)this + 18880), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v21);
  v7 = (struct _EX_RUNDOWN_REF *)*((_QWORD *)this + 2366);
  if ( v7 )
    ++*((_DWORD *)this + 4730);
  if ( v22 )
  {
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v21, v5);
    v7 = (struct _EX_RUNDOWN_REF *)*((_QWORD *)this + 2366);
  }
  if ( v7 && ExAcquireRundownProtection(v7 + 7) )
  {
    if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)(*(_QWORD *)(*((_QWORD *)this + 2366) + 64LL) + 64LL)) )
    {
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v21, (struct DXGFASTMUTEX *const)(*((_QWORD *)this + 2366) + 16LL), 0);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v21);
      v11 = DXG_GUEST_COMPOSITIONOBJECTCHANNEL::SendReleaseCompositionSurfaceReference(
              *(DXG_GUEST_COMPOSITIONOBJECTCHANNEL **)(*((_QWORD *)this + 2366) + 80LL),
              a2);
      v15 = v11;
      if ( v11 < 0 )
      {
        v16 = WdLogNewEntry5_WdWarning(v13, v12, v14);
        *(_QWORD *)(v16 + 24) = v15;
        WdLogEvent5_WdWarning(v16);
      }
      if ( v22 )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v21, v12);
      ExReleaseRundownProtection((PEX_RUNDOWN_REF)(*(_QWORD *)(*((_QWORD *)this + 2366) + 64LL) + 64LL));
    }
    else
    {
      LODWORD(v15) = -2147483611;
      v17 = WdLogNewEntry5_WdWarning(v9, v8, v10);
      *(_QWORD *)(v17 + 24) = 2LL;
      *(_QWORD *)(v17 + 32) = -2147483611LL;
      WdLogEvent5_WdWarning(v17);
    }
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)(*((_QWORD *)this + 2366) + 56LL));
  }
  else
  {
    LODWORD(v15) = -2147483611;
    v18 = WdLogNewEntry5_WdWarning(v7, v5, v6);
    *(_QWORD *)(v18 + 24) = 1LL;
    *(_QWORD *)(v18 + 32) = -2147483611LL;
    WdLogEvent5_WdWarning(v18);
  }
  if ( *((_QWORD *)this + 2366) )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v21, v2, 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v21);
    DXGSESSIONDATA::ReleaseVailGuestReference(this);
    if ( v22 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v21, v19);
  }
  return (unsigned int)v15;
}
