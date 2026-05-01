/*
 * XREFs of ?GetNextGlomForApp@CApplicationManager@@UEAAJPEAUIImmersiveApplicationInternal@@PEAPEAU2@@Z @ 0x18014BFA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CApplicationManager::GetNextGlomForApp(
        CApplicationManager *this,
        struct IImmersiveApplicationInternal *a2,
        struct IImmersiveApplicationInternal **a3)
{
  return CActivationBasedAppAndGlomCollection::GetNextMostRecentlyActivatedGlom(
           (CApplicationManager *)((char *)this + 384),
           a2,
           a3);
}
