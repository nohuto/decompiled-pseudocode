/*
 * XREFs of MmVirtualAccessFault @ 0x1408D1EC4
 * Callers:
 *     PspIumGetPhysicalPage @ 0x14090CC9C (PspIumGetPhysicalPage.c)
 *     VmpAccessFaultBatchResolve @ 0x14092F428 (VmpAccessFaultBatchResolve.c)
 * Callees:
 *     MmAccessFault @ 0x1402B1990 (MmAccessFault.c)
 *     memset @ 0x140414300 (memset.c)
 *     MiInitializeFaultVaListCore @ 0x1405391F0 (MiInitializeFaultVaListCore.c)
 */

__int64 __fastcall MmVirtualAccessFault(signed __int64 *a1, __int64 a2, char a3)
{
  unsigned int v6; // edi
  int v7; // r8d
  ULONG_PTR v8; // r10
  ULONG_PTR v9; // r11
  int v10; // edx
  int v11; // eax
  _QWORD v13[12]; // [rsp+20h] [rbp-68h] BYREF

  memset(v13, 0, sizeof(v13));
  v6 = 0;
  MiInitializeFaultVaListCore((__int64)v13, (__int64)a1, 1LL, 5);
  v13[5] = a2;
  v13[6] = 0LL;
  v10 = v7 & (v8 >> 1) | (v8 >> 3) & 2;
  LODWORD(v13[7]) = v10;
  if ( (a3 & 8) != 0 )
  {
    v10 |= 4u;
    LODWORD(v13[7]) = v10;
  }
  if ( (a3 & 0x10) != 0 )
  {
    v10 |= 8u;
    LODWORD(v13[7]) = v10;
  }
  if ( (a3 & 0x20) != 0 )
  {
    v10 |= 0x10u;
    LODWORD(v13[7]) = v10;
  }
  if ( (a3 & 0x40) != 0 )
    LODWORD(v13[7]) = v10 | 0x20;
  v11 = MmAccessFault(v8, *a1, v7, v9);
  if ( v11 < 0 )
    return (unsigned int)v11;
  return v6;
}
