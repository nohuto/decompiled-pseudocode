/*
 * XREFs of sub_1C001890C @ 0x1C001890C
 * Callers:
 *     sub_1C00162A8 @ 0x1C00162A8 (sub_1C00162A8.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D060 (_guard_dispatch_icall_nop.c)
 *     sub_1C003ABE4 @ 0x1C003ABE4 (sub_1C003ABE4.c)
 */

__int64 __fastcall sub_1C001890C(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *v7; // rax
  _OWORD *PoolWithTag; // rax
  void *v10; // rbx
  int v11; // [rsp+30h] [rbp-18h] BYREF
  int v12; // [rsp+34h] [rbp-14h] BYREF

  if ( (sub_1C0011220(a2)[358] & 0x4000) != 0 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PoolType, 0x1BuLL, 0x42554855u);
    v10 = PoolWithTag;
    if ( PoolWithTag )
    {
      *PoolWithTag = 0LL;
      *((_QWORD *)PoolWithTag + 2) = 0LL;
      *((_WORD *)PoolWithTag + 12) = 0;
      *((_BYTE *)PoolWithTag + 26) = 0;
      v12 = 18;
      v11 = 9;
      sub_1C003ABE4(a1, a4, (_DWORD)PoolWithTag, (unsigned int)&v12, (__int64)PoolWithTag + 18, (__int64)&v11);
      ExFreePoolWithTag(v10, 0);
    }
  }
  v7 = sub_1C000F050(a1);
  if ( *((_QWORD *)v7 + 536) )
    return (*((__int64 (__fastcall **)(_QWORD, __int64, __int64))v7 + 536))(*((_QWORD *)v7 + 529), a3, a4);
  else
    return 3221225474LL;
}
