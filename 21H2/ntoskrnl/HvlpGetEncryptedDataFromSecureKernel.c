/*
 * XREFs of HvlpGetEncryptedDataFromSecureKernel @ 0x1404F9204
 * Callers:
 *     HvlGetEncryptedData @ 0x1404F8DD0 (HvlGetEncryptedData.c)
 * Callees:
 *     HvlpEndSecurePageListIteration @ 0x1404FB53C (HvlpEndSecurePageListIteration.c)
 *     HvlpStartSecurePageListIteration @ 0x1404FB7F4 (HvlpStartSecurePageListIteration.c)
 *     VslGetSecurePageList @ 0x1404FC650 (VslGetSecurePageList.c)
 */

__int64 __fastcall HvlpGetEncryptedDataFromSecureKernel(__int64 a1, __int64 a2, int a3, __int64 a4, _DWORD *a5)
{
  _DWORD *v6; // rdi
  ULONG v10; // ebx
  unsigned __int8 v11; // bl
  __int64 result; // rax
  int v13; // [rsp+30h] [rbp-28h] BYREF
  _QWORD v14[4]; // [rsp+38h] [rbp-20h] BYREF

  v6 = a5;
  v14[0] = 0LL;
  v13 = 0;
  v10 = HvlpFlags >> 1;
  *a5 = 0;
  v11 = (2 * (v10 & 1)) | 1;
  if ( BYTE3(HvlpCrashdumpIterationState) != v11 )
  {
    HvlpEndSecurePageListIteration(1LL, 0LL, 0LL);
    LOBYTE(HvlpCrashdumpIterationState) = 0;
  }
  if ( !(_BYTE)HvlpCrashdumpIterationState )
  {
    result = HvlpStartSecurePageListIteration(1LL, v11, a2, a4, a3, v14);
    if ( (int)result < 0 )
      return result;
    *((_QWORD *)&xmmword_140C47600 + 1) = v14[0];
    LOBYTE(HvlpCrashdumpIterationState) = 1;
    BYTE3(HvlpCrashdumpIterationState) = v11;
  }
  LOBYTE(a5) = 0;
  result = VslGetSecurePageList(0LL, a1, &v13, &a5);
  if ( (int)result >= 0 )
  {
    *v6 = v13 << 12;
    return 0LL;
  }
  else if ( (_DWORD)result == -2147483622 )
  {
    HvlpEndSecurePageListIteration(1LL, 0LL, 0LL);
    return 3221226021LL;
  }
  return result;
}
