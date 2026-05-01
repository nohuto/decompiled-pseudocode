/*
 * XREFs of sub_18007F5AC @ 0x18007F5AC
 * Callers:
 *     sub_180079F98 @ 0x180079F98 (sub_180079F98.c)
 * Callees:
 *     sub_180006258 @ 0x180006258 (sub_180006258.c)
 *     sub_180006278 @ 0x180006278 (sub_180006278.c)
 *     sub_1800062A4 @ 0x1800062A4 (sub_1800062A4.c)
 *     sub_18000A1AC @ 0x18000A1AC (sub_18000A1AC.c)
 *     sub_18000F390 @ 0x18000F390 (sub_18000F390.c)
 *     sub_18001E380 @ 0x18001E380 (sub_18001E380.c)
 *     sub_18001E830 @ 0x18001E830 (sub_18001E830.c)
 *     sub_18001FD20 @ 0x18001FD20 (sub_18001FD20.c)
 *     sub_180020CC0 @ 0x180020CC0 (sub_180020CC0.c)
 *     sub_180034650 @ 0x180034650 (sub_180034650.c)
 */

char __fastcall sub_18007F5AC(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 i; // rax
  __int64 v5; // rdx
  _QWORD *v6; // rbx
  char v7; // di
  __int64 v8; // rdx

  v1 = (__int64)sub_18001FD20(a1);
LABEL_8:
  v6 = (_QWORD *)v1;
  if ( v1 )
  {
    sub_180034650(v1, 0);
    for ( i = sub_180006258((__int64)v6); ; i = sub_1800062A4(v3) )
    {
      if ( !i )
      {
        sub_18001E830(0LL, v5, 1u);
        RtlReleaseSRWLockShared(v6);
        v1 = sub_180020CC0(v6);
        goto LABEL_8;
      }
      if ( sub_180006278(i, 3u) && (*(_DWORD *)(v3 + 112) & 0x10000) != 0 )
        break;
    }
    v7 = 1;
  }
  else
  {
    v7 = 0;
  }
  if ( v6 )
  {
    sub_18001E830(v3, v2, 1u);
    RtlReleaseSRWLockShared(v6);
    sub_18001E380();
    if ( v6[74]-- == 1LL )
      sub_18000A1AC((__int64)(v6 - 8), v8);
    sub_18000F390();
  }
  return v7;
}
