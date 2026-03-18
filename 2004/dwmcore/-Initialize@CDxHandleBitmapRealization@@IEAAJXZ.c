/*
 * XREFs of ?Initialize@CDxHandleBitmapRealization@@IEAAJXZ @ 0x180039E24
 * Callers:
 *     ?Create@CDxHandleAdvancedDirectFlipBitmapRealization@@SAJW4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@PEAPEAVISwapChainRealization@@@Z @ 0x180037EB8 (-Create@CDxHandleAdvancedDirectFlipBitmapRealization@@SAJW4CompositionBufferType@@U_LUID@@AEBUCS.c)
 *     ?Create@CDxHandleBitmapRealization@@SAJW4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@_NPEAPEAVISwapChainRealization@@@Z @ 0x180039D4C (-Create@CDxHandleBitmapRealization@@SAJW4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTE.c)
 *     ?Create@CGDIBitmapRealization@@SAJPEAXU_LUID@@PEAPEAVIGDIBitmapRealization@@@Z @ 0x180093F48 (-Create@CGDIBitmapRealization@@SAJPEAXU_LUID@@PEAPEAVIGDIBitmapRealization@@@Z.c)
 *     ?Create@CDxHandleStereoBitmapRealization@@SAHU_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAPEAVISwapChainRealization@@@Z @ 0x180262F24 (-Create@CDxHandleStereoBitmapRealization@@SAHU_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZAT.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsXbox@CD3DDevice@@QEBA_NXZ @ 0x180039ED0 (-IsXbox@CD3DDevice@@QEBA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDxHandleBitmapRealization::Initialize(CDxHandleBitmapRealization *this)
{
  int v2; // eax
  __int64 v3; // rcx
  unsigned int v4; // edi
  __int64 v5; // rcx
  CD3DDevice *v6; // rax

  v2 = (*(__int64 (__fastcall **)(CDxHandleBitmapRealization *))(*(_QWORD *)this + 56LL))(this);
  v4 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v3, &dword_1802DBC38, 2u, v2, 0x40u, 0LL);
  }
  else if ( (*(unsigned __int8 (__fastcall **)(char *))(*((_QWORD *)this + 41) + 64LL))((char *)this + 328)
         || (*(unsigned int (__fastcall **)(char *))(*((_QWORD *)this + 41) + 24LL))((char *)this + 328) == 1
         || (v5 = *((_QWORD *)this + 43) + 16LL + *(int *)(*(_QWORD *)(*((_QWORD *)this + 43) + 16LL) + 8LL),
             v6 = (CD3DDevice *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5),
             CD3DDevice::IsXbox(v6)) )
  {
    *((_BYTE *)this + 365) = 0;
  }
  return v4;
}
