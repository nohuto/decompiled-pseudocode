/*
 * XREFs of ExpTryEnterWorkerFactoryAwayMode @ 0x1402D5324
 * Callers:
 *     NtSetInformationWorkerFactory @ 0x1402D4530 (NtSetInformationWorkerFactory.c)
 *     ExpWorkerFactoryManagerThread @ 0x1403C6970 (ExpWorkerFactoryManagerThread.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     KeRegisterObjectNotification @ 0x1402F0D90 (KeRegisterObjectNotification.c)
 */

char __fastcall ExpTryEnterWorkerFactoryAwayMode(_QWORD *Object)
{
  __int64 v2; // rdi
  int v3; // ecx

  if ( *((_DWORD *)Object + 96) < *((_DWORD *)Object + 95) )
  {
    v2 = Object[2];
    if ( !*(_DWORD *)(v2 + 28) )
    {
      if ( !*((_DWORD *)Object + 101) )
        return 1;
      v3 = *((_DWORD *)Object + 102);
      *((_DWORD *)Object + 102) = v3 | 0x200;
      if ( *(_DWORD *)(*(_QWORD *)(v2 + 8) + 4LL) )
        return 1;
      if ( (v3 & 0x400) == 0 )
      {
        *((_DWORD *)Object + 102) = v3 | 0x600;
        ObfReferenceObjectWithTag(Object, 0x746C6644u);
        KeRegisterObjectNotification(*(_QWORD *)(v2 + 8), &ExpWorkerFactoryManagerQueue, Object + 77);
      }
    }
  }
  return 0;
}
