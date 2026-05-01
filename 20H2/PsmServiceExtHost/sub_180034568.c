/*
 * XREFs of sub_180034568 @ 0x180034568
 * Callers:
 *     sub_18000B2DC @ 0x18000B2DC (sub_18000B2DC.c)
 * Callees:
 *     sub_18001E830 @ 0x18001E830 (sub_18001E830.c)
 *     sub_180034650 @ 0x180034650 (sub_180034650.c)
 */

__int64 __fastcall sub_180034568(_QWORD *a1)
{
  __int64 v1; // rbp
  __int64 v3; // rsi
  __int64 v4; // rcx
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned int v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // rcx

  v1 = a1[6];
  v3 = a1[7];
  v4 = v1;
  v5 = *(_QWORD *)(v1 - 32);
  v6 = *(_QWORD *)(v3 - 32);
  if ( v5 >= v6 )
    v4 = v3;
  sub_180034650(v4, 1LL);
  v7 = v3;
  if ( v5 >= v6 )
    v7 = v1;
  sub_180034650(v7, 1LL);
  if ( (*(_QWORD *)(v1 + 648) & 0x2000000000000LL) != 0 && (*(_QWORD *)(v3 + 648) & 0x2000000000000LL) != 0 )
  {
    v10 = 0;
    a1[8] = *(_QWORD *)(v1 + 800);
    a1[9] = *(_QWORD *)(v3 + 800);
  }
  else
  {
    v10 = -1073741394;
  }
  sub_18001E830(v9, v8, 1u);
  RtlReleaseSRWLockShared(v1);
  sub_18001E830(v12, v11, 1u);
  RtlReleaseSRWLockShared(v3);
  return v10;
}
