/*
 * XREFs of _RtlpInitRandomExVector@12 @ 0x4B36A020
 * Callers:
 *     <none>
 * Callees:
 *     _ZwQueryInformationProcess@20 @ 0x4B2F2AF0 (_ZwQueryInformationProcess@20.c)
 *     _RtlRaiseStatus@4 @ 0x4B308980 (_RtlRaiseStatus@4.c)
 */

LOGICAL __fastcall RtlpInitRandomExVector(int a1, int a2, PRTL_RUN_ONCE a3, PVOID a4, PVOID *a5)
{
  int v5; // eax
  int v6; // ecx
  unsigned int i; // ebx
  unsigned __int64 v8; // kr10_8
  int v9; // eax
  unsigned __int64 v10; // kr20_8
  int v11; // kr0C_4
  int ProcessInformation; // [esp+0h] [ebp-4h] BYREF

  ProcessInformation = a1;
  v5 = ZwQueryInformationProcess((HANDLE)0xFFFFFFFF, ProcessCookie, &ProcessInformation, 4u, 0);
  if ( v5 < 0 )
    RtlRaiseStatus(v5);
  v6 = dword_4B3A92E0 ^ ProcessInformation;
  for ( i = 0; i < 128; ++i )
  {
    v8 = 2147483629LL * (unsigned int)v6 + 2147483587;
    v9 = (((HIDWORD(v8) >> 30) + ((2147483629 * v6 + 2147483587) & 0x7FFFFFFF) + ((v8 >> 31) & 0x7FFFFFFF)) & 0x7FFFFFFF)
       + ((((2147483629 * v6 + 2147483587) & 0x7FFFFFFF) + ((v8 >> 31) & 0x7FFFFFFF) + (HIDWORD(v8) >> 30)) >> 31);
    v6 = v9 != 0x7FFFFFFF ? v9 : 0;
    RtlpRandomExConstantVector[i] = v6;
  }
  v10 = 2147483629LL * (v9 & (unsigned int)-(v9 != 0x7FFFFFFF)) + 2147483587;
  v11 = (v10 & 0x7FFFFFFF) + ((v10 >> 31) & 0x7FFFFFFF);
  RtlpRandomExAuxVarY = (((HIDWORD(v10) >> 30) + v11) & 0x7FFFFFFF)
                      + (unsigned int)(((v10 & 0x7FFFFFFF) + ((v10 >> 31) & 0x7FFFFFFF) + (HIDWORD(v10) >> 30)) >> 31) != 0x7FFFFFFF
                      ? (((HIDWORD(v10) >> 30) + v11) & 0x7FFFFFFF)
                      + (((v10 & 0x7FFFFFFF) + ((v10 >> 31) & 0x7FFFFFFF) + (HIDWORD(v10) >> 30)) >> 31)
                      : 0;
  return 1;
}
