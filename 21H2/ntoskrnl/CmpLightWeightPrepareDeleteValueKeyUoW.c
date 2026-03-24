/*
 * XREFs of CmpLightWeightPrepareDeleteValueKeyUoW @ 0x1407319B8
 * Callers:
 *     CmpProcessLightWeightUOW @ 0x1406A3E64 (CmpProcessLightWeightUOW.c)
 * Callees:
 *     CmpAllocateTransientPoolWithTag @ 0x140206F90 (CmpAllocateTransientPoolWithTag.c)
 *     CmpFreeTransientPoolWithTag @ 0x140206FA8 (CmpFreeTransientPoolWithTag.c)
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 *     CmpMarkValueDataDirty @ 0x140666F88 (CmpMarkValueDataDirty.c)
 *     CmpFindNameInList @ 0x1406695F8 (CmpFindNameInList.c)
 *     CmpLightWeightUpdateSharedSetValueData @ 0x1406A36A0 (CmpLightWeightUpdateSharedSetValueData.c)
 *     CmpInitializeValueNameString @ 0x1406A45C8 (CmpInitializeValueNameString.c)
 *     CmpLightWeightCreateSetValueData @ 0x1406A4644 (CmpLightWeightCreateSetValueData.c)
 *     CmpRemoveValueFromList @ 0x1406A54A0 (CmpRemoveValueFromList.c)
 *     HvMarkCellDirty @ 0x14087BCE8 (HvMarkCellDirty.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall CmpLightWeightPrepareDeleteValueKeyUoW(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        struct _LOOKASIDE_LIST_EX *a4)
{
  _DWORD *v4; // rbx
  __int64 v6; // rax
  ULONG_PTR v7; // rdi
  int v8; // ebx
  _DWORD *TransientPoolWithTag; // rax
  _DWORD *v10; // rsi
  ULONG_PTR v11; // r12
  _WORD *PoolWithTag; // rax
  void *v13; // r15
  unsigned int v14; // r12d
  __int64 v15; // r13
  _DWORD *v17; // [rsp+30h] [rbp-28h] BYREF
  _OWORD v18[2]; // [rsp+38h] [rbp-20h] BYREF
  unsigned int v19; // [rsp+A0h] [rbp+48h] BYREF
  unsigned int v20; // [rsp+A8h] [rbp+50h] BYREF
  int v21; // [rsp+B0h] [rbp+58h] BYREF
  int v22; // [rsp+B4h] [rbp+5Ch]
  int v23; // [rsp+B8h] [rbp+60h] BYREF
  int v24; // [rsp+BCh] [rbp+64h]

  v4 = *(_DWORD **)(a1 + 104);
  v20 = 0;
  v19 = 0;
  v24 = 0;
  v22 = 0;
  v6 = *(_QWORD *)(a1 + 48);
  v23 = -1;
  v21 = -1;
  v17 = v4;
  v7 = *(_QWORD *)(v6 + 32);
  v18[0] = 0LL;
  if ( !v4 )
  {
    v8 = CmpLightWeightCreateSetValueData(a1, &v17, a3, a4);
    if ( v8 < 0 )
      return (unsigned int)v8;
    v4 = v17;
    CmpLightWeightUpdateSharedSetValueData((__int64)v17, *(_QWORD *)(a1 + 48));
    --*v4;
  }
  TransientPoolWithTag = CmpAllocateTransientPoolWithTag(PagedPool, 0x10uLL, 0x77554D43u, a4);
  v10 = TransientPoolWithTag;
  if ( TransientPoolWithTag )
  {
    *((_QWORD *)TransientPoolWithTag + 1) = 0LL;
    *TransientPoolWithTag = -1;
    TransientPoolWithTag[1] = -1;
    v11 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(v7 + 8))(v7, *(unsigned int *)(a1 + 88), &v23);
    if ( v11 )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x8000uLL, 0x62534D43u);
      v13 = PoolWithTag;
      if ( PoolWithTag
        && (CmpInitializeValueNameString(v11, (__int64)v18, PoolWithTag),
            CmpFindNameInList(v7, v4 + 1, (__int64)v18, 0, (__int64)&v20, (__int64)&v19)) )
      {
        v14 = v19;
        v15 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(v7 + 8))(v7, v19, &v21);
        if ( CmpMarkValueDataDirty(v7, v15) && (unsigned __int8)HvMarkCellDirty(v7, v14, 0LL) )
        {
          v8 = CmpRemoveValueFromList(v7, v20, v4 + 1);
          if ( v8 >= 0 )
          {
            v10[1] = v14;
            v8 = 0;
            *(_QWORD *)(a1 + 112) = v10;
            v10 = 0LL;
          }
        }
        else
        {
          v8 = -1073741443;
        }
        if ( v15 )
          (*(void (__fastcall **)(ULONG_PTR, int *))(v7 + 16))(v7, &v21);
      }
      else
      {
        v8 = -1073741670;
      }
      (*(void (__fastcall **)(ULONG_PTR, int *))(v7 + 16))(v7, &v23);
      if ( v13 )
        ExFreePoolWithTag(v13, 0);
    }
    else
    {
      v8 = -1073741670;
    }
    if ( v10 )
      CmpFreeTransientPoolWithTag(v10, 0x77554D43u);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v8;
}
