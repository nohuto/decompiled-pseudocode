/*
 * XREFs of ?RemovePrimaryAllocation@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@@Z @ 0x1C001446C
 * Callers:
 *     ?RemovePrimaryAllocation@DXGDEVICE@@QEAAXPEBVDXGALLOCATION@@@Z @ 0x1C01C6FF4 (-RemovePrimaryAllocation@DXGDEVICE@@QEAAXPEBVDXGALLOCATION@@@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000EE00 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000EF08 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000FABC (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0046D24 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 */

void __fastcall DXGDEVICE::RemovePrimaryAllocation(
        struct _KTHREAD **this,
        unsigned int a2,
        const struct DXGALLOCATION *a3)
{
  __int64 v3; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rsi
  _QWORD *v9; // rax
  int v10; // r8d
  _BYTE v11[8]; // [rsp+60h] [rbp-28h] BYREF
  DXGPUSHLOCK *v12; // [rsp+68h] [rbp-20h]
  int i; // [rsp+70h] [rbp-18h]

  v3 = a2;
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v11, this + 42, 0);
  DXGPUSHLOCK::AcquireExclusive(v12);
  v8 = 0LL;
  for ( i = 2; (unsigned int)v8 < *((_DWORD *)this + v3 + 238); v8 = (unsigned int)(v8 + 1) )
  {
    if ( a3 == *((const struct DXGALLOCATION **)this[v3 + 103] + v8) )
    {
      v9 = (_QWORD *)WdLogNewEntry5_WdTrace(v7, v6);
      v9[3] = a3;
      v9[4] = (unsigned int)v8;
      v9[5] = v3;
      if ( !*((_BYTE *)this + 4 * v3 + 1208) )
      {
        WdLogSingleEntry1(1LL, 872LL);
        if ( bTracingEnabled )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
            McTemplateK0zqqzxxxxx_EtwWriteTransfer(
              v7,
              v6,
              v10,
              0,
              2,
              -1,
              (__int64)L"m_PrimaryDescription[VidPnSourceId].PrimaryCount",
              872LL,
              0LL,
              0LL,
              0LL,
              0LL);
        }
      }
      *((_QWORD *)this[v3 + 103] + v8) = 0LL;
      --*((_BYTE *)this + 4 * v3 + 1208);
    }
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v11);
}
