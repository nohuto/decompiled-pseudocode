/*
 * XREFs of ?InsertDirectFlipAllocationToList@DXGDEVICE@@AEAAEIPEAVDXGALLOCATION@@@Z @ 0x1C01D8E70
 * Callers:
 *     ?PinDirectFlipResources@DXGDEVICE@@QEAAJIPEBVDXGRESOURCEREFERENCE@@_N@Z @ 0x1C01D8C44 (-PinDirectFlipResources@DXGDEVICE@@QEAAJIPEBVDXGRESOURCEREFERENCE@@_N@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000EE00 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000EF08 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000FABC (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 */

char __fastcall DXGDEVICE::InsertDirectFlipAllocationToList(
        struct _KTHREAD **this,
        unsigned int a2,
        struct DXGALLOCATION *a3)
{
  __int64 v3; // rsi
  __int64 v6; // r9
  char v7; // bl
  unsigned int v8; // ebp
  unsigned int v9; // ecx
  unsigned int v10; // r14d
  __int64 v12; // r15
  __int64 v13; // r14
  unsigned __int64 v14; // rax
  struct _KTHREAD *v15; // rax
  struct _KTHREAD *v16; // r12
  int v17; // edx
  const wchar_t *v18; // r9
  char v19[8]; // [rsp+50h] [rbp-48h] BYREF
  DXGPUSHLOCK *v20; // [rsp+58h] [rbp-40h]
  int v21; // [rsp+60h] [rbp-38h]

  v3 = a2;
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v19, this + 46, 0);
  DXGPUSHLOCK::AcquireExclusive(v20);
  v7 = 0;
  v21 = 2;
  if ( (*((_DWORD *)a3 + 18) & 0x7FE) != 0 )
  {
    WdLogSingleEntry1(1LL, 9144LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"0 == pAllocation->m_DirectFlipIndex",
      9144LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v8 = *((_DWORD *)this + v3 + 350);
  v9 = v8;
  if ( v8 != *((_DWORD *)this + v3 + 366) )
    goto LABEL_4;
  v12 = *((unsigned int *)this + v3 + 350);
  if ( v8 )
  {
    v8 *= 2;
    if ( v8 > 0x300 )
    {
      v13 = 9160LL;
      WdLogSingleEntry1(2LL, 9160LL);
      v17 = 0x40000;
      v18 = L"Reached maximum number of primary allocation, rejecting this request";
LABEL_26:
      DxgkLogInternalTriageEvent(0LL, v17, -1, (__int64)v18, v13, 0LL, 0LL, 0LL, 0LL);
      goto LABEL_12;
    }
  }
  else
  {
    v8 = 4;
  }
  v13 = v8;
  v14 = 8LL * v8;
  if ( !is_mul_ok(v8, 8uLL) )
    v14 = -1LL;
  v15 = (struct _KTHREAD *)operator new[](v14, 0x4B677844u, 256LL, v6);
  v16 = v15;
  if ( !v15 )
  {
    WdLogSingleEntry1(6LL, v8);
    v17 = 262145;
    v18 = L"Failed to grow device primary allocation array to %d entries";
    goto LABEL_26;
  }
  if ( (_DWORD)v12 )
  {
    memmove(v15, this[v3 + 159], 8 * v12);
    operator delete[](this[v3 + 159]);
  }
  this[v3 + 159] = v16;
  v9 = v8;
  *((_DWORD *)this + v3 + 350) = v8;
LABEL_4:
  v10 = 0;
  if ( v9 )
  {
    do
    {
      if ( !*((_QWORD *)this[v3 + 159] + v10) )
        break;
      ++v10;
    }
    while ( v10 < v8 );
  }
  if ( v10 != v9 )
  {
    if ( *((_QWORD *)this[v3 + 159] + v10) )
    {
      WdLogSingleEntry1(1LL, 9204LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"m_DirectFlipAllocation[VidPnSourceId][PinIndex] == NULL",
        9204LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( *((_DWORD *)this + v3 + 350) < *((_DWORD *)this + v3 + 366) )
    {
      WdLogSingleEntry1(1LL, 9205LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"m_DirectFlipAllocationArraySize[VidPnSourceId] >= m_DirectFlipAllocationCount[VidPnSourceId]",
        9205LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v7 = 1;
    *((_QWORD *)this[v3 + 159] + v10) = a3;
    ++*((_DWORD *)this + v3 + 366);
    *((_DWORD *)a3 + 18) ^= (*((_DWORD *)a3 + 18) ^ (2 * v10)) & 0x7FE;
  }
LABEL_12:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v19);
  return v7;
}
