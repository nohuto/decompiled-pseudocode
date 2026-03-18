/*
 * XREFs of RtlStringCbPrintfW @ 0x1C0013410
 * Callers:
 *     ?EnsureAdapter@VIDMM_PARTITION@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x1C001C768 (-EnsureAdapter@VIDMM_PARTITION@@QEAAJPEAVVIDMM_GLOBAL@@@Z.c)
 *     VidSchiOpenProcessAdapterInfo @ 0x1C0097FF0 (VidSchiOpenProcessAdapterInfo.c)
 *     ?InitializeProcessAdapterInfo@VIDMM_PROCESS@@IEAAPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAVVIDMM_GLOBAL@@@Z @ 0x1C009CD60 (-InitializeProcessAdapterInfo@VIDMM_PROCESS@@IEAAPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAVVIDMM_GLOBA.c)
 *     ?Init@VIDMM_GLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAU_DXGK_QUERYSEGMENTOUT4@@KI@Z @ 0x1C00B1204 (-Init@VIDMM_GLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAU_DXGK_QUERYSEGMENTOUT4@@KI@Z.c)
 *     ?InitSegments@VIDMM_GLOBAL@@QEAAJIPEAUVIDMM_PHYSICAL_ADAPTER@@PEAUDXGK_SEGMENTDESCRIPTOR_INTERNAL@@@Z @ 0x1C00B1F08 (-InitSegments@VIDMM_GLOBAL@@QEAAJIPEAUVIDMM_PHYSICAL_ADAPTER@@PEAUDXGK_SEGMENTDESCRIPTOR_INTERNA.c)
 * Callees:
 *     RtlStringVPrintfWorkerW @ 0x1C0013450 (RtlStringVPrintfWorkerW.c)
 */

NTSTATUS RtlStringCbPrintfW(NTSTRSAFE_PWSTR pszDest, size_t cbDest, NTSTRSAFE_PCWSTR pszFormat, ...)
{
  size_t v3; // rdx
  NTSTATUS result; // eax
  va_list va; // [rsp+68h] [rbp+20h] BYREF

  va_start(va, pszFormat);
  v3 = cbDest >> 1;
  if ( v3 - 1 <= 0x7FFFFFFE )
    return RtlStringVPrintfWorkerW(pszDest, v3, (size_t *)pszFormat, pszFormat, va);
  result = -1073741811;
  if ( v3 )
    *pszDest = 0;
  return result;
}
