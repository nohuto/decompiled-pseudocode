/*
 * XREFs of RtlInitLargeUnicodeString @ 0x1C00BC9CC
 * Callers:
 *     NtUserfnINSTRING @ 0x1C002ADE0 (NtUserfnINSTRING.c)
 *     xxxSetInformationThread @ 0x1C007DA60 (xxxSetInformationThread.c)
 *     xxxCreateDefaultImeWindow @ 0x1C00BC098 (xxxCreateDefaultImeWindow.c)
 *     NtUserfnINSTRINGNULL @ 0x1C00BC6F0 (NtUserfnINSTRINGNULL.c)
 *     NtUserfnINLPCREATESTRUCT @ 0x1C00BC7E0 (NtUserfnINLPCREATESTRUCT.c)
 *     xxxProcessEventMessage @ 0x1C00D8288 (xxxProcessEventMessage.c)
 *     EditionxxxBroadcastSPIChange @ 0x1C01D7090 (EditionxxxBroadcastSPIChange.c)
 *     ?DrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z @ 0x1C01F2600 (-DrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z.c)
 *     ?NtUserfnHkINLPCBTCREATESTRUCT@@YA_JI_KPEAUtagCBT_CREATEWNDW@@H@Z @ 0x1C01F5F58 (-NtUserfnHkINLPCBTCREATESTRUCT@@YA_JI_KPEAUtagCBT_CREATEWNDW@@H@Z.c)
 *     NtUserfnINLPMDICREATESTRUCT @ 0x1C0205400 (NtUserfnINLPMDICREATESTRUCT.c)
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
