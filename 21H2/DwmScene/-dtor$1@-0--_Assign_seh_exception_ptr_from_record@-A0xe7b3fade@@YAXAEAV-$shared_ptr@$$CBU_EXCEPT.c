/*
 * XREFs of ?dtor$1@?0??_Assign_seh_exception_ptr_from_record@?A0xe7b3fade@@YAXAEAV?$shared_ptr@$$CBU_EXCEPTION_RECORD@@@std@@AEBU_EXCEPTION_RECORD@@QEAX@Z@4HA @ 0x180125C2F
 * Callers:
 *     <none>
 * Callees:
 *     unknown_libname_98 @ 0x18000F360 (unknown_libname_98.c)
 */

void __fastcall ``anonymous namespace'::_Assign_seh_exception_ptr_from_record'::`1'::dtor$1(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 32) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    unknown_libname_98((_QWORD *)(a2 + 40));
  }
}
