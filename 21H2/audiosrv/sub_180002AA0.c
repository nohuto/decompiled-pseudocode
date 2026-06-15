/*
 * XREFs of sub_180002AA0 @ 0x180002AA0
 * Callers:
 *     sub_1800029E0 @ 0x1800029E0 (sub_1800029E0.c)
 *     sub_180002FD4 @ 0x180002FD4 (sub_180002FD4.c)
 *     sub_1800CFF9C @ 0x1800CFF9C (sub_1800CFF9C.c)
 *     sub_1800ED584 @ 0x1800ED584 (sub_1800ED584.c)
 * Callees:
 *     sub_180008C14 @ 0x180008C14 (sub_180008C14.c)
 *     sub_180048790 @ 0x180048790 (sub_180048790.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180002AA0(__int64 a1, __int64 a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  _QWORD *v5; // rdi
  _QWORD *v6; // r14

  v4 = (struct _RTL_CRITICAL_SECTION *)(a1 + 736);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 736));
  v5 = *(_QWORD **)(a1 + 776);
  v6 = *(_QWORD **)(a1 + 784);
  while ( v5 != v6 )
  {
    if ( *(_QWORD *)(a2 + 16) == *(_QWORD *)(a2 + 8) )
    {
      sub_180008C14(a2, *(_QWORD *)(a2 + 8), v5);
    }
    else
    {
      sub_180048790(*(_QWORD *)(a2 + 8), *v5);
      *(_QWORD *)(a2 + 8) += 8LL;
    }
    ++v5;
  }
  if ( v4 )
    LeaveCriticalSection(v4);
  return 0LL;
}
