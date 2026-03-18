/*
 * XREFs of ExpTryEnterWorkerFactoryAwayMode @ 0x1402BFBF0
 * Callers:
 *     NtSetInformationWorkerFactory @ 0x1402BF210 (NtSetInformationWorkerFactory.c)
 *     ExpWorkerFactoryManagerThread @ 0x1403B27A0 (ExpWorkerFactoryManagerThread.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14025A2D0 (ObfReferenceObjectWithTag.c)
 *     KeRegisterObjectNotification @ 0x1402C048C (KeRegisterObjectNotification.c)
 */

char __fastcall ExpTryEnterWorkerFactoryAwayMode(_QWORD *Object)
{
  __int64 v2; // rdi
  int v3; // ecx

  if ( *((_DWORD *)Object + 72) < *((_DWORD *)Object + 71) )
  {
    v2 = Object[2];
    if ( !*(_DWORD *)(v2 + 28) )
    {
      if ( !*((_DWORD *)Object + 77) )
        return 1;
      v3 = *((_DWORD *)Object + 78);
      *((_DWORD *)Object + 78) = v3 | 0x200;
      if ( *(_DWORD *)(*(_QWORD *)(v2 + 8) + 4LL) )
        return 1;
      if ( (v3 & 0x400) == 0 )
      {
        *((_DWORD *)Object + 78) = v3 | 0x600;
        ObfReferenceObjectWithTag(Object, 0x746C6644u);
        KeRegisterObjectNotification(*(_QWORD *)(v2 + 8), &ExpWorkerFactoryManagerQueue, Object + 65);
      }
    }
  }
  return 0;
}
