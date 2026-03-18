/*
 * XREFs of VidSchiAcquireSyncObject @ 0x1C0006140
 * Callers:
 *     VidSchWaitForSingleSyncObject @ 0x1C0005D70 (VidSchWaitForSingleSyncObject.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchiAcquireSyncObject(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // r9
  char v4; // r11
  int v6; // ecx
  __int64 v7; // rax
  __int64 v8; // rax
  unsigned __int64 v10; // rcx
  unsigned __int64 *v11; // rax
  unsigned __int64 v12; // rcx
  __int64 v13; // rax
  __int64 *v14; // r8
  __int64 v15; // rcx
  __int64 **v16; // rax
  __int64 **v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rax
  int v20; // ecx
  int v21; // ecx
  int v22; // ecx
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rcx
  int v26; // ecx
  int v27; // eax
  __int64 **v28; // rcx

  v3 = 0;
  v4 = 0;
  if ( *(_DWORD *)(a2 + 32) == 0x7FFFFFFF )
    goto LABEL_37;
  v6 = *(_DWORD *)(a2 + 44);
  if ( !v6 )
  {
    if ( !*(_QWORD *)(a2 + 64) )
    {
      if ( !*(_QWORD *)(a2 + 56) )
      {
        v7 = *(_QWORD *)(a3 + 88);
        if ( !v7 )
          v7 = *(_QWORD *)(a3 + 96);
        *(_QWORD *)(a2 + 56) = v7;
        v3 = 1;
      }
      v8 = *(_QWORD *)(a3 + 88);
      if ( !v8 )
        v8 = *(_QWORD *)(a3 + 96);
      *(_QWORD *)(a2 + 64) = v8;
      goto LABEL_11;
    }
    goto LABEL_37;
  }
  if ( v6 == 4 )
    goto LABEL_15;
  v20 = v6 - 1;
  if ( v20 )
  {
    v21 = v20 - 1;
    if ( !v21 )
    {
      if ( *(_BYTE *)(a2 + 27) )
        v23 = *(_QWORD *)(*(_QWORD *)(a2 + 208) + 40LL);
      else
        v23 = *(_QWORD *)(a2 + 64);
      v24 = *(_QWORD *)(a3 + 304);
      if ( v23 >= v24 )
      {
        if ( *(_BYTE *)(a2 + 27) )
        {
          v25 = *(_QWORD *)(*(_QWORD *)(a2 + 208) + 32LL);
          v24 = *(_QWORD *)(a3 + 304);
        }
        else
        {
          v25 = *(_QWORD *)(a2 + 72);
        }
        if ( v25 >= v24 )
          goto LABEL_12;
        goto LABEL_25;
      }
      if ( !*(_BYTE *)(a2 + 25) )
        goto LABEL_37;
      goto LABEL_24;
    }
    v22 = v21 - 1;
    if ( !v22 )
      goto LABEL_37;
    if ( v22 != 2 )
      goto LABEL_26;
LABEL_15:
    v10 = *(_QWORD *)(a3 + 304);
    if ( *(_BYTE *)(a2 + 28) )
      goto LABEL_12;
    v11 = *(unsigned __int64 **)(a2 + 64);
    if ( *(_BYTE *)(a2 + 29) )
    {
      if ( *v11 >= v10 )
        goto LABEL_12;
    }
    else if ( *(_DWORD *)v11 - (int)v10 >= 0 )
    {
      goto LABEL_12;
    }
    if ( *(_QWORD *)(a2 + 80) )
    {
      v18 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a3 + 88) + 104LL) + 32LL);
      ++*(_DWORD *)(v18 + 812);
      *(_DWORD *)(a3 + 272) |= 8u;
      goto LABEL_25;
    }
    if ( *(_BYTE *)(a2 + 30) )
    {
      if ( *(_BYTE *)(a2 + 27) )
        v12 = *(_QWORD *)(*(_QWORD *)(a2 + 208) + 40LL);
      else
        v12 = *(_DWORD *)(a2 + 44) == 2 ? *(_QWORD *)(a2 + 64) : *(_QWORD *)(a2 + 88);
      if ( *(_QWORD *)(a3 + 304) <= v12 )
        goto LABEL_25;
    }
LABEL_24:
    ++*(_DWORD *)(a2 + 36);
    v4 = 1;
    ++*(_DWORD *)(*(_QWORD *)(a3 + 88) + 796LL);
    ++*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a3 + 88) + 104LL) + 1588LL);
    v13 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a3 + 88) + 104LL) + 32LL);
    ++*(_DWORD *)(v13 + 808);
    *(_DWORD *)(a3 + 272) |= 4u;
LABEL_25:
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 800));
    goto LABEL_26;
  }
  v26 = *(_DWORD *)(a2 + 64);
  if ( v26 )
  {
    v27 = *(_DWORD *)(a2 + 56);
    if ( v27 )
    {
      v3 = 1;
      *(_DWORD *)(a2 + 56) = v27 - 1;
    }
    *(_DWORD *)(a2 + 64) = v26 - 1;
LABEL_11:
    if ( v3 )
    {
LABEL_12:
      *(_DWORD *)(a3 + 272) |= 1u;
      return 0LL;
    }
LABEL_26:
    v14 = (__int64 *)(a3 + 288);
    if ( (unsigned int)(*(_DWORD *)(a2 + 44) - 4) > 1 )
    {
      if ( v4 )
      {
        v28 = *(__int64 ***)(a2 + 120);
        if ( *v28 == (__int64 *)(a2 + 112) )
        {
          *v14 = a2 + 112;
          v14[1] = (__int64)v28;
          *v28 = v14;
          *(_QWORD *)(a2 + 120) = v14;
          goto LABEL_29;
        }
      }
      else
      {
        v17 = *(__int64 ***)(a2 + 104);
        if ( *v17 == (__int64 *)(a2 + 96) )
        {
          *v14 = a2 + 96;
          v14[1] = (__int64)v17;
          *v17 = v14;
          *(_QWORD *)(a2 + 104) = v14;
          _InterlockedIncrement((volatile signed __int32 *)(a2 + 32));
          return 0LL;
        }
      }
    }
    else
    {
      v15 = *(_QWORD *)(*(_QWORD *)(a1 + 104) + 32LL) + 816LL;
      v16 = *(__int64 ***)(*(_QWORD *)(*(_QWORD *)(a1 + 104) + 32LL) + 824LL);
      if ( *v16 == (__int64 *)v15 )
      {
        *v14 = v15;
        v14[1] = (__int64)v16;
        *v16 = v14;
        *(_QWORD *)(v15 + 8) = v14;
LABEL_29:
        _InterlockedIncrement((volatile signed __int32 *)(a2 + 32));
        return 0LL;
      }
    }
    __fastfail(3u);
  }
LABEL_37:
  v19 = WdLogNewEntry5_WdAssertion();
  WdLogEvent5_WdAssertion(v19);
  return 3221225473LL;
}
