/*
 * XREFs of sub_18003BCC0 @ 0x18003BCC0
 * Callers:
 *     sub_18003BC18 @ 0x18003BC18 (sub_18003BC18.c)
 *     sub_18007F780 @ 0x18007F780 (sub_18007F780.c)
 *     sub_18007FFAC @ 0x18007FFAC (sub_18007FFAC.c)
 *     sub_18008011C @ 0x18008011C (sub_18008011C.c)
 *     sub_180081898 @ 0x180081898 (sub_180081898.c)
 * Callees:
 *     sub_18000A1AC @ 0x18000A1AC (sub_18000A1AC.c)
 *     sub_18000F390 @ 0x18000F390 (sub_18000F390.c)
 *     sub_18001E380 @ 0x18001E380 (sub_18001E380.c)
 */

BOOLEAN __fastcall sub_18003BCC0(__int64 a1)
{
  unsigned int i; // ebx
  __int64 v3; // rsi
  __int64 v4; // rdx
  BOOLEAN result; // al

  for ( i = 0; i < *(_DWORD *)(a1 + 8); ++i )
  {
    v3 = *(_QWORD *)(*(_QWORD *)a1 + 16LL * i);
    sub_18001E380();
    if ( (*(_QWORD *)(v3 + 592))-- == 1LL )
      sub_18000A1AC(v3 - 64, v4);
    result = (unsigned __int8)sub_18000F390();
  }
  if ( *(_QWORD *)a1 )
    return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, *(PVOID *)a1);
  return result;
}
