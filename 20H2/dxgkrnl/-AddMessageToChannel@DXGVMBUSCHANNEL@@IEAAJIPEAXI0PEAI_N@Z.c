/*
 * XREFs of ?AddMessageToChannel@DXGVMBUSCHANNEL@@IEAAJIPEAXI0PEAI_N@Z @ 0x1C02B1428
 * Callers:
 *     ?PostAsyncMessage@DXGCHANNELENDPOINTPROXY@@UEAAJPEAXI@Z @ 0x1C02B2360 (-PostAsyncMessage@DXGCHANNELENDPOINTPROXY@@UEAAJPEAXI@Z.c)
 *     ?SendSyncMessage@DXGCHANNELENDPOINTPROXY@@UEAAJPEAXI0PEAI@Z @ 0x1C02B27C0 (-SendSyncMessage@DXGCHANNELENDPOINTPROXY@@UEAAJPEAXI0PEAI@Z.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002808 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002BB0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006598 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027100 (_guard_dispatch_icall_nop.c)
 *     ?CheckDebugBreak@DXGGLOBAL@@QEAAXXZ @ 0x1C003FD30 (-CheckDebugBreak@DXGGLOBAL@@QEAAXXZ.c)
 */

__int64 __fastcall DXGVMBUSCHANNEL::AddMessageToChannel(
        DXGVMBUSCHANNEL *this,
        unsigned int a2,
        _DWORD *a3,
        unsigned int a4,
        unsigned __int64 a5,
        unsigned int *a6,
        bool a7)
{
  __int64 v7; // r14
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  DXGGLOBAL *Global; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  _QWORD *v25; // rax
  _BYTE v27[16]; // [rsp+50h] [rbp-18h] BYREF

  v7 = a2;
  LODWORD(v11) = -1073741823;
  if ( a3 && a4 > 8 )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v27, (DXGVMBUSCHANNEL *)((char *)this + 112), 1);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v27);
    if ( ((unsigned __int8)a3 & 7) != 0 )
    {
      v14 = WdLogNewEntry5_WdAssertion(v13, v12);
      *(_QWORD *)(v14 + 24) = 581LL;
      WdLogEvent5_WdAssertion(v14);
    }
    if ( (a4 & 7) != 0 )
    {
      v15 = WdLogNewEntry5_WdAssertion(v13, v12);
      *(_QWORD *)(v15 + 24) = 582LL;
      WdLogEvent5_WdAssertion(v15);
    }
    if ( (a5 & 7) != 0 )
    {
      v16 = WdLogNewEntry5_WdAssertion(v13, v12);
      *(_QWORD *)(v16 + 24) = 583LL;
      WdLogEvent5_WdAssertion(v16);
    }
    if ( a6 && (*a6 & 7) != 0 )
    {
      v17 = WdLogNewEntry5_WdAssertion(v13, v12);
      *(_QWORD *)(v17 + 24) = 584LL;
      WdLogEvent5_WdAssertion(v17);
    }
    if ( *a3 != (_DWORD)v7 )
    {
      v18 = WdLogNewEntry5_WdAssertion(v13, v12);
      *(_QWORD *)(v18 + 24) = 586LL;
      WdLogEvent5_WdAssertion(v18);
    }
    v11 = (int)((__int64 (__fastcall *)(_QWORD, _DWORD *, _QWORD, _QWORD, bool, unsigned __int64, unsigned __int64, _QWORD))qword_1C00B2100)(
                 *((_QWORD *)this + 2),
                 a3,
                 a4,
                 0LL,
                 a7,
                 a5 & -(__int64)a7,
                 (unsigned __int64)a6 & -(__int64)a7,
                 0LL);
    Global = DXGGLOBAL::GetGlobal(v20, v19);
    DXGGLOBAL::CheckDebugBreak(Global);
    if ( (int)v11 < 0 )
    {
      v25 = (_QWORD *)WdLogNewEntry5_WdWarning(v23, v22, v24);
      v25[3] = v7;
      v25[4] = v11;
      v25[5] = 605LL;
      v25[6] = this;
      WdLogEvent5_WdWarning(v25);
    }
    if ( v27[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v27, v22);
  }
  return (unsigned int)v11;
}
