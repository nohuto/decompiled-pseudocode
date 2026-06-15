/*
 * XREFs of sub_180017ABC @ 0x180017ABC
 * Callers:
 *     sub_180014EDC @ 0x180014EDC (sub_180014EDC.c)
 *     sub_180025BB0 @ 0x180025BB0 (sub_180025BB0.c)
 *     sub_18003BD7F @ 0x18003BD7F (sub_18003BD7F.c)
 *     sub_18003BD98 @ 0x18003BD98 (sub_18003BD98.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180017ABC(__int64 *a1)
{
  __int64 v2; // rcx
  int v3; // edi
  __int64 v4; // rsi
  volatile signed __int32 *v5; // rdx
  __int64 result; // rax
  __int64 v7; // rcx

  v2 = *a1;
  if ( v2 )
  {
    v3 = 0;
    if ( *((int *)a1 + 4) > 0 )
    {
      v4 = 0LL;
      do
      {
        v5 = (volatile signed __int32 *)(*(_QWORD *)(v4 + *a1) - 24LL);
        if ( _InterlockedExchangeAdd(v5 + 4, 0xFFFFFFFF) <= 1 )
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v5 + 8LL))(*(_QWORD *)v5);
        ++v3;
        v4 += 8LL;
      }
      while ( v3 < *((_DWORD *)a1 + 4) );
      v2 = *a1;
    }
    result = _o_free(v2);
    *a1 = 0LL;
  }
  v7 = a1[1];
  if ( v7 )
  {
    result = _o_free(v7);
    a1[1] = 0LL;
  }
  *((_DWORD *)a1 + 4) = 0;
  return result;
}
