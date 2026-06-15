/*
 * XREFs of sub_1800230F0 @ 0x1800230F0
 * Callers:
 *     sub_180020B94 @ 0x180020B94 (sub_180020B94.c)
 *     sub_180021660 @ 0x180021660 (sub_180021660.c)
 *     sub_180021FB0 @ 0x180021FB0 (sub_180021FB0.c)
 *     sub_1800229D0 @ 0x1800229D0 (sub_1800229D0.c)
 *     sub_180022AC0 @ 0x180022AC0 (sub_180022AC0.c)
 *     sub_180022F30 @ 0x180022F30 (sub_180022F30.c)
 *     sub_180023050 @ 0x180023050 (sub_180023050.c)
 *     sub_180023540 @ 0x180023540 (sub_180023540.c)
 *     sub_1800271DC @ 0x1800271DC (sub_1800271DC.c)
 *     sub_18002732C @ 0x18002732C (sub_18002732C.c)
 * Callees:
 *     sub_180023320 @ 0x180023320 (sub_180023320.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_180052550 @ 0x180052550 (sub_180052550.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x180069110 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800BB2C8 @ 0x1800BB2C8 (sub_1800BB2C8.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800230F0(__int64 a1)
{
  int v3; // ebx
  __int64 v4; // rsi
  int v5; // r15d
  struct _RTL_CRITICAL_SECTION *v6; // r12
  __int64 v7; // r14
  __int64 v8; // rdi
  int v9; // ebx
  __int64 v10; // r13
  __int64 v11; // rax
  _QWORD *v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rsi
  _QWORD *v15; // rax
  int v16; // eax
  volatile signed __int32 **v17; // r14
  volatile signed __int32 *v18; // rbx
  __int64 v19; // [rsp+20h] [rbp-38h] BYREF
  __int64 v20; // [rsp+28h] [rbp-30h]
  void *retaddr; // [rsp+58h] [rbp+0h]

  if ( !*(_BYTE *)(a1 + 52) )
    return 0LL;
  v6 = (struct _RTL_CRITICAL_SECTION *)(a1 + 56);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 56));
  v7 = 0LL;
  v19 = 0LL;
  v8 = 0LL;
  v20 = 0LL;
  v5 = 0;
  v9 = 0;
  if ( *(int *)(a1 + 40) > 0 )
  {
    v14 = 0LL;
    do
    {
      if ( v14 < 0 || v9 >= *(_DWORD *)(a1 + 40) )
      {
        sub_1800BB2C8(3221225612LL);
        goto LABEL_29;
      }
      v10 = *(_QWORD *)(a1 + 32);
      if ( (_DWORD)v8 == v5 )
      {
        if ( v5 )
        {
          v5 = 2 * v8;
          if ( (v8 & 0x40000000) != 0 )
            goto LABEL_42;
        }
        else
        {
          v5 = 1;
        }
        if ( (unsigned __int64)v5 > 0x7FFFFFF || (v11 = o__recalloc(v7, v5, 16LL)) == 0 )
        {
LABEL_42:
          v5 = -2147024882;
          sub_18004BD84(
            retaddr,
            502LL,
            "avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
            2147942414LL);
          goto LABEL_6;
        }
        HIDWORD(v20) = v5;
        v7 = v11;
        v19 = v11;
      }
      v12 = (_QWORD *)(v7 + 16LL * (int)v8);
      if ( v12 )
      {
        *v12 = 0LL;
        v12[1] = 0LL;
        v13 = *(_QWORD *)(v10 + v14 + 8);
        if ( v13 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v13 + 8));
          v5 = HIDWORD(v20);
          LODWORD(v8) = v20;
          v7 = v19;
        }
        *v12 = *(_QWORD *)(v10 + v14);
        v12[1] = *(_QWORD *)(v10 + v14 + 8);
      }
      v8 = (unsigned int)(v8 + 1);
      LODWORD(v20) = v8;
      ++v9;
      v14 += 16LL;
    }
    while ( v9 < *(_DWORD *)(a1 + 40) );
  }
  v3 = 0;
  if ( (int)v8 <= 0 )
  {
LABEL_5:
    v5 = 0;
  }
  else
  {
    v4 = v7;
    while ( 1 )
    {
      if ( v3 < 0 )
      {
        sub_1800BB2C8(3221225612LL);
        __debugbreak();
      }
      if ( *(_BYTE *)(*(_QWORD *)v4 + 20LL) )
      {
        v15 = (_QWORD *)sub_180023320(&v19, (unsigned int)v3);
        v16 = sub_180052550(*v15, a1);
        v5 = v16;
        if ( v16 < 0 )
          break;
      }
      ++v3;
      v4 += 16LL;
      if ( v3 >= (int)v8 )
        goto LABEL_5;
    }
    sub_18004BD84(
      retaddr,
      508LL,
      "avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
      (unsigned int)v16);
  }
LABEL_6:
  if ( v7 )
  {
    if ( (int)v8 > 0 )
    {
      v17 = (volatile signed __int32 **)(v7 + 8);
      do
      {
        v18 = *v17;
        if ( *v17 )
        {
          if ( _InterlockedExchangeAdd(v18 + 2, 0xFFFFFFFF) == 1 )
          {
            (**(void (__fastcall ***)(volatile signed __int32 *))v18)(v18);
            std::_Ref_count_base::_Decwref((std::_Ref_count_base *)v18);
          }
        }
        v17 += 2;
        --v8;
      }
      while ( v8 );
      v7 = v19;
    }
    _o_free(v7);
  }
  if ( v6 )
LABEL_29:
    LeaveCriticalSection(v6);
  return (unsigned int)v5;
}
