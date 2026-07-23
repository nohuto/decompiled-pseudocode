/*
 * XREFs of HsaCreateDevice @ 0x1404E2AE0
 * Callers:
 *     <none>
 * Callees:
 *     ExtEnvAllocateMemory @ 0x1404D5330 (ExtEnvAllocateMemory.c)
 *     ExtEnvFreeMemory @ 0x1404D55FC (ExtEnvFreeMemory.c)
 *     HsaQueryAcpiDeviceMapping @ 0x1404E44B0 (HsaQueryAcpiDeviceMapping.c)
 */

__int64 __fastcall HsaCreateDevice(__int64 a1, unsigned __int16 *a2, __int64 a3, unsigned __int64 *a4)
{
  unsigned __int16 *v5; // rsi
  int v7; // ebx
  __int64 v8; // rcx
  int Memory; // eax
  __int64 v10; // rcx
  unsigned __int64 v11; // rdi
  _OWORD *v12; // r14
  __int64 *v13; // r8
  _DWORD *v14; // rax
  unsigned __int64 v15; // rdx
  __int128 v17; // [rsp+20h] [rbp-38h] BYREF
  __int64 v18; // [rsp+30h] [rbp-28h]
  _OWORD *v19; // [rsp+60h] [rbp+8h] BYREF

  v19 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  v5 = a2;
  if ( *(_DWORD *)a2 != 1 )
  {
    if ( *(_DWORD *)a2 != 2 )
      return (unsigned int)-1073741275;
    v7 = HsaQueryAcpiDeviceMapping(a1, a2, &v17);
    if ( v7 < 0 )
      return (unsigned int)v7;
    v5 = (unsigned __int16 *)&v17;
  }
  if ( *(_DWORD *)(a1 + 160) != v5[4] )
    return (unsigned int)-1073741275;
  v8 = v5[6];
  if ( !_bittest(*(const signed __int32 **)(a1 + 192), v8) )
    return (unsigned int)-1073741275;
  Memory = ExtEnvAllocateMemory(v8, 0x28u, (__int64 *)&v19);
  v11 = (unsigned __int64)v19;
  v7 = Memory;
  if ( Memory < 0
    || (v12 = v19 + 2,
        v13 = (__int64 *)(v19 + 2),
        *v19 = 0LL,
        *(_OWORD *)(v11 + 16) = 0LL,
        *(_QWORD *)(v11 + 32) = 0LL,
        v7 = ExtEnvAllocateMemory(v10, 0xCu, v13),
        v7 < 0) )
  {
    if ( v11 )
    {
      v15 = *(_QWORD *)(v11 + 32);
      if ( v15 )
        ExtEnvFreeMemory(v10, v15);
      ExtEnvFreeMemory(v10, v11);
    }
  }
  else
  {
    v14 = *(_DWORD **)v12;
    *(_QWORD *)v14 = 0LL;
    v14[2] = 0;
    **(_DWORD **)v12 = v5[6];
    *(_DWORD *)(*(_QWORD *)v12 + 4LL) = 1 << (v5[5] & 3);
    v7 = 0;
    *(_DWORD *)(*(_QWORD *)v12 + 8LL) = 1 << (3 - (v5[5] & 3));
    *a4 = v11;
  }
  return (unsigned int)v7;
}
