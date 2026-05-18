/*
 * XREFs of sub_180089530 @ 0x180089530
 * Callers:
 *     sub_1800891C4 @ 0x1800891C4 (sub_1800891C4.c)
 * Callees:
 *     sub_180089770 @ 0x180089770 (sub_180089770.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_180089530(__int64 a1)
{
  _QWORD *v2; // rdi
  _QWORD *v3; // rbx
  volatile signed __int32 *v4; // rax
  __int64 **v5; // rax
  __int64 i; // rax
  __int64 *j; // rcx
  volatile signed __int32 *v8; // [rsp+30h] [rbp+8h]

  v2 = *(_QWORD **)(a1 + 88);
  v3 = (_QWORD *)*v2;
  while ( v3 != v2 )
  {
    v4 = (volatile signed __int32 *)(v3[8] + 76LL);
    v8 = v4;
    while ( _interlockedbittestandset(v4, 0) )
      v4 = v8;
    sub_180089770(a1);
    *v8 = 0;
    v5 = (__int64 **)v3[2];
    if ( *((_BYTE *)v5 + 25) )
    {
      for ( i = v3[1]; !*(_BYTE *)(i + 25) && v3 == *(_QWORD **)(i + 16); i = *(_QWORD *)(i + 8) )
        v3 = (_QWORD *)i;
      v3 = (_QWORD *)i;
    }
    else
    {
      v3 = (_QWORD *)v3[2];
      for ( j = *v5; !*((_BYTE *)j + 25); j = (__int64 *)*j )
        v3 = j;
    }
  }
}
