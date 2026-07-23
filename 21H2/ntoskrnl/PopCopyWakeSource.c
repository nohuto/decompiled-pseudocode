/*
 * XREFs of PopCopyWakeSource @ 0x1408E6B00
 * Callers:
 *     PopGetWakeSource @ 0x140778978 (PopGetWakeSource.c)
 * Callees:
 *     memmove @ 0x140414040 (memmove.c)
 *     PopWakeSourceSize @ 0x1408E7000 (PopWakeSourceSize.c)
 */

__int64 __fastcall PopCopyWakeSource(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // r9
  __int64 v5; // r10
  __int64 v6; // r8
  unsigned int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  size_t *v10; // rdx
  size_t v11; // r8
  void *v12; // rcx

  result = PopWakeSourceSize(a3);
  *(_DWORD *)(v4 + 4) = result;
  v7 = *(_DWORD *)(v6 + 16);
  if ( !v7 )
  {
    *(_DWORD *)v4 = 0;
    v12 = (void *)(v4 + 10);
    *(_WORD *)(v4 + 8) = *(_WORD *)(v5 + 24);
    v11 = *(unsigned __int16 *)(v5 + 24);
    v10 = *(size_t **)(v5 + 32);
    return (__int64)memmove(v12, v10, v11);
  }
  if ( v7 == 1 )
  {
    *(_DWORD *)v4 = 1;
    if ( *(_DWORD *)(v5 + 24) != 1 )
    {
      if ( *(_DWORD *)(v5 + 24) != 2 )
        return result;
      goto LABEL_14;
    }
LABEL_15:
    *(_DWORD *)(v4 + 8) = 0;
    return result;
  }
  if ( v7 <= 3 )
  {
    result = (unsigned int)(v7 != 2) + 2;
    *(_DWORD *)v4 = result;
    v10 = *(size_t **)(v5 + 24);
    if ( !v10 )
    {
      *(_QWORD *)(v4 + 8) = 0LL;
      return result;
    }
    v11 = *v10;
    v12 = (void *)(v4 + 8);
    return (__int64)memmove(v12, v10, v11);
  }
  if ( v7 != 4 )
    return result;
  *(_DWORD *)v4 = 4;
  v8 = *(_DWORD *)(v5 + 24);
  if ( !v8 )
    goto LABEL_15;
  v9 = v8 - 1;
  if ( !v9 )
  {
LABEL_14:
    *(_DWORD *)(v4 + 8) = 1;
    return result;
  }
  if ( v9 == 1 )
    *(_DWORD *)(v4 + 8) = 2;
  return result;
}
