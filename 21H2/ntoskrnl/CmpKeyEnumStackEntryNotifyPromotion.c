/*
 * XREFs of CmpKeyEnumStackEntryNotifyPromotion @ 0x14087AB80
 * Callers:
 *     CmpKeyEnumStackNotifyPromotion @ 0x14087AD3C (CmpKeyEnumStackNotifyPromotion.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     CmpDoFindSubKeyByNumber @ 0x1406E2460 (CmpDoFindSubKeyByNumber.c)
 */

__int64 __fastcall CmpKeyEnumStackEntryNotifyPromotion(_QWORD *a1)
{
  int v2; // edx
  __int64 v3; // r9
  _DWORD *v4; // rcx
  int v5; // r8d
  __int64 v6; // rsi
  __int64 v7; // rbx
  _QWORD *v8; // rbp
  __int64 v9; // rcx
  __int16 *v10; // rax
  unsigned int SubKeyByNumber; // eax
  unsigned int v12; // ebx
  __int64 result; // rax

  v2 = 0;
  v3 = 0LL;
  v4 = a1 + 4;
  v5 = 2;
  while ( *v4 == *(_DWORD *)((char *)v4 + a1[1] - (_QWORD)a1 - 12) )
  {
    ++v2;
    ++v3;
    ++v4;
    if ( v3 >= 2 )
      goto LABEL_6;
  }
  v5 = v2;
LABEL_6:
  a1[15] = 0LL;
  v6 = v5;
  *((_DWORD *)a1 + 28) = -1;
  v7 = v5;
  if ( a1[v7 + 10] )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD *))(*a1 + 16LL))(*a1, &a1[v7 + 12]);
    a1[v6 + 10] = 0LL;
    *((_DWORD *)a1 + v6 + 18) = -1;
  }
  v8 = &a1[v7];
  if ( a1[v6 + 5] )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD *))(*a1 + 16LL))(*a1, v8 + 7);
    a1[v6 + 5] = 0LL;
  }
  v9 = a1[1];
  *((_DWORD *)a1 + v6 + 8) = *(_DWORD *)(v9 + 4 * v6 + 20);
  v10 = (__int16 *)(*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD *))(*a1 + 8LL))(
                     *a1,
                     *(unsigned int *)(v9 + 4 * v6 + 28),
                     v8 + 7);
  a1[v6 + 5] = v10;
  SubKeyByNumber = CmpDoFindSubKeyByNumber(*a1, v10, *((_DWORD *)a1 + v6 + 6));
  *((_DWORD *)a1 + v6 + 18) = SubKeyByNumber;
  v12 = SubKeyByNumber;
  result = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD *))(*a1 + 8LL))(*a1, SubKeyByNumber, v8 + 12);
  a1[v6 + 10] = result;
  *((_DWORD *)a1 + 28) = v12;
  a1[15] = result;
  return result;
}
