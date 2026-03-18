/*
 * XREFs of ?Escape@DXGDEVICE@@QEAAJPEAU_D3DKMT_DEVICE_ESCAPE@@@Z @ 0x1C025083C
 * Callers:
 *     DxgkEscape @ 0x1C00FB2D0 (DxgkEscape.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000A6B4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000A89C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000EF94 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00FD6D0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C00FEE50 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0119460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DXGDEVICE::Escape(DXGDEVICE *this, struct _D3DKMT_DEVICE_ESCAPE *a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  unsigned int v6; // ebx
  __int64 v7; // rax
  __int64 Type; // rcx
  __int64 v9; // rax
  struct _KTHREAD **Current; // rax
  D3DKMT_HANDLE hPrimaryAllocation; // esi
  __int64 v13; // rdx
  __int64 v14; // rcx
  struct DXGPROCESS *v15; // rax
  unsigned int v16; // ecx
  __int64 v17; // r8
  __int64 v18; // rdx
  int v19; // ecx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rax
  struct _EX_RUNDOWN_REF *v23; // rdx
  __int64 v24; // rdx
  ULONG_PTR Count; // rcx
  __int64 v26; // r8
  unsigned int v27; // eax
  __int64 v28; // rax
  __int64 v29; // rdx
  _BYTE v30[40]; // [rsp+20h] [rbp-28h] BYREF
  struct _EX_RUNDOWN_REF *v31; // [rsp+50h] [rbp+8h] BYREF

  v6 = 0;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    v7 = WdLogNewEntry5_WdAssertion(v4, v3);
    *(_QWORD *)(v7 + 24) = 5194LL;
    WdLogEvent5_WdAssertion(v7);
  }
  Type = (unsigned int)a2->Type;
  if ( (_DWORD)Type )
  {
    if ( (_DWORD)Type == 1 )
      return 3221225659LL;
    v9 = WdLogNewEntry5_WdWarning(Type, v3, v5);
    *(_QWORD *)(v9 + 24) = a2->Type;
    *(_QWORD *)(v9 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v9);
    return (unsigned int)-1073741811;
  }
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(Type, v3);
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v30, Current);
  hPrimaryAllocation = a2->VidPnFromAllocation.hPrimaryAllocation;
  v15 = DXGPROCESS::GetCurrent(v14, v13);
  v16 = (hPrimaryAllocation >> 6) & 0xFFFFFF;
  if ( v16 >= *((_DWORD *)v15 + 64) )
    goto LABEL_13;
  v17 = *((_QWORD *)v15 + 30);
  v18 = v16;
  v19 = *(_DWORD *)(v17 + 16LL * v16 + 8);
  if ( ((hPrimaryAllocation >> 25) & 0x60) != (v19 & 0x60) || (v19 & 0x2000) != 0 || (v19 & 0x1F) == 0 )
    goto LABEL_13;
  v20 = 2 * v18;
  v21 = v19 & 0x1F;
  if ( (_BYTE)v21 != 5 )
  {
    v22 = WdLogNewEntry5_WdError(v21, v20);
    *(_QWORD *)(v22 + 24) = 267LL;
    WdLogEvent5_WdError(v22);
LABEL_13:
    v23 = 0LL;
    goto LABEL_14;
  }
  v23 = *(struct _EX_RUNDOWN_REF **)(v17 + 8 * v20);
LABEL_14:
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v31, v23);
  if ( !v31
    || (Count = v31[6].Count, v27 = *(_DWORD *)(Count + 4), (v27 & 1) == 0) && (v27 & 2) == 0 && (v27 & 0x2000) == 0 )
  {
    v28 = WdLogNewEntry5_WdWarning(Count, v24, v26);
    *(_QWORD *)(v28 + 24) = a2->VidPnFromAllocation.hPrimaryAllocation;
    *(_QWORD *)(v28 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v28);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v31, v29);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v30);
    return 3221225485LL;
  }
  a2->VidPnFromAllocation.VidPnSourceId = (v27 >> 6) & 0xF;
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v31, v24);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v30);
  return v6;
}
