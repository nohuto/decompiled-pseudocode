/*
 * XREFs of DxgkCreateKeyedMutex @ 0x1C02928F0
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002ADC (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CA8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006148 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024458 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C0040074 (-ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0113030 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CreateAndOpenKeyedMutex@DXGGLOBAL@@QEAAJ_KPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXIU_D3DKMT_CREATEKEYEDMUTEX2_FLAGS@@@Z @ 0x1C028F9C0 (-CreateAndOpenKeyedMutex@DXGGLOBAL@@QEAAJ_KPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXIU_D3DKMT_CREATEKEYEDMU.c)
 *     ?DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z @ 0x1C029019C (-DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z.c)
 */

__int64 __fastcall DxgkCreateKeyedMutex(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct DXGPROCESS *Current; // rsi
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  _OWORD *v14; // rax
  DXGGLOBAL *Global; // rax
  __int64 v16; // rdx
  int v17; // r14d
  _DWORD *v18; // r8
  DXGKEYEDMUTEX *v19; // r9
  int v20; // r8d
  _DWORD *v21; // rdx
  unsigned __int64 v22; // rdi
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rdi
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // r8
  unsigned __int64 v30[2]; // [rsp+48h] [rbp-50h]
  int v31; // [rsp+58h] [rbp-40h] BYREF
  __int64 v32; // [rsp+60h] [rbp-38h]
  char v33; // [rsp+68h] [rbp-30h]
  unsigned int v34; // [rsp+A8h] [rbp+10h] BYREF
  int v35; // [rsp+B0h] [rbp+18h]
  DXGKEYEDMUTEX *v36; // [rsp+B8h] [rbp+20h] BYREF

  v31 = -1;
  v32 = 0LL;
  if ( (qword_1C00B09B0 & 2) != 0 )
  {
    v33 = 1;
    v31 = 2051;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2051);
  }
  else
  {
    v33 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v31, 2051LL);
  Current = DXGPROCESS::GetCurrent(v5, v4);
  if ( Current )
  {
    v14 = (_OWORD *)a1;
    if ( a1 >= MmUserProbeAddress )
      v14 = (_OWORD *)MmUserProbeAddress;
    *(_OWORD *)v30 = *v14;
    v34 = 0;
    v36 = 0LL;
    Global = DXGGLOBAL::GetGlobal(MmUserProbeAddress, v6);
    v17 = DXGGLOBAL::CreateAndOpenKeyedMutex(Global, v30[0], &v36, &v34, 0LL, 0, 0);
    if ( v17 >= 0 )
    {
      v18 = (_DWORD *)(a1 + 12);
      if ( a1 + 12 >= MmUserProbeAddress )
        v18 = (_DWORD *)MmUserProbeAddress;
      *v18 = v34;
      v19 = v36;
      v20 = *((_DWORD *)v36 + 8);
      v35 = v20;
      v21 = (_DWORD *)(a1 + 8);
      if ( a1 + 8 >= MmUserProbeAddress )
        v21 = (_DWORD *)MmUserProbeAddress;
      *v21 = v20;
      DXGKEYEDMUTEX::ReleaseReference(v19, (__int64)v21);
    }
    if ( v17 < 0 )
    {
      if ( v34 )
        DXGKEYEDMUTEX::DestroyHandle(v34, v16);
    }
    else
    {
      v22 = v34;
      DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 208));
      v23 = ((unsigned int)v22 >> 6) & 0xFFFFFF;
      if ( (unsigned int)v23 < *((_DWORD *)Current + 64) )
      {
        v24 = *((_QWORD *)Current + 30);
        v25 = ((unsigned int)v22 >> 25) & 0x60;
        if ( (((unsigned int)v22 >> 25) & 0x60) == (*(_BYTE *)(v24 + 16 * v23 + 8) & 0x60)
          && (*(_DWORD *)(v24 + 16 * v23 + 8) & 0x1F) != 0 )
        {
          v26 = 2 * ((v22 >> 6) & 0xFFFFFF);
          if ( (*(_DWORD *)(v24 + 8 * v26 + 8) & 0x2000) == 0 )
          {
            v27 = WdLogNewEntry5_WdAssertion(v25, v24);
            *(_QWORD *)(v27 + 24) = 217LL;
            WdLogEvent5_WdAssertion(v27);
            v24 = *((_QWORD *)Current + 30);
          }
          *(_DWORD *)(v24 + 8 * v26 + 8) &= ~0x2000u;
        }
      }
      *((_QWORD *)Current + 27) = 0LL;
      ExReleasePushLockExclusiveEx((char *)Current + 208, 0LL);
      KeLeaveCriticalRegion();
    }
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v31, v16);
    if ( v33 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v28, &EventProfilerExit, v29, v31);
    return (unsigned int)v17;
  }
  else
  {
    v9 = WdLogNewEntry5_WdError(v7, v6);
    *(_QWORD *)(v9 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v9);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v31, v10);
    if ( v33 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v11, &EventProfilerExit, v12, v31);
    }
    return 3221225485LL;
  }
}
