/*
 * XREFs of GetSharedResourceData @ 0x1C0064458
 * Callers:
 *     ?CreateInternalSharedResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C00641D8 (-CreateInternalSharedResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarsh.c)
 *     ?OpenInternalSharedResource@CApplicationChannel@DirectComposition@@QEAAJPEAXI_NPEAPEAVCResourceMarshaler@2@@Z @ 0x1C0064AFC (-OpenInternalSharedResource@CApplicationChannel@DirectComposition@@QEAAJPEAXI_NPEAPEAVCResourceM.c)
 * Callees:
 *     <none>
 */

char __fastcall GetSharedResourceData(unsigned int a1, __int64 a2)
{
  char v2; // r8
  unsigned int v3; // ecx
  unsigned int v4; // ecx
  unsigned int v5; // ecx
  unsigned int v6; // ecx
  __int64 (__fastcall *v7)(const struct DirectComposition::CSharedSystemResource *, int, struct DirectComposition::CSharedWriteLegacyAnimationTriggerMarshaler **); // rax
  __int64 (__fastcall *v9)(); // rax
  unsigned int v10; // ecx
  unsigned int v11; // ecx
  unsigned int v12; // ecx
  unsigned int v13; // ecx

  *(_DWORD *)a2 = a1;
  v2 = 1;
  if ( a1 <= 0x6C )
  {
    if ( a1 == 108 )
    {
      *(_QWORD *)(a2 + 8) = 0LL;
      v7 = (__int64 (__fastcall *)(const struct DirectComposition::CSharedSystemResource *, int, struct DirectComposition::CSharedWriteLegacyAnimationTriggerMarshaler **))CreateSharedMatrixTransform3DMarshaler;
      goto LABEL_9;
    }
    if ( a1 <= 0x4C )
    {
      switch ( a1 )
      {
        case 0x4Cu:
          *(_QWORD *)(a2 + 8) = CreateSharedReadHolographicInteropTextureMarshaler;
          v7 = (__int64 (__fastcall *)(const struct DirectComposition::CSharedSystemResource *, int, struct DirectComposition::CSharedWriteLegacyAnimationTriggerMarshaler **))CreateSharedHolographicInteropTextureMarshaler;
          goto LABEL_9;
        case 0x22u:
          v9 = CreateSharedReadCompositionLightMarshaler;
LABEL_21:
          *(_QWORD *)(a2 + 16) = 0LL;
          *(_QWORD *)(a2 + 8) = v9;
          return v2;
        case 0x20u:
          *(_QWORD *)(a2 + 8) = 0LL;
          v7 = (__int64 (__fastcall *)(const struct DirectComposition::CSharedSystemResource *, int, struct DirectComposition::CSharedWriteLegacyAnimationTriggerMarshaler **))CreateSharedCompositionDistantLightMarshaler;
          goto LABEL_9;
        case 0x1Eu:
          *(_QWORD *)(a2 + 8) = 0LL;
          v7 = (__int64 (__fastcall *)(const struct DirectComposition::CSharedSystemResource *, int, struct DirectComposition::CSharedWriteLegacyAnimationTriggerMarshaler **))CreateSharedCompositionAmbientLightMarshaler;
          goto LABEL_9;
        case 0x12u:
          *(_DWORD *)a2 = 130;
          v7 = (__int64 (__fastcall *)(const struct DirectComposition::CSharedSystemResource *, int, struct DirectComposition::CSharedWriteLegacyAnimationTriggerMarshaler **))CreateSharedClientProjectedShadowCasterMarshaler;
          goto LABEL_8;
        case 0x24u:
          *(_QWORD *)(a2 + 8) = 0LL;
          v7 = (__int64 (__fastcall *)(const struct DirectComposition::CSharedSystemResource *, int, struct DirectComposition::CSharedWriteLegacyAnimationTriggerMarshaler **))CreateSharedCompositionPointLightMarshaler;
          goto LABEL_9;
        case 0x27u:
          *(_QWORD *)(a2 + 8) = 0LL;
          v7 = (__int64 (__fastcall *)(const struct DirectComposition::CSharedSystemResource *, int, struct DirectComposition::CSharedWriteLegacyAnimationTriggerMarshaler **))CreateSharedCompositionSpotLightMarshaler;
          goto LABEL_9;
      }
    }
    else
    {
      switch ( a1 )
      {
        case 'h':
          *(_QWORD *)(a2 + 8) = CreateSharedReadTransformMarshaler;
          v7 = (__int64 (__fastcall *)(const struct DirectComposition::CSharedSystemResource *, int, struct DirectComposition::CSharedWriteLegacyAnimationTriggerMarshaler **))CreateSharedManipulationTransformMarshaler;
          goto LABEL_9;
        case 'W':
          *(_QWORD *)(a2 + 8) = CreateSharedReadInteractionMarshaler;
          v7 = (__int64 (__fastcall *)(const struct DirectComposition::CSharedSystemResource *, int, struct DirectComposition::CSharedWriteLegacyAnimationTriggerMarshaler **))CreateSharedInteractionMarshaler;
          goto LABEL_9;
        case '\\':
          *(_QWORD *)(a2 + 8) = CreateSharedReadLegacyAnimationTriggerMarshaler;
          v7 = CreateSharedWriteLegacyAnimationTriggerMarshaler;
          goto LABEL_9;
        case 'N':
          *(_DWORD *)a2 = 130;
          v7 = (__int64 (__fastcall *)(const struct DirectComposition::CSharedSystemResource *, int, struct DirectComposition::CSharedWriteLegacyAnimationTriggerMarshaler **))CreateSharedHostProjectedShadowCasterMarshaler;
          goto LABEL_8;
        case 'k':
          *(_QWORD *)(a2 + 8) = 0LL;
          v7 = (__int64 (__fastcall *)(const struct DirectComposition::CSharedSystemResource *, int, struct DirectComposition::CSharedWriteLegacyAnimationTriggerMarshaler **))CreateSharedMatrixTransformMarshaler;
          goto LABEL_9;
      }
    }
    return 0;
  }
  if ( a1 <= 0xBA )
  {
    if ( a1 == 186 )
      goto LABEL_47;
    v10 = a1 - 126;
    if ( !v10 )
    {
      *(_QWORD *)(a2 + 8) = CreateSharedReadPrimitiveColorMarshaler;
      v7 = (__int64 (__fastcall *)(const struct DirectComposition::CSharedSystemResource *, int, struct DirectComposition::CSharedWriteLegacyAnimationTriggerMarshaler **))CreateSharedWritePrimitiveColorMarshaler;
      goto LABEL_9;
    }
    v11 = v10 - 11;
    if ( !v11 )
    {
      *(_DWORD *)a2 = 16;
      v7 = (__int64 (__fastcall *)(const struct DirectComposition::CSharedSystemResource *, int, struct DirectComposition::CSharedWriteLegacyAnimationTriggerMarshaler **))CreateSharedReadCaptureControllerMarshaler;
      goto LABEL_8;
    }
    v12 = v11 - 6;
    if ( !v12 )
    {
      *(_QWORD *)(a2 + 8) = CreateSharedReadRemoteAppRenderTargetMarshaler;
      v7 = (__int64 (__fastcall *)(const struct DirectComposition::CSharedSystemResource *, int, struct DirectComposition::CSharedWriteLegacyAnimationTriggerMarshaler **))CreateSharedWriteRemoteAppRenderTargetMarshaler;
      goto LABEL_9;
    }
    v13 = v12 - 8;
    if ( !v13 )
    {
      *(_QWORD *)(a2 + 8) = CreateSharedReadScalarMarshaler;
      v7 = (__int64 (__fastcall *)(const struct DirectComposition::CSharedSystemResource *, int, struct DirectComposition::CSharedWriteLegacyAnimationTriggerMarshaler **))CreateSharedWriteScalarMarshaler;
      goto LABEL_9;
    }
    if ( v13 == 34 )
    {
LABEL_47:
      v9 = CreateSharedReadTransformMarshaler;
      goto LABEL_21;
    }
    return 0;
  }
  v3 = a1 - 195;
  if ( !v3 )
  {
    v7 = (__int64 (__fastcall *)(const struct DirectComposition::CSharedSystemResource *, int, struct DirectComposition::CSharedWriteLegacyAnimationTriggerMarshaler **))CreateHostVisualMarshaler;
    goto LABEL_8;
  }
  v4 = v3 - 3;
  if ( !v4 )
  {
    v9 = CreateSharedReadVisualReferenceMarshaler;
    goto LABEL_21;
  }
  v5 = v4 - 1;
  if ( !v5 )
  {
    *(_QWORD *)(a2 + 8) = 0LL;
    v7 = (__int64 (__fastcall *)(const struct DirectComposition::CSharedSystemResource *, int, struct DirectComposition::CSharedWriteLegacyAnimationTriggerMarshaler **))CreateSharedVisualReferenceControllerMarshaler;
    goto LABEL_9;
  }
  v6 = v5 - 2;
  if ( v6 )
  {
    if ( v6 == 3 )
    {
      *(_DWORD *)a2 = 16;
      v7 = (__int64 (__fastcall *)(const struct DirectComposition::CSharedSystemResource *, int, struct DirectComposition::CSharedWriteLegacyAnimationTriggerMarshaler **))CreateSharedWriteCaptureControllerMarshaler;
      goto LABEL_8;
    }
    return 0;
  }
  *(_DWORD *)a2 = 195;
  v7 = (__int64 (__fastcall *)(const struct DirectComposition::CSharedSystemResource *, int, struct DirectComposition::CSharedWriteLegacyAnimationTriggerMarshaler **))CreateVisualTargetMarshaler;
LABEL_8:
  *(_QWORD *)(a2 + 8) = v7;
LABEL_9:
  *(_QWORD *)(a2 + 16) = v7;
  return v2;
}
