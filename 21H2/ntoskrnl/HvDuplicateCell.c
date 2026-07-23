/*
 * XREFs of HvDuplicateCell @ 0x14061C030
 * Callers:
 *     CmpCloneKCBValueListForTrans @ 0x14061BF60 (CmpCloneKCBValueListForTrans.c)
 *     CmpDuplicateIndex @ 0x14087A510 (CmpDuplicateIndex.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     HvAllocateCell @ 0x1407207E4 (HvAllocateCell.c)
 */

__int64 __fastcall HvDuplicateCell(__int64 a1, __int64 a2, int a3, char a4)
{
  __int64 (__fastcall *v6)(__int64, __int64, int *); // rax
  __int64 v8; // rax
  const void *v9; // r14
  int v10; // esi
  unsigned int Cell; // eax
  void *v12; // rdi
  unsigned int v13; // ebp
  _DWORD v15[2]; // [rsp+30h] [rbp-28h] BYREF
  void *v16; // [rsp+38h] [rbp-20h] BYREF
  int v17; // [rsp+60h] [rbp+8h] BYREF
  int v18; // [rsp+64h] [rbp+Ch]

  v17 = -1;
  v15[0] = -1;
  v16 = 0LL;
  v18 = 0;
  v6 = *(__int64 (__fastcall **)(__int64, __int64, int *))(a1 + 8);
  v15[1] = 0;
  v8 = v6(a1, a2, &v17);
  v9 = (const void *)v8;
  if ( !v8 )
    return 0xFFFFFFFFLL;
  v10 = -4 - *(_DWORD *)(v8 - 4);
  Cell = HvAllocateCell(a1, v10, a3, (unsigned int)&v16, (__int64)v15);
  v12 = v16;
  v13 = Cell;
  if ( Cell != -1 )
  {
    if ( a4 == 1 )
      memmove(v16, v9, v10);
    else
      memset(v16, 0, v10);
  }
  (*(void (__fastcall **)(__int64, int *))(a1 + 16))(a1, &v17);
  if ( v12 )
    (*(void (__fastcall **)(__int64, _DWORD *))(a1 + 16))(a1, v15);
  return v13;
}
