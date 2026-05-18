/*
 * XREFs of sub_18008CAD4 @ 0x18008CAD4
 * Callers:
 *     sub_180010F58 @ 0x180010F58 (sub_180010F58.c)
 *     sub_1800BB768 @ 0x1800BB768 (sub_1800BB768.c)
 *     sub_1800E9D04 @ 0x1800E9D04 (sub_1800E9D04.c)
 * Callees:
 *     sub_1800670E0 @ 0x1800670E0 (sub_1800670E0.c)
 *     sub_18008A22C @ 0x18008A22C (sub_18008A22C.c)
 *     sub_18008D440 @ 0x18008D440 (sub_18008D440.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall sub_18008CAD4(__int64 a1, __int64 a2)
{
  __int64 i; // rax
  _QWORD *v5; // rdi
  _QWORD *v6; // rbx
  __int64 *v7; // rax
  volatile signed __int32 *v8; // rsi
  _QWORD *v9; // rcx
  _BYTE v11[8]; // [rsp+20h] [rbp-18h] BYREF
  volatile signed __int32 *v12; // [rsp+28h] [rbp-10h]

  LOBYTE(i) = sub_1800670E0(a1 + 16);
  v5 = *(_QWORD **)(a1 + 88);
  v6 = (_QWORD *)*v5;
  while ( v6 != v5 )
  {
    v7 = (__int64 *)sub_18008D440(v6[8], v11);
    sub_18008A22C(a2, v7);
    v8 = v12;
    if ( v12 )
    {
      if ( _InterlockedExchangeAdd(v12 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v8)(v8);
        if ( _InterlockedExchangeAdd(v8 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 8LL))(v8);
      }
    }
    i = v6[2];
    if ( *(_BYTE *)(i + 25) )
    {
      for ( i = v6[1]; !*(_BYTE *)(i + 25) && v6 == *(_QWORD **)(i + 16); i = *(_QWORD *)(i + 8) )
        v6 = (_QWORD *)i;
      v6 = (_QWORD *)i;
    }
    else
    {
      v6 = (_QWORD *)v6[2];
      v9 = *(_QWORD **)i;
      if ( !*(_BYTE *)(*(_QWORD *)i + 25LL) )
      {
        do
        {
          v6 = v9;
          i = *v9;
          v9 = (_QWORD *)i;
        }
        while ( !*(_BYTE *)(i + 25) );
      }
    }
  }
  return i;
}
