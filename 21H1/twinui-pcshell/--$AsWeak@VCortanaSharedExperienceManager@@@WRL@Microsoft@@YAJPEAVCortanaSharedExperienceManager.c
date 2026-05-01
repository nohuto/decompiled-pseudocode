/*
 * XREFs of ??$AsWeak@VCortanaSharedExperienceManager@@@WRL@Microsoft@@YAJPEAVCortanaSharedExperienceManager@@PEAVWeakRef@01@@Z @ 0x180192138
 * Callers:
 *     ??$RuntimeClassInitialize@VCortanaSharedExperienceManager@@@IImmersiveWindowMessageNotificationHandler@Shell@Internal@Windows@@QEAAJPEAVCortanaSharedExperienceManager@@P84@EAAJI_K_J@Z@Z @ 0x180193004 (--$RuntimeClassInitialize@VCortanaSharedExperienceManager@@@IImmersiveWindowMessageNotificationH.c)
 *     ??$RuntimeClassInitialize@VSearchAppExperienceManager@@@IImmersiveWindowMessageNotificationHandler@Shell@Internal@Windows@@QEAAJPEAVSearchAppExperienceManager@@P84@EAAJI_K_J@Z@Z @ 0x1801D21F8 (--$RuntimeClassInitialize@VSearchAppExperienceManager@@@IImmersiveWindowMessageNotificationHandl.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18003C4F0 (InlineIsEqualGUID.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakReferenceSource@@UIClosable@Foundation@Windows@@UIInitializeTrustedComponentForegroundControl@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1801940C8 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakRefe_ea_1801940C8.c)
 */

__int64 __fastcall Microsoft::WRL::AsWeak<CortanaSharedExperienceManager>(__int64 a1, __int64 *a2)
{
  _DWORD *v4; // rcx
  _DWORD *v5; // rcx
  __int64 v6; // r9
  int v7; // edi
  int CanCastTo; // eax
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rdi
  __int64 v12; // rcx
  __int64 v14; // [rsp+40h] [rbp+18h] BYREF

  v14 = 0LL;
  if ( InlineIsEqualGUID(&GUID_00000038_0000_0000_c000_000000000046, &GUID_00000000_0000_0000_c000_000000000046)
    || InlineIsEqualGUID(v4, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
    v7 = 0;
  }
  else
  {
    if ( InlineIsEqualGUID(v5, &GUID_3b810852_511f_4404_89ae_347bc2e8b561) )
    {
      v7 = 0;
    }
    else
    {
      CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,Windows::Foundation::IClosable,IInitializeTrustedComponentForegroundControl>::CanCastTo(
                    a1 + 8,
                    v6);
      a1 = v14;
      v7 = CanCastTo;
      if ( CanCastTo < 0 )
        goto LABEL_8;
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  }
LABEL_8:
  if ( v7 >= 0 )
  {
    v14 = 0LL;
    v9 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a1 + 24LL))(a1, &v14);
    v10 = v14;
    v7 = v9;
    if ( v9 >= 0 )
    {
      v11 = v14;
      if ( v14 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
        v10 = v14;
      }
      v12 = *a2;
      *a2 = v11;
      if ( v12 )
      {
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v12 + 16LL))(v12, v10);
        v10 = v14;
      }
      v7 = 0;
    }
    if ( v10 )
    {
      v14 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
  }
  if ( a1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
  return (unsigned int)v7;
}
