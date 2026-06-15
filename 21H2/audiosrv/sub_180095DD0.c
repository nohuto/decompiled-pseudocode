/*
 * XREFs of sub_180095DD0 @ 0x180095DD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall sub_180095DD0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        LPCRITICAL_SECTION lpCriticalSection,
        LPCRITICAL_SECTION a7,
        __int64 a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        int a19,
        int a20,
        int a21,
        __int64 a22,
        __int64 a23,
        int a24)
{
  if ( a24 < 0 )
  {
    if ( a8 )
      LeaveCriticalSection(lpCriticalSection);
    if ( a7 )
      LeaveCriticalSection(a7);
    JUMPOUT(0x18002E019LL);
  }
  JUMPOUT(0x18002DDF3LL);
}
