/*
 * XREFs of sub_180031DB4 @ 0x180031DB4
 * Callers:
 *     sub_180031940 @ 0x180031940 (sub_180031940.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180046860 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180031DB4(__int64 a1, __int64 a2)
{
  __int64 v2; // r11
  __int64 result; // rax
  unsigned int v4; // ebx
  _QWORD *v5; // rcx
  _QWORD *v6; // r9

  v2 = *(_QWORD *)(a1 + 288);
  if ( v2 )
  {
    if ( *(_DWORD *)a2 == 1 )
    {
      return (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, _DWORD, _QWORD))(*(_QWORD *)v2 + 24LL))(
               v2,
               *(_QWORD *)(a2 + 8),
               a2 + 40,
               *(unsigned int *)(a2 + 108),
               *(_DWORD *)(a2 + 112),
               *(_QWORD *)(a2 + 120));
    }
    else if ( *(_DWORD *)a2 == 2 )
    {
      v4 = *(_DWORD *)(a2 + 128);
      v5 = (_QWORD *)(a2 + 112);
      v6 = (_QWORD *)(a2 + 120);
      if ( v4 > 1 )
      {
        v5 = (_QWORD *)*v5;
        v6 = (_QWORD *)*v6;
      }
      return (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, _QWORD *, _QWORD *, unsigned int, _DWORD))(*(_QWORD *)v2 + 32LL))(
               v2,
               *(_QWORD *)(a2 + 8),
               a2 + 40,
               *(unsigned int *)(a2 + 108),
               v5,
               v6,
               v4,
               *(_DWORD *)(a2 + 132));
    }
  }
  return result;
}
