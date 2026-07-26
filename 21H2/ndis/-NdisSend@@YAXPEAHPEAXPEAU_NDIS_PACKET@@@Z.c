/*
 * XREFs of ?NdisSend@@YAXPEAHPEAXPEAU_NDIS_PACKET@@@Z @ 0x1C006AF90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00400D0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall NdisSend(int *a1, __int64 (__fastcall **a2)(_QWORD, _QWORD), struct _NDIS_PACKET *a3)
{
  *a1 = ((__int64 (__fastcall **)(_QWORD, struct _NDIS_PACKET *))a2)[12](a2, a3);
}
