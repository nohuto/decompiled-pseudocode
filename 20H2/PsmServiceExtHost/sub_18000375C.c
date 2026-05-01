/*
 * XREFs of sub_18000375C @ 0x18000375C
 * Callers:
 *     sub_180037748 @ 0x180037748 (sub_180037748.c)
 *     sub_18007FD78 @ 0x18007FD78 (sub_18007FD78.c)
 * Callees:
 *     sub_180004934 @ 0x180004934 (sub_180004934.c)
 *     sub_18000A1AC @ 0x18000A1AC (sub_18000A1AC.c)
 *     sub_18000DC14 @ 0x18000DC14 (sub_18000DC14.c)
 *     sub_18000F390 @ 0x18000F390 (sub_18000F390.c)
 *     sub_18001E380 @ 0x18001E380 (sub_18001E380.c)
 *     sub_18001E830 @ 0x18001E830 (sub_18001E830.c)
 *     sub_180034650 @ 0x180034650 (sub_180034650.c)
 */

__int64 sub_18000375C()
{
  __int64 v0; // rax
  unsigned int v1; // edi
  __int64 v2; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rcx

  v0 = sub_18000DC14();
  v1 = 0;
  v2 = v0;
  if ( v0 )
  {
    sub_180034650(v0, 0LL);
    v1 = sub_180004934(v2, 27LL);
    sub_18001E830(v5, v4, 1LL);
    RtlReleaseSRWLockShared(v2);
    sub_18001E380(v6);
    if ( (*(_QWORD *)(v2 + 592))-- == 1LL )
      sub_18000A1AC(v2 - 64);
    sub_18000F390();
  }
  return v1;
}
