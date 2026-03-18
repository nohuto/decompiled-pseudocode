/*
 * XREFs of ?IsIncludedInOverdrawContentKinds@CContent@@AEAA_NW4FlagsEnum@MilHeatMapOverdrawContentKinds@@PEAVCDrawingContext@@@Z @ 0x1801ACE38
 * Callers:
 *     ?Draw@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180055DC0 (-Draw@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 * Callees:
 *     ?GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ @ 0x180047970 (-GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CContent::IsIncludedInOverdrawContentKinds(__int64 a1, int a2, _DWORD *a3)
{
  char v4; // bl
  struct CVisual *CurrentVisual; // rax
  bool result; // al

  v4 = a2;
  result = 1;
  if ( a2 != 0xFFFF
    && ((a2 & 2) == 0 || !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 56LL))(a1, 20LL))
    && ((v4 & 4) == 0 || !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 56LL))(a1, 55LL))
    && ((v4 & 8) == 0 || !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 56LL))(a1, 53LL))
    && ((v4 & 0x10) == 0 || a3[174] || !a3[156])
    && ((v4 & 0x20) == 0 || !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a1 + 248LL))(a1))
    && ((v4 & 0x40) == 0 || !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a1 + 256LL))(a1)) )
  {
    if ( (v4 & 1) == 0 )
      return 0;
    if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a1 + 264LL))(a1) )
    {
      if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 56LL))(a1, 55LL) )
        return 0;
      CurrentVisual = CDrawingContext::GetCurrentVisual((CDrawingContext *)(a3 + 6));
      if ( !(*(unsigned __int8 (__fastcall **)(struct CVisual *, __int64))(*(_QWORD *)CurrentVisual + 56LL))(
              CurrentVisual,
              91LL) )
        return 0;
    }
  }
  return result;
}
