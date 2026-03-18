/*
 * XREFs of ParseNameObj @ 0x1C000BCC4
 * Callers:
 *     ParseOpcode @ 0x1C000B180 (ParseOpcode.c)
 *     ParsePackage @ 0x1C0012D00 (ParsePackage.c)
 *     ParseScope @ 0x1C0014A90 (ParseScope.c)
 * Callees:
 *     ReadObject @ 0x1C000A950 (ReadObject.c)
 *     ParseName @ 0x1C000BE54 (ParseName.c)
 *     GetNameSpaceObjectNoLock @ 0x1C0015310 (GetNameSpaceObjectNoLock.c)
 *     PushCall @ 0x1C0016ABC (PushCall.c)
 *     FreeNameSpaceObjects @ 0x1C00186E0 (FreeNameSpaceObjects.c)
 *     __security_check_cookie @ 0x1C002F140 (__security_check_cookie.c)
 *     memmove @ 0x1C002FDC0 (memmove.c)
 *     AcpiDiagTraceAmlError @ 0x1C0047CA8 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C0067B14 (LogError.c)
 *     PrintDebugMessage @ 0x1C00682B8 (PrintDebugMessage.c)
 */

__int64 __fastcall ParseNameObj(__int64 a1, __int64 a2)
{
  unsigned int NameSpaceObjectNoLock; // edi
  size_t v5; // rbx
  _BYTE *Pool2; // rsi
  KIRQL v7; // bl
  unsigned int v8; // esi
  __int64 i; // rbx
  unsigned int Object; // eax
  _BYTE P[128]; // [rsp+40h] [rbp-1B8h] BYREF
  _BYTE Src[256]; // [rsp+C0h] [rbp-138h] BYREF

  NameSpaceObjectNoLock = ParseName(a1, a1 + 120, Src);
  if ( !NameSpaceObjectNoLock )
  {
    v5 = -1LL;
    do
      ++v5;
    while ( Src[v5] );
    if ( v5 + 1 >= 0x80 )
    {
      Pool2 = (_BYTE *)ExAllocatePool2(64LL, v5 + 1, 1768973121LL);
      if ( !Pool2 )
        return (unsigned int)-1073741670;
    }
    else
    {
      Pool2 = P;
    }
    memmove(Pool2, Src, v5);
    Pool2[v5] = 0;
    v7 = ExAcquireSpinLockShared(&ACPINamespaceLock);
    NameSpaceObjectNoLock = GetNameSpaceObjectNoLock(Pool2);
    ExReleaseSpinLockShared(&ACPINamespaceLock, v7);
    if ( P != Pool2 )
      ExFreePoolWithTag(Pool2, 0);
    v8 = NameSpaceObjectNoLock;
    if ( NameSpaceObjectNoLock == -1073741772 )
    {
      LogError(3221225524LL);
      AcpiDiagTraceAmlError(a1, 3221225524LL);
      PrintDebugMessage(120, (unsigned int)Src, 0, 0, 0LL);
      return v8;
    }
  }
  v8 = NameSpaceObjectNoLock;
  if ( !NameSpaceObjectNoLock )
  {
    for ( i = 0LL; *(_WORD *)(i + 66) == 128; i = *(_QWORD *)(i + 80) )
      ;
    if ( (gdwfAMLI & 4) != 0 )
      _InterlockedIncrement((volatile signed __int32 *)(i + 112));
    if ( *(_WORD *)(i + 66) == 8 )
      Object = PushCall(a1, i, a2);
    else
      Object = ReadObject(a1, i + 64, a2);
    v8 = Object;
    if ( (gdwfAMLI & 4) != 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(i + 112), 0xFFFFFFFF) == 1 )
    {
      *(_WORD *)(i + 64) |= 4u;
      if ( (*(_WORD *)(i + 64) & 0x40) == 0 )
        FreeNameSpaceObjects(i);
    }
    if ( (gdwfAMLI & 4) != 0 && _InterlockedExchangeAdd((volatile signed __int32 *)0x70, 0xFFFFFFFF) == 1 )
    {
      MEMORY[0x40] |= 4u;
      if ( (MEMORY[0x40] & 0x40) == 0 )
        FreeNameSpaceObjects(0LL);
    }
  }
  return v8;
}
