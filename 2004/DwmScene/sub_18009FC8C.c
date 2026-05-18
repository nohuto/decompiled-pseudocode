/*
 * XREFs of sub_18009FC8C @ 0x18009FC8C
 * Callers:
 *     sub_18007354C @ 0x18007354C (sub_18007354C.c)
 * Callees:
 *     sub_1800A3C48 @ 0x1800A3C48 (sub_1800A3C48.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_18009FC8C(__int64 a1, _QWORD *a2)
{
  _QWORD *v3; // rdi
  _QWORD *v4; // rbx
  __int64 v5; // rcx
  __int64 **v6; // rax
  __int64 i; // rax
  __int64 *j; // rcx
  volatile signed __int32 *v9; // rbx
  __int128 v10; // [rsp+20h] [rbp-18h] BYREF

  v3 = *(_QWORD **)(a1 + 18560);
  v4 = (_QWORD *)*v3;
  while ( v4 != v3 )
  {
    v10 = 0LL;
    v5 = a2[1];
    if ( v5 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
      v5 = a2[1];
    }
    *(_QWORD *)&v10 = *a2;
    *((_QWORD *)&v10 + 1) = v5;
    sub_1800A3C48(v4[8], &v10);
    v6 = (__int64 **)v4[2];
    if ( *((_BYTE *)v6 + 25) )
    {
      for ( i = v4[1]; !*(_BYTE *)(i + 25) && v4 == *(_QWORD **)(i + 16); i = *(_QWORD *)(i + 8) )
        v4 = (_QWORD *)i;
      v4 = (_QWORD *)i;
    }
    else
    {
      v4 = (_QWORD *)v4[2];
      for ( j = *v6; !*((_BYTE *)j + 25); j = (__int64 *)*j )
        v4 = j;
    }
  }
  v9 = (volatile signed __int32 *)a2[1];
  if ( v9 && _InterlockedExchangeAdd(v9 + 2, 0xFFFFFFFF) == 1 )
  {
    (**(void (__fastcall ***)(volatile signed __int32 *))v9)(v9);
    if ( !_InterlockedDecrement(v9 + 3) )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 8LL))(v9);
  }
}
