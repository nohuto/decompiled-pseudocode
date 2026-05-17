/*
 * XREFs of _RtlGetCallersAddress@8 @ 0x4B3503F0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlCaptureStackBackTrace@16 @ 0x4B2DBFD0 (_RtlCaptureStackBackTrace@16.c)
 */

__int16 __stdcall RtlGetCallersAddress(_DWORD *a1, _DWORD *a2)
{
  PVOID v2; // eax
  unsigned __int16 v3; // dx
  PVOID BackTrace[2]; // [esp+4h] [ebp-8h] BYREF

  LOWORD(v2) = RtlCaptureStackBackTrace(2u, 2u, BackTrace, 0);
  v3 = (unsigned __int16)v2;
  if ( a1 )
  {
    v2 = (unsigned __int16)v2 != 0 ? BackTrace[0] : 0;
    *a1 = v2;
  }
  if ( a2 )
  {
    v2 = v3 >= 2u ? BackTrace[1] : 0;
    *a2 = v2;
  }
  return (__int16)v2;
}
