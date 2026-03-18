/*
 * XREFs of HsaCreateDevice @ 0x140531560
 * Callers:
 *     <none>
 * Callees:
 *     ExtEnvAllocateMemory @ 0x1403CE24C (ExtEnvAllocateMemory.c)
 *     ExtEnvFreeMemory @ 0x14052268C (ExtEnvFreeMemory.c)
 *     HsaQueryAcpiDeviceMapping @ 0x140532F40 (HsaQueryAcpiDeviceMapping.c)
 */

__int64 __fastcall HsaCreateDevice(__int64 a1, __int128 *a2, __int64 a3, unsigned __int64 *a4)
{
  __int128 *v5; // rsi
  int Memory; // ebx
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rcx
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // rdx
  __int128 v14; // [rsp+20h] [rbp-38h] BYREF
  __int64 v15; // [rsp+30h] [rbp-28h]
  unsigned __int64 v16; // [rsp+60h] [rbp+8h] BYREF

  v16 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  v5 = a2;
  if ( *(_DWORD *)a2 != 1 )
  {
    if ( *(_DWORD *)a2 != 2 )
      return (unsigned int)-1073741275;
    Memory = HsaQueryAcpiDeviceMapping(a1, a2, &v14);
    if ( Memory < 0 )
      return (unsigned int)Memory;
    v5 = &v14;
  }
  if ( *(_DWORD *)(a1 + 160) != *((unsigned __int16 *)v5 + 4) )
    return (unsigned int)-1073741275;
  v8 = *((unsigned __int16 *)v5 + 6);
  if ( !_bittest(*(const signed __int32 **)(a1 + 192), v8) )
    return (unsigned int)-1073741275;
  v9 = ExtEnvAllocateMemory(v8, 0x28u, &v16);
  v11 = v16;
  Memory = v9;
  if ( v9 < 0 || (Memory = ExtEnvAllocateMemory(v10, 4u, (_QWORD *)(v16 + 32)), Memory < 0) )
  {
    if ( v11 )
    {
      v12 = *(_QWORD *)(v11 + 32);
      if ( v12 )
        ExtEnvFreeMemory(v10, v12);
      ExtEnvFreeMemory(v10, v11);
    }
  }
  else
  {
    Memory = 0;
    **(_DWORD **)(v11 + 32) = *((unsigned __int16 *)v5 + 6);
    *a4 = v11;
  }
  return (unsigned int)Memory;
}
