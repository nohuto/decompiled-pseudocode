/*
 * XREFs of sub_180011E00 @ 0x180011E00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180011E00(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 result; // rax
  unsigned int v5; // ebx

  *a3 = 0LL;
  while ( 1 )
  {
    result = *(unsigned int *)(a1 + 16);
    if ( !(_DWORD)result )
      break;
    if ( (_DWORD)result == _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 16), result + 1, result) )
    {
      v5 = (***(__int64 (__fastcall ****)(_QWORD))(a1 + 24))(*(_QWORD *)(a1 + 24));
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 16LL))(*(_QWORD *)(a1 + 24));
      return v5;
    }
  }
  return result;
}
