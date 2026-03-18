/*
 * XREFs of KiInsertTimer2WithCollectionLockHeld @ 0x140351500
 * Callers:
 *     KiInsertTimer2 @ 0x1402F332C (KiInsertTimer2.c)
 *     KeSetTimer2 @ 0x140353C40 (KeSetTimer2.c)
 * Callees:
 *     KiRemoveTimer2 @ 0x1402F2AD0 (KiRemoveTimer2.c)
 *     RtlRbInsertNodeEx @ 0x14034E6B0 (RtlRbInsertNodeEx.c)
 */

__int64 __fastcall KiInsertTimer2WithCollectionLockHeld(__int64 a1, char a2, _BYTE *a3, bool *a4)
{
  char v6; // cl
  char v7; // bp
  unsigned __int8 v8; // r15
  int v10; // r14d
  int v11; // edi
  __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  unsigned __int64 *v14; // rdi
  bool v15; // al
  unsigned __int64 v16; // rax
  __int64 v17; // rcx
  char v18; // cl
  unsigned __int64 *v19; // rsi
  unsigned __int64 v20; // rdx
  bool v21; // al
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rax
  __int64 v25; // rcx
  bool v27; // dl
  signed __int32 *v28; // r8
  signed __int32 v29; // eax
  signed __int32 v30; // ett
  signed __int32 v31[8]; // [rsp+0h] [rbp-48h] BYREF

  v6 = *(_BYTE *)(a1 + 130);
  v7 = a2;
  v8 = 1;
  v10 = 0;
  *a3 = 0;
  v11 = 0;
  *a4 = 0;
  if ( v6 == 21 || (v6 & 0x20) != 0 && *(_QWORD *)(a1 + 72) == *(_QWORD *)(a1 + 80) )
  {
    *(_BYTE *)(a1 + 130) = v6 | 0x10;
    goto LABEL_12;
  }
  *(_BYTE *)(a1 + 130) = v6 & 0xEF;
  v12 = 3LL * (v6 & 7);
  v13 = KiTimer2Collections[v12];
  v14 = &KiTimer2Collections[v12];
  if ( (v14[1] & 1) == 0 )
  {
LABEL_24:
    v15 = 0;
    if ( !v13 )
      goto LABEL_8;
    while ( 1 )
    {
      if ( *(_QWORD *)(a1 + 72) >= *(_QWORD *)(v13 + 48) )
      {
        v23 = *(_QWORD *)(v13 + 8);
        if ( (KiTimer2Collections[v12 + 1] & 1) != 0 )
        {
          if ( !v23 )
            goto LABEL_35;
          v23 ^= v13;
        }
        if ( !v23 )
        {
LABEL_35:
          v15 = 1;
          goto LABEL_8;
        }
      }
      else
      {
        v23 = *(_QWORD *)v13;
        if ( (KiTimer2Collections[v12 + 1] & 1) != 0 )
        {
          if ( !v23 )
            goto LABEL_7;
          v23 ^= v13;
        }
        if ( !v23 )
          goto LABEL_7;
      }
      v13 = v23;
    }
  }
  if ( v13 )
  {
    v13 ^= (unsigned __int64)v14;
    goto LABEL_24;
  }
  v13 = 0LL;
LABEL_7:
  v15 = 0;
LABEL_8:
  RtlRbInsertNodeEx(v14, v13, v15, a1 + 24);
  v16 = v14[1];
  if ( (v16 & 1) != 0 )
  {
    if ( v16 == 1 )
      v17 = 0LL;
    else
      v17 = v16 ^ ((unsigned __int64)v14 | 1);
  }
  else
  {
    v17 = v14[1];
  }
  if ( v17 == a1 + 24 )
  {
    v14[2] = *(_QWORD *)(a1 + 72);
    v11 = 1;
  }
  else
  {
    v11 = 0;
  }
LABEL_12:
  v18 = *(_BYTE *)(a1 + 131);
  if ( *(_QWORD *)(a1 + 80) == -1LL )
  {
    *(_BYTE *)(a1 + 131) = v18 | 0x10;
  }
  else
  {
    *(_BYTE *)(a1 + 131) = v18 & 0xEF;
    v19 = (unsigned __int64 *)(0x140000000LL + 24LL * (v18 & 7) + 12761280);
    v20 = *v19;
    if ( (*(_QWORD *)(0x140000008LL + 24LL * (v18 & 7) + 12761280) & 1) == 0 )
      goto LABEL_16;
    if ( v20 )
    {
      v20 ^= (unsigned __int64)v19;
LABEL_16:
      v21 = 0;
      if ( !v20 )
        goto LABEL_43;
      while ( 1 )
      {
        if ( *(_QWORD *)(a1 + 80) >= *(_QWORD *)(v20 + 32) )
        {
          v22 = *(_QWORD *)(v20 + 8);
          if ( (*(_QWORD *)(0x140000008LL + 24LL * (v18 & 7) + 12761280) & 1) != 0 )
          {
            if ( !v22 )
              goto LABEL_40;
            v22 ^= v20;
          }
          if ( !v22 )
          {
LABEL_40:
            v21 = 1;
            goto LABEL_43;
          }
        }
        else
        {
          v22 = *(_QWORD *)v20;
          if ( (*(_QWORD *)(0x140000008LL + 24LL * (v18 & 7) + 12761280) & 1) != 0 )
          {
            if ( !v22 )
              goto LABEL_42;
            v22 ^= v20;
          }
          if ( !v22 )
            goto LABEL_42;
        }
        v20 = v22;
      }
    }
    v20 = 0LL;
LABEL_42:
    v21 = 0;
LABEL_43:
    RtlRbInsertNodeEx(v19, v20, v21, a1 + 48);
    v24 = v19[1];
    if ( (v24 & 1) != 0 )
    {
      if ( v24 == 1 )
        v25 = 0LL;
      else
        v25 = v24 ^ ((unsigned __int64)v19 | 1);
    }
    else
    {
      v25 = v19[1];
    }
    if ( v25 == a1 + 48 )
    {
      v10 = 1;
      v19[2] = *(_QWORD *)(a1 + 80);
    }
    v7 = a2;
    v11 |= v10;
  }
  if ( v11 )
  {
    if ( (unsigned __int64)KiNextTimer2DueTime > *(_QWORD *)(a1 + 72) )
    {
      KiNextTimer2DueTime = *(_QWORD *)(a1 + 72);
      _InterlockedOr(v31, 0);
    }
    if ( *(_QWORD *)(a1 + 72) <= MEMORY[0xFFFFF78000000008] )
    {
      *a3 = 1;
      if ( !v7 )
      {
        KiRemoveTimer2(a1);
        v8 = 0;
      }
    }
  }
  if ( (*(_BYTE *)(a1 + 129) & 4) != 0 && _InterlockedIncrement(&KiHrTimerActiveCount) == 1 )
  {
    v27 = 0;
    v28 = *(signed __int32 **)(KiProcessorBlock[(unsigned int)KiClockTimerOwner] + 35000);
    if ( v28 && (KiVelocityFlags & 0x40) != 0 )
    {
      _m_prefetchw(v28);
      v29 = *v28;
      do
      {
        v30 = v29;
        v29 = _InterlockedCompareExchange(v28, v29 | 0x80000, v29);
      }
      while ( v30 != v29 );
      v27 = (v29 & 0x80000) == 0;
    }
    *a4 = v27;
  }
  return v8;
}
