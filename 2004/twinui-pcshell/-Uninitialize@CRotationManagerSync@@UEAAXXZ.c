/*
 * XREFs of ?Uninitialize@CRotationManagerSync@@UEAAXXZ @ 0x180164B60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CRotationManagerSync::Uninitialize(CRotationManagerSync *this)
{
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)this + 8);
}
