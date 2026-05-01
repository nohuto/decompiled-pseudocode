/*
 * XREFs of InsertEventEntryInLookUpTable @ 0x18013E610
 * Callers:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U1@U1@U?$_tlgWrapSz@G@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBX1IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteAgg@@YAJ011I2@ZPEBX@@SAJPEBU_tlgProvider_t@@PEBX1AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@333322AEBU?$_tlgWrapSz@G@@4@Z @ 0x180266AC8 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U1@U1@U-$_tlgWrapSz@G@@U3.c)
 * Callees:
 *     CompareEventEntry @ 0x18013DDC4 (CompareEventEntry.c)
 *     ComputeEventEntryHash @ 0x18013DE50 (ComputeEventEntryHash.c)
 *     CreateNewEventEntry @ 0x18013DF8C (CreateNewEventEntry.c)
 *     DestroyEventEntry @ 0x18013E2F8 (DestroyEventEntry.c)
 *     EnableFlushTimer @ 0x18013E334 (EnableFlushTimer.c)
 */

__int64 __fastcall InsertEventEntryInLookUpTable(
        __int64 a1,
        __int128 *a2,
        unsigned __int8 a3,
        __int64 a4,
        unsigned __int8 a5)
{
  __int64 v5; // rbx
  signed __int64 v7; // rdi
  unsigned int v9; // ebp
  int v10; // r14d
  volatile signed __int64 *i; // rsi
  unsigned int v12; // eax
  __int64 v13; // rsi
  int v14; // eax
  unsigned int v15; // eax
  unsigned __int8 v16; // dl
  unsigned int v17; // r11d
  signed __int64 v18; // r8
  __int64 v19; // rax
  int v20; // r10d
  volatile signed __int64 *v21; // r9
  BOOL v22; // eax
  volatile signed __int64 v23; // rtt
  __int64 v25; // [rsp+70h] [rbp+8h] BYREF
  __int128 *v26; // [rsp+78h] [rbp+10h]

  v26 = a2;
  v5 = *(_QWORD *)(a1 + 48);
  v7 = 0LL;
  v25 = 0LL;
  v9 = 0;
  v10 = ComputeEventEntryHash(a5, a3, a4);
  AcquireSRWLockShared((PSRWLOCK)(v5 + 264));
  for ( i = (volatile signed __int64 *)(v5 + 8LL * (v10 & 0x1F));
        ;
        i = (volatile signed __int64 *)((((__int64)v14 >> 63) & 0xFFFFFFFFFFFFFFF8uLL) + v13 + 32) )
  {
    if ( !*i )
    {
      if ( *(_DWORD *)(v5 + 256) >= 0x400u )
      {
        ++*(_DWORD *)(v5 + 300);
        v9 = 234;
        goto LABEL_35;
      }
      if ( !v7 )
      {
        v12 = CreateNewEventEntry(v26, a3, a4, a5, v10, &v25);
        v7 = v25;
        v9 = v12;
        if ( !v25 )
        {
          if ( v12 == 8 )
            ++*(_DWORD *)(v5 + 304);
          else
            ++*(_DWORD *)(v5 + 308);
          goto LABEL_35;
        }
      }
      if ( !_InterlockedCompareExchange64(i, v7, 0LL) )
      {
        v25 = 0LL;
        if ( _InterlockedIncrement((volatile signed __int32 *)(v5 + 256)) == 1 )
          EnableFlushTimer(*(struct _TP_TIMER **)(v5 + 344), *(_DWORD *)(v5 + 352));
        v15 = *(_DWORD *)(v5 + 256);
        v7 = v25;
        if ( *(_DWORD *)(v5 + 288) < v15 )
          *(_DWORD *)(v5 + 288) = v15;
        goto LABEL_35;
      }
      v7 = v25;
    }
    v13 = *i;
    v14 = v10 == *(_DWORD *)(v13 + 40) ? CompareEventEntry(a3, a4, v13) : v10 - *(_DWORD *)(v13 + 40);
    if ( !v14 )
      break;
  }
  if ( v13 )
  {
    v16 = 2;
    v17 = a5 + 2;
    if ( v17 > 2 )
    {
      while ( 2 )
      {
        v18 = **(_QWORD **)(a4 + 16LL * v16);
        v19 = *(_QWORD *)(v13 + 16);
        v20 = *(unsigned __int8 *)(v19 + 16LL * v16 + 13);
        v21 = *(volatile signed __int64 **)(v19 + 16LL * v16);
        if ( v20 == 113 )
        {
          _InterlockedExchangeAdd64(v21, v18);
        }
        else if ( (unsigned int)(v20 - 114) <= 1 )
        {
          while ( (_BYTE)v20 != 114 )
          {
            if ( v18 <= *v21 )
            {
              v22 = 0;
LABEL_29:
              if ( !v22 )
                goto LABEL_33;
            }
            v23 = *v21;
            if ( v23 == _InterlockedCompareExchange64(v21, v18, *v21) )
              goto LABEL_33;
          }
          v22 = v18 < *v21;
          goto LABEL_29;
        }
LABEL_33:
        if ( ++v16 < v17 )
          continue;
        break;
      }
      v7 = v25;
    }
  }
LABEL_35:
  ReleaseSRWLockShared((PSRWLOCK)(v5 + 264));
  if ( v7 )
    DestroyEventEntry(v7);
  return v9;
}
