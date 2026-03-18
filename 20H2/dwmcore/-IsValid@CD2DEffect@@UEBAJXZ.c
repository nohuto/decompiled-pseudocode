/*
 * XREFs of ?IsValid@CD2DEffect@@UEBAJXZ @ 0x1802485B8
 * Callers:
 *     ?IsValid@CD2DEffect@@$4PPPPPPPM@A@EBAJXZ @ 0x1800F19B0 (-IsValid@CD2DEffect@@$4PPPPPPPM@A@EBAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DEffect::IsValid(CD2DEffect *this)
{
  char *v1; // rcx

  if ( !*((_QWORD *)this - 4) )
    return 2291674892LL;
  v1 = (char *)this + *(int *)(*((_QWORD *)this - 12) + 8LL) - 96;
  return *(unsigned int *)((*(__int64 (__fastcall **)(char *))(*(_QWORD *)v1 + 8LL))(v1) + 1128);
}
