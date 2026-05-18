/*
 * XREFs of sub_18007FCE4 @ 0x18007FCE4
 * Callers:
 *     sub_18007FF4C @ 0x18007FF4C (sub_18007FF4C.c)
 *     sub_1800836DC @ 0x1800836DC (sub_1800836DC.c)
 *     sub_180083800 @ 0x180083800 (sub_180083800.c)
 * Callees:
 *     sub_18007FC40 @ 0x18007FC40 (sub_18007FC40.c)
 *     sub_1800839A4 @ 0x1800839A4 (sub_1800839A4.c)
 *     sub_180083A6C @ 0x180083A6C (sub_180083A6C.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18007FCE4(__int64 a1, __int64 a2)
{
  int v4; // esi
  __int64 v5; // rbp
  volatile signed __int32 *v6; // r14
  __int64 v7; // r8
  __int64 v8; // rdx
  signed __int32 v9; // eax
  char v10; // bl
  __int64 *v11; // r8
  volatile signed __int32 *v12; // rbx
  __int64 v13; // rdx
  signed __int32 v14; // eax
  volatile signed __int32 *v15; // rbx
  __int64 v16; // rdx
  signed __int32 v17; // eax
  __int64 v18; // rbx
  __int128 v20; // [rsp+20h] [rbp-38h] BYREF
  volatile signed __int32 *v21; // [rsp+70h] [rbp+18h]

  v4 = 0;
  LODWORD(v21) = 0;
  sub_180083A6C(a1);
  v20 = 0LL;
  sub_18007FC40(a2, &v20);
  v5 = v20;
  if ( !(_QWORD)v20 )
  {
    v6 = v21;
    do
    {
      if ( a2 == a1 )
        goto LABEL_12;
      sub_1800839A4(a2);
      v7 = 0LL;
      v6 = 0LL;
      v8 = *(_QWORD *)(a2 + 136);
      if ( v8 )
      {
        while ( 1 )
        {
          v9 = *(_DWORD *)(v8 + 8);
          if ( !v9 )
            break;
          if ( v9 == _InterlockedCompareExchange((volatile signed __int32 *)(v8 + 8), v9 + 1, v9) )
          {
            v7 = *(_QWORD *)(a2 + 128);
            v6 = *(volatile signed __int32 **)(a2 + 136);
            break;
          }
        }
      }
      v4 |= 5u;
      if ( v7 )
LABEL_12:
        v10 = 0;
      else
        v10 = 1;
      if ( (v4 & 1) != 0 )
      {
        v4 &= ~1u;
        if ( v6 )
        {
          if ( _InterlockedExchangeAdd(v6 + 2, 0xFFFFFFFF) == 1 )
          {
            (**(void (__fastcall ***)(volatile signed __int32 *))v6)(v6);
            if ( _InterlockedExchangeAdd(v6 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 8LL))(v6);
          }
        }
      }
      if ( !v10 )
        break;
      sub_1800839A4(a2);
      v11 = (__int64 *)(a2 + 56);
      a2 = 0LL;
      v12 = 0LL;
      v13 = v11[1];
      if ( v13 )
      {
        while ( 1 )
        {
          v14 = *(_DWORD *)(v13 + 8);
          if ( !v14 )
            break;
          if ( v14 == _InterlockedCompareExchange((volatile signed __int32 *)(v13 + 8), v14 + 1, v14) )
          {
            a2 = *v11;
            v12 = (volatile signed __int32 *)v11[1];
            break;
          }
        }
      }
      v4 |= 8u;
      if ( v12 )
      {
        if ( _InterlockedExchangeAdd(v12 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v12)(v12);
          if ( _InterlockedExchangeAdd(v12 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
        }
      }
    }
    while ( a2 );
    if ( a2 )
    {
      sub_1800839A4(a2);
      v5 = 0LL;
      v15 = 0LL;
      v16 = *(_QWORD *)(a2 + 136);
      if ( v16 )
      {
        while ( 1 )
        {
          v17 = *(_DWORD *)(v16 + 8);
          if ( !v17 )
            break;
          if ( v17 == _InterlockedCompareExchange((volatile signed __int32 *)(v16 + 8), v17 + 1, v17) )
          {
            v5 = *(_QWORD *)(a2 + 128);
            v15 = *(volatile signed __int32 **)(a2 + 136);
            break;
          }
        }
      }
      LOBYTE(v4) = v4 | 0x12;
    }
    else
    {
      v5 = 0LL;
      v15 = v21;
    }
    if ( (v4 & 2) != 0 )
    {
      if ( v15 )
      {
        if ( _InterlockedExchangeAdd(v15 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v15)(v15);
          if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
        }
      }
    }
  }
  if ( *((_QWORD *)&v20 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v20 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      v18 = *((_QWORD *)&v20 + 1);
      (***((void (__fastcall ****)(_QWORD))&v20 + 1))(*((_QWORD *)&v20 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v18 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v20 + 1) + 8LL))(*((_QWORD *)&v20 + 1));
    }
  }
  return v5;
}
