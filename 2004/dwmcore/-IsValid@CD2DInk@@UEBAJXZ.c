/*
 * XREFs of ?IsValid@CD2DInk@@UEBAJXZ @ 0x18024B2B8
 * Callers:
 *     ?IsValid@CD2DInk@@$4PPPPPPPM@A@EBAJXZ @ 0x1800F1E40 (-IsValid@CD2DInk@@$4PPPPPPPM@A@EBAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DInk::IsValid(CD2DInk *this)
{
  char *v1; // rcx

  if ( !*((_QWORD *)this - 5) )
    return 2291674892LL;
  v1 = (char *)this + *(int *)(*((_QWORD *)this - 13) + 8LL) - 104;
  return *(unsigned int *)((*(__int64 (__fastcall **)(char *))(*(_QWORD *)v1 + 8LL))(v1) + 1128);
}
