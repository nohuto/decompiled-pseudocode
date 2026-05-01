/*
 * XREFs of sub_18003299C @ 0x18003299C
 * Callers:
 *     sub_180046C95 @ 0x180046C95 (sub_180046C95.c)
 * Callees:
 *     j_j__o_free @ 0x1800447B8 (j_j__o_free.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18003299C(__int64 *a1)
{
  __int64 v1; // rbx
  unsigned int v2; // edi
  __int64 result; // rax
  __int64 v4; // rcx

  v1 = *a1;
  v2 = 0;
  if ( *a1 )
  {
    *a1 = 0LL;
    result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(v1 + 8), 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
    {
      *(_QWORD *)v1 = &off_18004C4C8;
      if ( *(_DWORD *)(v1 + 12) )
      {
        do
        {
          v4 = *(_QWORD *)(v1 + 8LL * v2 + 16);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
          ++v2;
        }
        while ( v2 < *(_DWORD *)(v1 + 12) );
      }
      return j_j__o_free(v1, 144LL);
    }
  }
  return result;
}
