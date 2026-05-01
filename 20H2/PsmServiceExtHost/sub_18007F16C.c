/*
 * XREFs of sub_18007F16C @ 0x18007F16C
 * Callers:
 *     sub_18007E664 @ 0x18007E664 (sub_18007E664.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18007F16C(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rbx

  v1 = *(_QWORD *)(a1 + 8);
  if ( (v1 & 1) != 0 )
  {
    if ( v1 == 1 )
      v2 = 0LL;
    else
      v2 = v1 ^ (a1 | 1);
  }
  else
  {
    v2 = *(_QWORD *)(a1 + 8);
  }
  RtlRbRemoveNode(a1, v2);
  *(_QWORD *)(v2 + 16) = -1LL;
  return v2 - 744;
}
