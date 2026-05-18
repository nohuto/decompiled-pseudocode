/*
 * XREFs of sub_180010A44 @ 0x180010A44
 * Callers:
 *     sub_18011FF17 @ 0x18011FF17 (sub_18011FF17.c)
 *     sub_180125076 @ 0x180125076 (sub_180125076.c)
 *     sub_1801250B7 @ 0x1801250B7 (sub_1801250B7.c)
 *     sub_1801250FD @ 0x1801250FD (sub_1801250FD.c)
 *     sub_180125176 @ 0x180125176 (sub_180125176.c)
 *     sub_1801251B4 @ 0x1801251B4 (sub_1801251B4.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180010A44(__int64 a1, __int64 a2, __int64 a3)
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
