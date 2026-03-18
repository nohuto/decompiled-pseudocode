/*
 * XREFs of KiInsertTimer2WithCollectionLockHeld @ 0x140242AE0
 * Callers:
 *     KiInsertTimer2 @ 0x140241CF8 (KiInsertTimer2.c)
 *     KeSetTimer2 @ 0x1402426C0 (KeSetTimer2.c)
 * Callees:
 *     KiRemoveTimer2 @ 0x140243180 (KiRemoveTimer2.c)
 *     RtlRbInsertNodeEx @ 0x14024F7F0 (RtlRbInsertNodeEx.c)
 */

__int64 __fastcall KiInsertTimer2WithCollectionLockHeld(__int64 a1, char a2, unsigned __int64 a3, bool *a4)
{
  char v6; // cl
  char v7; // bp
  unsigned __int8 v8; // r15
  _BYTE *v9; // r12
  int v10; // r14d
  int v11; // edi
  __int64 v12; // rcx
  __int64 v13; // rax
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rdi
  int v16; // r9d
  unsigned __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rcx
  char v20; // cl
  __int64 v21; // rsi
  __int64 v22; // rax
  unsigned __int64 v23; // rdx
  int v24; // ecx
  unsigned __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rax
  bool v29; // dl
  signed __int32 *v30; // r8
  signed __int32 v31; // eax
  signed __int32 v32; // ett
  signed __int32 v33[8]; // [rsp+0h] [rbp-48h] BYREF

  v6 = *(_BYTE *)(a1 + 130);
  v7 = a2;
  v8 = 1;
  v9 = (_BYTE *)a3;
  v10 = 0;
  *(_BYTE *)a3 = 0;
  v11 = 0;
  *a4 = 0;
  if ( v6 == 21 || (v6 & 0x20) != 0 && *(_QWORD *)(a1 + 72) == *(_QWORD *)(a1 + 80) )
  {
    *(_BYTE *)(a1 + 130) = v6 | 0x10;
  }
  else
  {
    *(_BYTE *)(a1 + 130) = v6 & 0xEF;
    v12 = 3LL * (v6 & 7);
    v13 = KiTimer2Collections[v12 + 1];
    v14 = KiTimer2Collections[v12];
    v15 = (unsigned __int64)&KiTimer2Collections[v12];
    if ( (v13 & 1) != 0 )
    {
      if ( v14 )
        v14 ^= v15;
      else
        v14 = 0LL;
    }
    LOBYTE(a3) = 0;
    v16 = v13 & 1;
    if ( v14 )
    {
      while ( 1 )
      {
        if ( *(_QWORD *)(a1 + 72) < *(_QWORD *)(v14 + 48) )
        {
          v17 = *(_QWORD *)v14;
          if ( v16 )
          {
            if ( !v17 )
              break;
            v17 ^= v14;
          }
          if ( !v17 )
            break;
        }
        else
        {
          v17 = *(_QWORD *)(v14 + 8);
          if ( v16 )
          {
            if ( !v17 )
              goto LABEL_20;
            v17 ^= v14;
          }
          if ( !v17 )
          {
LABEL_20:
            a3 = 1LL;
            break;
          }
        }
        v14 = v17;
      }
    }
    RtlRbInsertNodeEx(v15, v14, a3, a1 + 24);
    v18 = *(_QWORD *)(v15 + 8);
    if ( (v18 & 1) != 0 )
    {
      if ( v18 == 1 )
        v19 = 0LL;
      else
        v19 = v18 ^ (v15 | 1);
    }
    else
    {
      v19 = *(_QWORD *)(v15 + 8);
    }
    if ( v19 == a1 + 24 )
    {
      *(_QWORD *)(v15 + 16) = *(_QWORD *)(a1 + 72);
      v11 = 1;
    }
    else
    {
      v11 = 0;
    }
  }
  v20 = *(_BYTE *)(a1 + 131);
  if ( *(_QWORD *)(a1 + 80) == -1LL )
  {
    *(_BYTE *)(a1 + 131) = v20 | 0x10;
  }
  else
  {
    *(_BYTE *)(a1 + 131) = v20 & 0xEF;
    v21 = 0x140000000LL + 24LL * (v20 & 7) + 12786848;
    v22 = *(_QWORD *)(0x140000008LL + 24LL * (v20 & 7) + 12786848);
    v23 = *(_QWORD *)v21;
    if ( (v22 & 1) != 0 )
    {
      if ( v23 )
        v23 ^= v21;
      else
        v23 = 0LL;
    }
    LOBYTE(a3) = 0;
    v24 = v22 & 1;
    if ( v23 )
    {
      a3 = *(_QWORD *)(a1 + 80);
      while ( 1 )
      {
        if ( a3 < *(_QWORD *)(v23 + 32) )
        {
          v25 = *(_QWORD *)v23;
          if ( v24 )
          {
            if ( !v25 )
              goto LABEL_41;
            v25 ^= v23;
          }
          if ( !v25 )
          {
LABEL_41:
            LOBYTE(a3) = 0;
            break;
          }
        }
        else
        {
          v25 = *(_QWORD *)(v23 + 8);
          if ( v24 )
          {
            if ( !v25 )
              goto LABEL_64;
            v25 ^= v23;
          }
          if ( !v25 )
          {
LABEL_64:
            a3 = 1LL;
            break;
          }
        }
        v23 = v25;
      }
    }
    RtlRbInsertNodeEx(v21, v23, a3, a1 + 48);
    v26 = *(_QWORD *)(v21 + 8);
    if ( (v26 & 1) != 0 )
    {
      if ( v26 == 1 )
        v27 = 0LL;
      else
        v27 = v26 ^ (v21 | 1);
    }
    else
    {
      v27 = *(_QWORD *)(v21 + 8);
    }
    if ( v27 == a1 + 48 )
    {
      v10 = 1;
      *(_QWORD *)(v21 + 16) = *(_QWORD *)(a1 + 80);
    }
    v7 = a2;
    v11 |= v10;
  }
  if ( v11 )
  {
    if ( (unsigned __int64)KiNextTimer2DueTime > *(_QWORD *)(a1 + 72) )
    {
      KiNextTimer2DueTime = *(_QWORD *)(a1 + 72);
      _InterlockedOr(v33, 0);
    }
    if ( *(_QWORD *)(a1 + 72) <= MEMORY[0xFFFFF78000000008] )
    {
      *v9 = 1;
      if ( !v7 )
      {
        KiRemoveTimer2(a1);
        v8 = 0;
      }
    }
  }
  if ( (*(_BYTE *)(a1 + 129) & 4) != 0 && _InterlockedIncrement(&KiHrTimerActiveCount) == 1 )
  {
    v29 = 0;
    v30 = *(signed __int32 **)(KiProcessorBlock[(unsigned int)KiClockTimerOwner] + 33976);
    if ( v30 && (KiVelocityFlags & 0x40) != 0 )
    {
      _m_prefetchw(v30);
      v31 = *v30;
      do
      {
        v32 = v31;
        v31 = _InterlockedCompareExchange(v30, v31 | 0x80000, v31);
      }
      while ( v32 != v31 );
      v29 = (v31 & 0x80000) == 0;
    }
    *a4 = v29;
  }
  return v8;
}
