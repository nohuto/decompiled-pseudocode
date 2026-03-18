/*
 * XREFs of __InitPwSB@4 @ 0x6E5B6
 * Callers:
 *     _xxxRealDefWindowProc@16 @ 0x3D3F2 (_xxxRealDefWindowProc@16.c)
 *     _CalcSBStuff@12 @ 0x6DA90 (_CalcSBStuff@12.c)
 *     _xxxSetScrollBar@16 @ 0x8DD18 (_xxxSetScrollBar@16.c)
 *     ?xxxEnableWndSBArrows@@YGHPAUtagWND@@II@Z @ 0x8E114 (-xxxEnableWndSBArrows@@YGHPAUtagWND@@II@Z.c)
 *     _xxxShowScrollBar@12 @ 0xC3116 (_xxxShowScrollBar@12.c)
 * Callees:
 *     _DesktopAlloc@12 @ 0x1EAD0 (_DesktopAlloc@12.c)
 *     ??4?$SharedPointerFieldpSBInfo@UtagSBINFO@@@tagWND@@QAEPAUtagSBINFO@@PAU2@@Z @ 0x8E28C (--4-$SharedPointerFieldpSBInfo@UtagSBINFO@@@tagWND@@QAEPAUtagSBINFO@@PAU2@@Z.c)
 */

int __thiscall _InitPwSB(int *this)
{
  int *v1; // esi
  int result; // eax
  PVOID v3; // eax

  v1 = this + 21;
  result = this[21];
  if ( !result )
  {
    v3 = DesktopAlloc(this[3], 0x24u, 6);
    tagWND::SharedPointerFieldpSBInfo<tagSBINFO>::operator=(v3);
    if ( *v1 )
    {
      *(_DWORD *)(*v1 + 24) = 100;
      *(_DWORD *)(*v1 + 8) = 100;
      return *v1;
    }
    else
    {
      return 0;
    }
  }
  return result;
}
