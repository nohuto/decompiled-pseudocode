/*
 * XREFs of ?MultiUserGreCleanupEngResources@@YAXXZ @ 0x1C000D1FC
 * Callers:
 *     MultiUserNtGreCleanup @ 0x1C000C588 (MultiUserNtGreCleanup.c)
 * Callees:
 *     EngFreeMem @ 0x1C000D2D0 (EngFreeMem.c)
 *     GreDeleteSemaphoreNonTracked @ 0x1C000D3B0 (GreDeleteSemaphoreNonTracked.c)
 *     GreDeleteSemaphore @ 0x1C00735F0 (GreDeleteSemaphore.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

void MultiUserGreCleanupEngResources(void)
{
  int v0; // edx
  struct _LIST_ENTRY *v1; // rbx
  int Flink; // edx
  int v3; // edx
  int v4; // eax
  int v5; // eax

  if ( MultiUserEngAllocListLock )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        if ( MultiUserGreEngAllocList.Flink == &MultiUserGreEngAllocList )
          goto LABEL_11;
        v1 = MultiUserGreEngAllocList.Flink + 2;
        Flink = (int)MultiUserGreEngAllocList.Flink[1].Flink;
        if ( Flink )
          break;
        EngFreeMem(&MultiUserGreEngAllocList.Flink[2]);
      }
      v0 = Flink - 1;
      if ( v0 )
      {
        v3 = v0 - 1;
        if ( v3 )
        {
          if ( v3 == 2 )
            goto LABEL_4;
        }
        else
        {
          if ( qword_1C02573C0 )
            v4 = qword_1C02573C0();
          else
            v4 = -1073741637;
          if ( v4 >= 0 )
          {
            if ( qword_1C02573C8 )
              qword_1C02573C8(v1);
          }
        }
      }
      else
      {
LABEL_4:
        GreDeleteSemaphore((PERESOURCE)&MultiUserGreEngAllocList.Flink[2]);
      }
    }
  }
LABEL_11:
  if ( GreEngLoadModuleAllocListLock )
  {
    while ( GreEngLoadModuleAllocList.Flink != &GreEngLoadModuleAllocList )
    {
      LODWORD(GreEngLoadModuleAllocList.Flink[1].Flink) = 1;
      if ( qword_1C02573D0 )
        v5 = qword_1C02573D0();
      else
        v5 = -1073741637;
      if ( v5 >= 0 && qword_1C02573D8 )
        qword_1C02573D8(&GreEngLoadModuleAllocList.Flink[1].Blink);
    }
  }
  GreDeleteSemaphoreNonTracked(MultiUserEngAllocListLock);
  MultiUserEngAllocListLock = 0LL;
  GreDeleteSemaphoreNonTracked(GreEngLoadModuleAllocListLock);
  GreEngLoadModuleAllocListLock = 0LL;
}
