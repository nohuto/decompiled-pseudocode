/*
 * XREFs of ??0DXGSWAPCHAIN@@QEAA@XZ @ 0x1C034978C
 * Callers:
 *     DxgkCreateSwapChain @ 0x1C034DD20 (DxgkCreateSwapChain.c)
 * Callees:
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ?GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z @ 0x1C01E8B48 (-GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z.c)
 */

DXGSWAPCHAIN *__fastcall DXGSWAPCHAIN::DXGSWAPCHAIN(DXGSWAPCHAIN *this, __int64 a2, __int64 a3, __int64 a4)
{
  char *v5; // rcx

  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 9) = 62;
  *((_DWORD *)this + 10) = 64;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_DWORD *)this + 18) = 0;
  v5 = (char *)this + 80;
  *(_QWORD *)v5 = 0LL;
  *((_QWORD *)v5 + 1) = 0LL;
  AUTOEXPANDALLOCATION::GetBuffer((const void **)v5, 0, 0, a4);
  *((_QWORD *)this + 24) = 1LL;
  *((_QWORD *)this + 25) = 0LL;
  *((_DWORD *)this + 52) = 16;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_DWORD *)this + 58) = 0;
  memset((char *)this + 96, 0, 0x60uLL);
  *((_DWORD *)this + 31) = 1;
  *((_DWORD *)this + 46) = -1;
  *((_DWORD *)this + 34) = -1;
  return this;
}
