/*
 * XREFs of ??1ComboButtonRegistration@@QEAA@XZ @ 0x180172D6C
 * Callers:
 *     _ButtonRecognizer::RegisterComboButton_::_1_::dtor$1 @ 0x180173E3F (_ButtonRecognizer--RegisterComboButton_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

void __fastcall ComboButtonRegistration::~ComboButtonRegistration(ComboButtonRegistration *this)
{
  std::vector<Windows::UI::Color>::_Tidy((__int64)this + 8);
}
