/*
 * XREFs of ??$make_unique@VCComposeTop@@$$V$0A@@std@@YA?AV?$unique_ptr@VCComposeTop@@U?$default_delete@VCComposeTop@@@std@@@0@XZ @ 0x1801B5EC4
 * Callers:
 *     ?AddNewComposeTopContent@CDesktopTree@@QEAAJPEAVIBitmapResource@@AEBVCShape@@AEBVCMILMatrix@@@Z @ 0x1801B60B4 (-AddNewComposeTopContent@CDesktopTree@@QEAAJPEAVIBitmapResource@@AEBVCShape@@AEBVCMILMatrix@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180037B1C (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::make_unique<CComposeTop,,0>(_QWORD *a1)
{
  _QWORD *v2; // rax

  v2 = operator new(0xA8uLL);
  if ( v2 )
  {
    *v2 = 0LL;
    v2[1] = 0LL;
    v2[2] = 0LL;
    v2[3] = 1065353216LL;
    v2[4] = 0LL;
    *((_DWORD *)v2 + 10) = 0;
    *(_QWORD *)((char *)v2 + 44) = 1065353216LL;
    *(_QWORD *)((char *)v2 + 52) = 0LL;
    *((_DWORD *)v2 + 15) = 0;
    v2[8] = 1065353216LL;
    v2[9] = 0LL;
    *((_DWORD *)v2 + 20) = 0;
    *((_DWORD *)v2 + 21) = 1065353216;
    *((_WORD *)v2 + 44) = 32085;
    *(_QWORD *)((char *)v2 + 92) = 1065353216LL;
    *(_QWORD *)((char *)v2 + 100) = 0LL;
    *((_DWORD *)v2 + 27) = 0;
    v2[14] = 1065353216LL;
    v2[15] = 0LL;
    *((_DWORD *)v2 + 32) = 0;
    *(_QWORD *)((char *)v2 + 132) = 1065353216LL;
    *(_QWORD *)((char *)v2 + 140) = 0LL;
    *((_DWORD *)v2 + 37) = 0;
    *((_DWORD *)v2 + 38) = 1065353216;
    *((_WORD *)v2 + 78) = 32085;
    v2[20] = 0LL;
  }
  else
  {
    v2 = 0LL;
  }
  *a1 = v2;
  return a1;
}
