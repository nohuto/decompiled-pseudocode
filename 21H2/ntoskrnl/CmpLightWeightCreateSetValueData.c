/*
 * XREFs of CmpLightWeightCreateSetValueData @ 0x1405E2114
 * Callers:
 *     CmpLightWeightPrepareSetValueKeyUoW @ 0x1405E1D18 (CmpLightWeightPrepareSetValueKeyUoW.c)
 *     CmpLightWeightPrepareDeleteValueKeyUoW @ 0x140731B78 (CmpLightWeightPrepareDeleteValueKeyUoW.c)
 * Callees:
 *     CmpAllocateTransientPoolWithTag @ 0x14023EDD0 (CmpAllocateTransientPoolWithTag.c)
 *     CmpFreeTransientPoolWithTag @ 0x1402483A4 (CmpFreeTransientPoolWithTag.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     CmpCopyCell @ 0x1405E2220 (CmpCopyCell.c)
 *     HvFreeCell @ 0x140720914 (HvFreeCell.c)
 *     HvMarkCellDirty @ 0x14087BE48 (HvMarkCellDirty.c)
 */

__int64 __fastcall CmpLightWeightCreateSetValueData(__int64 a1, _QWORD *a2, __int64 a3, struct _LOOKASIDE_LIST_EX *a4)
{
  ULONG_PTR v6; // rsi
  char *TransientPoolWithTag; // rax
  _DWORD *v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rbx
  int v11; // eax
  int v12; // eax
  unsigned int v13; // ebx
  ULONG_PTR v15; // rdx
  int v16; // [rsp+30h] [rbp+8h] BYREF
  int v17; // [rsp+34h] [rbp+Ch]

  v16 = -1;
  v17 = 0;
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 32LL);
  TransientPoolWithTag = (char *)CmpAllocateTransientPoolWithTag(PagedPool, 0xCuLL, 0x77554D43u, a4);
  v8 = TransientPoolWithTag;
  if ( !TransientPoolWithTag )
    return (unsigned int)-1073741670;
  *(_QWORD *)(TransientPoolWithTag + 4) = 0LL;
  *(_DWORD *)TransientPoolWithTag = 1;
  v9 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(v6 + 8))(
         v6,
         *(unsigned int *)(*(_QWORD *)(a1 + 48) + 40LL),
         &v16);
  v10 = v9;
  if ( v9 )
  {
    v8[1] = 0;
    v8[2] = -1;
    v11 = *(_DWORD *)(v9 + 36);
    if ( v11 )
    {
      v8[1] = v11;
      v12 = CmpCopyCell(v6, *(unsigned int *)(v10 + 40), v6, *(_DWORD *)(v10 + 40) >> 31);
      v8[2] = v12;
      if ( v12 == -1 )
      {
        v13 = -1073741670;
        goto LABEL_7;
      }
      if ( !(unsigned __int8)HvMarkCellDirty(v6, *(unsigned int *)(v10 + 40), 0LL) )
      {
        v13 = -1073741443;
        goto LABEL_7;
      }
    }
    v13 = 0;
    *a2 = v8;
    v8 = 0LL;
LABEL_7:
    (*(void (__fastcall **)(ULONG_PTR, int *))(v6 + 16))(v6, &v16);
    goto LABEL_8;
  }
  v13 = -1073741670;
LABEL_8:
  if ( v8 )
  {
    v15 = (unsigned int)v8[2];
    if ( (_DWORD)v15 != -1 )
      HvFreeCell(v6, v15);
    CmpFreeTransientPoolWithTag(v8, 0x77554D43u);
  }
  return v13;
}
