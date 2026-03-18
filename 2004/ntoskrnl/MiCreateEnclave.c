/*
 * XREFs of MiCreateEnclave @ 0x1408CF1DC
 * Callers:
 *     NtCreateEnclave @ 0x1408D0720 (NtCreateEnclave.c)
 * Callees:
 *     MiDeleteVad @ 0x140212740 (MiDeleteVad.c)
 *     MiUnlockAndDereferenceVad @ 0x1402AD420 (MiUnlockAndDereferenceVad.c)
 *     MiAllocateEnclaveVad @ 0x1408CE858 (MiAllocateEnclaveVad.c)
 *     MiCreateHardwareEnclave @ 0x1408CF2D0 (MiCreateHardwareEnclave.c)
 *     MiCreateVsmEnclave @ 0x1408CF5AC (MiCreateVsmEnclave.c)
 */

__int64 __fastcall MiCreateEnclave(
        int a1,
        unsigned __int64 *a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        int a6,
        __int64 a7,
        int a8,
        __int64 a9)
{
  int EnclaveVad; // eax
  _QWORD *v12; // rbx
  int v13; // edi
  int v14; // edx
  int VsmEnclave; // eax
  PVOID P[3]; // [rsp+30h] [rbp-18h] BYREF

  P[0] = 0LL;
  EnclaveVad = MiAllocateEnclaveVad(a6, a4, *a2, a3, (__int64 *)P);
  v12 = P[0];
  v13 = EnclaveVad;
  if ( EnclaveVad >= 0 )
  {
    v14 = (int)P[0];
    *a2 = (*((unsigned int *)P[0] + 6) | ((unsigned __int64)*((unsigned __int8 *)P[0] + 32) << 32)) << 12;
    if ( (unsigned int)(a6 - 16) <= 1 )
    {
      v12[11] = v12 + 10;
      v12[10] = v12 + 10;
      VsmEnclave = MiCreateVsmEnclave(a1, v14, a6, a7, a8);
    }
    else
    {
      VsmEnclave = MiCreateHardwareEnclave(a1, v14, a5, a7, a9);
    }
    v13 = VsmEnclave;
  }
  if ( v12 )
  {
    if ( v13 >= 0 )
      MiUnlockAndDereferenceVad(v12);
    else
      MiDeleteVad(v12, 0LL, 0);
  }
  return (unsigned int)v13;
}
