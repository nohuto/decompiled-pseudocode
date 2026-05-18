/*
 * XREFs of sub_180075918 @ 0x180075918
 * Callers:
 *     sub_18007354C @ 0x18007354C (sub_18007354C.c)
 *     sub_18007483C @ 0x18007483C (sub_18007483C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180075918(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // r8
  __int64 v4; // r9
  signed __int32 v5; // eax

  v3 = (_QWORD *)(*(_QWORD *)(a1 + 888) + 16 * a3);
  *(_OWORD *)a2 = 0LL;
  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  v4 = v3[1];
  if ( v4 )
  {
    while ( 1 )
    {
      v5 = *(_DWORD *)(v4 + 8);
      if ( !v5 )
        break;
      if ( v5 == _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 8), v5 + 1, v5) )
      {
        *(_QWORD *)a2 = *v3;
        *(_QWORD *)(a2 + 8) = v3[1];
        return a2;
      }
    }
  }
  return a2;
}
