/*
 * XREFs of CmpLightWeightPrepareSetValueKeyUoW @ 0x1406A4248
 * Callers:
 *     CmpProcessLightWeightUOW @ 0x1406A3E64 (CmpProcessLightWeightUOW.c)
 * Callees:
 *     CmpAllocateTransientPoolWithTag @ 0x140206F90 (CmpAllocateTransientPoolWithTag.c)
 *     CmpFreeTransientPoolWithTag @ 0x140206FA8 (CmpFreeTransientPoolWithTag.c)
 *     CmpSwapValueInList @ 0x1402BD8B4 (CmpSwapValueInList.c)
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 *     CmpGetValueData @ 0x1405F8410 (CmpGetValueData.c)
 *     CmpMarkValueDataDirty @ 0x140666F88 (CmpMarkValueDataDirty.c)
 *     CmpFindNameInList @ 0x1406695F8 (CmpFindNameInList.c)
 *     CmpFreeValue @ 0x14066B438 (CmpFreeValue.c)
 *     CmpLightWeightUpdateSharedSetValueData @ 0x1406A36A0 (CmpLightWeightUpdateSharedSetValueData.c)
 *     CmpInitializeValueNameString @ 0x1406A45C8 (CmpInitializeValueNameString.c)
 *     CmpLightWeightCreateSetValueData @ 0x1406A4644 (CmpLightWeightCreateSetValueData.c)
 *     CmpAddValueKeyNew @ 0x140709FA0 (CmpAddValueKeyNew.c)
 *     CmpAddValueToList @ 0x14087B3B8 (CmpAddValueToList.c)
 *     HvMarkCellDirty @ 0x14087BCE8 (HvMarkCellDirty.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
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
  ULONG_PTR v13; // r15
  unsigned int v14; // eax
  unsigned int v15; // r12d
  unsigned int v16; // r15d
  unsigned int v17; // ebx
  __int64 v18; // rax
  int v19; // eax
  unsigned int v20; // eax
  size_t Size; // [rsp+20h] [rbp-59h]
  unsigned int v23; // [rsp+40h] [rbp-39h] BYREF
  _DWORD *v24; // [rsp+48h] [rbp-31h] BYREF
  PVOID P; // [rsp+50h] [rbp-29h] BYREF
  _DWORD v26[2]; // [rsp+58h] [rbp-21h] BYREF
  _DWORD v27[2]; // [rsp+60h] [rbp-19h] BYREF
  _DWORD v28[2]; // [rsp+68h] [rbp-11h] BYREF
  _DWORD v29[2]; // [rsp+70h] [rbp-9h] BYREF
  __int64 v30; // [rsp+78h] [rbp-1h]
  _OWORD v31[5]; // [rsp+80h] [rbp+7h] BYREF
  _DWORD *v32; // [rsp+E0h] [rbp+67h] BYREF
  char v33; // [rsp+E8h] [rbp+6Fh]
  char v34; // [rsp+F0h] [rbp+77h]
  unsigned int v35; // [rsp+F8h] [rbp+7Fh] BYREF

  v4 = *(_DWORD **)(a1 + 104);
  v35 = 0;
  v23 = 0;
  v5 = 0LL;
  v30 = 0LL;
  v29[1] = 0;
  v27[1] = 0;
  v28[1] = 0;
  v26[1] = 0;
  v7 = *(_QWORD *)(a1 + 48);
  v29[0] = -1;
  v27[0] = -1;
  v28[0] = -1;
  v26[0] = -1;
  v8 = *(_QWORD *)(v7 + 32);
  P = 0LL;
  v33 = 0;
  v34 = 0;
  LOBYTE(v32) = 0;
  v24 = v4;
  v31[0] = 0LL;
  if ( !v4 )
  {
    v9 = CmpLightWeightCreateSetValueData(a1, &v24);
    if ( v9 < 0 )
      return (unsigned int)v9;
    v4 = v24;
    CmpLightWeightUpdateSharedSetValueData((__int64)v24, *(_QWORD *)(a1 + 48));
    --*v4;
  }
  TransientPoolWithTag = CmpAllocateTransientPoolWithTag(PagedPool, 0x10uLL, 0x77554D43u, a4);
  v11 = TransientPoolWithTag;
  if ( !TransientPoolWithTag )
    return (unsigned int)-1073741670;
  *((_QWORD *)TransientPoolWithTag + 1) = 0LL;
  *TransientPoolWithTag = -1;
  TransientPoolWithTag[1] = -1;
  v12 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v8 + 8))(v8, *(unsigned int *)(a1 + 92), v29);
  v13 = v12;
  if ( v12 )
  {
    v14 = *(_DWORD *)(v12 + 4);
    v15 = v14 + 0x80000000;
    if ( v14 < 0x80000000 )
      v15 = v14;
    LODWORD(v24) = v15;
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
                (unsigned int *)&v24,
                (__int64)&P,
                (__int64)&v32,
                (__int64)v28) )
        {
          v9 = -1073741670;
LABEL_34:
          (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v8 + 16))(v8, v29);
          goto LABEL_35;
        }
        v5 = P;
        v15 = (unsigned int)v24;
        v34 = (char)v32;
        v33 = 1;
      }
    }
    if ( !(unsigned __int8)HvMarkCellDirty(v8, *(unsigned int *)(*(_QWORD *)(a1 + 48) + 40LL), 0LL) )
    {
      v9 = -1073741443;
LABEL_30:
      if ( v33 && v5 )
      {
        if ( v34 )
          ExFreePoolWithTag(v5, 0);
        else
          (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v8 + 16))(v8, v28);
      }
      goto LABEL_34;
    }
    v24 = (_DWORD *)(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v8 + 8))(
                      v8,
                      *(unsigned int *)(*(_QWORD *)(a1 + 48) + 40LL),
                      v27);
    *(_DWORD *)(a1 + 72) = *(_DWORD *)(*(_QWORD *)(a1 + 48) + 40LL) >> 31;
    P = ExAllocatePoolWithTag(PagedPool, 0x8000uLL, 0x62534D43u);
    if ( !P )
    {
      v9 = -1073741670;
LABEL_28:
      if ( v24 )
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v8 + 16))(v8, v27);
      goto LABEL_30;
    }
    CmpInitializeValueNameString(v13);
    v32 = v4 + 1;
    if ( !CmpFindNameInList(v8, v4 + 1, (__int64)v31, 0, (__int64)&v35, (__int64)&v23)
      || (LODWORD(Size) = v15, v16 = CmpAddValueKeyNew(v8, Size, *(_DWORD *)(a1 + 72)), v16 == -1) )
    {
      v9 = -1073741670;
LABEL_27:
      ExFreePoolWithTag(P, 0);
      goto LABEL_28;
    }
    v17 = v23;
    if ( v23 != -1 )
    {
      if ( (unsigned __int8)HvMarkCellDirty(v8, v23, 0LL) )
      {
        v18 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v8 + 8))(v8, v17, v26);
        v30 = v18;
        if ( v18 )
        {
          if ( !CmpMarkValueDataDirty(v8, v18) )
          {
            v9 = -1073741443;
LABEL_23:
            if ( v30 )
              (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v8 + 16))(v8, v26);
            goto LABEL_25;
          }
          v19 = CmpSwapValueInList(v8, v16, v35, (__int64)v32);
LABEL_21:
          v9 = v19;
          if ( v19 >= 0 )
          {
            v9 = 0;
            v11[4] = v31[0];
            v20 = v23;
            *(_DWORD *)v11 = v16;
            *((_DWORD *)v11 + 1) = v20;
            *((_DWORD *)v11 + 3) = v15;
            *(_QWORD *)(a1 + 112) = v11;
            v11 = 0LL;
            v16 = -1;
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
      if ( v16 != -1 )
        CmpFreeValue(v8, v16);
      goto LABEL_27;
    }
    v19 = CmpAddValueToList(v8, v16, v35, *(_DWORD *)(a1 + 72), (__int64)v32);
    goto LABEL_21;
  }
  v9 = -1073741670;
LABEL_35:
  if ( v11 )
    CmpFreeTransientPoolWithTag(v11, 0x77554D43u);
  return (unsigned int)v9;
}
