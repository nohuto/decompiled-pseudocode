/*
 * XREFs of DxgkCreateKeyedMutex @ 0x1C03423C0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000EE00 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C005591C (-ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CreateAndOpenKeyedMutex@DXGGLOBAL@@QEAAJ_KPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXIU_D3DKMT_CREATEKEYEDMUTEX2_FLAGS@@@Z @ 0x1C033ECC4 (-CreateAndOpenKeyedMutex@DXGGLOBAL@@QEAAJ_KPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXIU_D3DKMT_CREATEKEYEDMU.c)
 *     ?DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z @ 0x1C033F5C8 (-DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z.c)
 */

__int64 __fastcall DxgkCreateKeyedMutex(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  struct DXGPROCESS *Current; // rsi
  __int64 v9; // rcx
  __int64 v10; // r8
  _OWORD *v12; // rax
  DXGGLOBAL *Global; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  int v17; // r14d
  _DWORD *v18; // r8
  DXGKEYEDMUTEX *v19; // r9
  int v20; // r8d
  _DWORD *v21; // rdx
  unsigned __int64 v22; // rdi
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rdi
  __int64 v26; // rcx
  __int64 v27; // r8
  unsigned __int64 v28[2]; // [rsp+58h] [rbp-50h]
  int v29; // [rsp+68h] [rbp-40h] BYREF
  __int64 v30; // [rsp+70h] [rbp-38h]
  char v31; // [rsp+78h] [rbp-30h]
  unsigned int v32; // [rsp+B8h] [rbp+10h] BYREF
  int v33; // [rsp+C0h] [rbp+18h]
  DXGKEYEDMUTEX *v34; // [rsp+C8h] [rbp+20h] BYREF

  v29 = -1;
  v30 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v31 = 1;
    v29 = 2051;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2051);
  }
  else
  {
    v31 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v29, 2051);
  Current = DXGPROCESS::GetCurrent(v5, v4, v6, v7);
  if ( Current )
  {
    v12 = (_OWORD *)a1;
    if ( a1 >= MmUserProbeAddress )
      v12 = (_OWORD *)MmUserProbeAddress;
    *(_OWORD *)v28 = *v12;
    v32 = 0;
    v34 = 0LL;
    Global = DXGGLOBAL_GetGlobal();
    v17 = DXGGLOBAL::CreateAndOpenKeyedMutex(Global, v28[0], &v34, &v32, 0LL, 0, 0);
    if ( v17 >= 0 )
    {
      v18 = (_DWORD *)(a1 + 12);
      if ( a1 + 12 >= MmUserProbeAddress )
        v18 = (_DWORD *)MmUserProbeAddress;
      *v18 = v32;
      v19 = v34;
      v20 = *((_DWORD *)v34 + 8);
      v33 = v20;
      v21 = (_DWORD *)(a1 + 8);
      if ( a1 + 8 >= MmUserProbeAddress )
        v21 = (_DWORD *)MmUserProbeAddress;
      *v21 = v20;
      DXGKEYEDMUTEX::ReleaseReference(v19);
    }
    if ( v17 < 0 )
    {
      if ( v32 )
        DXGKEYEDMUTEX::DestroyHandle(v32, v14, v15, v16);
    }
    else
    {
      v22 = v32;
      DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 248));
      v23 = ((unsigned int)v22 >> 6) & 0xFFFFFF;
      if ( (unsigned int)v23 < *((_DWORD *)Current + 74) )
      {
        v24 = *((_QWORD *)Current + 35);
        if ( (((unsigned int)v22 >> 25) & 0x60) == (*(_BYTE *)(v24 + 16 * v23 + 8) & 0x60)
          && (*(_DWORD *)(v24 + 16 * v23 + 8) & 0x1F) != 0 )
        {
          v25 = 2 * ((v22 >> 6) & 0xFFFFFF);
          if ( (*(_DWORD *)(v24 + 8 * v25 + 8) & 0x2000) == 0 )
          {
            WdLogSingleEntry1(1LL, 217LL);
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              -1,
              (__int64)L"m_pEntryTable[GetIndex(hObject)].Destroyed",
              217LL,
              0LL,
              0LL,
              0LL,
              0LL);
            v24 = *((_QWORD *)Current + 35);
          }
          *(_DWORD *)(v24 + 8 * v25 + 8) &= ~0x2000u;
        }
      }
      *((_QWORD *)Current + 32) = 0LL;
      ExReleasePushLockExclusiveEx((char *)Current + 248, 0LL);
      KeLeaveCriticalRegion();
    }
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v29);
    if ( v31 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v26, &EventProfilerExit, v27, v29);
    return (unsigned int)v17;
  }
  else
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid process context, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v29);
    if ( v31 )
    {
      LOBYTE(v9) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v9, &EventProfilerExit, v10, v29);
    }
    return 3221225485LL;
  }
}
