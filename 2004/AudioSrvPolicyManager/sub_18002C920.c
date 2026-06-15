/*
 * XREFs of sub_18002C920 @ 0x18002C920
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800050FC @ 0x1800050FC (sub_1800050FC.c)
 *     sub_1800121E8 @ 0x1800121E8 (sub_1800121E8.c)
 *     sub_180015BC8 @ 0x180015BC8 (sub_180015BC8.c)
 *     sub_18001E6B8 @ 0x18001E6B8 (sub_18001E6B8.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18002C920(__int64 a1)
{
  __int64 v1; // rax
  __int64 v3; // rdi
  _DWORD *v4; // rcx
  volatile signed __int32 *v5; // rbx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 8);
  v3 = *(_QWORD *)(v1 + 256);
  v4 = (_DWORD *)v1;
  if ( off_18004F000 != (_UNKNOWN *)&off_18004F000
    && (*((_DWORD *)off_18004F000 + 7) & 0x40000000) != 0
    && *((_BYTE *)off_18004F000 + 25) >= 4u )
  {
    sub_1800050FC(*((_QWORD *)off_18004F000 + 2), 0x17u, &stru_180045198, *(_DWORD *)(v1 + 192));
    v4 = *(_DWORD **)(a1 + 8);
  }
  if ( v4[127] == 3 )
  {
    v4[127] = 0;
    v4[128] = 0;
    v4[129] = 4;
    v4 = *(_DWORD **)(a1 + 8);
  }
  sub_180015BC8((__int64)v4);
  if ( v3 )
  {
    sub_1800121E8(v3);
    sub_18001E6B8(qword_18004FE78, v3, 0xD1u, 0);
  }
  v5 = *(volatile signed __int32 **)(a1 + 8);
  result = (unsigned int)_InterlockedExchangeAdd(v5 + 2, 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
  {
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 32LL))(v5);
    return (*(__int64 (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v5 + 24LL))(v5, 1LL);
  }
  return result;
}
