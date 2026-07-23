/*
 * XREFs of CcRecalculateVacbArrayHighwaterMark @ 0x1404EB428
 * Callers:
 *     CcGetRandomVacbArrayWithReference @ 0x1404EB388 (CcGetRandomVacbArrayWithReference.c)
 *     CcUnmapInactiveViewsInternal @ 0x1404EB784 (CcUnmapInactiveViewsInternal.c)
 * Callees:
 *     <none>
 */

void __fastcall CcRecalculateVacbArrayHighwaterMark(__int64 a1)
{
  __int64 v1; // rdx

  LODWORD(v1) = *(_DWORD *)(a1 + 8) + 1;
  if ( *(_DWORD *)(a1 + 8) != -1 )
  {
    do
    {
      v1 = (unsigned int)(v1 - 1);
      if ( *(_QWORD *)(a1 + 40 * v1 + 24) )
        break;
      *(_DWORD *)(a1 + 8) = v1;
    }
    while ( (_DWORD)v1 );
  }
}
