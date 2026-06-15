/*
 * XREFs of sub_180069338 @ 0x180069338
 * Callers:
 *     sub_18007D1F0 @ 0x18007D1F0 (sub_18007D1F0.c)
 *     sub_1800B8200 @ 0x1800B8200 (sub_1800B8200.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

void sub_180069338()
{
  __int64 *v0; // rbx
  unsigned __int64 v1; // rax
  __int64 v2; // rdi
  __int64 v3; // rcx

  if ( dword_18019E690 )
  {
    v0 = (__int64 *)qword_18019E6A0;
    v1 = qword_18019E6A8;
    while ( (unsigned __int64)v0 < v1 )
    {
      v2 = *v0;
      if ( *v0 )
      {
        v3 = *(_QWORD *)(v2 + 32);
        if ( v3 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
        *(_QWORD *)(v2 + 32) = 0LL;
        v1 = qword_18019E6A8;
      }
      ++v0;
    }
    DeleteCriticalSection(&stru_18019E6B0);
    dword_18019E690 = 0;
  }
}
