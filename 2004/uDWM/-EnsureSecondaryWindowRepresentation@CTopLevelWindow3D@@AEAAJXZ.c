/*
 * XREFs of ?EnsureSecondaryWindowRepresentation@CTopLevelWindow3D@@AEAAJXZ @ 0x18003F840
 * Callers:
 *     ?StartAnimation@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@@Z @ 0x180024E74 (-StartAnimation@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@@Z.c)
 *     ?OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ @ 0x18002A0F0 (-OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800039DC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Create@CSecondaryWindowRepresentation@@SAJU?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISecondaryWindowRepresentationChangedListener@@PEAVCWindowData@@IW4DEVICE_SCALE_FACTOR@@PEAPEAV1@@Z @ 0x180014514 (-Create@CSecondaryWindowRepresentation@@SAJU-$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISeconda.c)
 */

__int64 __fastcall CTopLevelWindow3D::EnsureSecondaryWindowRepresentation(CTopLevelWindow3D *this)
{
  unsigned int v1; // ebx
  int v2; // eax
  void *v4; // [rsp+20h] [rbp-18h]

  v1 = 0;
  if ( !*((_QWORD *)this + 42) )
  {
    LODWORD(v4) = 100;
    v2 = CSecondaryWindowRepresentation::Create(
           160LL,
           (__int64)this + 280,
           *((_QWORD *)this + 41),
           0,
           v4,
           (CSecondaryWindowRepresentation **)this + 42);
    v1 = v2;
    if ( v2 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0x285u);
  }
  return v1;
}
