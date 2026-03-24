/*
 * XREFs of KiInsertTimer2WithCollectionLockHeld @ 0x140292D10
 * Callers:
 *     KeSetTimer2 @ 0x14022C550 (KeSetTimer2.c)
 *     KiInsertTimer2 @ 0x140292CA0 (KiInsertTimer2.c)
 * Callees:
 *     KiRemoveTimer2 @ 0x14024B3E0 (KiRemoveTimer2.c)
 *     RtlRbInsertNodeEx @ 0x140340480 (RtlRbInsertNodeEx.c)
 */

__int64 __fastcall KiInsertTimer2WithCollectionLockHeld(__int64 a1, char a2, unsigned __int64 a3, bool *a4)
{
  char v6; // cl
  char v7; // bp
  __int64 v8; // rdx
  unsigned __int8 v9; // r15
  _BYTE *v10; // r12
  int v11; // r14d
  int v12; // edi
  __int64 v13; // rcx
  __int64 v14; // rax
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rdi
  int v17; // r9d
  unsigned __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rcx
  char v21; // cl
  __int64 v22; // rsi
  __int64 v23; // rax
  unsigned __int64 v24; // rdx
  int v25; // ecx
  unsigned __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rax
  bool v30; // dl
  signed __int32 *v31; // r8
  signed __int32 v32; // eax
  signed __int32 v33; // ett
  signed __int32 v34[8]; // [rsp+0h] [rbp-48h] BYREF

  v6 = *(_BYTE *)(a1 + 130);
  v7 = a2;
  v8 = 0x140000000uLL;
  v9 = 1;
  v10 = (_BYTE *)a3;
  v11 = 0;
  *(_BYTE *)a3 = 0;
  v12 = 0;
  *a4 = 0;
  if ( v6 == 21 || (v6 & 0x20) != 0 && *(_QWORD *)(a1 + 72) == *(_QWORD *)(a1 + 80) )
  {
    *(_BYTE *)(a1 + 130) = v6 | 0x10;
  }
  else
  {
    *(_BYTE *)(a1 + 130) = v6 & 0xEF;
    v13 = 3LL * (v6 & 7);
    v14 = KiTimer2Collections[v13 + 1];
    v15 = KiTimer2Collections[v13];
    v16 = (unsigned __int64)&KiTimer2Collections[v13];
    if ( (v14 & 1) != 0 )
    {
      if ( v15 )
        v15 ^= v16;
      else
        v15 = 0LL;
    }
    LOBYTE(a3) = 0;
    v17 = v14 & 1;
    if ( v15 )
    {
      while ( 1 )
      {
        if ( *(_QWORD *)(a1 + 72) < *(_QWORD *)(v15 + 48) )
        {
          v18 = *(_QWORD *)v15;
          if ( v17 )
          {
            if ( !v18 )
              break;
            v18 ^= v15;
          }
          if ( !v18 )
            break;
        }
        else
        {
          v18 = *(_QWORD *)(v15 + 8);
          if ( v17 )
          {
            if ( !v18 )
              goto LABEL_20;
            v18 ^= v15;
          }
          if ( !v18 )
          {
LABEL_20:
            a3 = 1LL;
            break;
          }
        }
        v15 = v18;
      }
    }
    RtlRbInsertNodeEx(v16, v15, a3, a1 + 24);
    v19 = *(_QWORD *)(v16 + 8);
    if ( (v19 & 1) != 0 )
    {
      if ( v19 == 1 )
        v20 = 0LL;
      else
        v20 = v19 ^ (v16 | 1);
    }
    else
    {
      v20 = *(_QWORD *)(v16 + 8);
    }
    if ( v20 == a1 + 24 )
    {
      *(_QWORD *)(v16 + 16) = *(_QWORD *)(a1 + 72);
      v12 = 1;
    }
    else
    {
      v12 = 0;
    }
    v8 = 0x140000000uLL;
  }
  v21 = *(_BYTE *)(a1 + 131);
  if ( *(_QWORD *)(a1 + 80) == -1LL )
  {
    *(_BYTE *)(a1 + 131) = v21 | 0x10;
  }
  else
  {
    *(_BYTE *)(a1 + 131) = v21 & 0xEF;
    v22 = 0x140000000LL + 24LL * (v21 & 7) + 12786784;
    v23 = *(_QWORD *)(0x140000008LL + 24LL * (v21 & 7) + 12786784);
    v24 = *(_QWORD *)v22;
    if ( (v23 & 1) != 0 )
    {
      if ( v24 )
        v24 ^= v22;
      else
        v24 = 0LL;
    }
    LOBYTE(a3) = 0;
    v25 = v23 & 1;
    if ( v24 )
    {
      a3 = *(_QWORD *)(a1 + 80);
      while ( 1 )
      {
        if ( a3 < *(_QWORD *)(v24 + 32) )
        {
          v26 = *(_QWORD *)v24;
          if ( v25 )
          {
            if ( !v26 )
              goto LABEL_42;
            v26 ^= v24;
          }
          if ( !v26 )
          {
LABEL_42:
            LOBYTE(a3) = 0;
            break;
          }
        }
        else
        {
          v26 = *(_QWORD *)(v24 + 8);
          if ( v25 )
          {
            if ( !v26 )
              goto LABEL_65;
            v26 ^= v24;
          }
          if ( !v26 )
          {
LABEL_65:
            a3 = 1LL;
            break;
          }
        }
        v24 = v26;
      }
    }
    RtlRbInsertNodeEx(v22, v24, a3, a1 + 48);
    v27 = *(_QWORD *)(v22 + 8);
    if ( (v27 & 1) != 0 )
    {
      if ( v27 == 1 )
        v28 = 0LL;
      else
        v28 = v27 ^ (v22 | 1);
    }
    else
    {
      v28 = *(_QWORD *)(v22 + 8);
    }
    if ( v28 == a1 + 48 )
    {
      v11 = 1;
      *(_QWORD *)(v22 + 16) = *(_QWORD *)(a1 + 80);
    }
    v7 = a2;
    v12 |= v11;
  }
  if ( v12 )
  {
    if ( (unsigned __int64)KiNextTimer2DueTime > *(_QWORD *)(a1 + 72) )
    {
      KiNextTimer2DueTime = *(_QWORD *)(a1 + 72);
      _InterlockedOr(v34, 0);
    }
    if ( *(_QWORD *)(a1 + 72) <= MEMORY[0xFFFFF78000000008] )
    {
      *v10 = 1;
      if ( !v7 )
      {
        KiRemoveTimer2(a1, v8, a3);
        v9 = 0;
      }
    }
  }
  if ( (*(_BYTE *)(a1 + 129) & 4) != 0 && _InterlockedIncrement(&KiHrTimerActiveCount) == 1 )
  {
    v30 = 0;
    v31 = *(signed __int32 **)(KiProcessorBlock[(unsigned int)KiClockTimerOwner] + 33976);
    if ( v31 && (KiVelocityFlags & 0x40) != 0 )
    {
      _m_prefetchw(v31);
      v32 = *v31;
      do
      {
        v33 = v32;
        v32 = _InterlockedCompareExchange(v31, v32 | 0x80000, v32);
      }
      while ( v33 != v32 );
      v30 = (v32 & 0x80000) == 0;
    }
    *a4 = v30;
  }
  return v9;
}
