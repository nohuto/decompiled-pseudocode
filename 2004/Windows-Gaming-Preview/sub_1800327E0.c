/*
 * XREFs of sub_1800327E0 @ 0x1800327E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800327E0(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // ebx
  __int64 v3; // r8
  __int64 v4; // rax
  __int64 v5; // rcx

  v2 = 0;
  *a2 = 0LL;
  v3 = *(_QWORD *)(a1 + 64);
  v4 = *(unsigned int *)(a1 + 72);
  if ( (unsigned int)v4 >= *(_DWORD *)(v3 + 12) )
  {
    v2 = -2147483637;
    RoOriginateError(2147483659LL, 0LL);
  }
  else
  {
    v5 = *(_QWORD *)(v3 + 8 * v4 + 16);
    *a2 = v5;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  }
  return v2;
}
