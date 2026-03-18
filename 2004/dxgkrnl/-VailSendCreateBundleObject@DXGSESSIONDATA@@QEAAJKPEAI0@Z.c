/*
 * XREFs of ?VailSendCreateBundleObject@DXGSESSIONDATA@@QEAAJKPEAI0@Z @ 0x1C02B6E3C
 * Callers:
 *     ?DxgkSendCreateBundleObject@@YAJKPEAI0@Z @ 0x1C028A668 (-DxgkSendCreateBundleObject@@YAJKPEAI0@Z.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002808 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002BB0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006598 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?SendCreateBundleObject@DXG_GUEST_REMOTEOBJECTCHANNEL@@QEAAJKPEAI0@Z @ 0x1C028B348 (-SendCreateBundleObject@DXG_GUEST_REMOTEOBJECTCHANNEL@@QEAAJKPEAI0@Z.c)
 *     ?ReleaseVailGuestReference@DXGSESSIONDATA@@QEAAXXZ @ 0x1C02B56C0 (-ReleaseVailGuestReference@DXGSESSIONDATA@@QEAAXXZ.c)
 */

__int64 __fastcall DXGSESSIONDATA::VailSendCreateBundleObject(
        DXGSESSIONDATA *this,
        unsigned int a2,
        char *a3,
        struct _EX_RUNDOWN_REF *a4)
{
  struct DXGFASTMUTEX *v4; // r14
  __int64 v9; // rdx
  __int64 v10; // r8
  struct _EX_RUNDOWN_REF *v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  int BundleObject; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rdx
  _BYTE v25[8]; // [rsp+20h] [rbp-10h] BYREF
  char v26; // [rsp+28h] [rbp-8h]

  v4 = (DXGSESSIONDATA *)((char *)this + 18880);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v25, (DXGSESSIONDATA *)((char *)this + 18880), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v25);
  v11 = (struct _EX_RUNDOWN_REF *)*((_QWORD *)this + 2366);
  if ( v11 )
    ++*((_DWORD *)this + 4730);
  if ( v26 )
  {
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v25, v9);
    v11 = (struct _EX_RUNDOWN_REF *)*((_QWORD *)this + 2366);
  }
  if ( v11 && ExAcquireRundownProtection(v11 + 7) )
  {
    if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)(*(_QWORD *)(*((_QWORD *)this + 2366) + 64LL) + 64LL)) )
    {
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v25, (struct DXGFASTMUTEX *const)(*((_QWORD *)this + 2366) + 16LL), 0);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v25);
      BundleObject = DXG_GUEST_REMOTEOBJECTCHANNEL::SendCreateBundleObject(
                       *(DXG_GUEST_REMOTEOBJECTCHANNEL **)(*((_QWORD *)this + 2366) + 72LL),
                       a2,
                       a3,
                       a4);
      v19 = BundleObject;
      if ( BundleObject < 0 )
      {
        v20 = WdLogNewEntry5_WdWarning(v17, v16, v18);
        *(_QWORD *)(v20 + 24) = v19;
        WdLogEvent5_WdWarning(v20);
      }
      if ( v26 )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v25, v16);
      ExReleaseRundownProtection((PEX_RUNDOWN_REF)(*(_QWORD *)(*((_QWORD *)this + 2366) + 64LL) + 64LL));
    }
    else
    {
      LODWORD(v19) = -2147483611;
      v21 = WdLogNewEntry5_WdWarning(v13, v12, v14);
      *(_QWORD *)(v21 + 24) = 2LL;
      *(_QWORD *)(v21 + 32) = -2147483611LL;
      WdLogEvent5_WdWarning(v21);
    }
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)(*((_QWORD *)this + 2366) + 56LL));
  }
  else
  {
    LODWORD(v19) = -2147483611;
    v22 = WdLogNewEntry5_WdWarning(v11, v9, v10);
    *(_QWORD *)(v22 + 24) = 1LL;
    *(_QWORD *)(v22 + 32) = -2147483611LL;
    WdLogEvent5_WdWarning(v22);
  }
  if ( *((_QWORD *)this + 2366) )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v25, v4, 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v25);
    DXGSESSIONDATA::ReleaseVailGuestReference(this);
    if ( v26 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v25, v23);
  }
  return (unsigned int)v19;
}
