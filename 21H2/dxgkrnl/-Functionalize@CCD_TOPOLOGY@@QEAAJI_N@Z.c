/*
 * XREFs of ?Functionalize@CCD_TOPOLOGY@@QEAAJI_N@Z @ 0x1C0163908
 * Callers:
 *     ?RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z @ 0x1C01375F4 (-RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z.c)
 *     DxgkFunctionalizePathsModality @ 0x1C0163740 (DxgkFunctionalizePathsModality.c)
 *     ?DisableDWMVirtualModeOnVidPnSource@@YAJII@Z @ 0x1C0174110 (-DisableDWMVirtualModeOnVidPnSource@@YAJII@Z.c)
 *     ?HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C029624C (-HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEA.c)
 *     ?HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0296F98 (-HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@.c)
 * Callees:
 *     ??0CCD_TOPOLOGY@@QEAA@GG@Z @ 0x1C0135980 (--0CCD_TOPOLOGY@@QEAA@GG@Z.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C0136844 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?FunctionalizeWorker@CCD_TOPOLOGY@@AEAAJI_N@Z @ 0x1C013AEF4 (-FunctionalizeWorker@CCD_TOPOLOGY@@AEAAJI_N@Z.c)
 *     ?AddActiveNonDesktopPathsToTopology@CCD_TOPOLOGY@@AEAAJPEAV1@_N@Z @ 0x1C01639B0 (-AddActiveNonDesktopPathsToTopology@CCD_TOPOLOGY@@AEAAJPEAV1@_N@Z.c)
 *     ?DxgIsRemoteSession@@YAHXZ @ 0x1C0163A98 (-DxgIsRemoteSession@@YAHXZ.c)
 *     ?CopyTopology@CCD_TOPOLOGY@@AEAAJPEBV1@@Z @ 0x1C02EA7E8 (-CopyTopology@CCD_TOPOLOGY@@AEAAJPEBV1@@Z.c)
 *     ?RemoveAllNonDesktopPaths@CCD_TOPOLOGY@@QEAAJPEAE@Z @ 0x1C02EB210 (-RemoveAllNonDesktopPaths@CCD_TOPOLOGY@@QEAAJPEAE@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::Functionalize(CCD_TOPOLOGY *this, unsigned int a2, bool a3)
{
  __int64 v6; // r8
  unsigned int v7; // ebx
  int active; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rax
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rax
  int v25; // eax
  __int64 v26; // rax
  _BYTE v27[64]; // [rsp+20h] [rbp-78h] BYREF
  __int64 v28; // [rsp+60h] [rbp-38h]
  unsigned __int8 v29; // [rsp+B8h] [rbp+20h] BYREF

  CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v27, 8u, 0);
  v7 = 0;
  if ( (unsigned int)DxgIsRemoteSession() || (*((_DWORD *)this + 21) & 1) != 0 )
    goto LABEL_5;
  active = CCD_TOPOLOGY::AddActiveNonDesktopPathsToTopology(this, (struct CCD_TOPOLOGY *)v27, a3);
  v11 = active;
  if ( active < 0 )
    goto LABEL_28;
  if ( active == 255 )
  {
LABEL_5:
    LOBYTE(v6) = a3;
    LODWORD(v11) = CCD_TOPOLOGY::FunctionalizeWorker(this, a2, v6);
LABEL_6:
    v7 = v11;
    goto LABEL_7;
  }
  if ( v28 )
    v13 = *(unsigned __int16 *)(v28 + 20);
  else
    v13 = 0LL;
  v14 = *((_QWORD *)this + 8);
  if ( v14 )
    v15 = *(unsigned __int16 *)(v14 + 20);
  else
    v15 = 0LL;
  if ( (unsigned __int16)v13 <= (unsigned __int16)v15 )
  {
    v16 = WdLogNewEntry5_WdAssertion(v13, v15);
    WdLogEvent5_WdAssertion(v16);
  }
  LOBYTE(v6) = a3;
  v17 = CCD_TOPOLOGY::FunctionalizeWorker((CCD_TOPOLOGY *)v27, a2, v6);
  v11 = v17;
  if ( v17 < 0 )
    goto LABEL_28;
  v29 = 0;
  CCD_TOPOLOGY::RemoveAllNonDesktopPaths((CCD_TOPOLOGY *)v27, &v29);
  if ( !v29 )
  {
    v20 = WdLogNewEntry5_WdAssertion(v19, v18);
    WdLogEvent5_WdAssertion(v20);
  }
  v21 = *((_QWORD *)this + 8);
  v22 = v21 ? *(unsigned __int16 *)(v21 + 20) : 0LL;
  v23 = v28 ? *(unsigned __int16 *)(v28 + 20) : 0LL;
  if ( (_WORD)v22 != (_WORD)v23 )
  {
    v24 = WdLogNewEntry5_WdAssertion(v22, v23);
    WdLogEvent5_WdAssertion(v24);
  }
  v25 = CCD_TOPOLOGY::CopyTopology(this, (const struct CCD_TOPOLOGY *)v27);
  v11 = v25;
  if ( v25 < 0 )
  {
LABEL_28:
    v26 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v26 + 24) = v11;
    WdLogEvent5_WdError(v26);
    goto LABEL_6;
  }
LABEL_7:
  CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v27);
  return v7;
}
