/*
 * XREFs of PnpCompileDeviceInstancePaths @ 0x140738520
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x140736AD4 (PnpProcessQueryRemoveAndEject.c)
 *     PnpCancelRemoveOnHungDevices @ 0x1408A23E0 (PnpCancelRemoveOnHungDevices.c)
 * Callees:
 *     memmove @ 0x140414040 (memmove.c)
 *     IopEnumerateRelations @ 0x1407386B0 (IopEnumerateRelations.c)
 *     PnpAllocateCriticalMemory @ 0x14073963C (PnpAllocateCriticalMemory.c)
 */

__int64 __fastcall PnpCompileDeviceInstancePaths(unsigned int a1, __int64 a2, char a3, char a4, __int64 *a5)
{
  unsigned int v5; // ebx
  int v8; // r14d
  __int64 *v10; // rsi
  int v11; // edi
  __int64 v12; // rcx
  __int64 CriticalMemory; // rax
  _WORD *v14; // rdi
  __int64 v15; // rcx
  __int64 v16; // rsi
  const void *v17; // rdx
  _WORD *v18; // rdi
  __int64 v20; // [rsp+30h] [rbp-10h] BYREF
  __int64 v21; // [rsp+38h] [rbp-8h] BYREF
  int v22; // [rsp+78h] [rbp+38h] BYREF

  v5 = 0;
  v21 = 0LL;
  v22 = 0;
  v8 = a2;
  if ( !a2 )
    __fastfail(5u);
  v10 = a5;
  v11 = 0;
  v20 = 0LL;
  *a5 = 0LL;
  while ( (unsigned __int8)IopEnumerateRelations(v8, (unsigned int)&v20, (unsigned int)&v21, (unsigned int)&v22, 0LL) )
  {
    if ( v21 )
      v12 = *(_QWORD *)(*(_QWORD *)(v21 + 312) + 40LL);
    else
      v12 = 0LL;
    if ( v12 && (!a4 || (*(_DWORD *)(v12 + 704) & 2) == 0) && *(_QWORD *)(v12 + 48) && (!a3 || v22) )
      v11 += *(unsigned __int16 *)(v12 + 40) + 2;
  }
  CriticalMemory = PnpAllocateCriticalMemory(a1, 1LL, (unsigned int)(v11 + 2), 1265659472LL);
  *v10 = CriticalMemory;
  v14 = (_WORD *)CriticalMemory;
  if ( CriticalMemory )
  {
    v20 = 2LL;
    while ( (unsigned __int8)IopEnumerateRelations(v8, (unsigned int)&v20, (unsigned int)&v21, (unsigned int)&v22, 0LL) )
    {
      if ( v21 )
        v15 = *(_QWORD *)(*(_QWORD *)(v21 + 312) + 40LL);
      else
        v15 = 0LL;
      if ( v15 && (!a4 || (*(_DWORD *)(v15 + 704) & 2) == 0) && *(_QWORD *)(v15 + 48) && (!a3 || v22) )
      {
        v16 = *(_QWORD *)(*(_QWORD *)(v21 + 312) + 40LL);
        if ( v16 )
        {
          v17 = *(const void **)(v16 + 48);
          if ( v17 )
          {
            memmove(v14, v17, *(unsigned __int16 *)(v16 + 40));
            v18 = &v14[(unsigned __int64)*(unsigned __int16 *)(v16 + 40) >> 1];
            *v18 = 0;
            v14 = v18 + 1;
          }
        }
      }
    }
    *v14 = 0;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v5;
}
