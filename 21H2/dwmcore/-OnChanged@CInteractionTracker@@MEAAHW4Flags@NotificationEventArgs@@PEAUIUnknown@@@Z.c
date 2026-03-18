/*
 * XREFs of ?OnChanged@CInteractionTracker@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18021B850
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001EB80 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CheckAndUnRegisterDefaultAnimations@CInteractionTracker@@AEAA_NPEAUIUnknown@@@Z @ 0x180219DA0 (-CheckAndUnRegisterDefaultAnimations@CInteractionTracker@@AEAA_NPEAUIUnknown@@@Z.c)
 *     ?CheckForIdle@CInteractionTracker@@AEAAXXZ @ 0x180219E28 (-CheckForIdle@CInteractionTracker@@AEAAXXZ.c)
 *     ?StopCustomAnimation@CInteractionTracker@@AEAAXH_N@Z @ 0x18021E010 (-StopCustomAnimation@CInteractionTracker@@AEAAXH_N@Z.c)
 *     ?OnManipulationChanged@InteractionSourceManager@@QEAAXW4Flags@NotificationEventArgs@@PEAVCManipulation@@@Z @ 0x180264A24 (-OnManipulationChanged@InteractionSourceManager@@QEAAXW4Flags@NotificationEventArgs@@PEAVCManipu.c)
 */

__int64 __fastcall CInteractionTracker::OnChanged(__int64 a1, int a2, struct IUnknown *a3)
{
  int v6; // edx
  __int64 *i; // rax
  __int64 v8; // rcx
  __int64 v9; // [rsp+48h] [rbp+20h] BYREF

  if ( a2 == 7 )
    goto LABEL_7;
  if ( a2 > 7 )
  {
    if ( a2 <= 9 )
    {
      if ( a3 )
      {
        v6 = 0;
        for ( i = (__int64 *)(a1 + 352); ; ++i )
        {
          v8 = *i;
          if ( *i )
          {
            if ( *(_QWORD *)(v8 + 16) && *(struct IUnknown **)(v8 + 16) == a3 )
              break;
          }
          if ( (unsigned int)++v6 >= 2 )
          {
            if ( CInteractionTracker::CheckAndUnRegisterDefaultAnimations((CInteractionTracker *)a1, a3) )
              *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 424LL) + 448LL) |= 2u;
            return 1LL;
          }
        }
        CInteractionTracker::StopCustomAnimation((CInteractionTracker *)a1, v6, 0);
        if ( *(_DWORD *)(a1 + 176) == 3 )
          CInteractionTracker::CheckForIdle((CInteractionTracker *)a1);
      }
    }
    else if ( a2 == 10 || a2 > 11 && a2 <= 13 )
    {
LABEL_7:
      v9 = 0LL;
      ((void (__fastcall *)(struct IUnknown *, GUID *, __int64 *))a3->lpVtbl->QueryInterface)(
        a3,
        &GUID_c3c5a1de_4dff_4600_9562_70179f475db1,
        &v9);
      InteractionSourceManager::OnManipulationChanged(a1 + 200, (unsigned int)a2, (v9 - 72) & -(__int64)(v9 != 0));
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v9);
    }
  }
  return 1LL;
}
