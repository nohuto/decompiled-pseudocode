/*
 * XREFs of ?IsAppActive@AppUsageTracker@@UEAA_NPEBG@Z @ 0x1804575D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?IsPackagedApp@AppLimits@FamilySafety@Internal@Windows@@YA_NPEBG@Z @ 0x180457654 (-IsPackagedApp@AppLimits@FamilySafety@Internal@Windows@@YA_NPEBG@Z.c)
 */

char __fastcall AppUsageTracker::IsAppActive(AppUsageTracker *this, Windows::Internal::FamilySafety::AppLimits *a2)
{
  char v4; // bl

  v4 = 0;
  if ( !Windows::Internal::FamilySafety::AppLimits::IsPackagedApp(a2, (const unsigned __int16 *)a2) )
    return (*(__int64 (__fastcall **)(_QWORD, Windows::Internal::FamilySafety::AppLimits *))(**((_QWORD **)this + 11)
                                                                                           + 48LL))(
             *((_QWORD *)this + 11),
             a2);
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD, Windows::Internal::FamilySafety::AppLimits *))(**((_QWORD **)this + 10)
                                                                                               + 48LL))(
         *((_QWORD *)this + 10),
         a2)
    || (*(unsigned __int8 (__fastcall **)(_QWORD, Windows::Internal::FamilySafety::AppLimits *))(**((_QWORD **)this + 11)
                                                                                               + 48LL))(
         *((_QWORD *)this + 11),
         a2) )
  {
    return 1;
  }
  return v4;
}
