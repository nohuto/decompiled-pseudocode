/*
 * XREFs of sub_1800343E0 @ 0x1800343E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000A174 @ 0x18000A174 (sub_18000A174.c)
 *     sub_180036244 @ 0x180036244 (sub_180036244.c)
 *     memset @ 0x18003A7D8 (memset.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

_WORD *__fastcall sub_1800343E0(__int64 a1)
{
  _WORD *v1; // rdi
  __int64 v3; // rbx
  _WORD *v4; // rax
  DWORD LengthSid; // eax

  v1 = *(_WORD **)(a1 + 136);
  if ( !v1 )
  {
    v3 = (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
    v4 = (_WORD *)o_malloc(v3);
    v1 = v4;
    if ( !v4 )
      sub_18000A174(-2147024882);
    memset(v4, 0, (unsigned int)v3);
    v1[1] = v3;
    *((_BYTE *)v1 + 1) = *(_BYTE *)(a1 + 132);
    *(_BYTE *)v1 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 24LL))(a1);
    *((_DWORD *)v1 + 1) = *(_DWORD *)(a1 + 128);
    LengthSid = GetLengthSid((PSID)(a1 + 16));
    sub_180036244(v1 + 4, v3 - 8, a1 + 16, LengthSid);
    *(_QWORD *)(a1 + 136) = v1;
  }
  return v1;
}
