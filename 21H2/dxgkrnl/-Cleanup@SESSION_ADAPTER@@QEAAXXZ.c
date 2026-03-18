/*
 * XREFs of ?Cleanup@SESSION_ADAPTER@@QEAAXXZ @ 0x1C01E210C
 * Callers:
 *     ?RemoveAdapterFromSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@@Z @ 0x1C01E1F44 (-RemoveAdapterFromSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@@Z.c)
 *     DxgkDestroyCsrssProcess @ 0x1C01E9CA4 (DxgkDestroyCsrssProcess.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C000BD00 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ?DestroyCddDeviceAndContext@SESSION_ADAPTER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C01E2190 (-DestroyCddDeviceAndContext@SESSION_ADAPTER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 */

void __fastcall SESSION_ADAPTER::Cleanup(SESSION_ADAPTER *this)
{
  SESSION_ADAPTER *v2; // r14
  DXGADAPTER *v3; // rcx
  SESSION_ADAPTER *v4; // r15
  SESSION_ADAPTER *v5; // rsi
  int v6; // eax
  SESSION_ADAPTER *v7; // rcx
  SESSION_ADAPTER **v8; // rax

  if ( *((_DWORD *)this + 12) )
  {
    WdLogSingleEntry3(2LL, *((unsigned int *)this + 12), *((int *)this + 3), *((unsigned int *)this + 2));
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Detected multiple reference leakage (0x%I64x) on session adapter for adapter 0x%I64x%08I64x",
      *((unsigned int *)this + 12),
      *((int *)this + 3),
      *((unsigned int *)this + 2),
      0LL,
      0LL);
    *((_DWORD *)this + 12) = 0;
  }
  SESSION_ADAPTER::DestroyCddDeviceAndContext(this, *((struct DXGDEVICE **)this + 7));
  v2 = (SESSION_ADAPTER *)*((_QWORD *)this + 14);
  while ( v2 != (SESSION_ADAPTER *)((char *)this + 112) )
  {
    v4 = v2;
    v5 = v2;
    v2 = *(SESSION_ADAPTER **)v2;
    WdLogSingleEntry4(
      2LL,
      *((unsigned int *)v5 + 10),
      *((unsigned int *)v5 - 4),
      *((int *)this + 3),
      *((unsigned int *)this + 2));
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Detected multiple reference leakage (0x%I64x) on display source (0x%I64x) in session adapter for adapter 0x%I64x%08I64x",
      *((unsigned int *)v5 + 10),
      *((unsigned int *)v5 - 4),
      *((int *)this + 3),
      *((unsigned int *)this + 2),
      0LL);
    if ( *((_QWORD *)v5 + 7) || *((_QWORD *)v5 + 71) )
    {
      WdLogSingleEntry1(1LL, 2868LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"(pDisplaySource->m_pCddPrimaryAllocation[0] == NULL) && (pDisplaySource->m_pCddShadowAllocation == NULL)",
        2868LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    memset((char *)v5 + 56, 0, 0x200uLL);
    v6 = 1 << *((_DWORD *)v5 - 4);
    *((_QWORD *)v5 + 71) = 0LL;
    *((_DWORD *)v5 + 10) = 0;
    *((_DWORD *)this + 26) &= ~v6;
    *((_QWORD *)v5 - 1) = 0LL;
    v7 = *(SESSION_ADAPTER **)v4;
    if ( *(SESSION_ADAPTER **)(*(_QWORD *)v4 + 8LL) != v4 || (v8 = (SESSION_ADAPTER **)*((_QWORD *)v4 + 1), *v8 != v4) )
      __fastfail(3u);
    *v8 = v7;
    *((_QWORD *)v7 + 1) = v8;
    --*((_DWORD *)this + 27);
  }
  v3 = (DXGADAPTER *)*((_QWORD *)this + 2);
  if ( v3 )
  {
    DXGADAPTER::ReleaseReference(v3);
    *((_QWORD *)this + 2) = 0LL;
  }
}
