/*
 * XREFs of _RtlpStdGetRecordedStackTraceIndex@8 @ 0x4B36936F
 * Callers:
 *     _RtlLogStackBackTraceEx@4 @ 0x4B2DFD89 (_RtlLogStackBackTraceEx@4.c)
 * Callees:
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _RtlpStdExtendUpperWatermark@8 @ 0x4B3692D9 (_RtlpStdExtendUpperWatermark@8.c)
 */

int __fastcall RtlpStdGetRecordedStackTraceIndex(int a1, unsigned __int16 *a2)
{
  int v3; // esi
  unsigned int v5; // ecx
  int v6; // eax
  _DWORD *v7; // edx
  int v8; // eax
  unsigned __int16 **v9; // eax
  int v11; // [esp+Ch] [ebp-4h]

  v3 = 0;
  v5 = 0;
  v6 = a2[5];
  if ( a2[5] )
  {
    v7 = a2 + 6;
    do
    {
      v5 += *v7++;
      --v6;
    }
    while ( v6 );
  }
  v8 = a1 + 8 * (v5 % *(_DWORD *)(a1 + 376));
  v11 = v8;
  if ( !byte_4B3A5DA8 )
    RtlAcquireSRWLockExclusive((volatile signed __int32 *)(v8 + 384));
  if ( *(_DWORD *)(a2 + 3) )
  {
    v3 = a2[4] + (a2[3] << 16);
  }
  else
  {
    v9 = (unsigned __int16 **)RtlpStdExtendUpperWatermark(a1);
    if ( v9 )
    {
      *v9 = a2;
      v3 = (*(_DWORD *)(a1 + 100) - (int)v9) >> 2;
      a2[4] = v3;
      a2[3] = HIWORD(v3);
    }
  }
  if ( !byte_4B3A5DA8 )
    RtlReleaseSRWLockExclusive((volatile signed __int32 *)(v11 + 384));
  return v3;
}
