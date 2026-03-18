/*
 * XREFs of ??$SAFE_DELETE@VCShape@@@@YAXAEAPEAVCShape@@@Z @ 0x180040948
 * Callers:
 *     ?GetWindowClipShape@CWindowNode@@AEBAJPEAVCShapePtr@@@Z @ 0x180040760 (-GetWindowClipShape@CWindowNode@@AEBAJPEAVCShapePtr@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SAFE_DELETE<CShape>(__int64 (__fastcall ****a1)(_QWORD, __int64))
{
  __int64 (__fastcall ***v2)(_QWORD, __int64); // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
  {
    result = (**v2)(v2, 1LL);
    *a1 = 0LL;
  }
  return result;
}
