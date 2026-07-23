/*
 * XREFs of MiCreateEnclave @ 0x1408D293C
 * Callers:
 *     NtCreateEnclave @ 0x1408D3E80 (NtCreateEnclave.c)
 * Callees:
 *     MiUnlockAndDereferenceVad @ 0x1402BF880 (MiUnlockAndDereferenceVad.c)
 *     MiDeleteVad @ 0x1402C08F0 (MiDeleteVad.c)
 *     MiAllocateEnclaveVad @ 0x1408D1FB8 (MiAllocateEnclaveVad.c)
 *     MiCreateHardwareEnclave @ 0x1408D2A30 (MiCreateHardwareEnclave.c)
 *     MiCreateVsmEnclave @ 0x1408D2D0C (MiCreateVsmEnclave.c)
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
  char *v12; // rbx
  int v13; // edi
  int v14; // edx
  int VsmEnclave; // eax
  PVOID P[3]; // [rsp+30h] [rbp-18h] BYREF

  P[0] = 0LL;
  EnclaveVad = MiAllocateEnclaveVad(a6, a4, *a2, a3, (__int64 *)P);
  v12 = (char *)P[0];
  v13 = EnclaveVad;
  if ( EnclaveVad >= 0 )
  {
    v14 = (int)P[0];
    *a2 = (*((unsigned int *)P[0] + 6) | ((unsigned __int64)*((unsigned __int8 *)P[0] + 32) << 32)) << 12;
    if ( (unsigned int)(a6 - 16) <= 1 )
    {
      *((_QWORD *)v12 + 11) = v12 + 80;
      *((_QWORD *)v12 + 10) = v12 + 80;
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
