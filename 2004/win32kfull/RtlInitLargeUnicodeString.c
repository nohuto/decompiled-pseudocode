/*
 * XREFs of RtlInitLargeUnicodeString @ 0x1C0031CBC
 * Callers:
 *     xxxCreateDefaultImeWindow @ 0x1C00313C8 (xxxCreateDefaultImeWindow.c)
 *     NtUserfnINSTRINGNULL @ 0x1C00319E0 (NtUserfnINSTRINGNULL.c)
 *     NtUserfnINLPCREATESTRUCT @ 0x1C0031AD0 (NtUserfnINLPCREATESTRUCT.c)
 *     xxxProcessEventMessage @ 0x1C00B3CF8 (xxxProcessEventMessage.c)
 *     xxxSetInformationThread @ 0x1C00BD1B0 (xxxSetInformationThread.c)
 *     NtUserfnINSTRING @ 0x1C011B190 (NtUserfnINSTRING.c)
 *     EditionxxxBroadcastSPIChange @ 0x1C01D7D50 (EditionxxxBroadcastSPIChange.c)
 *     ?DrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z @ 0x1C01F3270 (-DrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z.c)
 *     ?NtUserfnHkINLPCBTCREATESTRUCT@@YA_JI_KPEAUtagCBT_CREATEWNDW@@H@Z @ 0x1C01F6DC8 (-NtUserfnHkINLPCBTCREATESTRUCT@@YA_JI_KPEAUtagCBT_CREATEWNDW@@H@Z.c)
 *     NtUserfnINLPMDICREATESTRUCT @ 0x1C0206270 (NtUserfnINLPMDICREATESTRUCT.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlInitLargeUnicodeString(__int64 a1, __int64 a2)
{
  int v2; // eax
  int v3; // r8d
  __int64 v4; // rax
  __int64 result; // rax

  v2 = *(_DWORD *)(a1 + 4) & 0x7FFFFFFF;
  *(_QWORD *)(a1 + 8) = a2;
  v3 = 0;
  *(_DWORD *)(a1 + 4) = v2;
  if ( a2 )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( *(_WORD *)(a2 + 2 * v4) );
    v3 = 2 * v4;
    result = (2 * (_DWORD)v4 + 2) & 0x7FFFFFFF;
  }
  else
  {
    result = v2 & 0x80000000;
  }
  *(_DWORD *)a1 = v3;
  *(_DWORD *)(a1 + 4) = result;
  return result;
}
