/*
 * XREFs of sub_18002CA20 @ 0x18002CA20
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800050FC @ 0x1800050FC (sub_1800050FC.c)
 *     sub_18001E848 @ 0x18001E848 (sub_18001E848.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18002CA20(__int64 a1)
{
  void *v2; // rcx
  volatile signed __int32 *v3; // rbx
  __int64 result; // rax

  v2 = off_18004F000;
  if ( off_18004F000 != (_UNKNOWN *)&off_18004F000
    && (*((_DWORD *)off_18004F000 + 7) & 0x40000000) != 0
    && *((_BYTE *)off_18004F000 + 25) >= 4u )
  {
    sub_1800050FC(*((_QWORD *)off_18004F000 + 2), 0x1Au, &stru_180045198, *(_DWORD *)(*(_QWORD *)(a1 + 8) + 192LL));
  }
  sub_18001E848((__int64)v2, *(_QWORD *)(a1 + 8));
  v3 = *(volatile signed __int32 **)(a1 + 8);
  result = (unsigned int)_InterlockedExchangeAdd(v3 + 2, 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
  {
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 32LL))(v3);
    return (*(__int64 (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v3 + 24LL))(v3, 1LL);
  }
  return result;
}
