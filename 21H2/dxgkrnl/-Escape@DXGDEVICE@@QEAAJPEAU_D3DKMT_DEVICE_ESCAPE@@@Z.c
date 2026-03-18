/*
 * XREFs of ?Escape@DXGDEVICE@@QEAAJPEAU_D3DKMT_DEVICE_ESCAPE@@@Z @ 0x1C02E51C4
 * Callers:
 *     DxgkEscape @ 0x1C0179FA0 (DxgkEscape.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000C10C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000FABC (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000FB18 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C017D4D0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C017EAE0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DXGDEVICE::Escape(DXGDEVICE *this, struct _D3DKMT_DEVICE_ESCAPE *a2)
{
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  unsigned int v6; // ebx
  __int64 Type; // rdx
  struct DXGPROCESS *Current; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  struct DXGPROCESS *v14; // rax
  D3DKMT_HANDLE v15; // ecx
  __int64 v16; // r9
  __int64 v17; // rdx
  int v18; // ecx
  __int64 v19; // rdx
  struct _EX_RUNDOWN_REF *v20; // rdx
  unsigned int v21; // eax
  _BYTE v22[32]; // [rsp+50h] [rbp-28h] BYREF
  struct _EX_RUNDOWN_REF *v23; // [rsp+80h] [rbp+8h] BYREF

  v6 = 0;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    WdLogSingleEntry1(1LL, 5270LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetRenderCore()->IsCoreResourceSharedOwner()",
      5270LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  Type = a2->Type;
  if ( (_DWORD)Type )
  {
    if ( (_DWORD)Type == 1 )
      return 3221225659LL;
    WdLogSingleEntry2(3LL, Type, -1073741811LL);
    return (unsigned int)-1073741811;
  }
  Current = DXGPROCESS::GetCurrent(v3, Type, v4, v5);
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v22, Current);
  v14 = DXGPROCESS::GetCurrent(v11, v10, v12, v13);
  v15 = (a2->VidPnFromAllocation.hPrimaryAllocation >> 6) & 0xFFFFFF;
  if ( v15 >= *((_DWORD *)v14 + 74) )
    goto LABEL_13;
  v16 = *((_QWORD *)v14 + 35);
  v17 = v15;
  v18 = *(_DWORD *)(v16 + 16LL * v15 + 8);
  if ( ((a2->VidPnFromAllocation.hPrimaryAllocation >> 25) & 0x60) != (v18 & 0x60)
    || (v18 & 0x2000) != 0
    || (v18 & 0x1F) == 0 )
  {
    goto LABEL_13;
  }
  v19 = 2 * v17;
  if ( (v18 & 0x1F) != 5 )
  {
    WdLogSingleEntry1(2LL, 267LL);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
LABEL_13:
    v20 = 0LL;
    goto LABEL_14;
  }
  v20 = *(struct _EX_RUNDOWN_REF **)(v16 + 8 * v19);
LABEL_14:
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v23, v20);
  if ( !v23 || (v21 = *(_DWORD *)(v23[6].Count + 4), (v21 & 1) == 0) && (v21 & 2) == 0 && (v21 & 0x2000) == 0 )
  {
    WdLogSingleEntry2(3LL, a2->VidPnFromAllocation.hPrimaryAllocation, -1073741811LL);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v23);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v22);
    return 3221225485LL;
  }
  a2->VidPnFromAllocation.VidPnSourceId = (v21 >> 6) & 0xF;
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v23);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v22);
  return v6;
}
