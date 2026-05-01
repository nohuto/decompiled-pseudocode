/*
 * XREFs of sub_1800252D0 @ 0x1800252D0
 * Callers:
 *     sub_18000F0F4 @ 0x18000F0F4 (sub_18000F0F4.c)
 *     sub_180025070 @ 0x180025070 (sub_180025070.c)
 *     _wsetlocale_set_cat @ 0x180079634 (_wsetlocale_set_cat.c)
 *     sub_18007984C @ 0x18007984C (sub_18007984C.c)
 *     sub_18007B5D8 @ 0x18007B5D8 (sub_18007B5D8.c)
 *     sub_18007FE60 @ 0x18007FE60 (sub_18007FE60.c)
 * Callees:
 *     sub_180033700 @ 0x180033700 (sub_180033700.c)
 *     sub_1800346E0 @ 0x1800346E0 (sub_1800346E0.c)
 *     sub_180035930 @ 0x180035930 (sub_180035930.c)
 *     _guard_dispatch_icall_nop @ 0x180046860 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800252D0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  unsigned __int64 v3; // rdi
  __int64 v5; // rax
  __int64 v6; // rbx
  int v7; // esi
  int v8; // eax
  __int64 v9; // rax
  _QWORD *v10; // r13
  __int64 v11; // rax
  __int64 v12; // rdi
  __int64 v13; // r14
  int v14; // esi
  __int64 v16; // rbx
  __int64 v17; // rsi
  signed __int64 v18; // rax
  signed __int64 v19; // rcx
  bool v20; // zf
  signed __int64 v21; // rtt
  signed __int64 v22; // rax
  signed __int64 v23; // rcx
  bool v24; // zf
  signed __int64 v25; // rtt
  int v26; // esi
  int v27; // eax
  __int64 v28; // rax
  int v29; // eax
  __int64 v30; // rax
  __int64 v31; // rax
  unsigned __int64 v32; // rsi
  signed __int64 v33; // rax
  bool v34; // cc
  signed __int64 v35; // rax
  unsigned __int64 v36; // rsi
  signed __int64 v37; // rbx
  signed __int64 v38; // rbx

  v2 = *(unsigned int *)(a2 + 200);
  v3 = a1 + 168;
  RtlAcquireSRWLockShared(a1 + 184);
  v5 = *(_QWORD *)(v3 + 8);
  v6 = *(_QWORD *)v3;
  if ( (v5 & 1) != 0 )
  {
    if ( v6 )
      v6 ^= v3;
    else
      v6 = 0LL;
  }
  v7 = v5 & 1;
  while ( v6 )
  {
    v8 = sub_180035930(v2, v6);
    if ( v8 >= 0 )
    {
      if ( v8 <= 0 )
        break;
      v9 = *(_QWORD *)(v6 + 8);
      if ( v7 && v9 )
      {
LABEL_22:
        v6 ^= v9;
        continue;
      }
    }
    else
    {
      v9 = *(_QWORD *)v6;
      if ( v7 && v9 )
        goto LABEL_22;
    }
    v6 = v9;
  }
  v10 = (_QWORD *)v6;
  if ( v6 )
  {
    if ( *(_QWORD *)(v6 + 24) )
    {
      if ( _InterlockedIncrement64((volatile signed __int64 *)(v6 + 24)) <= 1 )
        __fastfail(0xEu);
    }
    else
    {
      v10 = 0LL;
    }
  }
  RtlReleaseSRWLockShared(v3 + 16);
  if ( !v10 )
    return 0LL;
  RtlAcquireSRWLockShared(v10 + 7);
  v11 = v10[6];
  v12 = v10[5];
  if ( (v11 & 1) == 0 )
    goto LABEL_24;
  if ( v12 )
  {
    v12 ^= (unsigned __int64)(v10 + 5);
LABEL_24:
    v13 = 0LL;
    goto LABEL_25;
  }
  v13 = 0LL;
  v12 = 0LL;
LABEL_25:
  v14 = v11 & 1;
  if ( !v12 )
  {
LABEL_26:
    v12 = 0LL;
    goto LABEL_62;
  }
  while ( 1 )
  {
    v29 = sub_1800346E0((void *)(a2 + 132));
    if ( v29 < 0 )
    {
      v30 = *(_QWORD *)v12;
      if ( v14 && v30 )
        goto LABEL_59;
      goto LABEL_51;
    }
    if ( v29 <= 0 )
      break;
    v30 = *(_QWORD *)(v12 + 8);
    if ( v14 && v30 )
    {
LABEL_59:
      v12 ^= v30;
      goto LABEL_52;
    }
LABEL_51:
    v12 = v30;
LABEL_52:
    if ( !v12 )
    {
      v12 = 0LL;
      goto LABEL_62;
    }
  }
  if ( !*(_QWORD *)(v12 + 24) )
    goto LABEL_26;
  if ( _InterlockedIncrement64((volatile signed __int64 *)(v12 + 24)) <= 1 )
    __fastfail(0xEu);
LABEL_62:
  RtlReleaseSRWLockShared(v10 + 7);
  if ( v12 )
  {
    RtlAcquireSRWLockShared(v12 + 56);
    v31 = *(_QWORD *)(v12 + 48);
    v16 = *(_QWORD *)(v12 + 40);
    if ( (v31 & 1) != 0 )
    {
      if ( v16 )
        v16 ^= v12 + 40;
      else
        v16 = 0LL;
    }
    v26 = v31 & 1;
    while ( v16 )
    {
      v27 = sub_180033700(a2, v16);
      if ( v27 >= 0 )
      {
        if ( v27 <= 0 )
          break;
        v28 = *(_QWORD *)(v16 + 8);
        if ( v26 && v28 )
        {
LABEL_44:
          v16 ^= v28;
          continue;
        }
      }
      else
      {
        v28 = *(_QWORD *)v16;
        if ( v26 && v28 )
          goto LABEL_44;
      }
      v16 = v28;
    }
    v17 = v16;
    if ( v16 )
    {
      if ( *(_QWORD *)(v16 + 24) )
      {
        if ( _InterlockedIncrement64((volatile signed __int64 *)(v16 + 24)) <= 1 )
          __fastfail(0xEu);
      }
      else
      {
        v17 = 0LL;
      }
    }
    RtlReleaseSRWLockShared(v12 + 56);
    v13 = v17;
  }
  else
  {
    v12 = 0LL;
  }
  _m_prefetchw(v10 + 3);
  v18 = v10[3];
  v19 = v18 - 1;
  v20 = v18 == 1;
  if ( v18 - 1 <= 0 )
  {
LABEL_74:
    if ( !v20 )
      __fastfail(0xEu);
    v32 = v10[4] & 0xFFFFFFFFFFFFFFFCuLL;
    if ( v10[2] == -1LL )
    {
      if ( _InterlockedDecrement64(v10 + 3) <= -1 )
        __fastfail(0xEu);
      (*(void (__fastcall **)(_QWORD *))(v32 + 24))(v10);
    }
    else
    {
      RtlAcquireSRWLockExclusive(v32 + 16);
      v33 = _InterlockedExchangeAdd64(v10 + 3, 0xFFFFFFFFFFFFFFFFuLL);
      v34 = v33 <= 1;
      v35 = v33 - 1;
      if ( v34 )
      {
        if ( v35 )
          __fastfail(0xEu);
        RtlReleaseSRWLockExclusive(v32 + 16);
        (*(void (__fastcall **)(_QWORD *))(v32 + 24))(v10);
      }
      else
      {
        RtlReleaseSRWLockExclusive(v32 + 16);
      }
    }
  }
  else
  {
    while ( 1 )
    {
      v21 = v18;
      v18 = _InterlockedCompareExchange64(v10 + 3, v19, v18);
      if ( v21 == v18 )
        break;
      v19 = v18 - 1;
      v20 = v18 == 1;
      if ( v18 - 1 <= 0 )
        goto LABEL_74;
    }
  }
  if ( v12 )
  {
    _m_prefetchw((const void *)(v12 + 24));
    v22 = *(_QWORD *)(v12 + 24);
    v23 = v22 - 1;
    v24 = v22 == 1;
    if ( v22 - 1 <= 0 )
    {
LABEL_86:
      if ( !v24 )
        __fastfail(0xEu);
      v36 = *(_QWORD *)(v12 + 32) & 0xFFFFFFFFFFFFFFFCuLL;
      if ( *(_QWORD *)(v12 + 16) == -1LL )
      {
        if ( _InterlockedDecrement64((volatile signed __int64 *)(v12 + 24)) <= -1 )
          __fastfail(0xEu);
        (*(void (__fastcall **)(__int64))(v36 + 24))(v12);
      }
      else
      {
        RtlAcquireSRWLockExclusive(v36 + 16);
        v37 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v12 + 24), 0xFFFFFFFFFFFFFFFFuLL);
        v34 = v37 <= 1;
        v38 = v37 - 1;
        if ( v34 )
        {
          if ( v38 )
            __fastfail(0xEu);
          RtlReleaseSRWLockExclusive(v36 + 16);
          (*(void (__fastcall **)(__int64))(v36 + 24))(v12);
        }
        else
        {
          RtlReleaseSRWLockExclusive(v36 + 16);
        }
      }
    }
    else
    {
      while ( 1 )
      {
        v25 = v22;
        v22 = _InterlockedCompareExchange64((volatile signed __int64 *)(v12 + 24), v23, v22);
        if ( v25 == v22 )
          break;
        v23 = v22 - 1;
        v24 = v22 == 1;
        if ( v22 - 1 <= 0 )
          goto LABEL_86;
      }
    }
  }
  return v13;
}
