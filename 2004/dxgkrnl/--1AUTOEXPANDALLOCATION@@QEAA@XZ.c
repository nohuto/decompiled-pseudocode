/*
 * XREFs of ??1AUTOEXPANDALLOCATION@@QEAA@XZ @ 0x1C0169DA8
 * Callers:
 *     ??_GAUTOEXPANDALLOCATION@@QEAAPEAXI@Z @ 0x1C001A8F8 (--_GAUTOEXPANDALLOCATION@@QEAAPEAXI@Z.c)
 *     ??1DXGGLOBAL@@AEAA@XZ @ 0x1C0267F50 (--1DXGGLOBAL@@AEAA@XZ.c)
 *     ??1DXGSWAPCHAIN@@QEAA@XZ @ 0x1C02A968C (--1DXGSWAPCHAIN@@QEAA@XZ.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C0002C80 (--_V@YAXPEAX@Z.c)
 */

void __fastcall AUTOEXPANDALLOCATION::~AUTOEXPANDALLOCATION(AUTOEXPANDALLOCATION *this)
{
  void *v2; // rcx

  v2 = *(void **)this;
  if ( v2 )
  {
    operator delete[](v2);
    *(_QWORD *)this = 0LL;
    *((_DWORD *)this + 2) = 0;
    *((_DWORD *)this + 3) = 0;
  }
}
