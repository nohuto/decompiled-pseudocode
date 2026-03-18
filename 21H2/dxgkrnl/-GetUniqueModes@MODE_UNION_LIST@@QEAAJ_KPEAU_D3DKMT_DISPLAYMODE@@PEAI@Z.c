/*
 * XREFs of ?GetUniqueModes@MODE_UNION_LIST@@QEAAJ_KPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z @ 0x1C01D311C
 * Callers:
 *     ??ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI01@Z @ 0x1C01875D0 (--ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI01@Z.c)
 *     ??ROBTAIN_PREFERRED_MODES_ON_PATH@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z @ 0x1C02F50F4 (--ROBTAIN_PREFERRED_MODES_ON_PATH@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ??1COUNT_TICKS_IN_SCOPE@DXGGLOBAL@@QEAA@XZ @ 0x1C00194CC (--1COUNT_TICKS_IN_SCOPE@DXGGLOBAL@@QEAA@XZ.c)
 *     ??0COUNT_TICKS_IN_SCOPE@DXGGLOBAL@@QEAA@PEAT_LARGE_INTEGER@@@Z @ 0x1C0019520 (--0COUNT_TICKS_IN_SCOPE@DXGGLOBAL@@QEAA@PEAT_LARGE_INTEGER@@@Z.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 */

__int64 __fastcall MODE_UNION_LIST::GetUniqueModes(
        const void **this,
        unsigned __int64 a2,
        struct _D3DKMT_DISPLAYMODE *a3,
        unsigned int *a4)
{
  union _LARGE_INTEGER *Global; // rax
  unsigned __int64 v9; // rax
  unsigned int v10; // esi
  _BYTE v12[16]; // [rsp+50h] [rbp-18h] BYREF

  Global = (union _LARGE_INTEGER *)DXGGLOBAL_GetGlobal();
  DXGGLOBAL::COUNT_TICKS_IN_SCOPE::COUNT_TICKS_IN_SCOPE((DXGGLOBAL::COUNT_TICKS_IN_SCOPE *)v12, Global + 18);
  DXGGLOBAL::COUNT_TICKS_IN_SCOPE::~COUNT_TICKS_IN_SCOPE((DXGGLOBAL::COUNT_TICKS_IN_SCOPE *)v12);
  _InterlockedIncrement((volatile signed __int32 *)DXGGLOBAL_GetGlobal() + 21);
  v9 = *((unsigned int *)this + 4);
  if ( a2 < v9 )
    LODWORD(v9) = a2;
  v10 = v9;
  memmove(a3, this[1], 44LL * (unsigned int)v9);
  if ( a2 < *((unsigned int *)this + 4) )
  {
    WdLogSingleEntry1(2LL, 2358LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"DDI-VIOLATION: Miniport reported more functional VidPN modalities than in the previous mode enumeration p"
                "erformed under the same shared adapter access!",
      2358LL,
      0LL,
      0LL,
      0LL,
      0LL);
    WdLogSingleEntry1(3LL, a2);
    return 3221225507LL;
  }
  else
  {
    *a4 = v10;
    _InterlockedExchangeAdd64((volatile signed __int64 *)DXGGLOBAL_GetGlobal() + 9, v10);
    return 0LL;
  }
}
