/*
 * XREFs of sub_18001802C @ 0x18001802C
 * Callers:
 *     sub_180016DD0 @ 0x180016DD0 (sub_180016DD0.c)
 * Callees:
 *     sub_18000A174 @ 0x18000A174 (sub_18000A174.c)
 *     sub_1800187C8 @ 0x1800187C8 (sub_1800187C8.c)
 *     sub_180018B08 @ 0x180018B08 (sub_180018B08.c)
 *     sub_180018DD8 @ 0x180018DD8 (sub_180018DD8.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18001802C(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // rbx
  __int64 v9; // rdi
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rdi
  unsigned int v14; // [rsp+30h] [rbp-28h] BYREF
  __int64 v15; // [rsp+38h] [rbp-20h] BYREF
  __int64 v17; // [rsp+78h] [rbp+20h] BYREF

  v6 = sub_1800187C8(a1, a2, (unsigned int)&v14, (unsigned int)&v17, (__int64)&v15);
  v8 = v6;
  if ( v6 )
  {
    v11 = *(_QWORD *)(v6 + 8);
    v12 = *a3;
    if ( v11 != *a3 )
    {
      if ( v12 )
      {
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v12 + 8LL))(*a3);
        v11 = *(_QWORD *)(v8 + 8);
      }
      if ( v11 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
      *(_QWORD *)(v8 + 8) = v12;
    }
  }
  else
  {
    if ( !*(_QWORD *)a1 )
    {
      LOBYTE(v7) = 1;
      if ( !(unsigned __int8)sub_180018B08(a1, *(unsigned int *)(a1 + 16), v7) )
        sub_18000A174(-2147024882);
    }
    v8 = sub_180018DD8(a1, a2, v14, (unsigned int)v17);
    v17 = v8;
    v9 = *a3;
    v10 = *(_QWORD *)(v8 + 8);
    if ( v10 != *a3 )
    {
      try
      {
        if ( v9 )
        {
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v9 + 8LL))(*a3);
          v10 = *(_QWORD *)(v8 + 8);
        }
        if ( v10 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
        *(_QWORD *)(v8 + 8) = v9;
      }
      catch ( ... )
      {
        sub_180018754(a1, v17);
        throw;
      }
    }
  }
  return v8;
}
