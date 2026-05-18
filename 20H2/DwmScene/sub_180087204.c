/*
 * XREFs of sub_180087204 @ 0x180087204
 * Callers:
 *     sub_180010E78 @ 0x180010E78 (sub_180010E78.c)
 *     sub_1800B5E98 @ 0x1800B5E98 (sub_1800B5E98.c)
 *     sub_1800E4434 @ 0x1800E4434 (sub_1800E4434.c)
 * Callees:
 *     sub_180061810 @ 0x180061810 (sub_180061810.c)
 *     sub_18008495C @ 0x18008495C (sub_18008495C.c)
 *     sub_180087B70 @ 0x180087B70 (sub_180087B70.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall sub_180087204(__int64 a1, __int64 a2)
{
  __int64 i; // rax
  _QWORD *v5; // rdi
  _QWORD *v6; // rbx
  __int64 *v7; // rax
  volatile signed __int32 *v8; // rsi
  _QWORD *v9; // rcx
  _BYTE v11[8]; // [rsp+20h] [rbp-18h] BYREF
  volatile signed __int32 *v12; // [rsp+28h] [rbp-10h]

  LOBYTE(i) = sub_180061810(a1 + 16);
  v5 = *(_QWORD **)(a1 + 88);
  v6 = (_QWORD *)*v5;
  while ( v6 != v5 )
  {
    v7 = (__int64 *)sub_180087B70(v6[8], v11);
    sub_18008495C(a2, v7);
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
