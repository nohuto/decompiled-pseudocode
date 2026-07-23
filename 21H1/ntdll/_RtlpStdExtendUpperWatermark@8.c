/*
 * XREFs of _RtlpStdExtendUpperWatermark@8 @ 0x4B3692D9
 * Callers:
 *     _RtlpStdGetRecordedStackTraceIndex@8 @ 0x4B36936F (_RtlpStdGetRecordedStackTraceIndex@8.c)
 * Callees:
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _NtAllocateVirtualMemory@24 @ 0x4B2F2AE0 (_NtAllocateVirtualMemory@24.c)
 */

unsigned int __thiscall RtlpStdExtendUpperWatermark(PRTL_SRWLOCK SRWLock)
{
  unsigned int v1; // edi
  unsigned int Value; // ebx
  char v4; // dl
  char *v5; // ecx
  unsigned int v6; // eax
  ULONG v8; // [esp+0h] [ebp-18h]
  int v9; // [esp+10h] [ebp-8h] BYREF
  PVOID BaseAddress; // [esp+14h] [ebp-4h] BYREF

  v1 = 0;
  if ( !byte_4B3A5DA8 )
    RtlAcquireSRWLockExclusive(SRWLock);
  Value = SRWLock[22].Value;
  v4 = (char)SRWLock[17].0;
  v5 = (char *)SRWLock[20].Value;
  BaseAddress = v5;
  v6 = Value - 4;
  if ( v4 )
  {
    if ( v6 < SRWLock[21].Value )
      goto LABEL_11;
    goto LABEL_10;
  }
  if ( v6 >= (unsigned int)v5 )
  {
LABEL_10:
    ++SRWLock[24].Value;
    v1 = Value - 4;
    SRWLock[22].Value = Value - 4;
    goto LABEL_11;
  }
  v9 = 4096;
  if ( (unsigned int)(v5 - 4096) > SRWLock[19].Value )
  {
    BaseAddress = v5 - 4096;
    if ( NtAllocateVirtualMemory((HANDLE)0xFFFFFFFF, &BaseAddress, __PAIR64__(&v9, 0), (PSIZE_T)0x1000, 4u, v8) >= 0 )
    {
      SRWLock[20].Value = (unsigned int)BaseAddress;
      goto LABEL_10;
    }
  }
LABEL_11:
  if ( !byte_4B3A5DA8 )
    RtlReleaseSRWLockExclusive(SRWLock);
  return v1;
}
