/*
 * XREFs of ?IsValid@CD2DCommandList@@UEBAJXZ @ 0x18024C440
 * Callers:
 *     ?IsValid@CD2DCommandList@@$4PPPPPPPM@A@EBAJXZ @ 0x1800EEE40 (-IsValid@CD2DCommandList@@$4PPPPPPPM@A@EBAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DCommandList::IsValid(CD2DCommandList *this)
{
  char *v1; // rcx

  v1 = (char *)this + *(int *)(*((_QWORD *)this - 14) + 8LL) - 112;
  return *(unsigned int *)((*(__int64 (__fastcall **)(char *))(*(_QWORD *)v1 + 8LL))(v1) + 1128);
}
