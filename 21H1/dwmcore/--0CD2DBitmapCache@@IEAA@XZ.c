/*
 * XREFs of ??0CD2DBitmapCache@@IEAA@XZ @ 0x180032FC0
 * Callers:
 *     ??0CWICBitmapRealization@@QEAA@XZ @ 0x1800275CC (--0CWICBitmapRealization@@QEAA@XZ.c)
 *     ??0CBitmapRealization@@IEAA@W4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@_N@Z @ 0x18003192C (--0CBitmapRealization@@IEAA@W4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_.c)
 *     ??0CRenderTargetBitmap@@IEAA@_N@Z @ 0x18003268C (--0CRenderTargetBitmap@@IEAA@_N@Z.c)
 *     ??0CColorKeyBitmapRealization@@QEAA@XZ @ 0x180263060 (--0CColorKeyBitmapRealization@@QEAA@XZ.c)
 *     ??0CDxHandleStereoBitmapRealization@@IEAA@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@@Z @ 0x180265644 (--0CDxHandleStereoBitmapRealization@@IEAA@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION.c)
 * Callees:
 *     <none>
 */

CD2DBitmapCache *__fastcall CD2DBitmapCache::CD2DBitmapCache(CD2DBitmapCache *this, int a2)
{
  int *v3; // rax
  __int64 v4; // rcx
  CD2DBitmapCache *result; // rax

  if ( a2 )
  {
    v3 = (int *)&CD2DBitmapCache::`vbtable';
    *((_QWORD *)this + 2) = &CD2DBitmapCache::`vbtable';
  }
  else
  {
    v3 = (int *)*((_QWORD *)this + 2);
  }
  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)this = &CD2DBitmapCache::`vftable'{for `CMILCOMBase'};
  *(_QWORD *)((char *)this + v3[1] + 16) = &CD2DBitmapCache::`vftable'{for `IDeviceResourceNotify'};
  v4 = *(int *)(*((_QWORD *)this + 2) + 4LL);
  result = this;
  *(_DWORD *)((char *)this + v4 + 12) = v4 - 72;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_BYTE *)this + 72) = 0;
  return result;
}
