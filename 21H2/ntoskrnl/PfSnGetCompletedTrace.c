/*
 * XREFs of PfSnGetCompletedTrace @ 0x14060DBEC
 * Callers:
 *     PfSnQueryPrefetcherInformation @ 0x14060D9A4 (PfSnQueryPrefetcherInformation.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140253C70 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x140354DD0 (ExAcquireFastMutex.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     ProbeForWrite @ 0x1406495C0 (ProbeForWrite.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
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
  ExAcquireFastMutex(&Mutex);
  dword_140C504E4 = 2;
  v7 = (unsigned int *)qword_140C50498;
  if ( qword_140C50498 == &qword_140C50498 )
  {
    v10 = -2147483622;
  }
  else
  {
    v8 = *((_DWORD *)qword_140C50498 + 6);
    if ( v8 > v4 )
    {
      *a3 = v8;
      v10 = -1073741789;
    }
    else
    {
      v9 = *(_QWORD *)qword_140C50498;
      if ( *((PVOID **)qword_140C50498 + 1) != &qword_140C50498 || *(PVOID *)(v9 + 8) != qword_140C50498 )
        __fastfail(3u);
      qword_140C50498 = *(PVOID *)qword_140C50498;
      *(_QWORD *)(v9 + 8) = &qword_140C50498;
      --dword_140C504E0;
      KeReleaseGuardedMutex(&Mutex);
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
    KeReleaseGuardedMutex(&Mutex);
  return v10;
}
