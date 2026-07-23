/*
 * XREFs of HsaProcessIvmd @ 0x1404E4308
 * Callers:
 *     HalpIommuProcessIvhdEntry @ 0x1404E1D20 (HalpIommuProcessIvhdEntry.c)
 * Callees:
 *     ExtEnvAllocateMemory @ 0x1404D5330 (ExtEnvAllocateMemory.c)
 *     IvmdFindDeviceEntry @ 0x1404E4E58 (IvmdFindDeviceEntry.c)
 *     IvmdProcessRange @ 0x1404E4F08 (IvmdProcessRange.c)
 */

__int64 __fastcall HsaProcessIvmd(__int64 a1, unsigned __int64 a2, _BYTE *a3, _QWORD *a4)
{
  __int64 v7; // rsi
  int v8; // r8d
  unsigned __int64 i; // rbx
  char v10; // cl
  char v11; // al
  __int64 v12; // rax
  unsigned __int64 v13; // r14
  unsigned __int16 v14; // di
  __int64 v15; // r12
  unsigned __int16 v16; // bp
  __int64 DeviceEntry; // rax
  __int64 v19[7]; // [rsp+20h] [rbp-38h] BYREF

  v19[0] = 0LL;
  if ( (int)ExtEnvAllocateMemory(a1, 0x18u, v19) < 0 )
    return 3221225626LL;
  v7 = v19[0];
  *a4 = v19[0];
  v8 = 0;
  *a3 = 0;
  *(_OWORD *)v7 = 0LL;
  *(_QWORD *)(v7 + 16) = 0LL;
  *(_QWORD *)(v7 + 16) = v7 + 8;
  *(_QWORD *)(v7 + 8) = v7 + 8;
  *(_DWORD *)v7 = 0;
  for ( i = a1 + *(unsigned __int16 *)(a1 + 2); ; i += *(unsigned __int16 *)(i + 2) )
  {
    if ( i >= a2 )
      return (unsigned int)v8;
    v10 = *(_BYTE *)i;
    if ( *(_BYTE *)i == *(_BYTE *)a1 )
      break;
    if ( v10 == 32 )
    {
      *a3 = 1;
    }
    else if ( (unsigned __int8)(v10 - 33) <= 1u )
    {
      if ( *(_WORD *)(i + 2) != 32 )
        return 3221225485LL;
      v11 = *(_BYTE *)(i + 1);
      if ( (v11 & 8) != 0 || (v11 & 1) != 0 && (v11 & 6) != 0 )
      {
        v12 = *(_QWORD *)(i + 24);
        if ( !v12 )
          return 3221225485LL;
        v13 = *(_QWORD *)(i + 16);
        if ( v13 + v12 < v13 )
          return 3221225485LL;
        v14 = *(_WORD *)(i + 4);
        v15 = v13 + v12 - 1;
        v16 = v14;
        if ( v10 == 34 )
          v16 = *(_WORD *)(i + 6);
        while ( v14 <= v16 )
        {
          DeviceEntry = IvmdFindDeviceEntry(v7, v14);
          if ( !DeviceEntry )
            return 3221225626LL;
          v8 = IvmdProcessRange(DeviceEntry, v13, v15);
          if ( v8 < 0 )
            return 3221225626LL;
          ++v14;
        }
      }
    }
  }
  return 0LL;
}
