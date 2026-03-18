/*
 * XREFs of DxgGetHandleParentCB @ 0x1C02E8350
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000FABC (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000FB18 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x1C0015214 (--0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C017D4D0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C017EAE0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgGetHandleParentCB(unsigned int a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  struct DXGPROCESS *Current; // rdi
  unsigned int v7; // edx
  __int64 v8; // r9
  __int64 v9; // r8
  int v10; // edx
  __int64 v11; // r8
  struct _EX_RUNDOWN_REF *v12; // rdx
  ULONG_PTR Count; // rcx
  unsigned int v14; // ebx
  struct _EX_RUNDOWN_REF *v16; // [rsp+50h] [rbp-68h] BYREF
  _BYTE v17[24]; // [rsp+58h] [rbp-60h] BYREF
  _BYTE v18[8]; // [rsp+70h] [rbp-48h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+78h] [rbp-40h] BYREF

  v1 = a1;
  DXGVALIDATIONPROCESSREATTACH::DXGVALIDATIONPROCESSREATTACH((DXGVALIDATIONPROCESSREATTACH *)v18);
  Current = DXGPROCESS::GetCurrent(v3, v2, v4, v5);
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v17, Current);
  v7 = ((unsigned int)v1 >> 6) & 0xFFFFFF;
  if ( v7 >= *((_DWORD *)Current + 74) )
    goto LABEL_7;
  v8 = *((_QWORD *)Current + 35);
  v9 = v7;
  v10 = *(_DWORD *)(v8 + 16LL * v7 + 8);
  if ( (((unsigned int)v1 >> 25) & 0x60) != (v10 & 0x60) || (v10 & 0x2000) != 0 || (v10 & 0x1F) == 0 )
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
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v16, v12);
  if ( v16 )
  {
    Count = v16[5].Count;
    if ( Count )
    {
      v14 = *(_DWORD *)(Count + 16);
      goto LABEL_14;
    }
  }
  else
  {
    WdLogSingleEntry1(3LL, v1);
  }
  v14 = 0;
LABEL_14:
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v16);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v17);
  if ( v18[0] )
    KeUnstackDetachProcess(&ApcState);
  return v14;
}
