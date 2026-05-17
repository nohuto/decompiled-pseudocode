/*
 * XREFs of LdrpCheckForRetryLoading @ 0x18005FDE8
 * Callers:
 *     LdrpMinimalMapModule @ 0x180014C38 (LdrpMinimalMapModule.c)
 *     LdrpMapDllNtFileName @ 0x18005FBE4 (LdrpMapDllNtFileName.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x180027DC0 (RtlRbInsertNodeEx.c)
 *     RtlLeaveCriticalSection @ 0x18002F230 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002FAA0 (RtlEnterCriticalSection.c)
 *     LdrpCompareModuleName @ 0x180084D64 (LdrpCompareModuleName.c)
 */

bool __fastcall LdrpCheckForRetryLoading(__int64 a1, char a2)
{
  bool v2; // bl
  __int64 v5; // r13
  __int64 *v6; // rdx
  __int64 v7; // r8
  char v8; // al
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rsi
  int v11; // r14d
  int v12; // eax
  unsigned __int64 v13; // rax
  int v15; // esi
  unsigned __int64 v16; // rax
  _QWORD *v17; // rcx
  _QWORD *v18; // rax

  v2 = 0;
  if ( !*(_QWORD *)(a1 + 168) && (*(_DWORD *)(a1 + 32) & 0x4100000) == 0 )
  {
    v5 = *(_QWORD *)(a1 + 56);
    RtlEnterCriticalSection((__int64)&LdrpWorkQueueLock);
    v8 = BYTE8(LdrpRetryingModuleIndex);
    v9 = LdrpRetryingModuleIndex;
    if ( (BYTE8(LdrpRetryingModuleIndex) & 1) != 0 )
    {
      if ( (_QWORD)LdrpRetryingModuleIndex )
        v10 = (unsigned __int64)&LdrpRetryingModuleIndex ^ LdrpRetryingModuleIndex;
      else
        v10 = 0LL;
    }
    else
    {
      v10 = LdrpRetryingModuleIndex;
    }
    v11 = BYTE8(LdrpRetryingModuleIndex) & 1;
    if ( v10 )
    {
      do
      {
        v12 = LdrpCompareModuleName(v5, v10);
        if ( v12 >= 0 )
        {
          if ( v12 <= 0 )
            break;
          v13 = *(_QWORD *)(v10 + 8);
        }
        else
        {
          v13 = *(_QWORD *)v10;
        }
        if ( v11 && v13 )
          v10 ^= v13;
        else
          v10 = v13;
      }
      while ( v10 );
      if ( v10 )
        goto LABEL_38;
      v8 = BYTE8(LdrpRetryingModuleIndex);
      v9 = LdrpRetryingModuleIndex;
    }
    if ( !a2 )
    {
LABEL_14:
      RtlLeaveCriticalSection((__int64)&LdrpWorkQueueLock, (__int64)v6, v7);
      return v2;
    }
    if ( (v8 & 1) != 0 )
    {
      if ( v9 )
        v9 ^= (unsigned __int64)&LdrpRetryingModuleIndex;
      else
        v9 = 0LL;
    }
    v15 = v8 & 1;
    if ( v9 )
    {
      while ( 1 )
      {
        if ( (int)LdrpCompareModuleName(v5, v9) < 0 )
        {
          v16 = *(_QWORD *)v9;
          if ( v15 )
          {
            if ( !v16 )
              break;
            v16 ^= v9;
          }
          if ( !v16 )
            break;
        }
        else
        {
          v16 = *(_QWORD *)(v9 + 8);
          if ( v15 )
          {
            if ( !v16 )
              goto LABEL_36;
            v16 ^= v9;
          }
          if ( !v16 )
          {
LABEL_36:
            v2 = 1;
            break;
          }
        }
        v9 = v16;
      }
    }
    RtlRbInsertNodeEx((unsigned __int64 *)&LdrpRetryingModuleIndex, v9, v2, v5 + 224);
LABEL_38:
    *(_DWORD *)(a1 + 32) |= 0x100000u;
    v6 = &LdrpRetryQueue;
    v17 = (_QWORD *)qword_18016C3A8;
    v18 = (_QWORD *)(a1 + 64);
    if ( *(__int64 **)qword_18016C3A8 != &LdrpRetryQueue )
      __fastfail(3u);
    *v18 = &LdrpRetryQueue;
    v2 = 1;
    *(_QWORD *)(a1 + 72) = v17;
    *v17 = v18;
    qword_18016C3A8 = a1 + 64;
    goto LABEL_14;
  }
  return v2;
}
