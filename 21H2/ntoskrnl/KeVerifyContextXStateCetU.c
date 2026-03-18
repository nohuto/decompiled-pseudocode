/*
 * XREFs of KeVerifyContextXStateCetU @ 0x140298378
 * Callers:
 *     KiContinuePreviousModeUser @ 0x140298420 (KiContinuePreviousModeUser.c)
 *     KyRaiseException @ 0x140576820 (KyRaiseException.c)
 *     PspGetSetContextInternal @ 0x1407035C0 (PspGetSetContextInternal.c)
 * Callees:
 *     RtlLocateExtendedFeature2 @ 0x14025CB30 (RtlLocateExtendedFeature2.c)
 *     KiVerifyContextXStateCetUEnabled @ 0x14056E34C (KiVerifyContextXStateCetUEnabled.c)
 */

__int64 __fastcall KeVerifyContextXStateCetU(__int64 a1, _DWORD *a2, unsigned __int64 *a3)
{
  __int64 result; // rax
  char *ExtendedFeature2; // r8
  __int64 v8; // r10
  unsigned __int64 v9; // rax
  __int64 v10; // r9

  if ( (a2[12] & 0x100040) != 0x100040 )
    return 0LL;
  ExtendedFeature2 = RtlLocateExtendedFeature2(a2 + 308, 0xBu, 0xFFFFF780000003D8uLL, 0LL);
  if ( !ExtendedFeature2 )
    return 0LL;
  v8 = (int)a2[312];
  v9 = __readmsr(0x6A7u);
  *a3 = v9;
  v10 = *(_QWORD *)((_BYTE *)a2 + v8 + 1232) & 0x800LL;
  if ( (*(_DWORD *)(a1 + 116) & 0x100000) != 0 )
  {
    if ( !v10 )
    {
      *(_QWORD *)((char *)a2 + v8 + 1232) |= 0x800uLL;
      *(_QWORD *)ExtendedFeature2 = 1LL;
      *((_QWORD *)ExtendedFeature2 + 1) = v9;
      return 0LL;
    }
    result = KiVerifyContextXStateCetUEnabled(ExtendedFeature2, v9);
    if ( (int)result >= 0 )
      return 0LL;
  }
  else
  {
    if ( !v10 || !*(_QWORD *)ExtendedFeature2 && !*((_QWORD *)ExtendedFeature2 + 1) )
      return 0LL;
    return 3221227018LL;
  }
  return result;
}
