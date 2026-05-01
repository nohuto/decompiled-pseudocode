/*
 * XREFs of ??$MakeAndInitialize@VTaskFlowImmersiveShellBroker@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x18020B180
 * Callers:
 *     ?CreateInstance@?$SimpleClassFactory@VTaskFlowImmersiveShellBroker@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x18020E270 (-CreateInstance@-$SimpleClassFactory@VTaskFlowImmersiveShellBroker@@$0A@@WRL@Microsoft@@UEAAJPEA.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008CA20 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ??0TaskFlowImmersiveShellBroker@@QEAA@XZ @ 0x18020C774 (--0TaskFlowImmersiveShellBroker@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@TaskFlowImmersiveShellBroker@@QEAAJXZ @ 0x18021234C (-RuntimeClassInitialize@TaskFlowImmersiveShellBroker@@QEAAJXZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<TaskFlowImmersiveShellBroker,IUnknown,>(_QWORD *a1)
{
  TaskFlowImmersiveShellBroker *v2; // rax
  int v3; // edi
  TaskFlowImmersiveShellBroker *v4; // rbx

  *a1 = 0LL;
  v2 = (TaskFlowImmersiveShellBroker *)operator new(0x148uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
  {
    v4 = TaskFlowImmersiveShellBroker::TaskFlowImmersiveShellBroker(v2);
    v3 = TaskFlowImmersiveShellBroker::RuntimeClassInitialize(v4);
    if ( v3 >= 0 )
      v3 = (**(__int64 (__fastcall ***)(TaskFlowImmersiveShellBroker *, GUID *, _QWORD *))v4)(
             v4,
             &GUID_00000000_0000_0000_c000_000000000046,
             a1);
    if ( v4 )
      (*(void (__fastcall **)(TaskFlowImmersiveShellBroker *))(*(_QWORD *)v4 + 16LL))(v4);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v3;
}
