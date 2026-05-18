/*
 * XREFs of sub_1800618F0 @ 0x1800618F0
 * Callers:
 *     sub_180065714 @ 0x180065714 (sub_180065714.c)
 *     sub_180065774 @ 0x180065774 (sub_180065774.c)
 *     sub_180069F90 @ 0x180069F90 (sub_180069F90.c)
 *     sub_180072348 @ 0x180072348 (sub_180072348.c)
 *     sub_18007240C @ 0x18007240C (sub_18007240C.c)
 *     sub_18007777C @ 0x18007777C (sub_18007777C.c)
 *     sub_180085CBC @ 0x180085CBC (sub_180085CBC.c)
 *     sub_1800AED70 @ 0x1800AED70 (sub_1800AED70.c)
 * Callees:
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800618F0(__int64 *a1)
{
  __int64 v1; // rbx
  __int64 v3; // rbp
  __int64 v4; // rsi
  volatile signed __int32 *v5; // rcx
  unsigned __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned __int64 v8; // rdx
  __int64 result; // rax

  v1 = *a1;
  if ( *a1 )
  {
    v3 = a1[1];
    v4 = *a1;
    if ( v1 != v3 )
    {
      do
      {
        v5 = *(volatile signed __int32 **)(v4 + 8);
        if ( v5 && _InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
        v4 += 16LL;
      }
      while ( v4 != v3 );
    }
    v6 = (a1[2] - v1) & 0xFFFFFFFFFFFFFFF0uLL;
    if ( v6 >= 0x1000 )
    {
      v7 = *(_QWORD *)(v1 - 8);
      v8 = v6 + 39;
      if ( (unsigned __int64)(v1 - v7 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v7, v8);
        JUMPOUT(0x1800619A4LL);
      }
      v1 = *(_QWORD *)(v1 - 8);
    }
    result = j_j__o_free(v1);
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
  return result;
}
