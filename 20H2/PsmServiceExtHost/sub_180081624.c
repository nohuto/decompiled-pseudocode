/*
 * XREFs of sub_180081624 @ 0x180081624
 * Callers:
 *     sub_18007D214 @ 0x18007D214 (sub_18007D214.c)
 * Callees:
 *     sub_18001E830 @ 0x18001E830 (sub_18001E830.c)
 *     sub_180034650 @ 0x180034650 (sub_180034650.c)
 */

__int64 __fastcall sub_180081624(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  int *v4; // rsi
  __int64 v5; // rbx
  int v7; // [rsp+30h] [rbp+8h] BYREF

  sub_180034650(*(_QWORD *)(a1 + 80), 0);
  v4 = (int *)(a1 + 544);
  while ( 1 )
  {
    v5 = *(_QWORD *)(a1 + 80);
    if ( (*v4 & 1) == 0 )
      break;
    v7 = *v4;
    sub_18001E830(v3, v2, 1u);
    RtlReleaseSRWLockShared(v5);
    RtlWaitOnAddress(a1 + 544, &v7, 4LL);
    sub_180034650(*(_QWORD *)(a1 + 80), 0);
  }
  sub_18001E830(v3, v2, 1u);
  return RtlReleaseSRWLockShared(v5);
}
