/*
 * XREFs of CmpRemoveValueFromList @ 0x1406C83E0
 * Callers:
 *     CmDeleteValueKey @ 0x14066C6F4 (CmDeleteValueKey.c)
 *     CmSetValueKey @ 0x14066E7B0 (CmSetValueKey.c)
 *     CmpLightWeightPrepareDeleteValueKeyUoW @ 0x14072D688 (CmpLightWeightPrepareDeleteValueKeyUoW.c)
 *     CmpCommitDeleteValueKeyUoW @ 0x140760C44 (CmpCommitDeleteValueKeyUoW.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     HvReallocateCell @ 0x14066CE2C (HvReallocateCell.c)
 *     HvFreeCell @ 0x140706E0C (HvFreeCell.c)
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
  __int64 v13; // [rsp+60h] [rbp+18h] BYREF
  __int64 v14; // [rsp+68h] [rbp+20h] BYREF

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
  v13 = 0xFFFFFFFFLL;
  v8 = (*(__int64 (__fastcall **)(ULONG_PTR, ULONG_PTR, __int64 *))(a1 + 8))(a1, v6, &v13);
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
    (*(void (__fastcall **)(ULONG_PTR, __int64 *))(a1 + 16))(a1, &v13);
    v9 = a3[1];
    v14 = 0LL;
    v10 = HvReallocateCell(a1, v9, 4 * v7, 1, &v14, &v13);
    (*(void (__fastcall **)(ULONG_PTR, __int64 *))(a1 + 16))(a1, &v13);
    goto LABEL_5;
  }
  return 3221225626LL;
}
