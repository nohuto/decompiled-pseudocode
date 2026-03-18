/*
 * XREFs of HsaCreateDevice @ 0x1404DD2A0
 * Callers:
 *     <none>
 * Callees:
 *     ExtEnvAllocateMemory @ 0x1404CFCD0 (ExtEnvAllocateMemory.c)
 *     ExtEnvFreeMemory @ 0x1404CFF9C (ExtEnvFreeMemory.c)
 *     HsaQueryAcpiDeviceMapping @ 0x1404DEC50 (HsaQueryAcpiDeviceMapping.c)
 */

__int64 __fastcall HsaCreateDevice(__int64 a1, __int128 *a2, __int64 a3, unsigned __int64 *a4)
{
  __int128 *v5; // rsi
  int v7; // ebx
  __int64 v8; // rcx
  int Memory; // eax
  __int64 v10; // rcx
  unsigned __int64 v11; // rdi
  _DWORD **v12; // r14
  __int64 *v13; // r8
  unsigned __int64 v14; // rdx
  __int128 v16; // [rsp+20h] [rbp-38h] BYREF
  __int64 v17; // [rsp+30h] [rbp-28h]
  _OWORD *v18; // [rsp+60h] [rbp+8h] BYREF

  v18 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  v5 = a2;
  if ( *(_DWORD *)a2 != 1 )
  {
    if ( *(_DWORD *)a2 != 2 )
      return (unsigned int)-1073741275;
    v7 = HsaQueryAcpiDeviceMapping(a1, a2, &v16);
    if ( v7 < 0 )
      return (unsigned int)v7;
    v5 = &v16;
  }
  if ( *(_DWORD *)(a1 + 160) != *((unsigned __int16 *)v5 + 4) )
    return (unsigned int)-1073741275;
  v8 = *((unsigned __int16 *)v5 + 6);
  if ( !_bittest(*(const signed __int32 **)(a1 + 192), v8) )
    return (unsigned int)-1073741275;
  Memory = ExtEnvAllocateMemory(v8, 0x28u, (__int64 *)&v18);
  v11 = (unsigned __int64)v18;
  v7 = Memory;
  if ( Memory < 0
    || (v12 = (_DWORD **)(v18 + 2),
        v13 = (__int64 *)(v18 + 2),
        *v18 = 0LL,
        *(_OWORD *)(v11 + 16) = 0LL,
        *(_QWORD *)(v11 + 32) = 0LL,
        v7 = ExtEnvAllocateMemory(v10, 4u, v13),
        v7 < 0) )
  {
    if ( v11 )
    {
      v14 = *(_QWORD *)(v11 + 32);
      if ( v14 )
        ExtEnvFreeMemory(v10, v14);
      ExtEnvFreeMemory(v10, v11);
    }
  }
  else
  {
    v7 = 0;
    **v12 = 0;
    **v12 = *((unsigned __int16 *)v5 + 6);
    *a4 = v11;
  }
  return (unsigned int)v7;
}
