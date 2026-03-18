/*
 * XREFs of ?DestroyStagingBuffer@DXGPRESENT@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C01EF924
 * Callers:
 *     ??1DXGCONTEXT@@QEAA@XZ @ 0x1C016AB70 (--1DXGCONTEXT@@QEAA@XZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000EDA8 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000FABC (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C019EA90 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     ?DestroyClientResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@@Z @ 0x1C02D5BBC (-DestroyClientResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@@Z.c)
 */

void __fastcall DXGPRESENT::DestroyStagingBuffer(DXGPRESENT *this, struct DXGDEVICE *a2, __int64 a3, __int64 a4)
{
  struct DXGPROCESS *Current; // rbx
  unsigned int v7; // r10d
  __int64 v8; // rax
  __int64 v9; // r9
  int v10; // edx
  void *v11; // rbx
  _BYTE v12[32]; // [rsp+50h] [rbp-28h] BYREF

  if ( !a2 )
  {
    WdLogSingleEntry1(1LL, 9954LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NULL != pDevice", 9954LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *((_DWORD *)this + 105) )
  {
    Current = DXGPROCESS::GetCurrent((__int64)this, (__int64)a2, a3, a4);
    if ( !Current )
    {
      WdLogSingleEntry1(1LL, 9964LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pProcess != NULL", 9964LL, 0LL, 0LL, 0LL, 0LL);
    }
    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v12, Current);
    v7 = *((_DWORD *)this + 105);
    v8 = (v7 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v8 < *((_DWORD *)Current + 74) )
    {
      v9 = *((_QWORD *)Current + 35);
      v10 = *(_DWORD *)(v9 + 16 * v8 + 8);
      if ( ((v7 >> 25) & 0x60) == (*(_BYTE *)(v9 + 16 * v8 + 8) & 0x60) && (v10 & 0x2000) == 0 && (v10 & 0x1F) != 0 )
      {
        if ( (v10 & 0x1F) == 4 )
        {
          v11 = *(void **)(v9 + 16LL * (unsigned int)v8);
          if ( v11 )
            *(_DWORD *)(v9 + 16 * (((unsigned __int64)v7 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
          goto LABEL_13;
        }
        WdLogSingleEntry1(2LL, 267LL);
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
    v11 = 0LL;
LABEL_13:
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v12);
    if ( v11 )
    {
      if ( *((_DWORD *)a2 + 144) == 4 )
        DXGDEVICE::DestroyClientResource(a2, v11);
      else
        DXGDEVICE::DestroyAllocationInternal(
          a2,
          0LL,
          0LL,
          (struct DXGRESOURCE *)v11,
          0LL,
          DXGDEVICE::DestroyFlagsDefault);
    }
    else
    {
      WdLogSingleEntry2(2LL, a2, *((unsigned int *)this + 105));
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Device 0x%I64x: Invalid staging buffer resource handle (0x%I64x) specified",
        (__int64)a2,
        *((unsigned int *)this + 105),
        0LL,
        0LL,
        0LL);
    }
    *((_QWORD *)this + 52) = 0LL;
  }
}
