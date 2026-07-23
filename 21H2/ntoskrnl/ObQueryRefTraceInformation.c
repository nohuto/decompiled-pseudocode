/*
 * XREFs of ObQueryRefTraceInformation @ 0x1408DE154
 * Callers:
 *     ExpQuerySystemInformation @ 0x140645E90 (ExpQuerySystemInformation.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140355AE0 (KiLeaveGuardedRegionUnsafe.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     ProbeForWrite @ 0x1406495C0 (ProbeForWrite.c)
 */

__int64 __fastcall ObQueryRefTraceInformation(char *Address, SIZE_T Length, unsigned int *a3)
{
  unsigned int *v3; // r13
  unsigned int v4; // r12d
  unsigned int v6; // r14d
  unsigned int v7; // esi
  struct _KTHREAD *CurrentThread; // rax
  char v9; // cl
  unsigned __int16 v10; // r13
  char *v11; // r12
  __int16 v12; // cx
  unsigned int i; // r9d
  unsigned int j; // r8d
  __int64 v15; // r15

  v3 = a3;
  v4 = Length;
  v6 = 0;
  if ( KeGetCurrentThread()->PreviousMode )
    ProbeForWrite(Address, (unsigned int)Length, 8u);
  v7 = 40;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&ObpStackTraceLock, 0LL);
  v9 = ObpTraceFlags;
  if ( (ObpTraceFlags & 2) != 0 )
  {
    v10 = 0;
    if ( (ObpTraceFlags & 0x20) != 0 )
      v7 = ObpRuntimeTraceProcessName.Length + 42;
    if ( (ObpTraceFlags & 0x10) != 0 )
    {
      while ( v10 < 0x10u && *((_DWORD *)&ObpRuntimeTracePoolTags + v10) )
        ++v10;
      if ( v10 )
        v7 += 10 * v10;
    }
    if ( v7 <= v4 )
    {
      v11 = Address + 40;
      *(_OWORD *)Address = 0LL;
      *((_OWORD *)Address + 1) = 0LL;
      *((_QWORD *)Address + 4) = 0LL;
      *Address = 1;
      Address[1] = (ObpTraceFlags & 0x40) != 0;
      if ( (v9 & 0x20) != 0 )
      {
        *((_WORD *)Address + 4) = ObpRuntimeTraceProcessName.Length;
        *((_WORD *)Address + 5) = ObpRuntimeTraceProcessName.MaximumLength;
        *((_QWORD *)Address + 2) = v11;
        memmove(Address + 40, ObpRuntimeTraceProcessName.Buffer, ObpRuntimeTraceProcessName.MaximumLength);
        v11 += 2 * ((unsigned __int64)ObpRuntimeTraceProcessName.MaximumLength >> 1);
      }
      if ( (ObpTraceFlags & 0x10) != 0 )
      {
        v12 = 2 * (5 * v10 - 1);
        *((_WORD *)Address + 12) = v12;
        *((_WORD *)Address + 13) = v12 + 2;
        *((_QWORD *)Address + 4) = v11;
        for ( i = 0; i < v10; ++i )
        {
          for ( j = 0; ; ++j )
          {
            v15 = j + 5 * i;
            if ( j >= 4 )
              break;
            *(_WORD *)&v11[2 * v15] = (unsigned __int8)(*((_DWORD *)&ObpRuntimeTracePoolTags + i) >> (8 * j));
          }
          *(_WORD *)&v11[2 * v15] = 59;
        }
        *(_WORD *)&v11[10 * v10 - 2] = 0;
      }
      v3 = a3;
    }
    else
    {
      v6 = -1073741820;
      v3 = a3;
    }
  }
  else if ( v4 >= 0x28 )
  {
    *Address = 0;
  }
  else
  {
    v6 = -1073741820;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ObpStackTraceLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&ObpStackTraceLock);
  KeAbPostRelease((ULONG_PTR)&ObpStackTraceLock);
  KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  if ( (int)(v6 + 0x80000000) < 0 || v6 == -1073741820 )
  {
    if ( v3 )
      *v3 = v7;
  }
  return v6;
}
