/*
 * XREFs of sub_18003D000 @ 0x18003D000
 * Callers:
 *     <none>
 * Callees:
 *     sub_180043798 @ 0x180043798 (sub_180043798.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18003D000(_QWORD *a1, __int64 a2)
{
  __int64 v3; // r8
  __int64 v4; // rbx
  __int64 *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rcx
  signed __int32 v10; // eax
  __int128 v11; // [rsp+30h] [rbp-10h]
  __int64 v12; // [rsp+50h] [rbp+10h] BYREF
  __int64 v13; // [rsp+60h] [rbp+20h] BYREF

  v11 = 0LL;
  v3 = a1[10];
  if ( v3 )
  {
    while ( 1 )
    {
      v10 = *(_DWORD *)(v3 + 8);
      if ( !v10 )
        break;
      if ( v10 == _InterlockedCompareExchange((volatile signed __int32 *)(v3 + 8), v10 + 1, v10) )
      {
        v4 = a1[10];
        *((_QWORD *)&v11 + 1) = v4;
        v5 = (__int64 *)sub_180043798((unsigned int)&v12, (unsigned int)"IndexBuffer", a1[9], a1[12], a2, 2);
        goto LABEL_3;
      }
    }
  }
  v4 = 0LL;
  v5 = (__int64 *)sub_180043798((unsigned int)&v12, (unsigned int)"IndexBuffer", 0, a1[12], a2, 2);
LABEL_3:
  v6 = 0LL;
  if ( &v13 != v5 )
  {
    v6 = *v5;
    *v5 = 0LL;
  }
  v13 = a1[13];
  v7 = v13;
  a1[13] = v6;
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  v8 = v12;
  if ( v12 )
  {
    v12 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  if ( v4 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 8), 0xFFFFFFFF) == 1 )
    {
      (***((void (__fastcall ****)(_QWORD))&v11 + 1))(*((_QWORD *)&v11 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v11 + 1) + 12LL), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v11 + 1) + 8LL))(*((_QWORD *)&v11 + 1));
    }
  }
  return sub_180062844(a1, *(unsigned int *)(a1[12] + 12LL), 6LL);
}
