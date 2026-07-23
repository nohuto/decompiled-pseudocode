/*
 * XREFs of CmpSwapValueInList @ 0x140213E04
 * Callers:
 *     CmpLightWeightPrepareSetValueKeyUoW @ 0x1405E1D18 (CmpLightWeightPrepareSetValueKeyUoW.c)
 *     CmSetValueKey @ 0x1406594E0 (CmSetValueKey.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CmpSwapValueInList(__int64 a1, int a2, unsigned int a3, __int64 a4)
{
  __int64 v5; // rdx
  __int64 v7; // rsi
  __int64 v8; // rax
  unsigned int v9; // ebx
  int v11; // [rsp+30h] [rbp+8h] BYREF
  int v12; // [rsp+34h] [rbp+Ch]

  v11 = -1;
  v5 = *(unsigned int *)(a4 + 4);
  v12 = 0;
  v7 = a3;
  v8 = (*(__int64 (__fastcall **)(__int64, __int64, int *))(a1 + 8))(a1, v5, &v11);
  v9 = 0;
  if ( v8 )
  {
    *(_DWORD *)(v8 + 4 * v7) = a2;
    (*(void (__fastcall **)(__int64, int *))(a1 + 16))(a1, &v11);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v9;
}
