/*
 * XREFs of DxgEnumHandleChildrenCB @ 0x1C02E7EE0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000FABC (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000FB18 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x1C0015214 (--0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C0195040 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1C019E94C (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 */

__int64 __fastcall DxgEnumHandleChildrenCB(unsigned int *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  struct DXGPROCESS *Current; // rdi
  __int64 v7; // rdx
  __int64 v8; // r9
  int v9; // ecx
  __int64 v10; // rdx
  struct _EX_RUNDOWN_REF *v11; // rdx
  __int64 v12; // r9
  unsigned int v13; // edx
  ULONG_PTR Count; // rcx
  int v15; // eax
  unsigned int v16; // ebx
  struct _EX_RUNDOWN_REF *v18; // [rsp+50h] [rbp-68h] BYREF
  _BYTE v19[24]; // [rsp+58h] [rbp-60h] BYREF
  _BYTE v20[8]; // [rsp+70h] [rbp-48h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+78h] [rbp-40h] BYREF

  DXGVALIDATIONPROCESSREATTACH::DXGVALIDATIONPROCESSREATTACH((DXGVALIDATIONPROCESSREATTACH *)v20);
  Current = DXGPROCESS::GetCurrent(v3, v2, v4, v5);
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v19, Current);
  v7 = (*a1 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v7 >= *((_DWORD *)Current + 74) )
    goto LABEL_7;
  v8 = *((_QWORD *)Current + 35);
  v9 = *(_DWORD *)(v8 + 16LL * (unsigned int)v7 + 8);
  if ( ((*a1 >> 25) & 0x60) != (*(_BYTE *)(v8 + 16LL * (unsigned int)v7 + 8) & 0x60)
    || (v9 & 0x2000) != 0
    || (v9 & 0x1F) == 0 )
  {
    goto LABEL_7;
  }
  v10 = 2 * v7;
  if ( (v9 & 0x1F) != 4 )
  {
    WdLogSingleEntry1(2LL, 267LL);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
LABEL_7:
    v11 = 0LL;
    goto LABEL_8;
  }
  v11 = *(struct _EX_RUNDOWN_REF **)(v8 + 8 * v10);
LABEL_8:
  DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v18, v11);
  if ( !v18 )
  {
    WdLogSingleEntry1(3LL, *a1);
    goto LABEL_18;
  }
  if ( KeGetCurrentIrql() >= 2u )
  {
    v12 = *(_QWORD *)(*(_QWORD *)(v18[1].Count + 16) + 16LL);
    if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v12 + 216) + 64LL) + 40LL) + 28LL) >= 0x2003u )
      WdLogSingleEntry5(0LL, 275LL, 20LL, v12, 0LL, 0LL);
  }
  v13 = a1[1];
  Count = v18[3].Count;
  v15 = 0;
  if ( v13 )
  {
    while ( Count )
    {
      Count = *(_QWORD *)(Count + 64);
      if ( ++v15 >= v13 )
        goto LABEL_17;
    }
    goto LABEL_18;
  }
LABEL_17:
  if ( !Count )
  {
LABEL_18:
    v16 = 0;
    goto LABEL_20;
  }
  v16 = *(_DWORD *)(Count + 16);
LABEL_20:
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v18);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v19);
  if ( v20[0] )
    KeUnstackDetachProcess(&ApcState);
  return v16;
}
