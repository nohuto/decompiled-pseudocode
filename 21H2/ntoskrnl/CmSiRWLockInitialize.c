/*
 * XREFs of CmSiRWLockInitialize @ 0x1407F3B30
 * Callers:
 *     RtlpHpHeapCreate @ 0x14036F620 (RtlpHpHeapCreate.c)
 *     RtlHpHeapManagerInitialize @ 0x14036FB38 (RtlHpHeapManagerInitialize.c)
 *     ?SlotAllocate@?$RTL_BINARY_ARRAY@URTLP_FLS_CALLBACK_ENTRY@@$03$03@@SAKPEAU1@@Z @ 0x1403D69E8 (-SlotAllocate@-$RTL_BINARY_ARRAY@URTLP_FLS_CALLBACK_ENTRY@@$03$03@@SAKPEAU1@@Z.c)
 *     PspInitPhase0 @ 0x140AFD7A4 (PspInitPhase0.c)
 *     SshpSessionManagerInitialize @ 0x140B01B6C (SshpSessionManagerInitialize.c)
 *     SshInitialize @ 0x140B03360 (SshInitialize.c)
 *     CmFcManagerInitialize @ 0x140B15B24 (CmFcManagerInitialize.c)
 *     DbgkpInitializePhase0 @ 0x140B23400 (DbgkpInitializePhase0.c)
 *     SshpAlpcInitialize @ 0x140B2984C (SshpAlpcInitialize.c)
 * Callees:
 *     <none>
 */

void __stdcall CmSiRWLockInitialize(PRTL_RUN_ONCE RunOnce)
{
  RunOnce->Value = 0LL;
}
