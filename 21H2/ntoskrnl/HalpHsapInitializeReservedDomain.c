/*
 * XREFs of HalpHsapInitializeReservedDomain @ 0x1404E1934
 * Callers:
 *     HsaProcessDeviceExceptions @ 0x1404E41EC (HsaProcessDeviceExceptions.c)
 * Callees:
 *     memset @ 0x140414300 (memset.c)
 *     HsaUpdateDeviceTableEntry @ 0x1404E4638 (HsaUpdateDeviceTableEntry.c)
 */

__int64 __fastcall HalpHsapInitializeReservedDomain(__int64 a1, __int64 a2)
{
  _QWORD *v2; // r15
  unsigned int v3; // ebx
  int v5; // esi
  _DWORD *v6; // rdi
  int v7; // r9d
  int v9; // [rsp+50h] [rbp-68h] BYREF
  __int64 v10; // [rsp+54h] [rbp-64h]
  _QWORD v11[10]; // [rsp+60h] [rbp-58h] BYREF

  v2 = *(_QWORD **)(a2 + 8);
  v3 = 0;
  v5 = a1;
  v6 = (_DWORD *)*v2;
  if ( *(_DWORD *)*v2 == 1 )
  {
    if ( *((unsigned __int16 *)v6 + 4) == *(_DWORD *)(a1 + 160) )
    {
      memset(v11, 0, sizeof(v11));
      LODWORD(v11[3]) = *(_DWORD *)a2;
      LOBYTE(v7) = 1;
      v11[2] = v2[2];
      v9 = *((unsigned __int16 *)v6 + 6);
      v11[0] = 0x200000001LL;
      v10 = 1LL;
      HsaUpdateDeviceTableEntry(v5, (unsigned int)&v9, 0, v7, (__int64)v11, 0, 1);
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  return v3;
}
