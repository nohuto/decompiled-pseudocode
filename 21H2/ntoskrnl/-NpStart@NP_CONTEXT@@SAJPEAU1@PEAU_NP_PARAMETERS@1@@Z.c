/*
 * XREFs of ?NpStart@NP_CONTEXT@@SAJPEAU1@PEAU_NP_PARAMETERS@1@@Z @ 0x1402933C8
 * Callers:
 *     ?StDmStart@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_DATA_MGR@1@PEAU_STDM_PARAMETERS@@PEAU_RTL_BITMAP@@PEAKK@Z @ 0x140293144 (-StDmStart@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_DATA_MGR@1@PEAU_STDM_PARAMETERS@@PEAU_RTL_B.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall NP_CONTEXT::NpStart(struct NP_CONTEXT *a1, struct NP_CONTEXT::_NP_PARAMETERS *a2)
{
  PVOID *p_P; // r8
  bool v3; // zf
  PVOID *v6; // rcx
  char *v7; // rdx
  PVOID *v8; // rax
  __int128 v9; // xmm1
  __int64 v10; // xmm0_8
  unsigned int v11; // ebx
  PVOID *v12; // rcx
  PVOID *PoolWithTag; // rax
  unsigned __int64 v15; // rcx
  PVOID P; // [rsp+20h] [rbp-10h] BYREF
  PVOID *v17; // [rsp+28h] [rbp-8h]

  P = 0LL;
  p_P = &P;
  v3 = *((_DWORD *)a2 + 1) == 0;
  v17 = &P;
  if ( !v3 )
  {
    do
    {
      PoolWithTag = (PVOID *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x1000uLL, 0x704E6D73u);
      p_P = PoolWithTag;
      if ( !PoolWithTag )
      {
        v11 = -1073741670;
        goto LABEL_11;
      }
      *PoolWithTag = (char *)*v17 + 1;
      *v17 = PoolWithTag;
      v15 = *((unsigned int *)a2 + 1);
      v17 = PoolWithTag;
    }
    while ( (unsigned __int64)*PoolWithTag < v15 );
  }
  v6 = (PVOID *)((char *)a1 + 64);
  if ( *p_P )
  {
    v7 = (char *)*p_P + **((_QWORD **)a1 + 9);
    *p_P = *v6;
    *v6 = P;
    v8 = (PVOID *)*((_QWORD *)a1 + 9);
    if ( v8 == v6 )
    {
      v8 = v17;
      *((_QWORD *)a1 + 9) = v17;
    }
    *v8 = v7;
    p_P = &P;
    P = 0LL;
    v17 = &P;
  }
  v9 = *((_OWORD *)a2 + 1);
  *(_OWORD *)a1 = *(_OWORD *)a2;
  v10 = *((_QWORD *)a2 + 4);
  v11 = 0;
  *((_OWORD *)a1 + 1) = v9;
  *((_QWORD *)a1 + 4) = v10;
  while ( p_P != &P )
  {
    v12 = (PVOID *)P;
    P = *(PVOID *)P;
    if ( v12 == p_P )
    {
      P = 0LL;
      v17 = &P;
    }
    else
    {
      *p_P = (char *)*p_P - 1;
    }
    ExFreePoolWithTag(v12, 0);
LABEL_11:
    p_P = v17;
  }
  return v11;
}
