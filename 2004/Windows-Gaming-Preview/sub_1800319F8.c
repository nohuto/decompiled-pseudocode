/*
 * XREFs of sub_1800319F8 @ 0x1800319F8
 * Callers:
 *     sub_18002D090 @ 0x18002D090 (sub_18002D090.c)
 * Callees:
 *     sub_180011A50 @ 0x180011A50 (sub_180011A50.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall sub_1800319F8(_QWORD *a1, __int64 a2)
{
  _QWORD *v3; // r14
  __int64 v5; // rcx
  __int64 v6; // rbx
  unsigned int v7; // ecx
  __int64 v8; // r8
  volatile signed __int32 *v9; // rax

  v3 = a1 + 2;
  *a1 = &off_18004C4D0;
  sub_180011A50(a1 + 2);
  v5 = qword_18005ADB0;
  *a1 = off_18004C710;
  v6 = 0LL;
  a1[7] = 1LL;
  a1[1] = off_18004C6F0;
  *v3 = off_18004C6A8;
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  *a1 = &off_18004D340;
  a1[1] = off_18004BEF0;
  *v3 = off_18004BEA8;
  a1[8] = a2;
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  if ( *(_QWORD *)(a2 + 88) )
  {
    v7 = 0;
    if ( *(_DWORD *)(a2 + 96) )
    {
      while ( 1 )
      {
        v8 = *(_QWORD *)(a2 + 80);
        if ( *(_QWORD *)(v8 + 8LL * v7) )
          break;
        if ( ++v7 >= *(_DWORD *)(a2 + 96) )
          goto LABEL_11;
      }
      v6 = *(_QWORD *)(v8 + 8LL * v7);
    }
  }
LABEL_11:
  a1[9] = v6;
  v9 = *(volatile signed __int32 **)(a2 + 176);
  a1[10] = v9;
  _InterlockedIncrement(v9);
  return a1;
}
