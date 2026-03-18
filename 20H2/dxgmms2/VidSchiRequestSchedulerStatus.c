/*
 * XREFs of VidSchiRequestSchedulerStatus @ 0x1C008F638
 * Callers:
 *     VidSchInitializeAdapter @ 0x1C008D5F0 (VidSchInitializeAdapter.c)
 *     VidSchFlushAdapter @ 0x1C00D2340 (VidSchFlushAdapter.c)
 *     VidSchTerminateAdapter @ 0x1C00D3950 (VidSchTerminateAdapter.c)
 * Callees:
 *     VidSchiGetSchedulerStatus @ 0x1C001601C (VidSchiGetSchedulerStatus.c)
 */

__int64 __fastcall VidSchiRequestSchedulerStatus(__int64 a1, int a2, int a3)
{
  unsigned int v3; // esi
  struct _ERESOURCE *v4; // rbp

  v3 = 0;
  v4 = (struct _ERESOURCE *)(a1 + 312);
  if ( a2 != 2 )
    ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 312), 1u);
  if ( *(_DWORD *)(a1 + 308) != a2 )
  {
    *(_DWORD *)(a1 + 308) = a2;
    *(_QWORD *)(a1 + 1264) = MEMORY[0xFFFFF78000000320];
    KeSetEvent((PRKEVENT)(a1 + 1232), 0, 0);
    if ( a3 )
    {
      *(_QWORD *)(a1 + 1312) = MEMORY[0xFFFFF78000000320];
      KeWaitForSingleObject((PVOID)(a1 + 1288), Executive, 0, 0, 0LL);
      if ( (unsigned int)VidSchiGetSchedulerStatus(a1) != a2 )
        v3 = -1073741823;
    }
  }
  if ( a2 != 2 )
    ExReleaseResourceLite(v4);
  return v3;
}
