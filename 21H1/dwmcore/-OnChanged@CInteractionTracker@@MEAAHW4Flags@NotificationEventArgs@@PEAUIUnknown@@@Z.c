/*
 * XREFs of ?OnChanged@CInteractionTracker@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1801CDF40
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ?CheckAndUnRegisterDefaultAnimations@CInteractionTracker@@AEAA_NPEAUIUnknown@@@Z @ 0x1801CC7FC (-CheckAndUnRegisterDefaultAnimations@CInteractionTracker@@AEAA_NPEAUIUnknown@@@Z.c)
 *     ?CheckForIdle@CInteractionTracker@@AEAAXXZ @ 0x1801CC884 (-CheckForIdle@CInteractionTracker@@AEAAXXZ.c)
 *     ?StopCustomAnimation@CInteractionTracker@@AEAAXH_N@Z @ 0x1801D0C54 (-StopCustomAnimation@CInteractionTracker@@AEAAXH_N@Z.c)
 *     ?OnManipulationChanged@InteractionSourceManager@@QEAAXW4Flags@NotificationEventArgs@@PEAVCManipulation@@@Z @ 0x1802156D8 (-OnManipulationChanged@InteractionSourceManager@@QEAAXW4Flags@NotificationEventArgs@@PEAVCManipu.c)
 */

__int64 __fastcall CInteractionTracker::OnChanged(__int64 a1, int a2, struct IUnknown *a3)
{
  struct IUnknownVtbl *lpVtbl; // rax
  int v7; // edx
  __int64 *i; // rax
  __int64 v9; // rcx
  __int64 v10; // [rsp+48h] [rbp+20h] BYREF

  if ( a2 == 7 )
  {
LABEL_7:
    lpVtbl = a3->lpVtbl;
    v10 = 0LL;
    ((void (__fastcall *)(struct IUnknown *, GUID *, __int64 *))lpVtbl->QueryInterface)(
      a3,
      &GUID_c3c5a1de_4dff_4600_9562_70179f475db1,
      &v10);
    InteractionSourceManager::OnManipulationChanged(a1 + 192, (unsigned int)a2, (v10 - 64) & -(__int64)(v10 != 0));
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    return 1LL;
  }
  if ( a2 <= 7 )
    return 1LL;
  if ( a2 > 9 )
  {
    if ( a2 != 10 && (a2 <= 11 || a2 > 13) )
      return 1LL;
    goto LABEL_7;
  }
  if ( a3 )
  {
    v7 = 0;
    for ( i = (__int64 *)(a1 + 344); ; ++i )
    {
      v9 = *i;
      if ( *i )
      {
        if ( *(_QWORD *)(v9 + 16) && *(struct IUnknown **)(v9 + 16) == a3 )
          break;
      }
      if ( (unsigned int)++v7 >= 2 )
      {
        if ( CInteractionTracker::CheckAndUnRegisterDefaultAnimations((CInteractionTracker *)a1, a3) )
          *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 272LL) + 416LL) |= 2u;
        return 1LL;
      }
    }
    CInteractionTracker::StopCustomAnimation((CInteractionTracker *)a1, v7, 0);
    if ( *(_DWORD *)(a1 + 168) == 3 )
      CInteractionTracker::CheckForIdle((CInteractionTracker *)a1);
  }
  return 1LL;
}
