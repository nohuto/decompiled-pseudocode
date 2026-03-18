/*
 * XREFs of AcpiRecordBlackboxInformationWorker @ 0x1C0062AB0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C0031EC0 (memmove.c)
 *     memset @ 0x1C0032180 (memset.c)
 */

void AcpiRecordBlackboxInformationWorker()
{
  KIRQL v0; // r12
  char *v1; // rdx
  int v2; // edi
  unsigned int v3; // esi
  int v4; // eax
  int v5; // ecx
  _UNKNOWN **v6; // rax
  SIZE_T v7; // r15
  _DWORD *PoolWithTag; // rax
  _DWORD *v9; // rbx
  int v10; // ecx
  char *v11; // r14
  char *v12; // rdi
  _UNKNOWN **i; // rax
  int v14; // eax
  unsigned __int64 v15; // rdx
  unsigned int v16; // ebp
  __int128 InputBuffer; // [rsp+30h] [rbp-48h] BYREF
  __int128 v18; // [rsp+40h] [rbp-38h]

  InputBuffer = 0LL;
  v18 = 0LL;
  v0 = KeAcquireSpinLockRaiseToDpc(&AcpiWatchdogLock);
  byte_1C0082BC8 = KeAcquireSpinLockRaiseToDpc(&gmutCtxtList);
  v1 = (char *)glistCtxtHead - 16;
  v2 = 0;
  v3 = 0;
  if ( &glistCtxtHead != (_UNKNOWN **)glistCtxtHead )
  {
    do
    {
      v4 = 0;
      if ( v1[472] )
      {
        v5 = *((unsigned __int16 *)v1 + 220);
        ++v2;
        v4 = 24;
        if ( (_WORD)v5 )
          v4 = v5 + 26;
      }
      v3 += v4;
      v6 = (_UNKNOWN **)*((_QWORD *)v1 + 2);
      v1 = (char *)(v6 - 2);
    }
    while ( &glistCtxtHead != v6 );
  }
  v7 = v3 + 48;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v7, 0x426F7841u);
  v9 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, (unsigned int)v7);
    v9[1] = 1;
    *v9 = v3 + 48;
    v9[5] = v2;
    v10 = AmliWatchdogAction;
    *((_QWORD *)v9 + 1) = &gAcpiTriageInfo;
    v9[4] = v10;
    if ( v2 )
    {
      v11 = (char *)(v9 + 6);
      v12 = (char *)glistCtxtHead - 16;
      for ( i = (_UNKNOWN **)glistCtxtHead; &glistCtxtHead != i; v12 = (char *)(i - 2) )
      {
        if ( v12[472] )
        {
          v14 = *((unsigned __int16 *)v12 + 220);
          v15 = (MEMORY[0xFFFFF78000000008] - *((_QWORD *)v12 + 57)) / 0x2710uLL;
          v16 = v14 + 26;
          if ( v3 >= v14 + 26 )
          {
            if ( (_WORD)v14 )
            {
              *((_QWORD *)v11 + 1) = *((_QWORD *)v12 + 54);
              *((_DWORD *)v11 + 4) = v15;
              *(_DWORD *)v11 = v16;
              memmove(v11 + 20, *((const void **)v12 + 56), *((unsigned __int16 *)v12 + 220));
              *(_WORD *)&v11[2 * ((unsigned __int64)*((unsigned __int16 *)v12 + 220) >> 1) + 20] = 0;
              v11 += v16;
              v3 -= v16;
            }
          }
        }
        i = (_UNKNOWN **)*((_QWORD *)v12 + 2);
      }
    }
  }
  _InterlockedExchange(&dword_1C0081920, 0);
  KeReleaseSpinLock(&gmutCtxtList, byte_1C0082BC8);
  KeReleaseSpinLock(&AcpiWatchdogLock, v0);
  *(_QWORD *)&v18 = 0LL;
  *((_QWORD *)&v18 + 1) = 3LL;
  *(_QWORD *)&InputBuffer = v9;
  *((_QWORD *)&InputBuffer + 1) = v7;
  ZwPowerInformation(TraceApplicationPowerMessage|0x40, &InputBuffer, 0x20u, 0LL, 0);
  if ( v9 )
    ExFreePoolWithTag(v9, 0x426F7841u);
}
