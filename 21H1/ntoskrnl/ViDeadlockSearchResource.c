/*
 * XREFs of ViDeadlockSearchResource @ 0x1409DCCC0
 * Callers:
 *     VfDeadlockAcquireResource @ 0x1409DA558 (VfDeadlockAcquireResource.c)
 *     VfDeadlockReleaseResource @ 0x1409DB2C8 (VfDeadlockReleaseResource.c)
 *     ViDeadlockAddResource @ 0x1409DB7C8 (ViDeadlockAddResource.c)
 * Callees:
 *     VfUtilAddressRangeFit @ 0x1409C32DC (VfUtilAddressRangeFit.c)
 *     ViDeadlockTrimResources @ 0x1409DCE48 (ViDeadlockTrimResources.c)
 */

_QWORD *__fastcall ViDeadlockSearchResource(unsigned __int64 a1)
{
  unsigned __int64 v2; // rcx
  _QWORD **v3; // rbx
  __int64 v4; // r10
  _QWORD *i; // rax

  v2 = (a1 >> 12) % 0x3FF;
  v3 = (_QWORD **)(*((_QWORD *)ViDeadlockGlobals + 2) + 16 * v2);
  if ( *v3 != v3 && (unsigned int)VfUtilAddressRangeFit((unsigned __int64 *)ViDeadlockGlobals + 2 * v2 + 4, a1, a1 + 1) )
  {
    ViDeadlockTrimResources(v3, v4);
    for ( i = *v3; i != v3; i = (_QWORD *)*i )
    {
      if ( *(i - 4) == a1 )
        return i - 5;
    }
  }
  return 0LL;
}
