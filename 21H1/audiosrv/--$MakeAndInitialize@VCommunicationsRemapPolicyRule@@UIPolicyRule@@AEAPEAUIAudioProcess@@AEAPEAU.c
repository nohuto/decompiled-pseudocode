/*
 * XREFs of ??$MakeAndInitialize@VCommunicationsRemapPolicyRule@@UIPolicyRule@@AEAPEAUIAudioProcess@@AEAPEAU_DynamicRoutingRule@@@Details@WRL@Microsoft@@YAJPEAPEAUIPolicyRule@@AEAPEAUIAudioProcess@@AEAPEAU_DynamicRoutingRule@@@Z @ 0x1801112CC
 * Callers:
 *     ?AddRule@DynamicAudioEndpointManager@@QEAAJPEAUIAudioProcess@@PEAU_DynamicRoutingRule@@PEA_J@Z @ 0x180111D6C (-AddRule@DynamicAudioEndpointManager@@QEAAJPEAUIAudioProcess@@PEAU_DynamicRoutingRule@@PEA_J@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006AB9C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 *     ??0PolicyRule@@QEAA@XZ @ 0x1801119D8 (--0PolicyRule@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CommunicationsRemapPolicyRule,IPolicyRule,IAudioProcess * &,_DynamicRoutingRule * &>(
        _QWORD *a1,
        struct IAudioProcess **a2,
        struct _DynamicRoutingRule **a3)
{
  PolicyRule *v6; // rax
  PolicyRule *v7; // rbx
  int v8; // edi

  *a1 = 0LL;
  v6 = (PolicyRule *)operator new(0x160uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v6;
  if ( v6 )
  {
    PolicyRule::PolicyRule(v6);
    *(_QWORD *)v7 = &CommunicationsRemapPolicyRule::`vftable';
    *((_BYTE *)v7 + 344) = 0;
    v8 = CommunicationsRemapPolicyRule::RuntimeClassInitialize(v7, *a2, *a3);
    if ( v8 >= 0 )
      v8 = (**(__int64 (__fastcall ***)(PolicyRule *, GUID *, _QWORD *))v7)(
             v7,
             &GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3,
             a1);
    (*(void (__fastcall **)(PolicyRule *))(*(_QWORD *)v7 + 16LL))(v7);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v8;
}
