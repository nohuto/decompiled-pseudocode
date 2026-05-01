/*
 * XREFs of sub_180033970 @ 0x180033970
 * Callers:
 *     <none>
 * Callees:
 *     sub_180023F98 @ 0x180023F98 (sub_180023F98.c)
 */

__int64 __fastcall sub_180033970(__int64 a1, __int64 a2)
{
  signed __int32 v2; // r8d
  unsigned int v5; // ebx
  signed __int32 v7[10]; // [rsp+0h] [rbp-28h] BYREF
  signed __int32 v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_DWORD *)(a1 + 48);
  v8 = -2;
  _InterlockedCompareExchange(&v8, v2, -2);
  if ( v8 == 4 )
  {
    v5 = -2147483634;
    RoOriginateError(2147483662LL, 0LL);
  }
  else if ( _InterlockedIncrement((volatile signed __int32 *)(a1 + 156)) == 1 )
  {
    v5 = sub_180023F98((__int64 *)(a1 + 136), a2);
    if ( a2 )
    {
      *(_QWORD *)(a1 + 144) = *(_QWORD *)(*(_QWORD *)a2 + 24LL);
      _InterlockedIncrement((volatile signed __int32 *)(a1 + 152));
    }
    _InterlockedOr(v7, 0);
  }
  else
  {
    return (unsigned int)-2147483624;
  }
  return v5;
}
