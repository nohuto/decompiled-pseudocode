/*
 * XREFs of DxgkCreateKeyedMutex2 @ 0x1C0292C30
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

__int64 __fastcall DxgkCreateKeyedMutex2(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct DXGPROCESS *Current; // rsi
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // rdx
  _OWORD *v12; // rax
  unsigned int Value; // r14d
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r8
  DXGGLOBAL *Global; // rax
  __int64 v19; // rdx
  int v20; // r14d
  _DWORD *v21; // r8
  DXGKEYEDMUTEX *v22; // r9
  int v23; // r8d
  _DWORD *v24; // rdx
  unsigned __int64 v25; // rdi
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rdi
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // r8
  int v33; // [rsp+48h] [rbp-60h] BYREF
  __int64 v34; // [rsp+50h] [rbp-58h]
  char v35; // [rsp+58h] [rbp-50h]
  unsigned __int64 v36[2]; // [rsp+60h] [rbp-48h]
  struct _D3DKMT_CREATEKEYEDMUTEX2_FLAGS v37[4]; // [rsp+70h] [rbp-38h]
  unsigned int v38; // [rsp+B8h] [rbp+10h] BYREF
  int v39; // [rsp+C0h] [rbp+18h]
  DXGKEYEDMUTEX *v40; // [rsp+C8h] [rbp+20h] BYREF

  v33 = -1;
  v34 = 0LL;
  if ( (qword_1C00B09B0 & 2) != 0 )
  {
    v35 = 1;
    v33 = 2066;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2066);
  }
  else
  {
    v35 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v33, 2066LL);
  Current = DXGPROCESS::GetCurrent(v5, v4);
  if ( !Current )
  {
    v10 = WdLogNewEntry5_WdError(v7, v6);
    *(_QWORD *)(v10 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v10);
LABEL_11:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v33, v11);
    if ( v35 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v15, &EventProfilerExit, v16, v33);
    }
    return 3221225485LL;
  }
  v12 = (_OWORD *)a1;
  if ( a1 >= MmUserProbeAddress )
    v12 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)v36 = *v12;
  *(_OWORD *)&v37[0].0 = v12[1];
  Value = v37[2].Value;
  if ( v37[3].Value >= 2 )
  {
    v14 = WdLogNewEntry5_WdWarning(MmUserProbeAddress, v6, v9);
    *(_QWORD *)(v14 + 24) = -1073741811LL;
    WdLogEvent5_WdWarning(v14);
    goto LABEL_11;
  }
  v38 = 0;
  v40 = 0LL;
  Global = DXGGLOBAL::GetGlobal(MmUserProbeAddress, v6);
  v20 = DXGGLOBAL::CreateAndOpenKeyedMutex(Global, v36[0], &v40, &v38, *(void **)&v37[0].0, Value, v37[3]);
  if ( v20 >= 0 )
  {
    v21 = (_DWORD *)(a1 + 12);
    if ( a1 + 12 >= MmUserProbeAddress )
      v21 = (_DWORD *)MmUserProbeAddress;
    *v21 = v38;
    v22 = v40;
    v23 = *((_DWORD *)v40 + 8);
    v39 = v23;
    v24 = (_DWORD *)(a1 + 8);
    if ( a1 + 8 >= MmUserProbeAddress )
      v24 = (_DWORD *)MmUserProbeAddress;
    *v24 = v23;
    DXGKEYEDMUTEX::ReleaseReference(v22, (__int64)v24);
  }
  if ( v20 < 0 )
  {
    if ( v38 )
      DXGKEYEDMUTEX::DestroyHandle(v38, v19);
  }
  else
  {
    v25 = v38;
    DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 208));
    v26 = ((unsigned int)v25 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v26 < *((_DWORD *)Current + 64) )
    {
      v27 = *((_QWORD *)Current + 30);
      v28 = ((unsigned int)v25 >> 25) & 0x60;
      if ( (((unsigned int)v25 >> 25) & 0x60) == (*(_BYTE *)(v27 + 16 * v26 + 8) & 0x60)
        && (*(_DWORD *)(v27 + 16 * v26 + 8) & 0x1F) != 0 )
      {
        v29 = 2 * ((v25 >> 6) & 0xFFFFFF);
        if ( (*(_DWORD *)(v27 + 8 * v29 + 8) & 0x2000) == 0 )
        {
          v30 = WdLogNewEntry5_WdAssertion(v28, v27);
          *(_QWORD *)(v30 + 24) = 217LL;
          WdLogEvent5_WdAssertion(v30);
          v27 = *((_QWORD *)Current + 30);
        }
        *(_DWORD *)(v27 + 8 * v29 + 8) &= ~0x2000u;
      }
    }
    *((_QWORD *)Current + 27) = 0LL;
    ExReleasePushLockExclusiveEx((char *)Current + 208, 0LL);
    KeLeaveCriticalRegion();
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v33, v19);
  if ( v35 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v31, &EventProfilerExit, v32, v33);
  return (unsigned int)v20;
}
