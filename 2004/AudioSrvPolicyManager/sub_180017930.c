/*
 * XREFs of sub_180017930 @ 0x180017930
 * Callers:
 *     sub_180014EDC @ 0x180014EDC (sub_180014EDC.c)
 * Callees:
 *     sub_18000A174 @ 0x18000A174 (sub_18000A174.c)
 *     _o__invalid_parameter_noinfo @ 0x18003A752 (_o__invalid_parameter_noinfo.c)
 *     memmove @ 0x18003AE1B (memmove.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180017930(__int64 a1, int a2)
{
  __int64 v2; // rdi
  volatile signed __int32 *v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rcx
  size_t v8; // r8
  __int64 v9; // r9
  size_t v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // rax

  v2 = a2;
  if ( a2 >= *(_DWORD *)(a1 + 16) )
    return 0LL;
  v5 = (volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)a1 + 8LL * a2) - 24LL);
  if ( _InterlockedExchangeAdd(v5 + 4, 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v5 + 8LL))(*(_QWORD *)v5);
  v6 = *(unsigned int *)(a1 + 16);
  if ( (_DWORD)v2 != (_DWORD)v6 - 1 )
  {
    v7 = (unsigned int)(v6 - v2);
    v8 = 8LL * ((int)v7 - 1);
    v9 = *(_QWORD *)a1 + 8 * v2;
    if ( v8 )
    {
      if ( !v9 || v9 == -8 )
        goto LABEL_13;
      if ( 8LL * (int)v7 < v8 )
      {
LABEL_24:
        *(_DWORD *)o__errno(v7, v6) = 34;
LABEL_25:
        o__invalid_parameter_noinfo();
        sub_18000A174(-2147024809);
      }
      memmove((void *)(*(_QWORD *)a1 + 8 * v2), (const void *)(v9 + 8), v8);
      v6 = *(unsigned int *)(a1 + 16);
    }
    v7 = (unsigned int)(v6 - v2);
    v10 = 8LL * ((int)v7 - 1);
    v11 = *(_QWORD *)(a1 + 8) + 8 * v2;
    if ( !v10 )
      goto LABEL_17;
    if ( v11 && v11 != -8 )
    {
      if ( 8LL * (int)v7 >= v10 )
      {
        memmove((void *)(*(_QWORD *)(a1 + 8) + 8 * v2), (const void *)(v11 + 8), v10);
        LODWORD(v6) = *(_DWORD *)(a1 + 16);
        goto LABEL_17;
      }
      goto LABEL_24;
    }
LABEL_13:
    *(_DWORD *)o__errno(v7, v6) = 22;
    goto LABEL_25;
  }
LABEL_17:
  v12 = o__recalloc(*(_QWORD *)a1, (int)v6 - 1, 8LL);
  if ( v12 || *(_DWORD *)(a1 + 16) == 1 )
    *(_QWORD *)a1 = v12;
  v13 = o__recalloc(*(_QWORD *)(a1 + 8), *(_DWORD *)(a1 + 16) - 1, 8LL);
  if ( v13 || *(_DWORD *)(a1 + 16) == 1 )
    *(_QWORD *)(a1 + 8) = v13;
  --*(_DWORD *)(a1 + 16);
  return 1LL;
}
