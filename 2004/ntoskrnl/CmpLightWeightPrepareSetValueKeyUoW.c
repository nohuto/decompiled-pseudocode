/*
 * XREFs of CmpLightWeightPrepareSetValueKeyUoW @ 0x1406549D4
 * Callers:
 *     CmpProcessLightWeightUOW @ 0x140654690 (CmpProcessLightWeightUOW.c)
 * Callees:
 *     CmpAllocateTransientPoolWithTag @ 0x1402036A0 (CmpAllocateTransientPoolWithTag.c)
 *     CmpFreeTransientPoolWithTag @ 0x1402036B8 (CmpFreeTransientPoolWithTag.c)
 *     CmpSwapValueInList @ 0x1402789E0 (CmpSwapValueInList.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     CmpMarkValueDataDirty @ 0x1405E112C (CmpMarkValueDataDirty.c)
 *     CmpGetValueData @ 0x1405EBEC0 (CmpGetValueData.c)
 *     CmpInitializeValueNameString @ 0x1406433E4 (CmpInitializeValueNameString.c)
 *     CmpLightWeightUpdateSharedSetValueData @ 0x140653CC8 (CmpLightWeightUpdateSharedSetValueData.c)
 *     CmpFindNameInList @ 0x140655778 (CmpFindNameInList.c)
 *     CmpLightWeightCreateSetValueData @ 0x1406557BC (CmpLightWeightCreateSetValueData.c)
 *     CmpFreeValue @ 0x14069DDBC (CmpFreeValue.c)
 *     CmpAddValueKeyNew @ 0x14069E11C (CmpAddValueKeyNew.c)
 *     CmpAddValueToList @ 0x140877EC8 (CmpAddValueToList.c)
 *     HvMarkCellDirty @ 0x1408787F0 (HvMarkCellDirty.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall CmpLightWeightPrepareSetValueKeyUoW(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        struct _LOOKASIDE_LIST_EX *a4)
{
  _DWORD *v4; // rbx
  PVOID v5; // r13
  __int64 v7; // rax
  ULONG_PTR v8; // rdi
  int v9; // ebx
  _DWORD *TransientPoolWithTag; // rax
  _WORD *v11; // rsi
  __int64 v12; // rax
  __int64 v13; // r15
  unsigned int v14; // eax
  unsigned int v15; // r12d
  _WORD *PoolWithTag; // rax
  unsigned int v17; // r15d
  unsigned int v18; // ebx
  __int64 v19; // rax
  int v20; // eax
  unsigned int v21; // eax
  size_t v23; // [rsp+20h] [rbp-59h]
  unsigned int v24; // [rsp+40h] [rbp-39h] BYREF
  _DWORD *v25; // [rsp+48h] [rbp-31h] BYREF
  PVOID P; // [rsp+50h] [rbp-29h] BYREF
  _DWORD v27[2]; // [rsp+58h] [rbp-21h] BYREF
  _DWORD v28[2]; // [rsp+60h] [rbp-19h] BYREF
  _DWORD v29[2]; // [rsp+68h] [rbp-11h] BYREF
  _DWORD v30[2]; // [rsp+70h] [rbp-9h] BYREF
  __int64 v31; // [rsp+78h] [rbp-1h]
  _OWORD v32[5]; // [rsp+80h] [rbp+7h] BYREF
  _DWORD *v33; // [rsp+E0h] [rbp+67h] BYREF
  char v34; // [rsp+E8h] [rbp+6Fh]
  char v35; // [rsp+F0h] [rbp+77h]
  unsigned int v36; // [rsp+F8h] [rbp+7Fh] BYREF

  v4 = *(_DWORD **)(a1 + 104);
  v36 = 0;
  v24 = 0;
  v5 = 0LL;
  v31 = 0LL;
  v30[1] = 0;
  v28[1] = 0;
  v29[1] = 0;
  v27[1] = 0;
  v7 = *(_QWORD *)(a1 + 48);
  v30[0] = -1;
  v28[0] = -1;
  v29[0] = -1;
  v27[0] = -1;
  v8 = *(_QWORD *)(v7 + 32);
  P = 0LL;
  v34 = 0;
  v35 = 0;
  LOBYTE(v33) = 0;
  v25 = v4;
  v32[0] = 0LL;
  if ( !v4 )
  {
    v9 = CmpLightWeightCreateSetValueData(a1, &v25);
    if ( v9 < 0 )
      return (unsigned int)v9;
    v4 = v25;
    CmpLightWeightUpdateSharedSetValueData((__int64)v25, *(_QWORD *)(a1 + 48));
    --*v4;
  }
  TransientPoolWithTag = CmpAllocateTransientPoolWithTag(PagedPool, 0x10uLL, 0x77554D43u, a4);
  v11 = TransientPoolWithTag;
  if ( !TransientPoolWithTag )
    return (unsigned int)-1073741670;
  *((_QWORD *)TransientPoolWithTag + 1) = 0LL;
  *TransientPoolWithTag = -1;
  TransientPoolWithTag[1] = -1;
  v12 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v8 + 8))(v8, *(unsigned int *)(a1 + 92), v30);
  v13 = v12;
  if ( v12 )
  {
    v14 = *(_DWORD *)(v12 + 4);
    v15 = v14 + 0x80000000;
    if ( v14 < 0x80000000 )
      v15 = v14;
    LODWORD(v25) = v15;
    if ( v15 )
    {
      if ( v14 >= 0x80000000 )
      {
        v5 = (PVOID)(v13 + 8);
      }
      else
      {
        if ( !CmpGetValueData(
                v8,
                *(unsigned int *)(a1 + 92),
                v13,
                (unsigned int *)&v25,
                (__int64)&P,
                (__int64)&v33,
                (__int64)v29) )
        {
          v9 = -1073741670;
LABEL_34:
          (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v8 + 16))(v8, v30);
          goto LABEL_35;
        }
        v5 = P;
        v15 = (unsigned int)v25;
        v35 = (char)v33;
        v34 = 1;
      }
    }
    if ( !(unsigned __int8)HvMarkCellDirty(v8, *(unsigned int *)(*(_QWORD *)(a1 + 48) + 40LL), 0LL) )
    {
      v9 = -1073741443;
LABEL_30:
      if ( v34 && v5 )
      {
        if ( v35 )
          ExFreePoolWithTag(v5, 0);
        else
          (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v8 + 16))(v8, v29);
      }
      goto LABEL_34;
    }
    v25 = (_DWORD *)(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v8 + 8))(
                      v8,
                      *(unsigned int *)(*(_QWORD *)(a1 + 48) + 40LL),
                      v28);
    *(_DWORD *)(a1 + 72) = *(_DWORD *)(*(_QWORD *)(a1 + 48) + 40LL) >> 31;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x8000uLL, 0x62534D43u);
    P = PoolWithTag;
    if ( !PoolWithTag )
    {
      v9 = -1073741670;
LABEL_28:
      if ( v25 )
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v8 + 16))(v8, v28);
      goto LABEL_30;
    }
    CmpInitializeValueNameString(v13, (__int64)v32, PoolWithTag);
    v33 = v4 + 1;
    if ( !(unsigned __int8)CmpFindNameInList(v8, (int)v4 + 4, (unsigned int)v32, 0, (__int64)&v36, (__int64)&v24)
      || (LODWORD(v23) = v15, v17 = CmpAddValueKeyNew(v8, v23, *(_DWORD *)(a1 + 72)), v17 == -1) )
    {
      v9 = -1073741670;
LABEL_27:
      ExFreePoolWithTag(P, 0);
      goto LABEL_28;
    }
    v18 = v24;
    if ( v24 != -1 )
    {
      if ( (unsigned __int8)HvMarkCellDirty(v8, v24, 0LL) )
      {
        v19 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v8 + 8))(v8, v18, v27);
        v31 = v19;
        if ( v19 )
        {
          if ( !CmpMarkValueDataDirty(v8, v19) )
          {
            v9 = -1073741443;
LABEL_23:
            if ( v31 )
              (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v8 + 16))(v8, v27);
            goto LABEL_25;
          }
          v20 = CmpSwapValueInList(v8, v17, v36, (__int64)v33);
LABEL_21:
          v9 = v20;
          if ( v20 >= 0 )
          {
            v9 = 0;
            v11[4] = v32[0];
            v21 = v24;
            *(_DWORD *)v11 = v17;
            *((_DWORD *)v11 + 1) = v21;
            *((_DWORD *)v11 + 3) = v15;
            *(_QWORD *)(a1 + 112) = v11;
            v11 = 0LL;
            v17 = -1;
          }
          goto LABEL_23;
        }
        v9 = -1073741670;
      }
      else
      {
        v9 = -1073741443;
      }
LABEL_25:
      if ( v17 != -1 )
        CmpFreeValue(v8, v17);
      goto LABEL_27;
    }
    v20 = CmpAddValueToList(v8, v17, v36, *(_DWORD *)(a1 + 72), (__int64)v33);
    goto LABEL_21;
  }
  v9 = -1073741670;
LABEL_35:
  if ( v11 )
    CmpFreeTransientPoolWithTag(v11, 0x77554D43u);
  return (unsigned int)v9;
}
