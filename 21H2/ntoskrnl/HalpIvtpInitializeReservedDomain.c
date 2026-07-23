/*
 * XREFs of HalpIvtpInitializeReservedDomain @ 0x1409ABBD8
 * Callers:
 *     IvtProcessDeviceExceptions @ 0x1409AB0B8 (IvtProcessDeviceExceptions.c)
 * Callees:
 *     memset @ 0x140414300 (memset.c)
 *     IvtAllocateContextTable @ 0x1404DF590 (IvtAllocateContextTable.c)
 *     IvtUpdateContextEntry @ 0x1404E0DFC (IvtUpdateContextEntry.c)
 *     IvtUpdateExtendedContextEntry @ 0x1404E0FB0 (IvtUpdateExtendedContextEntry.c)
 */

__int64 __fastcall HalpIvtpInitializeReservedDomain(__int64 a1, int *a2)
{
  _QWORD *v2; // rsi
  _DWORD *v5; // rcx
  unsigned int v6; // ebx
  __int64 result; // rax
  unsigned __int64 v8; // r8
  __int64 v9; // r9
  int v10; // eax
  _DWORD *v11; // rax
  unsigned int v12; // ecx
  __int64 v13; // [rsp+30h] [rbp-21h]
  unsigned int v14[4]; // [rsp+48h] [rbp-9h] BYREF
  _QWORD v15[10]; // [rsp+58h] [rbp+7h] BYREF

  v2 = (_QWORD *)*((_QWORD *)a2 + 1);
  v5 = (_DWORD *)*v2;
  if ( *(_DWORD *)*v2 == 1 )
  {
    if ( *((unsigned __int16 *)v5 + 4) == *(_DWORD *)(a1 + 212) )
    {
      result = IvtAllocateContextTable(a1, *((unsigned __int16 *)v5 + 6));
      v6 = result;
      if ( (int)result < 0 )
        return result;
      memset(v15, 0, sizeof(v15));
      v10 = *a2;
      v14[2] = 0;
      LODWORD(v15[3]) = v10;
      v15[2] = v2[2];
      v11 = (_DWORD *)*v2;
      v15[0] = 0x200000001LL;
      v14[1] = 1;
      v12 = *((unsigned __int16 *)v11 + 6);
      LODWORD(v11) = *(_DWORD *)(a1 + 184);
      v14[0] = v12;
      if ( ((unsigned int)v11 & 0x1000000) != 0 )
        IvtUpdateExtendedContextEntry(a1, v14, v8, v9, (__int64)v15, v13, 1, 0LL);
      else
        IvtUpdateContextEntry(a1, v14, (__int64)v15, v9, 1, 0LL);
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
