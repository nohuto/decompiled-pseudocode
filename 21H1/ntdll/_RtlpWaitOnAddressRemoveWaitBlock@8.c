/*
 * XREFs of _RtlpWaitOnAddressRemoveWaitBlock@8 @ 0x4B2DF916
 * Callers:
 *     _RtlpWaitOnCriticalSection@8 @ 0x4B2DF4A0 (_RtlpWaitOnCriticalSection@8.c)
 *     _RtlpWaitOnAddress@20 @ 0x4B2DF747 (_RtlpWaitOnAddress@20.c)
 *     @RtlpWaitOnAddressWithTimeout@16 @ 0x4B2DF875 (@RtlpWaitOnAddressWithTimeout@16.c)
 * Callees:
 *     _RtlpWaitOnAddressWakeEntireList@4 @ 0x4B2AC022 (_RtlpWaitOnAddressWakeEntireList@4.c)
 *     @RtlpWaitOnAddressWithTimeout@16 @ 0x4B2DF875 (@RtlpWaitOnAddressWithTimeout@16.c)
 *     _ZwWaitForAlertByThreadId@8 @ 0x4B2F4680 (_ZwWaitForAlertByThreadId@8.c)
 */

int __fastcall RtlpWaitOnAddressRemoveWaitBlock(int a1, _DWORD *a2)
{
  _DWORD *v2; // edi
  int v3; // esi
  signed __int32 *v4; // eax
  signed __int32 v5; // edx
  signed __int32 v6; // esi
  signed __int32 v7; // eax
  unsigned int v8; // ecx
  _DWORD *v9; // edx
  unsigned int v10; // eax
  unsigned int v11; // edi
  signed __int32 v12; // ecx
  int result; // eax
  volatile signed __int32 *v14; // [esp+Ch] [ebp-14h]
  unsigned int v16; // [esp+14h] [ebp-Ch]
  unsigned int v17; // [esp+18h] [ebp-8h]
  char v18; // [esp+1Fh] [ebp-1h]

  v2 = a2;
  v3 = a1;
  v4 = (signed __int32 *)(a1 + 4 * ((*a2 >> 5) & 0x7F));
  v5 = *v4;
  v14 = v4;
  if ( !*v4 )
  {
LABEL_25:
    result = (int)(v2 + 5);
    if ( _InterlockedExchange(v2 + 5, 1) == 2 )
      return result;
    a1 = v3;
    return RtlpWaitOnAddressWithTimeout(a1, (PVOID *)v2, 0, RtlpWaitOnAddressSpinCycleCount);
  }
  while ( (v5 & 2) != 0 )
  {
    v7 = _InterlockedCompareExchange(v14, v5 | 1, v5);
    if ( v7 == v5 )
    {
      result = (int)(v2 + 5);
      if ( _InterlockedExchange(v2 + 5, 1) == 2 )
        return result;
      return RtlpWaitOnAddressWithTimeout(a1, (PVOID *)v2, 0, RtlpWaitOnAddressSpinCycleCount);
    }
LABEL_29:
    v5 = v7;
    if ( !v7 )
    {
      v3 = a1;
      goto LABEL_25;
    }
  }
  v6 = v5 | 2;
  v7 = _InterlockedCompareExchange(v14, v5 | 2, v5);
  v2 = a2;
  if ( v7 != v5 )
    goto LABEL_29;
  v18 = 0;
  v8 = v5 & 0xFFFFFFFC;
  v9 = a2;
  v17 = v6 & 0xFFFFFFFC;
  v10 = *(_DWORD *)((v6 & 0xFFFFFFFC) + 12);
  v16 = v10;
  do
  {
    v11 = *(_DWORD *)(v8 + 8);
    if ( (_DWORD *)v8 != v9 )
    {
      *(_DWORD *)(v8 + 12) = v10;
      v10 = v8;
      v16 = v8;
LABEL_13:
      v8 = v11;
      v11 = v17;
      continue;
    }
    v18 = 1;
    if ( v8 != v17 )
    {
      *(_DWORD *)(v10 + 8) = v11;
      if ( v11 )
        *(_DWORD *)(v11 + 12) = v10;
      else
        *(_DWORD *)(v10 + 16) = v10;
      goto LABEL_13;
    }
    v12 = *(_DWORD *)(v8 + 8);
    if ( v11 )
      v12 = v11 ^ ((unsigned __int8)v6 ^ (unsigned __int8)v11) & 3;
    result = _InterlockedCompareExchange(v14, v12, v6);
    if ( result == v6 )
    {
      if ( !v12 )
        return result;
      *(_DWORD *)(v11 + 12) = 0;
      v8 = v11;
    }
    else
    {
      v6 = result;
      v8 = result & 0xFFFFFFFC;
      v11 = result & 0xFFFFFFFC;
      v16 = *(_DWORD *)((result & 0xFFFFFFFC) + 12);
    }
    v10 = v16;
    v9 = a2;
    v17 = v11;
  }
  while ( v8 );
  if ( !v18 && _InterlockedExchange(v9 + 5, 0) != 2 )
    ZwWaitForAlertByThreadId((PVOID)*v9, 0);
  *(_DWORD *)(v11 + 16) = v16;
  while ( 1 )
  {
    result = _InterlockedCompareExchange(v14, (v6 & 1) == 0 ? v6 & 0xFFFFFFFC : 0, v6);
    if ( result == v6 )
      break;
    v6 = result;
  }
  if ( (v6 & 1) != 0 )
    return RtlpWaitOnAddressWakeEntireList(result);
  return result;
}
