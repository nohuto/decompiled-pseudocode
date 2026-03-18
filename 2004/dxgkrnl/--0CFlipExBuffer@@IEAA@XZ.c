/*
 * XREFs of ??0CFlipExBuffer@@IEAA@XZ @ 0x1C0011888
 * Callers:
 *     ?Create@CFlipExBuffer@@SAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SWAPCHAIN_BUFFER_INFO@@_NPEAPEAV1@@Z @ 0x1C00111A0 (-Create@CFlipExBuffer@@SAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SWAPCHAIN_BUFFER_INFO@@_NPEAPEAV1@@.c)
 *     ?Create@CCompositionSwapchainBuffer@@SAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_COMPOSITION_SWAPCHAIN_BUFFER_INFO@@_NPEAPEAV1@@Z @ 0x1C006642C (-Create@CCompositionSwapchainBuffer@@SAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_COMPOSITION_SWAPCHAIN.c)
 * Callees:
 *     ??0CCompositionBuffer@@IEAA@XZ @ 0x1C0011974 (--0CCompositionBuffer@@IEAA@XZ.c)
 *     memset @ 0x1C00274C0 (memset.c)
 */

CFlipExBuffer *__fastcall CFlipExBuffer::CFlipExBuffer(CFlipExBuffer *this)
{
  CFlipExBuffer *result; // rax

  CCompositionBuffer::CCompositionBuffer(this);
  *((_DWORD *)this + 87) = -1;
  *(_QWORD *)this = &CFlipExBuffer::`vftable';
  *((_QWORD *)this + 36) = 0LL;
  *((_QWORD *)this + 37) = 0LL;
  *((_DWORD *)this + 76) = 0;
  *((_QWORD *)this + 39) = 0LL;
  *((_QWORD *)this + 40) = 0LL;
  *((_QWORD *)this + 42) = 0LL;
  *((_DWORD *)this + 86) = 0;
  *((_DWORD *)this + 88) = 0;
  *((_QWORD *)this + 60) = 0LL;
  *((_QWORD *)this + 61) = 0LL;
  *((_QWORD *)this + 70) = 0LL;
  *((_DWORD *)this + 142) = 0;
  *((_WORD *)this + 286) = 0;
  *((_DWORD *)this + 144) = 0;
  *((_BYTE *)this + 580) = 0;
  *((_QWORD *)this + 73) = 0LL;
  *((_QWORD *)this + 74) = 0LL;
  *((_QWORD *)this + 75) = 0LL;
  *((_DWORD *)this + 152) = 0;
  *((_QWORD *)this + 77) = 0LL;
  *((_BYTE *)this + 624) = 0;
  *((_QWORD *)this + 79) = 0LL;
  *((_QWORD *)this + 80) = 0LL;
  memset((char *)this + 496, 0, 0x40uLL);
  result = this;
  *((_DWORD *)this + 16) = 0;
  return result;
}
