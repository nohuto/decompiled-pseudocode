/*
 * XREFs of ?VailRegisterCompositionSurfaceProxy@DXGSESSIONDATA@@QEAAJPEAVDXGCOMPOSITIONSURFACEPROXY@@@Z @ 0x1C02B67D8
 * Callers:
 *     ?Initialize@DXGCOMPOSITIONSURFACEPROXY@@QEAAJXZ @ 0x1C028C924 (-Initialize@DXGCOMPOSITIONSURFACEPROXY@@QEAAJXZ.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002808 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002BB0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006598 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?RegisterCompositionSurfaceProxy@DXG_GUEST_COMPOSITIONOBJECTCHANNEL@@QEAAJPEAVDXGCOMPOSITIONSURFACEPROXY@@@Z @ 0x1C028DA50 (-RegisterCompositionSurfaceProxy@DXG_GUEST_COMPOSITIONOBJECTCHANNEL@@QEAAJPEAVDXGCOMPOSITIONSURF.c)
 *     ?ReleaseVailGuestReference@DXGSESSIONDATA@@QEAAXXZ @ 0x1C02B56C0 (-ReleaseVailGuestReference@DXGSESSIONDATA@@QEAAXXZ.c)
 *     ?VailEnsureConnection@DXGSESSIONDATA@@QEAAJXZ @ 0x1C02B6444 (-VailEnsureConnection@DXGSESSIONDATA@@QEAAJXZ.c)
 */

__int64 __fastcall DXGSESSIONDATA::VailRegisterCompositionSurfaceProxy(
        struct _EX_RUNDOWN_REF **this,
        struct DXGCOMPOSITIONSURFACEPROXY *a2)
{
  __int64 v4; // rdi
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
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rdx
  _BYTE v20[8]; // [rsp+20h] [rbp-10h] BYREF
  char v21; // [rsp+28h] [rbp-8h]

  LODWORD(v4) = DXGSESSIONDATA::VailEnsureConnection((DXGSESSIONDATA *)this);
  if ( (int)v4 >= 0 )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v20, (struct DXGFASTMUTEX *const)(this + 2360), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v20);
    v7 = this[2366];
    if ( v7 )
      ++*((_DWORD *)this + 4730);
    if ( v21 )
    {
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v20, v5);
      v7 = this[2366];
    }
    if ( v7 && ExAcquireRundownProtection(v7 + 7) )
    {
      if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)(this[2366][8].Count + 64)) )
      {
        DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v20, (struct DXGFASTMUTEX *const)&this[2366][2], 0);
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v20);
        v11 = DXG_GUEST_COMPOSITIONOBJECTCHANNEL::RegisterCompositionSurfaceProxy(
                (DXG_GUEST_COMPOSITIONOBJECTCHANNEL *)this[2366][10].Count,
                a2);
        v4 = v11;
        if ( v11 < 0 )
        {
          v15 = WdLogNewEntry5_WdWarning(v13, v12, v14);
          *(_QWORD *)(v15 + 24) = v4;
          WdLogEvent5_WdWarning(v15);
        }
        if ( v21 )
          DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v20, v12);
        ExReleaseRundownProtection((PEX_RUNDOWN_REF)(this[2366][8].Count + 64));
      }
      else
      {
        LODWORD(v4) = -2147483611;
        v16 = WdLogNewEntry5_WdWarning(v9, v8, v10);
        *(_QWORD *)(v16 + 24) = 2LL;
        *(_QWORD *)(v16 + 32) = -2147483611LL;
        WdLogEvent5_WdWarning(v16);
      }
      ExReleaseRundownProtection(this[2366] + 7);
    }
    else
    {
      LODWORD(v4) = -2147483611;
      v17 = WdLogNewEntry5_WdWarning(v7, v5, v6);
      *(_QWORD *)(v17 + 24) = 1LL;
      *(_QWORD *)(v17 + 32) = -2147483611LL;
      WdLogEvent5_WdWarning(v17);
    }
    if ( this[2366] )
    {
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v20, (struct DXGFASTMUTEX *const)(this + 2360), 0);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v20);
      DXGSESSIONDATA::ReleaseVailGuestReference((DXGSESSIONDATA *)this);
      if ( v21 )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v20, v18);
    }
  }
  return (unsigned int)v4;
}
