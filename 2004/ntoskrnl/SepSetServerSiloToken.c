/*
 * XREFs of SepSetServerSiloToken @ 0x14091982C
 * Callers:
 *     SepCopyAnonymousTokenAndSetSilo @ 0x140919230 (SepCopyAnonymousTokenAndSetSilo.c)
 *     SepCopyClientTokenAndSetSilo @ 0x140919398 (SepCopyClientTokenAndSetSilo.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140208500 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x140208540 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x140208CF0 (ExAcquireResourceExclusiveLite.c)
 *     SepDeReferenceLogonSessionDirect @ 0x1402FED40 (SepDeReferenceLogonSessionDirect.c)
 *     SepReferenceLogonSessionSilo @ 0x14062F8A0 (SepReferenceLogonSessionSilo.c)
 *     SepAddTokenLogonSession @ 0x1409200E0 (SepAddTokenLogonSession.c)
 *     SepRemoveTokenLogonSession @ 0x1409205E0 (SepRemoveTokenLogonSession.c)
 */

__int64 __fastcall SepSetServerSiloToken(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  int v5; // edi
  signed __int32 v7[10]; // [rsp+0h] [rbp-28h] BYREF
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  v8 = 0LL;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a1 + 48), 1u);
  _InterlockedOr(v7, 0);
  if ( (*(_DWORD *)(a1 + 200) & 0x20) != 0 )
  {
    v5 = -1073741816;
  }
  else
  {
    v5 = SepReferenceLogonSessionSilo((_DWORD *)(a1 + 24), a2, &v8);
    if ( v5 < 0 )
      goto LABEL_10;
    if ( SeTokenLeakTracking )
      SepRemoveTokenLogonSession(a1);
    SepDeReferenceLogonSessionDirect(*(_QWORD **)(a1 + 216));
    *(_QWORD *)(a1 + 216) = v8;
    if ( SeTokenLeakTracking )
      SepAddTokenLogonSession(a1);
  }
  if ( v5 >= 0 )
    *(_QWORD *)(a1 + 56) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
LABEL_10:
  _InterlockedOr(v7, 0);
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
  KeLeaveCriticalRegion();
  return (unsigned int)v5;
}
