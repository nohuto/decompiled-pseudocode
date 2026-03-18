/*
 * XREFs of ?OpenSharedHandle@CHostVisualMarshaler@DirectComposition@@UEAAJPEAPEAX@Z @ 0x1C00B5F50
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateHandle@CompositionObject@@QEBAJK_NDPEAPEAX@Z @ 0x1C00B8150 (-CreateHandle@CompositionObject@@QEBAJK_NDPEAPEAX@Z.c)
 */

int __fastcall DirectComposition::CHostVisualMarshaler::OpenSharedHandle(
        DirectComposition::CHostVisualMarshaler *this,
        void **a2)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 46);
  if ( v2 )
    return CompositionObject::CreateHandle((CompositionObject *)(v2 - 24), 1u, 0, 1, a2);
  else
    return -1073741790;
}
