/*
 * XREFs of sub_180002B50 @ 0x180002B50
 * Callers:
 *     sub_1800036C4 @ 0x1800036C4 (sub_1800036C4.c)
 *     sub_1800E3474 @ 0x1800E3474 (sub_1800E3474.c)
 *     sub_1800E349C @ 0x1800E349C (sub_1800E349C.c)
 * Callees:
 *     sub_18006D208 @ 0x18006D208 (sub_18006D208.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180002B50(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // r10
  unsigned int v3; // ebx

  result = sub_18006D208(a1 + 12);
  v3 = result;
  if ( !(_DWORD)result )
  {
    if ( v2 )
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v2 + 32LL))(v2, (unsigned int)(result + 1));
    if ( qword_18019E418 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_18019E418 + 16LL))(qword_18019E418);
    return v3;
  }
  return result;
}
