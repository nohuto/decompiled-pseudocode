/*
 * XREFs of ?IsDesktopVisualInputSink@CDesktopInputTransform@@SA_NPEBUCompositionInputObject@@@Z @ 0x1C01B53F4
 * Callers:
 *     NtUserAddVisualIdentifier @ 0x1C012FA10 (NtUserAddVisualIdentifier.c)
 * Callees:
 *     ?GetInstance@CDesktopInputTransform@@CAAEAV1@XZ @ 0x1C0005710 (-GetInstance@CDesktopInputTransform@@CAAEAV1@XZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C00614C8 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockShared@CPushLock@@QEBAJXZ @ 0x1C00615E0 (-AcquireLockShared@CPushLock@@QEBAJXZ.c)
 */

char __fastcall CDesktopInputTransform::IsDesktopVisualInputSink(const struct CompositionInputObject *a1)
{
  char v1; // si
  __int64 v3; // rbx
  CPushLock *Instance; // rdi
  unsigned int v6; // [rsp+34h] [rbp+Ch]

  v1 = 0;
  LODWORD(v3) = 0;
  v6 = 0;
  Instance = CDesktopInputTransform::GetInstance();
  CPushLock::AcquireLockShared(Instance);
  if ( *((_QWORD *)CDesktopInputTransform::GetInstance() + 3) )
  {
    v3 = *(_QWORD *)(*((_QWORD *)CDesktopInputTransform::GetInstance() + 3) + 16LL);
    v6 = HIDWORD(v3);
  }
  CPushLock::ReleaseLock(Instance);
  if ( __PAIR64__(v6, v3) == *((_QWORD *)a1 + 2) )
    return 1;
  return v1;
}
