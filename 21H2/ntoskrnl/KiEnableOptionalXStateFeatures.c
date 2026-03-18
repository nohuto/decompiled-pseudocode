/*
 * XREFs of KiEnableOptionalXStateFeatures @ 0x14056FE5C
 * Callers:
 *     KiPreprocessFault @ 0x140299840 (KiPreprocessFault.c)
 * Callees:
 *     MmDeleteKernelStackEx @ 0x1402C1900 (MmDeleteKernelStackEx.c)
 *     MmCreateKernelStack @ 0x1402F4B70 (MmCreateKernelStack.c)
 *     KxEnableOptionalXStateFeatures @ 0x140570394 (KxEnableOptionalXStateFeatures.c)
 */

__int64 __fastcall KiEnableOptionalXStateFeatures(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // r8
  unsigned __int64 KernelStack; // rbx
  int v7; // esi
  char v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0LL;
  v8 = 0;
  KernelStack = 0LL;
  if ( (*(_DWORD *)(a1 + 116) & 0x800000) == 0 )
  {
    KernelStack = MmCreateKernelStack(
                    0x20u,
                    *(unsigned __int16 *)(*(_QWORD *)(KiProcessorBlock[*(unsigned int *)(a1 + 588)] + 192) + 138LL),
                    a1);
    if ( !KernelStack )
      return 3221225495LL;
    v2 = KernelStack - (unsigned int)KeDecoupledStateSaveAreaLength;
  }
  v7 = KxEnableOptionalXStateFeatures(a1, a2, v2, &v8);
  if ( v7 < 0 || !v8 )
  {
    if ( KernelStack )
      MmDeleteKernelStackEx(KernelStack, 8u, a1);
  }
  return (unsigned int)v7;
}
