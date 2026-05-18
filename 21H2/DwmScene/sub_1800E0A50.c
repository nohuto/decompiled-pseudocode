/*
 * XREFs of sub_1800E0A50 @ 0x1800E0A50
 * Callers:
 *     sub_1800E0FF0 @ 0x1800E0FF0 (sub_1800E0FF0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800E0A50(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 56)
    || *(_DWORD *)(a1 + 8) != *(_DWORD *)(a1 + 24)
    || *(_DWORD *)(a1 + 12) != *(_DWORD *)(a1 + 28)
    || *(_DWORD *)(a1 + 16) != *(_DWORD *)(a1 + 32)
    || (result = *(unsigned int *)(a1 + 36), *(_DWORD *)(a1 + 20) != (_DWORD)result) )
  {
    *(_OWORD *)(a1 + 24) = *(_OWORD *)(a1 + 8);
    result = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _DWORD))(*(_QWORD *)a2 + 192LL))(
               a2,
               *(unsigned int *)(a1 + 24),
               *(unsigned int *)(a1 + 28),
               *(unsigned int *)(a1 + 32),
               *(_DWORD *)(a1 + 36));
  }
  *(_BYTE *)(a1 + 56) = 0;
  return result;
}
