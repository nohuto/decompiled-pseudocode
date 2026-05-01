/*
 * XREFs of ??1?$unique_ptr@VIPositionerSelector@Cortana@TwinUI@@U?$default_delete@VIPositionerSelector@Cortana@TwinUI@@@wistd@@@wistd@@QEAA@XZ @ 0x1801B75CC
 * Callers:
 *     _CortanaSharedExperienceManager::RuntimeClassInitialize_::_1_::dtor$2 @ 0x1801BB064 (_CortanaSharedExperienceManager--RuntimeClassInitialize_--_1_--dtor$2.c)
 *     _CortanaSharedExperienceManager::RuntimeClassInitialize_::_1_::dtor$0_0 @ 0x1801BB247 (_CortanaSharedExperienceManager--RuntimeClassInitialize_--_1_--dtor$0_0.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008D714 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall wistd::unique_ptr<TwinUI::Cortana::IPositionerSelector,wistd::default_delete<TwinUI::Cortana::IPositionerSelector>>::~unique_ptr<TwinUI::Cortana::IPositionerSelector,wistd::default_delete<TwinUI::Cortana::IPositionerSelector>>(
        void **a1)
{
  void *v1; // rax

  v1 = *a1;
  *a1 = 0LL;
  if ( v1 )
    operator delete(v1, (const struct std::nothrow_t *)8);
}
