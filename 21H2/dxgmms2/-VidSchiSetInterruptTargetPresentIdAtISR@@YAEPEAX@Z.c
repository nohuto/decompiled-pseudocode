/*
 * XREFs of ?VidSchiSetInterruptTargetPresentIdAtISR@@YAEPEAX@Z @ 0x1C0046100
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 */

unsigned __int8 __fastcall VidSchiSetInterruptTargetPresentIdAtISR(_DWORD *a1)
{
  a1[6] = ((__int64 (__fastcall *)(_QWORD, _DWORD *))DxgCoreInterface[64])(
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 16LL) + 2792LL),
            a1 + 2);
  return 1;
}
