/*
 * XREFs of _RtlpStdExtendUpperWatermark@8 @ 0x4B3692D9
 * Callers:
 *     _RtlpStdGetRecordedStackTraceIndex@8 @ 0x4B36936F (_RtlpStdGetRecordedStackTraceIndex@8.c)
 * Callees:
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _NtAllocateVirtualMemory@24 @ 0x4B2F2AE0 (_NtAllocateVirtualMemory@24.c)
 */

int __thiscall RtlpStdExtendUpperWatermark(int this)
{
  int v1; // edi
  int v3; // ebx
  char v4; // dl
  unsigned int v5; // ecx
  unsigned int v6; // eax
  int v8; // [esp+10h] [ebp-8h] BYREF
  unsigned int v9; // [esp+14h] [ebp-4h] BYREF

  v1 = 0;
  if ( !byte_4B3A5DA8 )
    RtlAcquireSRWLockExclusive((volatile signed __int32 *)this);
  v3 = *(_DWORD *)(this + 88);
  v4 = *(_BYTE *)(this + 68);
  v5 = *(_DWORD *)(this + 80);
  v9 = v5;
  v6 = v3 - 4;
  if ( v4 )
  {
    if ( v6 < *(_DWORD *)(this + 84) )
      goto LABEL_11;
    goto LABEL_10;
  }
  if ( v6 >= v5 )
  {
LABEL_10:
    ++*(_DWORD *)(this + 96);
    v1 = v3 - 4;
    *(_DWORD *)(this + 88) = v3 - 4;
    goto LABEL_11;
  }
  v8 = 4096;
  if ( v5 - 4096 > *(_DWORD *)(this + 76) )
  {
    v9 = v5 - 4096;
    if ( NtAllocateVirtualMemory(-1, (int)&v9, 0, (int)&v8, 4096, 4) >= 0 )
    {
      *(_DWORD *)(this + 80) = v9;
      goto LABEL_10;
    }
  }
LABEL_11:
  if ( !byte_4B3A5DA8 )
    RtlReleaseSRWLockExclusive((volatile signed __int32 *)this);
  return v1;
}
