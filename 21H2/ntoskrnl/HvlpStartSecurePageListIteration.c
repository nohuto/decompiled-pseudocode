/*
 * XREFs of HvlpStartSecurePageListIteration @ 0x1404FB7F4
 * Callers:
 *     HvlDiscardSecurePagesFromHibernation @ 0x1404F7C34 (HvlDiscardSecurePagesFromHibernation.c)
 *     HvlIterateSecurePagesForHibernation @ 0x1404F7D60 (HvlIterateSecurePagesForHibernation.c)
 *     HvlAddSecurePagesCallbackRoutine @ 0x1404F8850 (HvlAddSecurePagesCallbackRoutine.c)
 *     HvlpGetEncryptedDataFromSecureKernel @ 0x1404F9204 (HvlpGetEncryptedDataFromSecureKernel.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x140226840 (MmGetPhysicalAddress.c)
 *     HvlpSetupPageListIteration @ 0x1404FB74C (HvlpSetupPageListIteration.c)
 *     VslStartSecurePageIteration @ 0x1404FD94C (VslStartSecurePageIteration.c)
 */

__int64 __fastcall HvlpStartSecurePageListIteration(int a1, int a2, char *a3, void *a4, unsigned int a5, LONGLONG **a6)
{
  LONGLONG v9; // rax
  int v10; // ecx
  __int64 result; // rax
  LONGLONG **v12; // r12
  LONGLONG *v13; // r14
  unsigned int v14; // ebx
  __int128 v15; // rtt
  int v16; // ebp
  unsigned int v17; // ebx
  char *v18; // r15
  __int64 v19; // rbp
  PHYSICAL_ADDRESS PhysicalAddress; // rax
  PHYSICAL_ADDRESS v21; // rax
  int *v22; // rcx
  __int64 v23; // [rsp+30h] [rbp-38h]

  v9 = (LONGLONG)HvlpSetupPageListIteration(a1, 1);
  v10 = v9;
  if ( !v9 )
    return 3221225473LL;
  v12 = a6;
  v13 = *(LONGLONG **)(v9 + 8);
  v14 = 0;
  v15 = *(__int64 *)(v9 + 16);
  *a6 = v13;
  v23 = v15 / 4096;
  v16 = v23;
  LODWORD(v9) = 0;
  if ( a3 )
  {
    v17 = 0x200000;
    v18 = a3;
    if ( a5 <= 0x200000 )
      v17 = a5;
    v14 = v17 >> 12;
    if ( v14 )
    {
      v19 = v14;
      do
      {
        PhysicalAddress = MmGetPhysicalAddress(v18);
        v18 += 4096;
        *v13++ = PhysicalAddress.QuadPart / 4096;
        --v19;
      }
      while ( v19 );
      v12 = a6;
      v16 = v23;
    }
    v21 = MmGetPhysicalAddress(a4);
    *v12 = (LONGLONG *)a3;
    v10 = 4096;
    v9 = v21.QuadPart / 4096;
  }
  LOBYTE(v10) = a1 == 0;
  result = VslStartSecurePageIteration(v10, v16, v9, v14, a2);
  if ( (int)result < 0 )
  {
    v22 = &HvlpIteratorCrashdump;
    if ( !a1 )
      v22 = &HvlpIteratorHibernate;
    *v22 = 0;
    *((_QWORD *)v22 + 1) = 0LL;
  }
  return result;
}
