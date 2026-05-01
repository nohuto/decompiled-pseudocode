/*
 * XREFs of sub_18000ECB0 @ 0x18000ECB0
 * Callers:
 *     sub_18000E718 @ 0x18000E718 (sub_18000E718.c)
 *     sub_18000E85C @ 0x18000E85C (sub_18000E85C.c)
 *     sub_18000F0F4 @ 0x18000F0F4 (sub_18000F0F4.c)
 *     sub_18002678C @ 0x18002678C (sub_18002678C.c)
 *     sub_180026888 @ 0x180026888 (sub_180026888.c)
 *     sub_18002698C @ 0x18002698C (sub_18002698C.c)
 *     sub_180026A54 @ 0x180026A54 (sub_180026A54.c)
 *     sub_18008089C @ 0x18008089C (sub_18008089C.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180046860 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18000ECB0(unsigned __int64 a1, __int64 a2, __int64 (__fastcall *a3)(__int64, __int64))
{
  _QWORD *v3; // r14
  __int64 v7; // rax
  __int64 v8; // rbx
  int v9; // edi
  int v10; // eax
  __int64 v11; // rax
  __int64 v12; // rdi

  v3 = (_QWORD *)(a1 + 16);
  RtlAcquireSRWLockShared(a1 + 16);
  v7 = *(_QWORD *)(a1 + 8);
  v8 = *(_QWORD *)a1;
  if ( (v7 & 1) != 0 && v8 )
    v8 ^= a1;
  v9 = v7 & 1;
  while ( v8 )
  {
    v10 = a3(a2, v8);
    if ( v10 >= 0 )
    {
      if ( v10 <= 0 )
        break;
      v11 = *(_QWORD *)(v8 + 8);
      if ( v9 && v11 )
      {
LABEL_18:
        v8 ^= v11;
        continue;
      }
    }
    else
    {
      v11 = *(_QWORD *)v8;
      if ( v9 && v11 )
        goto LABEL_18;
    }
    v8 = v11;
  }
  v12 = v8;
  if ( v8 )
  {
    if ( *(_QWORD *)(v8 + 24) )
    {
      if ( _InterlockedIncrement64((volatile signed __int64 *)(v8 + 24)) <= 1 )
        __fastfail(0xEu);
    }
    else
    {
      v12 = 0LL;
    }
  }
  RtlReleaseSRWLockShared(v3);
  return v12;
}
