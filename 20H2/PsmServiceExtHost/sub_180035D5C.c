/*
 * XREFs of sub_180035D5C @ 0x180035D5C
 * Callers:
 *     sub_180035CA4 @ 0x180035CA4 (sub_180035CA4.c)
 * Callees:
 *     sub_18000A1AC @ 0x18000A1AC (sub_18000A1AC.c)
 *     sub_18000F390 @ 0x18000F390 (sub_18000F390.c)
 *     sub_18001E380 @ 0x18001E380 (sub_18001E380.c)
 */

NTSTATUS __fastcall sub_180035D5C(_QWORD *a1)
{
  NTSTATUS result; // eax
  void *v3; // rcx
  void *v4; // rcx
  __int64 v5; // rdi
  __int64 v6; // rdx
  bool v7; // zf
  __int64 v8; // rbx
  __int64 v9; // rdx

  if ( a1[10] )
    result = TpReleaseWait();
  if ( a1[11] )
    result = TpReleaseWait();
  v3 = (void *)a1[8];
  if ( v3 )
    result = NtClose(v3);
  v4 = (void *)a1[9];
  if ( v4 )
    result = NtClose(v4);
  v5 = a1[6];
  if ( v5 )
  {
    sub_18001E380();
    v7 = (*(_QWORD *)(v5 + 592))-- == 1LL;
    if ( v7 )
      sub_18000A1AC(v5 - 64, v6);
    result = (unsigned int)sub_18000F390();
  }
  v8 = a1[7];
  if ( v8 )
  {
    sub_18001E380();
    v7 = (*(_QWORD *)(v8 + 592))-- == 1LL;
    if ( v7 )
      sub_18000A1AC(v8 - 64, v9);
    return (unsigned int)sub_18000F390();
  }
  return result;
}
