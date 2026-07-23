/*
 * XREFs of _RtlTraceDatabaseDestroy@4 @ 0x4B36A2A0
 * Callers:
 *     <none>
 * Callees:
 *     _DbgPrint @ 0x4B2AB8D0 (_DbgPrint.c)
 *     _RtlDeleteCriticalSection@4 @ 0x4B2AFB90 (_RtlDeleteCriticalSection@4.c)
 *     _RtlpTraceDatabaseFree@8 @ 0x4B36A49D (_RtlpTraceDatabaseFree@8.c)
 */

bool __stdcall RtlTraceDatabaseDestroy(int a1)
{
  _DWORD *v1; // esi
  char v2; // bl
  _DWORD *v3; // edi

  RtlDeleteCriticalSection((PRTL_CRITICAL_SECTION)(a1 + 28));
  v1 = *(_DWORD **)(a1 + 12);
  if ( !v1 )
    return 1;
  v2 = 0;
  do
  {
    v3 = (_DWORD *)v1[2];
    if ( !v3 )
      v1 -= 34;
    if ( !(unsigned __int8)RtlpTraceDatabaseFree(v1) )
    {
      DbgPrint("Trace database: failed to release segment %p \n", v1);
      v2 = 1;
    }
    v1 = v3;
  }
  while ( v3 );
  return !v2;
}
