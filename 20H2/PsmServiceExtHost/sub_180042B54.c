/*
 * XREFs of sub_180042B54 @ 0x180042B54
 * Callers:
 *     sub_180042A70 @ 0x180042A70 (sub_180042A70.c)
 * Callees:
 *     sub_18000F390 @ 0x18000F390 (sub_18000F390.c)
 *     sub_18001E380 @ 0x18001E380 (sub_18001E380.c)
 *     sub_180042CF4 @ 0x180042CF4 (sub_180042CF4.c)
 *     sub_18006A214 @ 0x18006A214 (sub_18006A214.c)
 */

__int64 __fastcall sub_180042B54(__int64 a1, unsigned int a2, PVOID *a3, _QWORD *a4)
{
  __int64 v8; // rcx
  int v9; // eax
  PVOID v10; // rcx
  unsigned int v11; // ebx
  __int64 v12; // rax
  PVOID P[3]; // [rsp+20h] [rbp-18h] BYREF

  P[0] = 0LL;
  sub_18001E380();
  v9 = sub_180042CF4(v8, a1, a2, P);
  v10 = P[0];
  v11 = v9;
  if ( v9 >= 0 )
  {
    v12 = *((_QWORD *)P[0] + 3);
    *a3 = P[0];
    v10 = 0LL;
    P[0] = 0LL;
    v11 = 0;
    *a4 = v12;
  }
  if ( v10 )
  {
    sub_18006A214();
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P[0]);
  }
  sub_18000F390();
  return v11;
}
