/*
 * XREFs of DpGetPostDisplayInfoPlusEdid @ 0x1C02C5AF0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C0027200 (memmove.c)
 *     DpiAcquirePostDisplayOwnership @ 0x1C02C727C (DpiAcquirePostDisplayOwnership.c)
 */

__int64 __fastcall DpGetPostDisplayInfoPlusEdid(__int64 a1, __int64 a2)
{
  int v3; // ebx
  __int64 v4; // rax

  if ( a1 && a2 )
  {
    v3 = DpiAcquirePostDisplayOwnership(a1, a2, 0LL);
    if ( v3 >= 0 )
      memmove((void *)(a2 + 32), &xmmword_1C00B1DE8, 0x80uLL);
  }
  else
  {
    v3 = -1073741811;
    v4 = WdLogNewEntry5_WdError(a1, a2);
    *(_QWORD *)(v4 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v4);
  }
  return (unsigned int)v3;
}
