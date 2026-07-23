/*
 * XREFs of KiInsertTimer2WithCollectionLockHeld @ 0x140210C80
 * Callers:
 *     KiInsertTimer2 @ 0x140210C10 (KiInsertTimer2.c)
 *     KeSetTimer2 @ 0x1402D0DD0 (KeSetTimer2.c)
 * Callees:
 *     KiRemoveTimer2 @ 0x1402EFC30 (KiRemoveTimer2.c)
 *     RtlRbInsertNodeEx @ 0x14034B1D0 (RtlRbInsertNodeEx.c)
 */

__int64 __fastcall KiInsertTimer2WithCollectionLockHeld(__int64 a1, char a2, _BYTE *a3, bool *a4)
{
  char v6; // cl
  char v7; // bp
  unsigned __int64 v8; // rdx
  unsigned __int8 v9; // r15
  int v11; // r14d
  int v12; // edi
  __int64 v13; // rcx
  __int64 v14; // rax
  unsigned __int64 v15; // rdx
  _RTL_RB_TREE *v16; // rdi
  BOOLEAN v17; // r8
  int v18; // r9d
  unsigned __int64 v19; // rax
  _RTL_BALANCED_NODE *Min; // rax
  __int64 v21; // rcx
  char v22; // cl
  _RTL_RB_TREE *v23; // rsi
  __int64 v24; // rax
  unsigned __int64 Root; // rdx
  BOOLEAN v26; // r8
  int v27; // ecx
  unsigned __int64 v28; // rax
  _RTL_BALANCED_NODE *v29; // rcx
  __int64 v30; // rax
  bool v32; // dl
  signed __int32 *v33; // r8
  signed __int32 v34; // eax
  signed __int32 v35; // ett
  signed __int32 v36[8]; // [rsp+0h] [rbp-48h] BYREF

  v6 = *(_BYTE *)(a1 + 130);
  v7 = a2;
  v8 = 0x140000000uLL;
  v9 = 1;
  v11 = 0;
  *a3 = 0;
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
    v16 = (_RTL_RB_TREE *)&KiTimer2Collections[v13];
    if ( (v14 & 1) != 0 )
    {
      if ( v15 )
        v15 ^= (unsigned __int64)v16;
      else
        v15 = 0LL;
    }
    v17 = 0;
    v18 = v14 & 1;
    if ( v15 )
    {
      while ( 1 )
      {
        if ( *(_QWORD *)(a1 + 72) < *(_QWORD *)(v15 + 48) )
        {
          v19 = *(_QWORD *)v15;
          if ( v18 )
          {
            if ( !v19 )
              break;
            v19 ^= v15;
          }
          if ( !v19 )
            break;
        }
        else
        {
          v19 = *(_QWORD *)(v15 + 8);
          if ( v18 )
          {
            if ( !v19 )
              goto LABEL_20;
            v19 ^= v15;
          }
          if ( !v19 )
          {
LABEL_20:
            v17 = 1;
            break;
          }
        }
        v15 = v19;
      }
    }
    RtlRbInsertNodeEx(v16, (PRTL_BALANCED_NODE)v15, v17, (PRTL_BALANCED_NODE)(a1 + 24));
    Min = v16->Min;
    if ( ((unsigned __int8)Min & 1) != 0 )
    {
      if ( Min == (_RTL_BALANCED_NODE *)1 )
        v21 = 0LL;
      else
        v21 = (unsigned __int64)Min ^ ((unsigned __int64)v16 | 1);
    }
    else
    {
      v21 = (__int64)v16->Min;
    }
    if ( v21 == a1 + 24 )
    {
      v16[1].Root = *(_RTL_BALANCED_NODE **)(a1 + 72);
      v12 = 1;
    }
    else
    {
      v12 = 0;
    }
    v8 = 0x140000000uLL;
  }
  v22 = *(_BYTE *)(a1 + 131);
  if ( *(_QWORD *)(a1 + 80) == -1LL )
  {
    *(_BYTE *)(a1 + 131) = v22 | 0x10;
  }
  else
  {
    *(_BYTE *)(a1 + 131) = v22 & 0xEF;
    v23 = (_RTL_RB_TREE *)(0x140000000LL + 24LL * (v22 & 7) + 12786880);
    v24 = *(_QWORD *)(0x140000008LL + 24LL * (v22 & 7) + 12786880);
    Root = (unsigned __int64)v23->Root;
    if ( (v24 & 1) != 0 )
    {
      if ( Root )
        Root ^= (unsigned __int64)v23;
      else
        Root = 0LL;
    }
    v26 = 0;
    v27 = v24 & 1;
    if ( Root )
    {
      while ( 1 )
      {
        if ( *(_QWORD *)(a1 + 80) < *(_QWORD *)(Root + 32) )
        {
          v28 = *(_QWORD *)Root;
          if ( v27 )
          {
            if ( !v28 )
              goto LABEL_41;
            v28 ^= Root;
          }
          if ( !v28 )
          {
LABEL_41:
            v26 = 0;
            break;
          }
        }
        else
        {
          v28 = *(_QWORD *)(Root + 8);
          if ( v27 )
          {
            if ( !v28 )
              goto LABEL_64;
            v28 ^= Root;
          }
          if ( !v28 )
          {
LABEL_64:
            v26 = 1;
            break;
          }
        }
        Root = v28;
      }
    }
    RtlRbInsertNodeEx(v23, (PRTL_BALANCED_NODE)Root, v26, (PRTL_BALANCED_NODE)(a1 + 48));
    v29 = v23->Min;
    if ( ((unsigned __int8)v29 & 1) != 0 )
    {
      if ( v29 == (_RTL_BALANCED_NODE *)1 )
        v30 = 0LL;
      else
        v30 = (unsigned __int64)v29 ^ ((unsigned __int64)v23 | 1);
    }
    else
    {
      v30 = (__int64)v23->Min;
    }
    if ( v30 == a1 + 48 )
    {
      v11 = 1;
      v23[1].Root = *(_RTL_BALANCED_NODE **)(a1 + 80);
    }
    v7 = a2;
    v12 |= v11;
  }
  if ( v12 )
  {
    if ( (unsigned __int64)KiNextTimer2DueTime > *(_QWORD *)(a1 + 72) )
    {
      KiNextTimer2DueTime = *(_QWORD *)(a1 + 72);
      _InterlockedOr(v36, 0);
    }
    if ( *(_QWORD *)(a1 + 72) <= MEMORY[0xFFFFF78000000008] )
    {
      *a3 = 1;
      if ( !v7 )
      {
        KiRemoveTimer2(a1, v8);
        v9 = 0;
      }
    }
  }
  if ( (*(_BYTE *)(a1 + 129) & 4) != 0 && _InterlockedIncrement(&KiHrTimerActiveCount) == 1 )
  {
    v32 = 0;
    v33 = *(signed __int32 **)(KiProcessorBlock[(unsigned int)KiClockTimerOwner] + 33976);
    if ( v33 && (KiVelocityFlags & 0x40) != 0 )
    {
      _m_prefetchw(v33);
      v34 = *v33;
      do
      {
        v35 = v34;
        v34 = _InterlockedCompareExchange(v33, v34 | 0x80000, v34);
      }
      while ( v35 != v34 );
      v32 = (v34 & 0x80000) == 0;
    }
    *a4 = v32;
  }
  return v9;
}
