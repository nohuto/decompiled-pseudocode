/*
 * XREFs of sub_1800324C8 @ 0x1800324C8
 * Callers:
 *     sub_1800322B0 @ 0x1800322B0 (sub_1800322B0.c)
 * Callees:
 *     sub_18000A174 @ 0x18000A174 (sub_18000A174.c)
 *     sub_180017BB0 @ 0x180017BB0 (sub_180017BB0.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall sub_1800324C8(__int64 a1)
{
  bool v1; // si
  int *v2; // rax
  __int64 v3; // rbp
  int v4; // edi
  __int64 v5; // rbx
  int *v7; // [rsp+48h] [rbp+10h] BYREF

  v1 = 0;
  sub_180017BB0((void **)&v7, a1);
  v2 = v7;
  v3 = *(v7 - 4);
  if ( (int)v3 > 0 )
  {
    v4 = 0;
    v5 = 0LL;
    while ( 1 )
    {
      if ( v5 < 0 || v4 > *(v2 - 4) )
        goto LABEL_14;
      if ( !IsCharAlphaNumericW(*((_WORD *)v2 + v5)) )
        break;
      if ( v4 > *(v7 - 4) )
LABEL_14:
        sub_18000A174(-2147024809);
      if ( IsCharAlphaW(*((_WORD *)v7 + v5)) )
        break;
      ++v4;
      ++v5;
      v2 = v7;
      if ( v5 >= v3 )
        goto LABEL_9;
    }
    v2 = v7;
LABEL_9:
    v1 = v4 == (_DWORD)v3;
  }
  if ( _InterlockedExchangeAdd(v2 - 2, 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)v2 - 3) + 8LL))(*((_QWORD *)v2 - 3));
  return v1;
}
