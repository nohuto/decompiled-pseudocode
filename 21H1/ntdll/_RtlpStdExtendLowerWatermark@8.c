/*
 * XREFs of _RtlpStdExtendLowerWatermark@8 @ 0x4B36923A
 * Callers:
 *     _RtlpStdGetSpaceForTrace@8 @ 0x4B369414 (_RtlpStdGetSpaceForTrace@8.c)
 * Callees:
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _NtAllocateVirtualMemory@24 @ 0x4B2F2AE0 (_NtAllocateVirtualMemory@24.c)
 */

unsigned int __fastcall RtlpStdExtendLowerWatermark(PRTL_SRWLOCK SRWLock, int a2)
{
  int v2; // eax
  unsigned int v3; // edi
  char v5; // dl
  void *Ptr; // ecx
  unsigned int v7; // ebx
  ULONG v9; // [esp+0h] [ebp-18h]
  unsigned int Value; // [esp+Ch] [ebp-Ch]
  unsigned int v12; // [esp+10h] [ebp-8h] BYREF
  PVOID BaseAddress; // [esp+14h] [ebp-4h] BYREF

  v2 = a2;
  v3 = 0;
  if ( !byte_4B3A5DA8 )
  {
    RtlAcquireSRWLockExclusive(SRWLock);
    v2 = a2;
  }
  v5 = (char)SRWLock[17].0;
  Ptr = SRWLock[19].Ptr;
  Value = SRWLock[21].Value;
  v7 = v2 + Value;
  BaseAddress = Ptr;
  if ( v5 )
  {
    if ( v7 > SRWLock[22].Value )
      goto LABEL_11;
    goto LABEL_10;
  }
  if ( v7 <= (unsigned int)Ptr )
  {
LABEL_10:
    v3 = Value;
    ++SRWLock[26].Value;
    SRWLock[21].Value = v7;
    goto LABEL_11;
  }
  v12 = (v2 + 4095) & 0xFFFFF000;
  if ( (unsigned int)Ptr + v12 < SRWLock[20].Value
    && NtAllocateVirtualMemory((HANDLE)0xFFFFFFFF, &BaseAddress, __PAIR64__(&v12, 0), (PSIZE_T)0x1000, 4u, v9) >= 0 )
  {
    SRWLock[19].Value = (unsigned int)BaseAddress + v12;
    goto LABEL_10;
  }
LABEL_11:
  if ( !byte_4B3A5DA8 )
    RtlReleaseSRWLockExclusive(SRWLock);
  return v3;
}
