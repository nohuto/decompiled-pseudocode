/*
 * XREFs of ?Hide@SwitchItemThumbnailElement@@UEAAXXZ @ 0x1803B64C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Hide@CMultitaskingViewElementBase@@UEAAXXZ @ 0x1803A3400 (-Hide@CMultitaskingViewElementBase@@UEAAXXZ.c)
 */

void __fastcall SwitchItemThumbnailElement::Hide(SwitchItemThumbnailElement *this)
{
  CMultitaskingViewElementBase::Hide(this);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 74);
}
