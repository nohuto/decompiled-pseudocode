/*
 * XREFs of ?Cleanup@SESSION_ADAPTER@@QEAAXXZ @ 0x1C00D8E70
 * Callers:
 *     ?RemoveAdapterFromSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@@Z @ 0x1C00D8CAC (-RemoveAdapterFromSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@@Z.c)
 *     DxgkDestroyCsrssProcess @ 0x1C015A65C (DxgkDestroyCsrssProcess.c)
 * Callees:
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000E2A4 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     memset @ 0x1C0026840 (memset.c)
 *     ?DestroyCddDeviceAndContext@SESSION_ADAPTER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00D8EE4 (-DestroyCddDeviceAndContext@SESSION_ADAPTER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 */

void __fastcall SESSION_ADAPTER::Cleanup(DXGADAPTER **this, __int64 a2)
{
  __int64 v3; // rdx
  SESSION_ADAPTER *v4; // rcx
  SESSION_ADAPTER *v5; // rdi
  DXGADAPTER *v6; // rcx
  _QWORD *v7; // rax
  SESSION_ADAPTER *v8; // r14
  SESSION_ADAPTER *v9; // rbp
  _QWORD *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  int v14; // ecx
  SESSION_ADAPTER **v15; // rax

  if ( *((_DWORD *)this + 12) )
  {
    v7 = (_QWORD *)WdLogNewEntry5_WdError(this, a2);
    v7[3] = *((unsigned int *)this + 12);
    v7[4] = *((int *)this + 3);
    v7[5] = *((unsigned int *)this + 2);
    WdLogEvent5_WdError(v7);
    *((_DWORD *)this + 12) = 0;
  }
  SESSION_ADAPTER::DestroyCddDeviceAndContext((SESSION_ADAPTER *)this, this[7]);
  v5 = this[14];
  while ( v5 != (SESSION_ADAPTER *)(this + 14) )
  {
    v8 = v5;
    v9 = v5;
    v5 = *(SESSION_ADAPTER **)v5;
    v10 = (_QWORD *)WdLogNewEntry5_WdError(v4, v3);
    v10[3] = *((unsigned int *)v9 + 10);
    v10[4] = *((unsigned int *)v9 - 4);
    v10[5] = *((int *)this + 3);
    v10[6] = *((unsigned int *)this + 2);
    WdLogEvent5_WdError(v10);
    if ( *((_QWORD *)v9 + 7) || *((_QWORD *)v9 + 71) )
    {
      v13 = WdLogNewEntry5_WdAssertion(v12, v11);
      *(_QWORD *)(v13 + 24) = 2801LL;
      WdLogEvent5_WdAssertion(v13);
    }
    memset((char *)v9 + 56, 0, 0x200uLL);
    v14 = *((_DWORD *)v9 - 4);
    *((_QWORD *)v9 + 71) = 0LL;
    *((_DWORD *)v9 + 10) = 0;
    *((_DWORD *)this + 26) &= ~(1 << v14);
    *((_QWORD *)v9 - 1) = 0LL;
    v4 = *(SESSION_ADAPTER **)v8;
    if ( *(SESSION_ADAPTER **)(*(_QWORD *)v8 + 8LL) != v8 || (v15 = (SESSION_ADAPTER **)*((_QWORD *)v8 + 1), *v15 != v8) )
      __fastfail(3u);
    *v15 = v4;
    *((_QWORD *)v4 + 1) = v15;
    --*((_DWORD *)this + 27);
  }
  v6 = this[2];
  if ( v6 )
  {
    DXGADAPTER::ReleaseReferenceNoTracking(v6);
    this[2] = 0LL;
  }
}
