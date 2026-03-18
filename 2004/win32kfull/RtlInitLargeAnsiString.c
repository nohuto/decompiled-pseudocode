/*
 * XREFs of RtlInitLargeAnsiString @ 0x1C0031D08
 * Callers:
 *     NtUserfnINSTRINGNULL @ 0x1C00319E0 (NtUserfnINSTRINGNULL.c)
 *     NtUserfnINLPCREATESTRUCT @ 0x1C0031AD0 (NtUserfnINLPCREATESTRUCT.c)
 *     xxxCreateWindowEx @ 0x1C00A8C10 (xxxCreateWindowEx.c)
 *     NtUserfnINSTRING @ 0x1C011B190 (NtUserfnINSTRING.c)
 *     ?NtUserfnHkINLPCBTCREATESTRUCT@@YA_JI_KPEAUtagCBT_CREATEWNDW@@H@Z @ 0x1C01F6DC8 (-NtUserfnHkINLPCBTCREATESTRUCT@@YA_JI_KPEAUtagCBT_CREATEWNDW@@H@Z.c)
 *     NtUserfnINLPMDICREATESTRUCT @ 0x1C0206270 (NtUserfnINLPMDICREATESTRUCT.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlInitLargeAnsiString(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned int v3; // edx

  *(_QWORD *)(a1 + 8) = a2;
  *(_DWORD *)(a1 + 4) |= 0x80000000;
  if ( a2 )
  {
    result = -1LL;
    do
      ++result;
    while ( *(_BYTE *)(a2 + result) );
    v3 = (result + 1) | 0x80000000;
  }
  else
  {
    v3 = 0x80000000;
    result = 0LL;
  }
  *(_DWORD *)a1 = result;
  *(_DWORD *)(a1 + 4) = v3;
  return result;
}
