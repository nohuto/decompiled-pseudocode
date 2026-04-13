/*
 * XREFs of ?ActivateInstance@?$SimpleActivationFactory@VTargetedContentTriggerStateTransitionImpl@Internal@TargetedContent@Services@Windows@@$0A@@WRL@Microsoft@@UEAAJPEAPEAUIInspectable@@@Z @ 0x180025930
 * Callers:
 *     <none>
 * Callees:
 *     ??0TargetedContentTriggerStateTransitionImpl@Internal@TargetedContent@Services@Windows@@QEAA@XZ @ 0x180026398 (--0TargetedContentTriggerStateTransitionImpl@Internal@TargetedContent@Services@Windows@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800CB364 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::SimpleActivationFactory<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransitionImpl,0>::ActivateInstance(
        __int64 a1,
        _QWORD *a2)
{
  Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransitionImpl *v3; // rax
  unsigned int v4; // edi
  __int64 v5; // rbx

  *a2 = 0LL;
  v3 = (Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransitionImpl *)operator new(
                                                                                                    0x50uLL,
                                                                                                    (const struct std::nothrow_t *)&std::nothrow);
  if ( v3 )
  {
    v5 = Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransitionImpl::TargetedContentTriggerStateTransitionImpl(v3);
    v4 = (**(__int64 (__fastcall ***)(__int64, GUID *, _QWORD *))v5)(v5, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90, a2);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v4;
}
