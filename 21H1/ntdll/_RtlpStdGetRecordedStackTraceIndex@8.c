/*
 * XREFs of _RtlpStdGetRecordedStackTraceIndex@8 @ 0x4B36936F
 * Callers:
 *     _RtlLogStackBackTraceEx@4 @ 0x4B2DFD89 (_RtlLogStackBackTraceEx@4.c)
 * Callees:
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _RtlpStdExtendUpperWatermark@8 @ 0x4B3692D9 (_RtlpStdExtendUpperWatermark@8.c)
 */

int __fastcall RtlpStdGetRecordedStackTraceIndex(PRTL_SRWLOCK SRWLock, unsigned __int16 *a2)
{
  signed int v3; // esi
  unsigned int v5; // ecx
  int v6; // eax
  _DWORD *v7; // edx
  _RTL_SRWLOCK *v8; // eax
  _DWORD *v9; // eax
  _RTL_SRWLOCK *v11; // [esp+Ch] [ebp-4h]

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
  v8 = &SRWLock[2 * (v5 % SRWLock[94].Value)];
  v11 = v8;
  if ( !byte_4B3A5DA8 )
    RtlAcquireSRWLockExclusive(v8 + 96);
  if ( *(_DWORD *)(a2 + 3) )
  {
    v3 = a2[4] + (a2[3] << 16);
  }
  else
  {
    v9 = (_DWORD *)RtlpStdExtendUpperWatermark(SRWLock);
    if ( v9 )
    {
      *v9 = a2;
      v3 = (signed int)(SRWLock[25].Value - (int)v9) >> 2;
      a2[4] = v3;
      a2[3] = HIWORD(v3);
    }
  }
  if ( !byte_4B3A5DA8 )
    RtlReleaseSRWLockExclusive(v11 + 96);
  return v3;
}
