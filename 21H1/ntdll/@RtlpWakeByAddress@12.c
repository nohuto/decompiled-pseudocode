/*
 * XREFs of @RtlpWakeByAddress@12 @ 0x4B2DF2F6
 * Callers:
 *     _RtlLeaveCriticalSection@4 @ 0x4B2BE700 (_RtlLeaveCriticalSection@4.c)
 *     _RtlpDecRefWnfUserSubscription@12 @ 0x4B2DF21A (_RtlpDecRefWnfUserSubscription@12.c)
 *     _RtlWakeAddressAll@4 @ 0x4B2DF2B0 (_RtlWakeAddressAll@4.c)
 *     _RtlpUnWaitCriticalSectionEx@8 @ 0x4B2DF2D0 (_RtlpUnWaitCriticalSectionEx@8.c)
 *     _RtlReleaseSwapReference@8 @ 0x4B2E5174 (_RtlReleaseSwapReference@8.c)
 *     _RtlpUnWaitCriticalSection@4 @ 0x4B34ABA0 (_RtlpUnWaitCriticalSection@4.c)
 *     _RtlPosixBarrier@8 @ 0x4B35031D (_RtlPosixBarrier@8.c)
 *     _RtlWakeAddressAllNoFence@4 @ 0x4B36A910 (_RtlWakeAddressAllNoFence@4.c)
 *     _RtlWakeAddressSingle@4 @ 0x4B36A930 (_RtlWakeAddressSingle@4.c)
 *     _RtlWakeAddressSingleNoFence@4 @ 0x4B36A960 (_RtlWakeAddressSingleNoFence@4.c)
 *     _RtlpCSparseBitmapPageDecommit@12 @ 0x4B37E559 (_RtlpCSparseBitmapPageDecommit@12.c)
 * Callees:
 *     _RtlpWaitOnAddressWakeEntireList@4 @ 0x4B2AC022 (_RtlpWaitOnAddressWakeEntireList@4.c)
 *     _ZwAlertThreadByThreadId@4 @ 0x4B2F3080 (_ZwAlertThreadByThreadId@4.c)
 */

char __fastcall RtlpWakeByAddress(unsigned int a1, char a2, int a3)
{
  volatile signed __int32 *v3; // ebx
  int v4; // eax
  signed __int32 v5; // edx
  signed __int32 v6; // esi
  unsigned int v7; // ebx
  _DWORD *v8; // edi
  int v9; // edi
  int v10; // edx
  signed __int32 v11; // ecx
  signed __int32 v12; // eax
  int v13; // edx
  bool v14; // cl
  __int32 v15; // ecx
  int v16; // esi
  int v17; // ecx
  int v18; // eax
  signed __int32 i; // ecx
  _DWORD *v20; // eax
  bool v22; // [esp+12h] [ebp-16h]
  int v24; // [esp+14h] [ebp-14h]
  int v25; // [esp+18h] [ebp-10h]
  volatile signed __int32 *v26; // [esp+1Ch] [ebp-Ch]

  v24 = 0;
  v3 = (volatile signed __int32 *)&NtCurrentTeb()->ProcessEnvironmentBlock->WaitOnAddressHashTable[(a1 >> 5) & 0x7F];
  LOBYTE(v4) = 0;
  v5 = *v3;
  v26 = v3;
  v22 = 0;
  if ( *v3 )
  {
    while ( (v5 & 1) == 0 )
    {
      if ( (v5 & 2) != 0 )
      {
        v4 = _InterlockedCompareExchange(v3, v5 | 1, v5);
        if ( v4 == v5 )
          return v4;
      }
      else
      {
        v6 = v5 | 2;
        v4 = _InterlockedCompareExchange(v3, v5 | 2, v5);
        if ( v4 == v5 )
        {
LABEL_5:
          v7 = v6 & 0xFFFFFFFC;
          v8 = (_DWORD *)(v6 & 0xFFFFFFFC);
          if ( !*(_DWORD *)((v6 & 0xFFFFFFFC) + 16) )
          {
            do
            {
              v20 = v8;
              v8 = (_DWORD *)v8[2];
              v8[3] = v20;
            }
            while ( !v8[4] );
          }
          v9 = v8[4];
          *(_DWORD *)(v7 + 16) = v9;
          while ( v9 )
          {
            v10 = *(_DWORD *)(v9 + 12);
            v25 = v10;
            if ( *(_DWORD *)v9 == a1 )
            {
              v11 = *(_DWORD *)(v9 + 8);
              if ( v9 == v7 )
              {
                if ( v11 )
                  v11 ^= ((unsigned __int8)v6 ^ (unsigned __int8)v11) & 3;
                v12 = _InterlockedCompareExchange(v26, v11, v6);
                v7 = v6 & 0xFFFFFFFC;
                if ( v12 != v6 )
                {
                  v6 = v12;
                  goto LABEL_5;
                }
                v13 = *(_DWORD *)(v9 + 8);
                v14 = v11 == 0;
                v22 = v14;
                if ( v13 )
                {
                  *(_DWORD *)(v13 + 12) = 0;
                  *(_DWORD *)(v13 + 16) = *(_DWORD *)(v9 + 16);
                  v22 = v14;
                }
                v10 = v25;
              }
              else
              {
                *(_DWORD *)(v10 + 8) = v11;
                v17 = *(_DWORD *)(v9 + 8);
                v18 = *(_DWORD *)(v9 + 12);
                if ( v17 )
                {
                  *(_DWORD *)(v17 + 12) = v18;
                }
                else
                {
                  *(_DWORD *)(v7 + 16) = v18;
                  *(_DWORD *)(*(_DWORD *)(v9 + 12) + 16) = *(_DWORD *)(v9 + 12);
                }
              }
              v15 = _InterlockedExchange((volatile __int32 *)(v9 + 20), 2);
              if ( v15 != 2 )
              {
                if ( !v15 )
                {
                  *(_DWORD *)(v9 + 8) = v24;
                  v24 = v9;
                }
                if ( !a2 )
                  break;
              }
            }
            v9 = v10;
          }
          v4 = v24;
          if ( v24 )
          {
            do
            {
              v16 = *(_DWORD *)(v4 + 8);
              ZwAlertThreadByThreadId(*(HANDLE *)(v4 + 4));
              v4 = v16;
            }
            while ( v16 );
          }
          if ( !v22 )
          {
            for ( i = *v26; ; i = v4 )
            {
              v4 = _InterlockedCompareExchange(v26, (i & 1) == 0 ? i & 0xFFFFFFFC : 0, i);
              if ( v4 == i )
                break;
            }
            if ( (i & 1) != 0 )
              LOBYTE(v4) = RtlpWaitOnAddressWakeEntireList(v4);
          }
          return v4;
        }
      }
      v5 = v4;
      if ( !v4 )
        return v4;
    }
  }
  return v4;
}
