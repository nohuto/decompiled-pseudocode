/*
 * XREFs of sub_180083800 @ 0x180083800
 * Callers:
 *     sub_18007DF60 @ 0x18007DF60 (sub_18007DF60.c)
 *     sub_1800821F4 @ 0x1800821F4 (sub_1800821F4.c)
 * Callees:
 *     sub_18007FCE4 @ 0x18007FCE4 (sub_18007FCE4.c)
 *     sub_1800839A4 @ 0x1800839A4 (sub_1800839A4.c)
 *     sub_180083A6C @ 0x180083A6C (sub_180083A6C.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180083800(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rbx
  _QWORD *v4; // rbp
  _QWORD *i; // rsi

  result = sub_180083A6C(a1);
  if ( *(_BYTE *)(a1 + 104) )
  {
    v3 = a1;
    do
    {
      sub_1800839A4(v3);
      v4 = *(_QWORD **)(v3 + 384);
      for ( i = *(_QWORD **)(v3 + 376); i != v4; i += 2 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*i + 128LL))(*i);
      *(_BYTE *)(v3 + 104) = 0;
      result = sub_18007FCE4(a1, v3);
      v3 = result;
    }
    while ( result );
  }
  return result;
}
