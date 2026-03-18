/*
 * XREFs of PfSnGetCompletedTrace @ 0x1406FD9DC
 * Callers:
 *     PfSnQueryPrefetcherInformation @ 0x1406FD794 (PfSnQueryPrefetcherInformation.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x1402071B0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x14020AC90 (KeReleaseGuardedMutex.c)
 *     memmove @ 0x140409FC0 (memmove.c)
 *     ProbeForWrite @ 0x1406929C0 (ProbeForWrite.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PfSnGetCompletedTrace(void *a1, SIZE_T Length, unsigned int *a3)
{
  unsigned int v4; // r12d
  char v6; // r15
  unsigned int *v7; // rbx
  unsigned int v8; // eax
  __int64 v9; // rax
  unsigned int v10; // edi

  v4 = Length;
  v6 = 1;
  ExAcquireFastMutex(&FastMutex);
  dword_140C502A4 = 2;
  v7 = (unsigned int *)qword_140C50258;
  if ( qword_140C50258 == &qword_140C50258 )
  {
    v10 = -2147483622;
  }
  else
  {
    v8 = *((_DWORD *)qword_140C50258 + 6);
    if ( v8 > v4 )
    {
      *a3 = v8;
      v10 = -1073741789;
    }
    else
    {
      v9 = *(_QWORD *)qword_140C50258;
      if ( *((PVOID **)qword_140C50258 + 1) != &qword_140C50258 || *(PVOID *)(v9 + 8) != qword_140C50258 )
        __fastfail(3u);
      qword_140C50258 = *(PVOID *)qword_140C50258;
      *(_QWORD *)(v9 + 8) = &qword_140C50258;
      --dword_140C502A0;
      KeReleaseGuardedMutex(&FastMutex);
      v6 = 0;
      if ( KeGetCurrentThread()->PreviousMode )
        ProbeForWrite(a1, v4, 8u);
      memmove(a1, v7 + 4, v7[6]);
      *a3 = v7[6];
      ExFreePoolWithTag(v7, 0);
      v10 = 0;
    }
  }
  if ( v6 )
    KeReleaseGuardedMutex(&FastMutex);
  return v10;
}
