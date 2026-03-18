/*
 * XREFs of DxgEnumHandleChildrenCB @ 0x1C0255F10
 * Callers:
 *     <none>
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C00042D8 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000713C (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x1C000D4DC (--0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C00243B0 (__security_check_cookie.c)
 *     ??1DXGVALIDATIONPROCESSATTACH@@QEAA@XZ @ 0x1C002467C (--1DXGVALIDATIONPROCESSATTACH@@QEAA@XZ.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C00F60C0 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1C01072A4 (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0111EB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgEnumHandleChildrenCB(unsigned int *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  struct DXGPROCESS *Current; // rsi
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // r9
  int v8; // ecx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  struct _EX_RUNDOWN_REF *v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  struct _EX_RUNDOWN_REF *v16; // rax
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rax
  ULONG_PTR Count; // rcx
  int v23; // eax
  struct _EX_RUNDOWN_REF *v25; // [rsp+20h] [rbp-68h] BYREF
  _BYTE v26[24]; // [rsp+28h] [rbp-60h] BYREF
  _BYTE v27[56]; // [rsp+40h] [rbp-48h] BYREF

  DXGVALIDATIONPROCESSREATTACH::DXGVALIDATIONPROCESSREATTACH((DXGVALIDATIONPROCESSREATTACH *)v27);
  Current = DXGPROCESS::GetCurrent(v3, v2);
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v26, (struct _KTHREAD **)Current);
  v5 = 0;
  v6 = (*a1 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v6 >= *((_DWORD *)Current + 64) )
    goto LABEL_7;
  v7 = *((_QWORD *)Current + 30);
  v8 = *(_DWORD *)(v7 + 16LL * (unsigned int)v6 + 8);
  if ( ((*a1 >> 25) & 0x60) != (*(_BYTE *)(v7 + 16LL * (unsigned int)v6 + 8) & 0x60)
    || (v8 & 0x2000) != 0
    || (v8 & 0x1F) == 0 )
  {
    goto LABEL_7;
  }
  v9 = 2 * v6;
  v10 = v8 & 0x1F;
  if ( (_BYTE)v10 != 4 )
  {
    v11 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v11 + 24) = 267LL;
    WdLogEvent5_WdError(v11);
LABEL_7:
    v12 = 0LL;
    goto LABEL_8;
  }
  v12 = *(struct _EX_RUNDOWN_REF **)(v7 + 8 * v9);
LABEL_8:
  DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v25, v12);
  v16 = v25;
  if ( v25 )
  {
    if ( KeGetCurrentIrql() >= 2u )
    {
      v19 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v25[1].Count + 16) + 16LL) + 216LL) + 64LL);
      v20 = *(_QWORD *)(v19 + 40);
      if ( *(_DWORD *)(v20 + 28) >= 0x2003u )
      {
        v21 = WdLogNewEntry5_WdCriticalError(v19, v20);
        *(_QWORD *)(v21 + 24) = 275LL;
        *(_QWORD *)(v21 + 32) = 20LL;
        *(_QWORD *)(v21 + 40) = *(_QWORD *)(*(_QWORD *)(v25[1].Count + 16) + 16LL);
        *(_OWORD *)(v21 + 48) = 0LL;
        WdLogEvent5_WdCriticalError(v21);
        v16 = v25;
      }
    }
    v18 = a1[1];
    Count = v16[3].Count;
    v23 = 0;
    if ( (_DWORD)v18 )
    {
      while ( Count )
      {
        Count = *(_QWORD *)(Count + 64);
        if ( ++v23 >= (unsigned int)v18 )
          goto LABEL_17;
      }
    }
    else
    {
LABEL_17:
      if ( Count )
        v5 = *(_DWORD *)(Count + 16);
    }
  }
  else
  {
    v17 = WdLogNewEntry5_WdWarning(v14, v13, v15);
    *(_QWORD *)(v17 + 24) = *a1;
    WdLogEvent5_WdWarning(v17);
  }
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v25, v18);
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v26);
  DXGVALIDATIONPROCESSATTACH::~DXGVALIDATIONPROCESSATTACH((DXGVALIDATIONPROCESSATTACH *)v27);
  return v5;
}
