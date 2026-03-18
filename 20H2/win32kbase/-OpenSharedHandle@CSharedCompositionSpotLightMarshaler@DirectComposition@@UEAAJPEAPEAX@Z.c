/*
 * XREFs of ?OpenSharedHandle@CSharedCompositionSpotLightMarshaler@DirectComposition@@UEAAJPEAPEAX@Z @ 0x1C00BC590
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateHandle@CompositionObject@@QEBAJK_NDPEAPEAX@Z @ 0x1C0063BB0 (-CreateHandle@CompositionObject@@QEBAJK_NDPEAPEAX@Z.c)
 */

NTSTATUS __fastcall DirectComposition::CSharedCompositionSpotLightMarshaler::OpenSharedHandle(
        DirectComposition::CSharedCompositionSpotLightMarshaler *this,
        void **a2)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 25);
  if ( v2 )
    return CompositionObject::CreateHandle((CompositionObject *)(v2 - 24), 1u, 0, 1, a2);
  else
    return -1073741790;
}
