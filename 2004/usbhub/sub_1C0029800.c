/*
 * XREFs of sub_1C0029800 @ 0x1C0029800
 * Callers:
 *     sub_1C002D410 @ 0x1C002D410 (sub_1C002D410.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D060 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1C0029800(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // edi
  unsigned int v6; // ebx
  _DWORD *i; // r15
  unsigned int v8; // r12d
  int v9; // ebp
  _DWORD *v10; // rax

  v5 = 0;
  v6 = 0;
  for ( i = sub_1C0011220(a2); v6 < *(_DWORD *)(a3 + 16); ++v6 )
  {
    v8 = i[292];
    v9 = 0;
    v10 = sub_1C000F050(a1);
    if ( *((_QWORD *)v10 + 551) )
      v9 = (*((__int64 (__fastcall **)(_QWORD, __int64, _QWORD))v10 + 551))(
             *((_QWORD *)v10 + 529),
             a3 + 24 * (v6 + 1LL),
             v8);
    v5 += v9;
  }
  return v5 / 0x3E8;
}
