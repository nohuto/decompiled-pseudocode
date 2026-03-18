/*
 * XREFs of HalpIvtpInitializeReservedDomain @ 0x1409A7E48
 * Callers:
 *     IvtProcessDeviceExceptions @ 0x1409A7348 (IvtProcessDeviceExceptions.c)
 * Callees:
 *     memset @ 0x14040A280 (memset.c)
 *     IvtAllocateContextTable @ 0x1404DA3B0 (IvtAllocateContextTable.c)
 *     IvtUpdateContextEntry @ 0x1404DBC1C (IvtUpdateContextEntry.c)
 *     IvtUpdateExtendedContextEntry @ 0x1404DBDA0 (IvtUpdateExtendedContextEntry.c)
 */

__int64 __fastcall HalpIvtpInitializeReservedDomain(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rsi
  _DWORD *v5; // rcx
  unsigned int v6; // ebx
  __int64 result; // rax
  unsigned __int64 v8; // r8
  __int64 v9; // r9
  _DWORD *v10; // rax
  unsigned int v11; // edx
  __int64 v12; // [rsp+28h] [rbp-70h]
  _QWORD v13[10]; // [rsp+40h] [rbp-58h] BYREF

  v2 = *(_QWORD **)(a2 + 8);
  v5 = (_DWORD *)*v2;
  if ( *(_DWORD *)*v2 == 1 )
  {
    if ( *((unsigned __int16 *)v5 + 4) == *(_DWORD *)(a1 + 212) )
    {
      result = IvtAllocateContextTable(a1, *((unsigned __int16 *)v5 + 6));
      v6 = result;
      if ( (int)result < 0 )
        return result;
      memset(v13, 0, sizeof(v13));
      LODWORD(v13[3]) = *(_DWORD *)a2;
      v13[2] = v2[2];
      v10 = (_DWORD *)*v2;
      v13[0] = 0x200000001LL;
      v11 = *((unsigned __int16 *)v10 + 6);
      if ( (*(_DWORD *)(a1 + 184) & 0x1000000) != 0 )
        IvtUpdateExtendedContextEntry(a1, v11, v8, v9, (__int64)v13, v12, 1, 0LL);
      else
        IvtUpdateContextEntry(a1, v11, (__int64)v13, v9, 1, 0LL);
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  else
  {
    return 0;
  }
  return v6;
}
