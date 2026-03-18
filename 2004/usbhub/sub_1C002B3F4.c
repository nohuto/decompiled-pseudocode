/*
 * XREFs of sub_1C002B3F4 @ 0x1C002B3F4
 * Callers:
 *     sub_1C00308D0 @ 0x1C00308D0 (sub_1C00308D0.c)
 *     sub_1C0048720 @ 0x1C0048720 (sub_1C0048720.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D060 (_guard_dispatch_icall_nop.c)
 *     sub_1C001D080 @ 0x1C001D080 (sub_1C001D080.c)
 *     sub_1C001D340 @ 0x1C001D340 (sub_1C001D340.c)
 */

__int64 __fastcall sub_1C002B3F4(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rsi
  __m128 *PoolWithTag; // rax
  __m128 *v7; // rdi
  int v8; // ebx
  __int64 v9; // rcx
  __int64 (__fastcall *v10)(_QWORD, __int64, __m128 *, SIZE_T *, _DWORD *); // rax
  __m128 *v11; // rax
  __int64 v12; // rcx
  __int64 (__fastcall *v13)(_QWORD, __int64, __m128 *, SIZE_T *, _DWORD *); // rax
  unsigned __int64 v14; // rdx
  _DWORD v16[10]; // [rsp+30h] [rbp-28h] BYREF
  SIZE_T NumberOfBytes; // [rsp+78h] [rbp+20h] BYREF

  v16[0] = 0;
  v4 = a3;
  LODWORD(NumberOfBytes) = 16;
  PoolWithTag = (__m128 *)ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x42554855u);
  v7 = PoolWithTag;
  if ( PoolWithTag )
    sub_1C001D340(PoolWithTag, 0, (unsigned int)NumberOfBytes);
  v8 = -1073741670;
  if ( v7 )
  {
    v9 = *(_QWORD *)(a1 + 64);
    v10 = *(__int64 (__fastcall **)(_QWORD, __int64, __m128 *, SIZE_T *, _DWORD *))(v9 + 4608);
    if ( !v10 )
    {
LABEL_5:
      v8 = -1073741822;
LABEL_16:
      ExFreePoolWithTag(v7, 0);
      return (unsigned int)v8;
    }
    v8 = v10(*(_QWORD *)(v9 + 4560), 1LL, v7, &NumberOfBytes, v16);
    if ( v8 != -1073741789 )
    {
LABEL_10:
      if ( v8 >= 0 )
      {
        if ( (unsigned int)v4 < 4 )
        {
          v8 = -1073741789;
        }
        else
        {
          *(_DWORD *)a2 = v7->m128_i32[2];
          v14 = v7->m128_u32[2];
          if ( v4 - 4 < v14 )
            LODWORD(v14) = v4 - 4;
          sub_1C001D080((char *)(a2 + 4), &v7->m128_i8[12], (unsigned int)v14);
        }
      }
      goto LABEL_16;
    }
    LODWORD(NumberOfBytes) = v16[0];
    ExFreePoolWithTag(v7, 0);
    v11 = (__m128 *)ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x42554855u);
    v7 = v11;
    if ( v11 )
    {
      sub_1C001D340(v11, 0, (unsigned int)NumberOfBytes);
      v12 = *(_QWORD *)(a1 + 64);
      v13 = *(__int64 (__fastcall **)(_QWORD, __int64, __m128 *, SIZE_T *, _DWORD *))(v12 + 4608);
      if ( !v13 )
        goto LABEL_5;
      v8 = v13(*(_QWORD *)(v12 + 4560), 1LL, v7, &NumberOfBytes, v16);
      goto LABEL_10;
    }
  }
  return (unsigned int)v8;
}
