/*
 * XREFs of CmpRemoveValueFromList @ 0x1406030D0
 * Callers:
 *     CmSetValueKey @ 0x1406594E0 (CmSetValueKey.c)
 *     CmDeleteValueKey @ 0x14065B364 (CmDeleteValueKey.c)
 *     CmpLightWeightPrepareDeleteValueKeyUoW @ 0x140731B78 (CmpLightWeightPrepareDeleteValueKeyUoW.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     HvReallocateCell @ 0x14065B1D0 (HvReallocateCell.c)
 *     HvFreeCell @ 0x140720914 (HvFreeCell.c)
 */

__int64 __fastcall CmpRemoveValueFromList(ULONG_PTR a1, unsigned int a2, unsigned int *a3)
{
  __int64 v4; // rbx
  ULONG_PTR v6; // rdx
  unsigned int v7; // edi
  __int64 v8; // rax
  ULONG_PTR v9; // rdx
  int v10; // r14d
  __int64 result; // rax
  _DWORD *v12; // rdx
  int v13; // [rsp+60h] [rbp+18h] BYREF
  int v14; // [rsp+64h] [rbp+1Ch]
  __int64 v15; // [rsp+68h] [rbp+20h] BYREF

  v4 = a2;
  v6 = a3[1];
  v7 = *a3 - 1;
  if ( *a3 == 1 )
  {
    HvFreeCell(a1, v6);
    v10 = -1;
LABEL_5:
    a3[1] = v10;
    result = 0LL;
    *a3 = v7;
    return result;
  }
  v13 = -1;
  v14 = 0;
  v8 = (*(__int64 (__fastcall **)(ULONG_PTR, ULONG_PTR, int *))(a1 + 8))(a1, v6, &v13);
  if ( v8 )
  {
    if ( (unsigned int)v4 < v7 )
    {
      v12 = (_DWORD *)(v8 + 4 * v4);
      do
      {
        v4 = (unsigned int)(v4 + 1);
        *v12++ = *(_DWORD *)(v8 + 4 * v4);
      }
      while ( (unsigned int)v4 < v7 );
    }
    (*(void (__fastcall **)(ULONG_PTR, int *))(a1 + 16))(a1, &v13);
    v9 = a3[1];
    v15 = 0LL;
    v10 = HvReallocateCell(a1, v9, (__int64)&v15, (__int64)&v13);
    (*(void (__fastcall **)(ULONG_PTR, int *))(a1 + 16))(a1, &v13);
    goto LABEL_5;
  }
  return 3221225626LL;
}
