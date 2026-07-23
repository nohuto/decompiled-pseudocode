/*
 * XREFs of HalpRemoveProfileSourceFromList @ 0x1404BF36C
 * Callers:
 *     EmonRemoveProfileSource @ 0x1404D4670 (EmonRemoveProfileSource.c)
 *     Amd64RemoveProfileSource @ 0x1404DE260 (Amd64RemoveProfileSource.c)
 * Callees:
 *     KeSubtractAffinityEx @ 0x1402CFF20 (KeSubtractAffinityEx.c)
 *     HalpGetProfileDescriptor @ 0x140377EC8 (HalpGetProfileDescriptor.c)
 */

char __fastcall HalpRemoveProfileSourceFromList(int *a1, _QWORD **a2, _QWORD *a3)
{
  _QWORD *v3; // r10
  __int64 v4; // r11
  __int64 v5; // rbx
  __int64 v6; // rdx
  _QWORD *v7; // rcx
  char result; // al
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  *a3 = 0LL;
  v9 = 0LL;
  if ( (int)HalpGetProfileDescriptor(*a1, a2, &v9) < 0 )
    return 0;
  v5 = v9;
  *v3 = v9;
  if ( (unsigned int)KeSubtractAffinityEx(
                       (unsigned __int16 *)(v5 + 32),
                       (unsigned __int16 *)(v4 + 8),
                       (_BYTE *)(v5 + 32)) )
    return 0;
  v6 = *(_QWORD *)(v5 + 8);
  if ( *(_QWORD *)(v6 + 8) != v5 + 8 || (v7 = *(_QWORD **)(v5 + 16), *v7 != v5 + 8) )
    __fastfail(3u);
  *v7 = v6;
  result = 1;
  *(_QWORD *)(v6 + 8) = v7;
  return result;
}
