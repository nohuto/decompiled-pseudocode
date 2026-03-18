/*
 * XREFs of ?IsValid@CD2DCommandList@@UEBAJXZ @ 0x1802499B0
 * Callers:
 *     ?IsValid@CD2DCommandList@@$4PPPPPPPM@A@EBAJXZ @ 0x1800F1DD0 (-IsValid@CD2DCommandList@@$4PPPPPPPM@A@EBAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DCommandList::IsValid(CD2DCommandList *this)
{
  char *v1; // rcx

  v1 = (char *)this + *(int *)(*((_QWORD *)this - 14) + 8LL) - 112;
  return *(unsigned int *)((*(__int64 (__fastcall **)(char *))(*(_QWORD *)v1 + 8LL))(v1) + 1128);
}
