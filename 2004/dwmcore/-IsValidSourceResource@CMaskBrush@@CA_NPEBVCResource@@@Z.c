/*
 * XREFs of ?IsValidSourceResource@CMaskBrush@@CA_NPEBVCResource@@@Z @ 0x1800C8A84
 * Callers:
 *     ?ProcessSetSource@CMaskBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_MASKBRUSH_SETSOURCE@@@Z @ 0x1800C89EC (-ProcessSetSource@CMaskBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_MASKBRUSH_SETSOURCE@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CMaskBrush::IsValidSourceResource(const struct CResource *a1)
{
  char v2; // bl

  v2 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(const struct CResource *, __int64))(*(_QWORD *)a1 + 56LL))(a1, 20LL)
    || (*(unsigned __int8 (__fastcall **)(const struct CResource *, __int64))(*(_QWORD *)a1 + 56LL))(a1, 180LL)
    || (*(unsigned __int8 (__fastcall **)(const struct CResource *, __int64))(*(_QWORD *)a1 + 56LL))(a1, 69LL)
    || (*(unsigned __int8 (__fastcall **)(const struct CResource *, __int64))(*(_QWORD *)a1 + 56LL))(a1, 55LL)
    || (*(unsigned __int8 (__fastcall **)(const struct CResource *, __int64))(*(_QWORD *)a1 + 56LL))(a1, 111LL) )
  {
    return 1;
  }
  return v2;
}
