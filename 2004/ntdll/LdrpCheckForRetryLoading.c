/*
 * XREFs of LdrpCheckForRetryLoading @ 0x18005FCD8
 * Callers:
 *     LdrpMinimalMapModule @ 0x180014C38 (LdrpMinimalMapModule.c)
 *     LdrpMapDllNtFileName @ 0x18005FAD4 (LdrpMapDllNtFileName.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x180027DC0 (RtlRbInsertNodeEx.c)
 *     RtlLeaveCriticalSection @ 0x18002F230 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002FAA0 (RtlEnterCriticalSection.c)
 *     LdrpCompareModuleName @ 0x180084C64 (LdrpCompareModuleName.c)
 */

BOOLEAN __fastcall LdrpCheckForRetryLoading(__int64 a1, char a2)
{
  BOOLEAN v2; // bl
  __int64 v5; // r13
  $7D93978C745EB1C2D28075BAF55422B4 v6; // al
  unsigned __int64 Root; // rdi
  unsigned __int64 v8; // rsi
  int v9; // r14d
  int v10; // eax
  unsigned __int64 v11; // rax
  int v13; // esi
  unsigned __int64 v14; // rax
  _QWORD *v15; // rcx
  _QWORD *v16; // rax

  v2 = 0;
  if ( !*(_QWORD *)(a1 + 168) && (*(_DWORD *)(a1 + 32) & 0x4100000) == 0 )
  {
    v5 = *(_QWORD *)(a1 + 56);
    RtlEnterCriticalSection(&LdrpWorkQueueLock);
    v6 = LdrpRetryingModuleIndex.0;
    Root = (unsigned __int64)LdrpRetryingModuleIndex.Root;
    if ( (*(_BYTE *)&LdrpRetryingModuleIndex.0 & 1) != 0 )
    {
      if ( LdrpRetryingModuleIndex.Root )
        v8 = (unsigned __int64)&LdrpRetryingModuleIndex ^ (unsigned __int64)LdrpRetryingModuleIndex.Root;
      else
        v8 = 0LL;
    }
    else
    {
      v8 = (unsigned __int64)LdrpRetryingModuleIndex.Root;
    }
    v9 = *(_BYTE *)&LdrpRetryingModuleIndex.0 & 1;
    if ( v8 )
    {
      do
      {
        v10 = LdrpCompareModuleName(v5, v8);
        if ( v10 >= 0 )
        {
          if ( v10 <= 0 )
            break;
          v11 = *(_QWORD *)(v8 + 8);
        }
        else
        {
          v11 = *(_QWORD *)v8;
        }
        if ( v9 && v11 )
          v8 ^= v11;
        else
          v8 = v11;
      }
      while ( v8 );
      if ( v8 )
        goto LABEL_38;
      v6 = LdrpRetryingModuleIndex.0;
      Root = (unsigned __int64)LdrpRetryingModuleIndex.Root;
    }
    if ( !a2 )
    {
LABEL_14:
      RtlLeaveCriticalSection(&LdrpWorkQueueLock);
      return v2;
    }
    if ( (*(_BYTE *)&v6 & 1) != 0 )
    {
      if ( Root )
        Root ^= (unsigned __int64)&LdrpRetryingModuleIndex;
      else
        Root = 0LL;
    }
    v13 = *(_BYTE *)&v6 & 1;
    if ( Root )
    {
      while ( 1 )
      {
        if ( (int)LdrpCompareModuleName(v5, Root) < 0 )
        {
          v14 = *(_QWORD *)Root;
          if ( v13 )
          {
            if ( !v14 )
              break;
            v14 ^= Root;
          }
          if ( !v14 )
            break;
        }
        else
        {
          v14 = *(_QWORD *)(Root + 8);
          if ( v13 )
          {
            if ( !v14 )
              goto LABEL_36;
            v14 ^= Root;
          }
          if ( !v14 )
          {
LABEL_36:
            v2 = 1;
            break;
          }
        }
        Root = v14;
      }
    }
    RtlRbInsertNodeEx(&LdrpRetryingModuleIndex, (PRTL_BALANCED_NODE)Root, v2, (PRTL_BALANCED_NODE)(v5 + 224));
LABEL_38:
    *(_DWORD *)(a1 + 32) |= 0x100000u;
    v15 = (_QWORD *)qword_18016A3A8;
    v16 = (_QWORD *)(a1 + 64);
    if ( *(__int64 **)qword_18016A3A8 != &LdrpRetryQueue )
      __fastfail(3u);
    *v16 = &LdrpRetryQueue;
    v2 = 1;
    *(_QWORD *)(a1 + 72) = v15;
    *v15 = v16;
    qword_18016A3A8 = a1 + 64;
    goto LABEL_14;
  }
  return v2;
}
