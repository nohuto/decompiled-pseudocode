/*
 * XREFs of DxgGetCaptureAddressCB @ 0x1C02E80E0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000C10C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000FABC (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000FB18 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x1C0015214 (--0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C017D4D0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C017EAE0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgGetCaptureAddressCB(unsigned int *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  struct DXGPROCESS *Current; // rdi
  unsigned int v7; // ecx
  __int64 v8; // r9
  __int64 v9; // rdx
  int v10; // ecx
  __int64 v11; // rdx
  struct _EX_RUNDOWN_REF *v12; // rdx
  __int64 v13; // rcx
  bool v14; // cf
  struct _EX_RUNDOWN_REF *v15; // rax
  __int64 v16; // r9
  ULONG_PTR Count; // rdx
  unsigned int v18; // ebx
  struct _EX_RUNDOWN_REF *v20; // [rsp+50h] [rbp-68h] BYREF
  _BYTE v21[24]; // [rsp+58h] [rbp-60h] BYREF
  _BYTE v22[8]; // [rsp+70h] [rbp-48h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+78h] [rbp-40h] BYREF

  DXGVALIDATIONPROCESSREATTACH::DXGVALIDATIONPROCESSREATTACH((DXGVALIDATIONPROCESSREATTACH *)v22);
  a1[1] = 0;
  *((_QWORD *)a1 + 1) = 0LL;
  Current = DXGPROCESS::GetCurrent(v3, v2, v4, v5);
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v21, Current);
  v7 = (*a1 >> 6) & 0xFFFFFF;
  if ( v7 >= *((_DWORD *)Current + 74) )
    goto LABEL_7;
  v8 = *((_QWORD *)Current + 35);
  v9 = v7;
  v10 = *(_DWORD *)(v8 + 16LL * v7 + 8);
  if ( ((*a1 >> 25) & 0x60) != (v10 & 0x60) || (v10 & 0x2000) != 0 || (v10 & 0x1F) == 0 )
    goto LABEL_7;
  v11 = 2 * v9;
  if ( (v10 & 0x1F) != 5 )
  {
    WdLogSingleEntry1(2LL, 267LL);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
LABEL_7:
    v12 = 0LL;
    goto LABEL_8;
  }
  v12 = *(struct _EX_RUNDOWN_REF **)(v8 + 8 * v11);
LABEL_8:
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v20, v12);
  if ( !v20 )
    goto LABEL_18;
  v13 = *(_QWORD *)(v20[1].Count + 16);
  if ( !v13 || !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(v13 + 16)) )
    goto LABEL_18;
  v14 = KeGetCurrentIrql() < 2u;
  v15 = v20;
  if ( !v14 )
  {
    v16 = *(_QWORD *)(*(_QWORD *)(v20[1].Count + 16) + 16LL);
    if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v16 + 216) + 64LL) + 40LL) + 28LL) >= 0x2003u )
    {
      WdLogSingleEntry5(0LL, 275LL, 20LL, v16, 0LL, 0LL);
      v15 = v20;
    }
  }
  Count = v15[6].Count;
  if ( (*(_DWORD *)(Count + 4) & 0x20) != 0 && (v15[9].Count & 0x800) != 0 )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD, unsigned int *, unsigned int *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v15[1].Count + 16) + 648LL)
                                                                                               + 8LL)
                                                                                   + 224LL))(
      *(_QWORD *)(*(_QWORD *)(v15[1].Count + 16) + 656LL),
      *(_QWORD *)(Count + 8),
      a1 + 1,
      a1 + 2,
      0LL);
    v18 = 0;
  }
  else
  {
LABEL_18:
    WdLogSingleEntry1(3LL, *a1);
    v18 = -1073741811;
  }
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v20);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v21);
  if ( v22[0] )
    KeUnstackDetachProcess(&ApcState);
  return v18;
}
