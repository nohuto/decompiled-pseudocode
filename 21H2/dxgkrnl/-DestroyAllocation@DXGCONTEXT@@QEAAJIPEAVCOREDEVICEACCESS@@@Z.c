/*
 * XREFs of ?DestroyAllocation@DXGCONTEXT@@QEAAJIPEAVCOREDEVICEACCESS@@@Z @ 0x1C03301AC
 * Callers:
 *     ?HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KHPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@IPEAIPEAPEAV1@@Z @ 0x1C03304A4 (-HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KHPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000EDA8 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000FABC (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C019EA90 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     DxgkDestroyClientAllocation @ 0x1C02D7FFC (DxgkDestroyClientAllocation.c)
 */

__int64 __fastcall DXGCONTEXT::DestroyAllocation(DXGCONTEXT *this, __int64 a2, struct COREDEVICEACCESS *a3, __int64 a4)
{
  unsigned int v5; // ebp
  struct DXGPROCESS *Current; // rax
  struct DXGPROCESS *v8; // rdi
  unsigned int v9; // ecx
  __int64 v10; // r8
  int v11; // edx
  __int64 v12; // rbx
  __int64 v14; // rcx
  DXGDEVICE *v15; // r10
  _BYTE v16[32]; // [rsp+50h] [rbp-28h] BYREF

  v5 = a2;
  Current = DXGPROCESS::GetCurrent((__int64)this, a2, (__int64)a3, a4);
  v8 = Current;
  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 200LL) == 4 )
    return 0LL;
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v16, Current);
  v9 = (v5 >> 6) & 0xFFFFFF;
  if ( v9 < *((_DWORD *)v8 + 74) )
  {
    v10 = *((_QWORD *)v8 + 35);
    v11 = *(_DWORD *)(v10 + 16LL * v9 + 8);
    if ( ((v5 >> 25) & 0x60) == (v11 & 0x60) && (v11 & 0x2000) == 0 && (v11 & 0x1F) != 0 )
    {
      if ( (v11 & 0x1F) == 5 )
      {
        v12 = *(_QWORD *)(v10 + 16LL * v9);
        if ( v12 )
          *(_DWORD *)(v10 + 16 * (((unsigned __int64)v5 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
        goto LABEL_9;
      }
      WdLogSingleEntry1(2LL, 267LL);
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
    }
  }
  v12 = 0LL;
LABEL_9:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v16);
  if ( !v12 )
    return 3221225485LL;
  v14 = *(unsigned int *)(*((_QWORD *)this + 2) + 576LL);
  v15 = (DXGDEVICE *)*((_QWORD *)this + 2);
  if ( (_DWORD)v14 == 4 )
    DxgkDestroyClientAllocation(v14, v15, 0LL, 0LL, *(struct DXGALLOCATION ***)(v12 + 40));
  else
    DXGDEVICE::DestroyAllocationInternal(
      v15,
      0LL,
      0LL,
      *(struct DXGRESOURCE **)(v12 + 40),
      a3,
      DXGDEVICE::DestroyFlagsDefault);
  return 0LL;
}
