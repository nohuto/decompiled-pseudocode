/*
 * XREFs of DxgGetCaptureAddressCB @ 0x1C02570E0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0004298 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00042F0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000713C (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x1C000D47C (--0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00271E0 (_guard_dispatch_icall_nop.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00FD140 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C00FE8C0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0113030 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgGetCaptureAddressCB(unsigned int *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  struct DXGPROCESS *Current; // rdi
  unsigned int v5; // ecx
  __int64 v6; // r9
  __int64 v7; // rdx
  int v8; // ecx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  struct _EX_RUNDOWN_REF *v12; // rdx
  ULONG_PTR Count; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  unsigned __int8 CurrentIrql; // al
  bool v17; // cf
  struct _EX_RUNDOWN_REF *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rdx
  unsigned int v23; // ebx
  __int64 v24; // rax
  struct _EX_RUNDOWN_REF *v26; // [rsp+30h] [rbp-19h] BYREF
  _BYTE v27[24]; // [rsp+38h] [rbp-11h] BYREF
  _BYTE v28[8]; // [rsp+50h] [rbp+7h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+58h] [rbp+Fh] BYREF

  DXGVALIDATIONPROCESSREATTACH::DXGVALIDATIONPROCESSREATTACH((DXGVALIDATIONPROCESSREATTACH *)v28);
  a1[1] = 0;
  *((_QWORD *)a1 + 1) = 0LL;
  Current = DXGPROCESS::GetCurrent(v3, v2);
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v27, (struct _KTHREAD **)Current);
  v5 = (*a1 >> 6) & 0xFFFFFF;
  if ( v5 >= *((_DWORD *)Current + 64) )
    goto LABEL_7;
  v6 = *((_QWORD *)Current + 30);
  v7 = v5;
  v8 = *(_DWORD *)(v6 + 16LL * v5 + 8);
  if ( ((*a1 >> 25) & 0x60) != (v8 & 0x60) || (v8 & 0x2000) != 0 || (v8 & 0x1F) == 0 )
    goto LABEL_7;
  v9 = 2 * v7;
  v10 = v8 & 0x1F;
  if ( (_BYTE)v10 != 5 )
  {
    v11 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v11 + 24) = 267LL;
    WdLogEvent5_WdError(v11);
LABEL_7:
    v12 = 0LL;
    goto LABEL_8;
  }
  v12 = *(struct _EX_RUNDOWN_REF **)(v6 + 8 * v9);
LABEL_8:
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v26, v12);
  if ( !v26 )
    goto LABEL_18;
  v14 = *(_QWORD *)(v26[1].Count + 16);
  if ( !v14 || !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(v14 + 16)) )
    goto LABEL_18;
  CurrentIrql = KeGetCurrentIrql();
  v17 = CurrentIrql < 2u;
  v18 = v26;
  if ( !v17 )
  {
    v19 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v26[1].Count + 16) + 16LL) + 216LL) + 64LL);
    v20 = *(_QWORD *)(v19 + 40);
    if ( *(_DWORD *)(v20 + 28) >= 0x2003u )
    {
      v21 = WdLogNewEntry5_WdCriticalError(v19, v20);
      *(_QWORD *)(v21 + 24) = 275LL;
      *(_QWORD *)(v21 + 32) = 20LL;
      *(_QWORD *)(v21 + 40) = *(_QWORD *)(*(_QWORD *)(v26[1].Count + 16) + 16LL);
      *(_OWORD *)(v21 + 48) = 0LL;
      WdLogEvent5_WdCriticalError(v21);
      v18 = v26;
    }
  }
  Count = v18[6].Count;
  v14 = *(unsigned int *)(Count + 4);
  if ( (v14 & 0x20) != 0 && (v18[9].Count & 0x800) != 0 )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD, unsigned int *, unsigned int *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v18[1].Count + 16) + 640LL)
                                                                                               + 8LL)
                                                                                   + 224LL))(
      *(_QWORD *)(*(_QWORD *)(v18[1].Count + 16) + 648LL),
      *(_QWORD *)(Count + 8),
      a1 + 1,
      a1 + 2,
      0LL);
    v23 = 0;
  }
  else
  {
LABEL_18:
    v24 = WdLogNewEntry5_WdWarning(v14, Count, v15);
    *(_QWORD *)(v24 + 24) = *a1;
    WdLogEvent5_WdWarning(v24);
    v23 = -1073741811;
  }
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v26, v22);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v27);
  if ( v28[0] )
    KeUnstackDetachProcess(&ApcState);
  return v23;
}
