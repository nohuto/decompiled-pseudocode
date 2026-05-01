/*
 * XREFs of sub_180030348 @ 0x180030348
 * Callers:
 *     sub_18002F100 @ 0x18002F100 (sub_18002F100.c)
 *     sub_18002F2E0 @ 0x18002F2E0 (sub_18002F2E0.c)
 *     sub_1800300B8 @ 0x1800300B8 (sub_1800300B8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180030348(__int64 a1, __int64 *a2)
{
  __int64 v2; // r10
  __int64 v3; // r8
  __int64 v5; // r9
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 result; // rax

  v2 = *a2;
  v3 = 0LL;
  if ( *a2 )
  {
    v5 = *(_QWORD *)(v2 + 24);
    if ( !v5 )
    {
      v5 = 0LL;
      v6 = (unsigned int)(*(_DWORD *)(v2 + 32) % *(_DWORD *)(a1 + 24) + 1);
      do
      {
        if ( (unsigned int)v6 >= *(_DWORD *)(a1 + 24) )
          break;
        v7 = *(_QWORD *)(a1 + 8);
        if ( *(_QWORD *)(v7 + 8 * v6) )
          v5 = *(_QWORD *)(v7 + 8 * v6);
        v6 = (unsigned int)(v6 + 1);
      }
      while ( !v5 );
    }
    v3 = v5;
  }
  result = v2;
  *a2 = v3;
  return result;
}
