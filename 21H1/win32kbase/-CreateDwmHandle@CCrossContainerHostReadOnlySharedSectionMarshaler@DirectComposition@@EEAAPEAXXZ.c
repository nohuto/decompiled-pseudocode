/*
 * XREFs of ?CreateDwmHandle@CCrossContainerHostReadOnlySharedSectionMarshaler@DirectComposition@@EEAAPEAXXZ @ 0x1C01EB400
 * Callers:
 *     ?EmitUpdateCommands@CCrossContainerHostReadOnlySharedSectionMarshaler@DirectComposition@@EEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01EB4D0 (-EmitUpdateCommands@CCrossContainerHostReadOnlySharedSectionMarshaler@DirectComposition@@EEAA_NP.c)
 * Callees:
 *     GreLockDwmState @ 0x1C0074C80 (GreLockDwmState.c)
 *     GreUnlockDwmState @ 0x1C0074CC0 (GreUnlockDwmState.c)
 *     ReferenceDwmProcess @ 0x1C00B45A0 (ReferenceDwmProcess.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     DCompositionIsVailContainer @ 0x1C01D44F8 (DCompositionIsVailContainer.c)
 *     DirectComposition::TryOpenSharedSectionAndGetUserModeHandle @ 0x1C01EB700 (DirectComposition--TryOpenSharedSectionAndGetUserModeHandle.c)
 */

__int64 __fastcall DirectComposition::CCrossContainerHostReadOnlySharedSectionMarshaler::CreateDwmHandle(
        DirectComposition::CCrossContainerHostReadOnlySharedSectionMarshaler *this)
{
  __int64 UserModeHandle; // rbx
  struct _KPROCESS *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // r8d
  struct _KPROCESS *v8; // rdi
  struct _KAPC_STATE ApcState; // [rsp+20h] [rbp-48h] BYREF

  UserModeHandle = 0LL;
  if ( (unsigned int)DCompositionIsVailContainer() )
    return 0LL;
  GreLockDwmState();
  v4 = (struct _KPROCESS *)ReferenceDwmProcess();
  v8 = v4;
  if ( v4 )
  {
    memset(&ApcState, 0, sizeof(ApcState));
    KeStackAttachProcess(v4, &ApcState);
    UserModeHandle = DirectComposition::TryOpenSharedSectionAndGetUserModeHandle(
                       (char *)this + 72,
                       (char *)this + 88,
                       (char *)this + 56);
    KeUnstackDetachProcess(&ApcState);
    ObfDereferenceObject(v8);
  }
  GreUnlockDwmState(v6, v5, v7);
  return UserModeHandle;
}
