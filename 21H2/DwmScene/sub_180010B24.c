/*
 * XREFs of sub_180010B24 @ 0x180010B24
 * Callers:
 *     sub_1801257E7 @ 0x1801257E7 (sub_1801257E7.c)
 *     sub_18012A98E @ 0x18012A98E (sub_18012A98E.c)
 *     sub_18012A9CF @ 0x18012A9CF (sub_18012A9CF.c)
 *     sub_18012AA15 @ 0x18012AA15 (sub_18012AA15.c)
 *     sub_18012AA8E @ 0x18012AA8E (sub_18012AA8E.c)
 *     sub_18012AACC @ 0x18012AACC (sub_18012AACC.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180010B24(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  volatile signed __int32 *v5; // rcx
  __int64 result; // rax

  if ( a2 != a3 )
  {
    v4 = a2;
    do
    {
      v5 = *(volatile signed __int32 **)(v4 + 8);
      if ( v5 )
      {
        result = (unsigned int)_InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF);
        if ( (_DWORD)result == 1 )
          result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
      }
      v4 += 16LL;
    }
    while ( v4 != a3 );
  }
  return result;
}
