/*
 * XREFs of _RtlCreateProcessParametersWithTemplate@12 @ 0x4B2A8270
 * Callers:
 *     <none>
 * Callees:
 *     _RtlCreateProcessParametersInternal@48 @ 0x4B2A8307 (_RtlCreateProcessParametersInternal@48.c)
 */

int __stdcall RtlCreateProcessParametersWithTemplate(int a1, int a2, int a3)
{
  return RtlCreateProcessParametersInternal(
           *(_DWORD *)(a2 + 52) != 0 ? a2 + 48 : 0,
           *(_DWORD *)(a2 + 40) != 0 ? a2 + 36 : 0,
           *(_DWORD *)(a2 + 68) != 0 ? a2 + 64 : 0,
           *(void **)(a2 + 72),
           *(_DWORD *)(a2 + 116) != 0 ? a2 + 112 : 0,
           *(_DWORD *)(a2 + 124) != 0 ? a2 + 120 : 0,
           *(_DWORD *)(a2 + 132) != 0 ? a2 + 128 : 0,
           *(_DWORD *)(a2 + 140) != 0 ? a2 + 136 : 0,
           *(_DWORD *)(a2 + 680) != 0 ? a2 + 676 : 0,
           a3);
}
