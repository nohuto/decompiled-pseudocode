/*
 * XREFs of ?RemovePrimaryAllocation@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@@Z @ 0x1C0001B94
 * Callers:
 *     ?RemovePrimaryAllocation@DXGDEVICE@@QEAAXPEBVDXGALLOCATION@@@Z @ 0x1C00DF6DC (-RemovePrimaryAllocation@DXGDEVICE@@QEAAXPEBVDXGALLOCATION@@@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002ADC (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0002B54 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00042F0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 */

void __fastcall DXGDEVICE::RemovePrimaryAllocation(DXGDEVICE *this, unsigned int a2, const struct DXGALLOCATION *a3)
{
  __int64 v3; // rbx
  __int64 v6; // rsi
  _QWORD *v7; // rax
  __int64 v8; // rax
  _BYTE v9[8]; // [rsp+20h] [rbp-28h] BYREF
  DXGPUSHLOCK *v10; // [rsp+28h] [rbp-20h]
  int i; // [rsp+30h] [rbp-18h]

  v3 = a2;
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v9, (DXGDEVICE *)((char *)this + 336), 0);
  DXGPUSHLOCK::AcquireExclusive(v10);
  v6 = 0LL;
  for ( i = 2; (unsigned int)v6 < *((_DWORD *)this + v3 + 238); v6 = (unsigned int)(v6 + 1) )
  {
    if ( a3 == *(const struct DXGALLOCATION **)(*((_QWORD *)this + v3 + 103) + 8 * v6) )
    {
      v7 = (_QWORD *)WdLogNewEntry5_WdTrace();
      v7[3] = a3;
      v7[4] = (unsigned int)v6;
      v7[5] = v3;
      if ( !*((_BYTE *)this + 4 * v3 + 1208) )
      {
        v8 = WdLogNewEntry5_WdAssertion();
        *(_QWORD *)(v8 + 24) = 868LL;
        WdLogEvent5_WdAssertion(v8);
      }
      *(_QWORD *)(*((_QWORD *)this + v3 + 103) + 8 * v6) = 0LL;
      --*((_BYTE *)this + 4 * v3 + 1208);
    }
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v9);
}
