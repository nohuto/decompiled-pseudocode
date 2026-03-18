/*
 * XREFs of ?IsDesktopVisualInputSinkMapIdentity@CDesktopInputTransform@@SA_NPEBU_LUID@@@Z @ 0x1C01B77EC
 * Callers:
 *     NtUserRemoveVisualIdentifier @ 0x1C0137D30 (NtUserRemoveVisualIdentifier.c)
 * Callees:
 *     ?GetInstance@CDesktopInputTransform@@CAAEAV1@XZ @ 0x1C0005710 (-GetInstance@CDesktopInputTransform@@CAAEAV1@XZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C009D788 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockShared@CPushLock@@QEBAJXZ @ 0x1C009D8A0 (-AcquireLockShared@CPushLock@@QEBAJXZ.c)
 */

bool __fastcall CDesktopInputTransform::IsDesktopVisualInputSinkMapIdentity(const struct _LUID *a1)
{
  CPushLock *Instance; // rdi
  __int64 v3; // rbx

  Instance = CDesktopInputTransform::GetInstance();
  CPushLock::AcquireLockShared(Instance);
  v3 = *((_QWORD *)CDesktopInputTransform::GetInstance() + 4);
  CPushLock::ReleaseLock(Instance);
  return v3 == *a1;
}
