/*
 * XREFs of CmpKeyEnumStackEntryCleanup @ 0x1405F8D4C
 * Callers:
 *     CmpKeyEnumStackCleanup @ 0x1405F8CE0 (CmpKeyEnumStackCleanup.c)
 *     CmpKeyEnumStackReset @ 0x140729EFC (CmpKeyEnumStackReset.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CmpKeyEnumStackEntryCleanup(_QWORD *a1)
{
  _QWORD *v2; // rdi
  __int64 v3; // rbp
  _QWORD *v4; // rsi
  __int64 result; // rax

  if ( a1[1] )
    result = (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(*a1 + 16LL))(*a1, a1 + 2);
  v2 = a1 + 10;
  v3 = 2LL;
  v4 = a1 + 12;
  do
  {
    if ( *(v2 - 5) )
      result = (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(*a1 + 16LL))(*a1, v4 - 5);
    if ( *v2 )
      result = (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(*a1 + 16LL))(*a1, v4);
    ++v4;
    ++v2;
    --v3;
  }
  while ( v3 );
  return result;
}
