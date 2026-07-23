/*
 * XREFs of IvtCreateDevice @ 0x1404E7C70
 * Callers:
 *     <none>
 * Callees:
 *     ExtEnvAllocateMemory @ 0x1404D5330 (ExtEnvAllocateMemory.c)
 *     ExtEnvFreeMemory @ 0x1404D55FC (ExtEnvFreeMemory.c)
 *     HalpIvtCheckIdPathMatch @ 0x1404E7510 (HalpIvtCheckIdPathMatch.c)
 *     IvtpGetNextInternalDeviceScope @ 0x1404E7E54 (IvtpGetNextInternalDeviceScope.c)
 */

__int64 __fastcall IvtCreateDevice(__int64 a1, __int64 a2, char a3, unsigned __int64 *a4)
{
  __int64 v6; // rdi
  char *v7; // rdx
  char *NextInternalDeviceScope; // rax
  char *v9; // rbx
  int v10; // ebx
  int Memory; // eax
  __int64 v13; // rcx
  unsigned __int64 v14; // rdi
  _OWORD *v15; // r14
  __int64 *v16; // r8
  _DWORD *v17; // rax
  unsigned __int64 v18; // rdx
  _OWORD *v19; // [rsp+40h] [rbp+8h] BYREF

  v19 = 0LL;
  v6 = a1;
  if ( *(_DWORD *)a2 != 1 || *(_DWORD *)(a1 + 212) != *(unsigned __int16 *)(a2 + 8) )
    return (unsigned int)-1073741275;
  if ( (a3 & 1) == 0 || !*(_BYTE *)(a1 + 228) )
  {
    v7 = 0LL;
    while ( 1 )
    {
      NextInternalDeviceScope = (char *)IvtpGetNextInternalDeviceScope(a1, v7);
      v9 = NextInternalDeviceScope;
      if ( !NextInternalDeviceScope )
        return (unsigned int)-1073741275;
      if ( HalpIvtCheckIdPathMatch(a2, NextInternalDeviceScope) )
        break;
      v7 = v9;
      a1 = v6;
    }
  }
  Memory = ExtEnvAllocateMemory(a1, 0x28u, (__int64 *)&v19);
  v14 = (unsigned __int64)v19;
  v10 = Memory;
  if ( Memory < 0
    || (v15 = v19 + 2,
        v16 = (__int64 *)(v19 + 2),
        *v19 = 0LL,
        *(_OWORD *)(v14 + 16) = 0LL,
        *(_QWORD *)(v14 + 32) = 0LL,
        v10 = ExtEnvAllocateMemory(v13, 0xCu, v16),
        v10 < 0) )
  {
    if ( v14 )
    {
      v18 = *(_QWORD *)(v14 + 32);
      if ( v18 )
        ExtEnvFreeMemory(v13, v18);
      ExtEnvFreeMemory(v13, v14);
    }
  }
  else
  {
    v17 = *(_DWORD **)v15;
    *(_QWORD *)v17 = 0LL;
    v17[2] = 0;
    **(_DWORD **)v15 = *(unsigned __int16 *)(a2 + 12);
    *(_DWORD *)(*(_QWORD *)v15 + 4LL) = 1 << (*(_WORD *)(a2 + 10) & 3);
    v10 = 0;
    *(_DWORD *)(*(_QWORD *)v15 + 8LL) = 1 << (3 - (*(_WORD *)(a2 + 10) & 3));
    *a4 = v14;
  }
  return (unsigned int)v10;
}
