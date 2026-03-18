/*
 * XREFs of ?Initialize@CDxHandleBitmapRealization@@IEAAJXZ @ 0x180066E4C
 * Callers:
 *     ?Create@CGDIBitmapRealization@@SAJPEAXU_LUID@@PEAPEAVIGDIBitmapRealization@@@Z @ 0x180065348 (-Create@CGDIBitmapRealization@@SAJPEAXU_LUID@@PEAPEAVIGDIBitmapRealization@@@Z.c)
 *     ?Create@CDxHandleAdvancedDirectFlipBitmapRealization@@SAJW4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@PEAPEAVISwapChainRealization@@@Z @ 0x180066B8C (-Create@CDxHandleAdvancedDirectFlipBitmapRealization@@SAJW4CompositionBufferType@@U_LUID@@AEBUCS.c)
 *     ?Create@CDxHandleBitmapRealization@@SAJW4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@_NPEAPEAVISwapChainRealization@@@Z @ 0x180066D64 (-Create@CDxHandleBitmapRealization@@SAJW4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTE.c)
 *     ?Create@CDxHandleStereoBitmapRealization@@SAHU_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAPEAVISwapChainRealization@@@Z @ 0x1802A4834 (-Create@CDxHandleStereoBitmapRealization@@SAHU_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZAT.c)
 * Callees:
 *     ?IsXbox@CD3DDevice@@QEBA_NXZ @ 0x180066F20 (-IsXbox@CD3DDevice@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CDxHandleBitmapRealization::Initialize(CDxHandleBitmapRealization *this)
{
  int v2; // eax
  unsigned int v3; // ecx
  unsigned int v4; // edi
  __int64 v5; // rcx
  CD3DDevice *v6; // rax

  v2 = (*(__int64 (__fastcall **)(CDxHandleBitmapRealization *))(*(_QWORD *)this + 64LL))(this);
  v4 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v3, &dword_1803475F0, 2u, v2, 0x40u, 0LL);
  }
  else if ( (*(unsigned __int8 (__fastcall **)(char *))(*((_QWORD *)this + 45) + 72LL))((char *)this + 360)
         || (*(unsigned int (__fastcall **)(char *))(*((_QWORD *)this + 45) + 32LL))((char *)this + 360) == 1
         || (v5 = *((_QWORD *)this + 47) + 16LL + *(int *)(*(_QWORD *)(*((_QWORD *)this + 47) + 16LL) + 8LL),
             v6 = (CD3DDevice *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5),
             CD3DDevice::IsXbox(v6)) )
  {
    *((_BYTE *)this + 397) = 0;
  }
  return v4;
}
