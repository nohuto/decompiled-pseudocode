/*
 * XREFs of sub_18006B648 @ 0x18006B648
 * Callers:
 *     sub_180005AF0 @ 0x180005AF0 (sub_180005AF0.c)
 *     sub_18000806C @ 0x18000806C (sub_18000806C.c)
 *     sub_180018AF0 @ 0x180018AF0 (sub_180018AF0.c)
 *     sub_18006ACA0 @ 0x18006ACA0 (sub_18006ACA0.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_18006B648(char *P, char a2)
{
  __int64 v3; // rcx
  _QWORD **v4; // r9
  PVOID *v5; // r8

  v3 = *((_QWORD *)P + 178);
  v4 = (_QWORD **)*((_QWORD *)P + 179);
  if ( v4[1] != (_QWORD *)(P + 1432) || (v5 = (PVOID *)*((_QWORD *)P + 180), *v5 != P + 1432) )
    __fastfail(3u);
  *v5 = v4;
  v4[1] = v5;
  *((_QWORD *)P + 178) = 0LL;
  if ( *(_QWORD *)v3 == v3 && a2 )
    SetEvent(*(HANDLE *)(v3 + 16));
  return sub_1800265B0(P);
}
