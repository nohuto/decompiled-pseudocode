/*
 * XREFs of sub_180020970 @ 0x180020970
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180020970(__int64 a1, volatile signed __int32 *a2)
{
  signed __int32 v2; // r8d
  unsigned int v5; // ebx
  signed __int32 v6; // ecx
  __int64 v7; // rcx
  signed __int32 v9; // [rsp+30h] [rbp+8h] BYREF
  signed __int32 v10; // [rsp+40h] [rbp+18h] BYREF

  v2 = *(_DWORD *)(a1 + 48);
  v9 = -2;
  _InterlockedCompareExchange(&v9, v2, -2);
  if ( v9 == 4 )
  {
    v5 = -2147483634;
    RoOriginateError(2147483662LL, 0LL);
LABEL_6:
    *a2 = v5;
    return v5;
  }
  if ( v9 == -1 )
  {
    v5 = -2147483623;
    goto LABEL_6;
  }
  v6 = *(_DWORD *)(a1 + 48);
  v5 = 0;
  v10 = -2;
  _InterlockedCompareExchange(&v10, v6, -2);
  if ( v10 != 3 )
    goto LABEL_6;
  _InterlockedCompareExchange(a2, *(_DWORD *)(a1 + 52), *a2);
  v7 = *(_QWORD *)(a1 + 40);
  if ( v7 )
    SetRestrictedErrorInfo(v7);
  return v5;
}
