/*
 * XREFs of sub_180035FE0 @ 0x180035FE0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180035FE0(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  unsigned int v4; // edi

  result = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)*a2 + 56LL))(
             *a2,
             *(_QWORD *)(a1 + 8),
             *(unsigned int *)(a1 + 16),
             *(unsigned int *)(a1 + 20));
  v4 = result;
  if ( *a2 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 16LL))(*a2);
    return v4;
  }
  return result;
}
