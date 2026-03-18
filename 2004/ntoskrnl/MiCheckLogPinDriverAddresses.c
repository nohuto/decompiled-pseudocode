/*
 * XREFs of MiCheckLogPinDriverAddresses @ 0x1402F3118
 * Callers:
 *     MiWorkingSetManager @ 0x1402F3750 (MiWorkingSetManager.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1402B9BC0 (ExQueueWorkItem.c)
 */

void MiCheckLogPinDriverAddresses()
{
  _DWORD *v0; // rdx
  int v1; // r10d
  unsigned __int64 v2; // r8
  bool i; // zf
  bool v4; // zf
  bool v5; // al
  unsigned int v6; // ecx
  char *v7; // rdx
  unsigned int v8; // r9d
  _DWORD *v9; // r10
  unsigned int v10; // r11d
  _DWORD *v11; // r8

  if ( *(_QWORD *)&qword_140C4ECE0 )
  {
    if ( dword_140C29E60 )
    {
      if ( (unsigned int)dword_140C29E60 > 1 )
      {
        v0 = (_DWORD *)qword_140C29E68;
        v1 = *(_DWORD *)qword_140C29E68;
        v2 = qword_140C29E68 + 4 * ((unsigned __int64)(unsigned int)(dword_140C29E60 - 1) >> 5);
        if ( qword_140C29E68 != v2 )
        {
          for ( i = v1 == 0; i; i = *v0 == 0 )
          {
            if ( ++v0 == (_DWORD *)v2 )
            {
              v4 = ((0xFFFFFFFF >> ~(dword_140C29E60 - 1)) & *v0) == 0;
              goto LABEL_10;
            }
          }
          goto LABEL_20;
        }
        v4 = (v1 & (0xFFFFFFFF >> (32 - dword_140C29E60))) == 0;
LABEL_10:
        v5 = v4;
        goto LABEL_11;
      }
      if ( dword_140C29E60 == 1 )
      {
        v5 = !_bittest((const signed __int32 *)qword_140C29E68, 0);
LABEL_11:
        if ( v5 )
        {
          v6 = 0;
          v7 = (char *)&unk_140C29F70;
LABEL_13:
          v8 = 0;
          v9 = v7;
LABEL_14:
          v10 = 0;
          v11 = v9;
          while ( *v11 == v11[1] )
          {
            ++v10;
            v11 += 2;
            if ( v10 >= 2 )
            {
              ++v8;
              v9 += 4;
              if ( v8 < 2 )
                goto LABEL_14;
              ++v6;
              v7 += 32;
              if ( v6 < 2 )
                goto LABEL_13;
              return;
            }
          }
        }
      }
    }
LABEL_20:
    if ( !_InterlockedCompareExchange16(&word_140C29FD0, 1, 0) )
    {
      WorkItem.Parameter = 0LL;
      WorkItem.List.Flink = 0LL;
      WorkItem.WorkerRoutine = (void (__fastcall *)(void *))MiLogPinDriverAddressesWorker;
      ExQueueWorkItem(&WorkItem, DelayedWorkQueue);
    }
  }
}
