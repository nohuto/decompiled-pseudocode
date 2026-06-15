/*
 * XREFs of sub_180138FF0 @ 0x180138FF0
 * Callers:
 *     sub_1800661E0 @ 0x1800661E0 (sub_1800661E0.c)
 *     sub_180138D68 @ 0x180138D68 (sub_180138D68.c)
 * Callees:
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800F4CBC @ 0x1800F4CBC (sub_1800F4CBC.c)
 *     sub_180139A2C @ 0x180139A2C (sub_180139A2C.c)
 */

__int64 __fastcall sub_180138FF0(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  void *v4; // rdi
  __int64 v5; // r8
  __int64 v6; // rdx

  v3 = sub_180139A2C(a2);
  if ( v3 )
  {
    do
    {
      v4 = *(void **)(v3 + 8);
      if ( *(_QWORD *)v3 )
        (***(void (__fastcall ****)(_QWORD, __int64))v3)(*(_QWORD *)v3, 1LL);
      if ( v4 )
      {
        sub_1800F4CBC((__int64)v4);
        sub_18006A148(v4);
      }
      v5 = *(_QWORD *)(v3 + 16);
      if ( !v5 )
      {
        v6 = (unsigned int)(*(_DWORD *)(v3 + 24) % *(_DWORD *)(a2 + 16) + 1);
        do
        {
          if ( (unsigned int)v6 >= *(_DWORD *)(a2 + 16) )
            break;
          if ( *(_QWORD *)(*(_QWORD *)a2 + 8 * v6) )
            v5 = *(_QWORD *)(*(_QWORD *)a2 + 8 * v6);
          v6 = (unsigned int)(v6 + 1);
        }
        while ( !v5 );
      }
      v3 = v5;
    }
    while ( v5 );
  }
  return sub_18013A0F0(a2);
}
