/*
 * XREFs of KeInitializeProcess @ 0x1406AD59C
 * Callers:
 *     PspAllocateProcess @ 0x1406AD918 (PspAllocateProcess.c)
 *     KiInitializeKernel @ 0x14099E6F0 (KiInitializeKernel.c)
 * Callees:
 *     KiSetIdealNodeProcessByGroup @ 0x14029AA54 (KiSetIdealNodeProcessByGroup.c)
 *     KeSetGroupMaskProcess @ 0x14029ABB4 (KeSetGroupMaskProcess.c)
 *     memset @ 0x140414300 (memset.c)
 *     VslCreateSecureProcess @ 0x14088F210 (VslCreateSecureProcess.c)
 */

__int64 __fastcall KeInitializeProcess(__int64 a1, char a2, __int64 *a3, __int64 a4, __int64 a5, char a6)
{
  int SecureProcess; // esi
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int16 v13; // cx

  *(_BYTE *)(a1 + 640) = a2;
  *(_BYTE *)a1 = 3;
  *(_DWORD *)(a1 + 368) = 1310740;
  SecureProcess = 0;
  *(_QWORD *)(a1 + 16) = a1 + 8;
  *(_DWORD *)(a1 + 372) = 0;
  *(_QWORD *)(a1 + 8) = a1 + 8;
  memset((void *)(a1 + 376), 0, 0xA0uLL);
  if ( (a6 & 1) != 0 )
    *(_DWORD *)(a1 + 632) |= 1u;
  *(_DWORD *)(a1 + 84) = 0;
  *(_DWORD *)(a1 + 80) = 1310721;
  memset((void *)(a1 + 88), 0, 0xA0uLL);
  v10 = *((unsigned __int16 *)a3 + 4);
  v11 = *a3;
  if ( *(_WORD *)(a1 + 80) <= (unsigned __int16)v10 )
    *(_WORD *)(a1 + 80) = v10 + 1;
  *(_QWORD *)(a1 + 8 * v10 + 88) |= v11;
  KeSetGroupMaskProcess(a1, 1 << *((_BYTE *)a3 + 8));
  *(_DWORD *)(a1 + 840) = 0;
  *(_QWORD *)(a1 + 32) = a1 + 24;
  *(_QWORD *)(a1 + 24) = a1 + 24;
  *(_QWORD *)(a1 + 352) = a1 + 344;
  *(_QWORD *)(a1 + 344) = a1 + 344;
  *(_QWORD *)(a1 + 56) = a1 + 48;
  *(_QWORD *)(a1 + 48) = a1 + 48;
  *(_BYTE *)(a1 + 641) = 6;
  KiSetIdealNodeProcessByGroup(v12, a4, *((_WORD *)a3 + 4));
  v13 = *(_WORD *)(a1 + 2LL * *((unsigned __int16 *)a3 + 4) + 772);
  *(_QWORD *)(a1 + 880) = a5;
  *(_WORD *)(a1 + 836) = v13;
  if ( (a6 & 2) != 0 )
  {
    SecureProcess = VslCreateSecureProcess(a1, 0LL, a1 + 992);
    if ( SecureProcess >= 0 )
      *(_QWORD *)(a1 + 992) |= 1uLL;
  }
  return (unsigned int)SecureProcess;
}
