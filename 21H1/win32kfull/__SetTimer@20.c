/*
 * XREFs of __SetTimer@20 @ 0x156316
 * Callers:
 *     ?xxxMNDoScroll@@YGHABV?$SmartObjStackRef@UtagPOPUPMENU@@@@IH@Z @ 0x196E88 (-xxxMNDoScroll@@YGHABV-$SmartObjStackRef@UtagPOPUPMENU@@@@IH@Z.c)
 *     _xxxMenuWindowProc@16 @ 0x19AC2A (_xxxMenuWindowProc@16.c)
 * Callees:
 *     _InternalSetTimer@24 @ 0x2CB62 (_InternalSetTimer@24.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 */

int __fastcall _SetTimer(unsigned int a1, char *a2, unsigned int a3, int a4, int a5)
{
  if ( !a1 || PsGetCurrentProcessWin32Process() == *(_DWORD *)(*(_DWORD *)(a1 + 8) + 232) )
    return InternalSetTimer(a1, a2, a3, a4, a5, 0);
  UserSetLastError((struct _NT_TIB *)5);
  return 0;
}
