/*
 * XREFs of CmpMarkValueDataDirty @ 0x14065BDA8
 * Callers:
 *     CmpLightWeightPrepareSetValueKeyUoW @ 0x1405E1D18 (CmpLightWeightPrepareSetValueKeyUoW.c)
 *     CmDeleteValueKey @ 0x14065B364 (CmDeleteValueKey.c)
 *     CmpSetValueKeyExisting @ 0x14065BAA8 (CmpSetValueKeyExisting.c)
 *     CmpMarkKeyDirty @ 0x14065F0B8 (CmpMarkKeyDirty.c)
 *     CmpLightWeightPrepareDeleteValueKeyUoW @ 0x140731B78 (CmpLightWeightPrepareDeleteValueKeyUoW.c)
 *     CmpMarkKeyValuesDirty @ 0x140879400 (CmpMarkKeyValuesDirty.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     HvpMarkCellDirty @ 0x14071F800 (HvpMarkCellDirty.c)
 */

char __fastcall CmpMarkValueDataDirty(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  __int64 v3; // rdx
  unsigned int v5; // eax
  char v6; // bl
  __int64 (__fastcall *v8)(ULONG_PTR, __int64, int *); // rax
  __int64 v9; // r14
  __int64 v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rdx
  unsigned __int16 v13; // bx
  ULONG_PTR v14; // rdx
  int v15; // [rsp+58h] [rbp+10h] BYREF
  int v16; // [rsp+5Ch] [rbp+14h]
  int v17; // [rsp+60h] [rbp+18h] BYREF
  int v18; // [rsp+64h] [rbp+1Ch]

  v3 = *(unsigned int *)(a2 + 8);
  if ( (_DWORD)v3 == -1 )
    return 1;
  v5 = *(_DWORD *)(a2 + 4);
  if ( v5 >= 0x80000000 )
    return 1;
  if ( *(_DWORD *)(BugCheckParameter2 + 212) < 4u || v5 - 16345 > 0x7FFFC026 )
    goto LABEL_5;
  v17 = -1;
  v18 = 0;
  v16 = 0;
  v8 = *(__int64 (__fastcall **)(ULONG_PTR, __int64, int *))(BugCheckParameter2 + 8);
  v9 = 0LL;
  v15 = -1;
  v10 = v8(BugCheckParameter2, v3, &v17);
  v11 = v10;
  if ( !v10 )
    return 0;
  v12 = *(unsigned int *)(v10 + 4);
  if ( (_DWORD)v12 == -1 )
    goto LABEL_16;
  v9 = (*(__int64 (__fastcall **)(ULONG_PTR, __int64, int *))(BugCheckParameter2 + 8))(BugCheckParameter2, v12, &v15);
  if ( !v9 )
  {
    v6 = 0;
    goto LABEL_19;
  }
  v13 = 0;
  if ( *(_WORD *)(v11 + 2) )
  {
    while ( 1 )
    {
      v14 = *(unsigned int *)(v9 + 4LL * v13);
      if ( (_DWORD)v14 != -1 && !(unsigned __int8)HvpMarkCellDirty(BugCheckParameter2, v14) )
        break;
      if ( ++v13 >= *(_WORD *)(v11 + 2) )
        goto LABEL_15;
    }
    v6 = 0;
    goto LABEL_17;
  }
LABEL_15:
  v6 = 0;
  if ( (unsigned __int8)HvpMarkCellDirty(BugCheckParameter2, *(unsigned int *)(v11 + 4)) )
LABEL_16:
    v6 = 1;
LABEL_17:
  if ( v9 )
    (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v15);
LABEL_19:
  (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v17);
  if ( !v6 )
    return v6;
LABEL_5:
  v6 = 0;
  if ( (unsigned __int8)HvpMarkCellDirty(BugCheckParameter2, *(unsigned int *)(a2 + 8)) )
    return 1;
  return v6;
}
