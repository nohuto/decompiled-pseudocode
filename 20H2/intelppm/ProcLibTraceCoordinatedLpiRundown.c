/*
 * XREFs of ProcLibTraceCoordinatedLpiRundown @ 0x1C002CA60
 * Callers:
 *     ProcLibTraceControlCallback @ 0x1C0027930 (ProcLibTraceControlCallback.c)
 * Callees:
 *     memset @ 0x1C0004AC0 (memset.c)
 */

void __fastcall ProcLibTraceCoordinatedLpiRundown(__int64 a1)
{
  _DWORD *v2; // rdi
  unsigned __int64 v3; // rsi
  __int64 v4; // r15
  struct _EVENT_DATA_DESCRIPTOR *PoolWithTag; // rax
  struct _EVENT_DATA_DESCRIPTOR *UserData; // rbx
  unsigned int v7; // edx
  _DWORD *v8; // rax
  unsigned int v9; // r9d
  _DWORD *v10; // r10
  _DWORD *v11; // rsi
  _DWORD *v12; // rdx
  __int64 v13; // rcx
  int v14; // eax
  unsigned int v15; // r8d
  __int64 v16; // rcx

  v2 = 0LL;
  if ( EtwEventEnabled((REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Blink, &PPM_ETW_PROCESSOR_CONTAINER_LPI_STATES) )
  {
    v3 = *(_QWORD *)(a1 + 16);
    if ( v3 )
    {
      v4 = *(unsigned int *)(v3 + 16);
      PoolWithTag = (struct _EVENT_DATA_DESCRIPTOR *)ExAllocatePoolWithTag(
                                                       PagedPool,
                                                       16LL * (unsigned int)(2 * v4 + 4),
                                                       0x72637250u);
      UserData = PoolWithTag;
      if ( PoolWithTag )
      {
        memset(PoolWithTag, 0, 16LL * (unsigned int)(2 * v4 + 4));
        v7 = *(unsigned __int16 *)(a1 + 2);
        UserData->Ptr = *(_QWORD *)(a1 + 8);
        *(_QWORD *)&UserData->Size = v7;
        UserData[1].Ptr = v3;
        *(_QWORD *)&UserData[1].Size = 4LL;
        UserData[2].Ptr = v3 + 8;
        *(_QWORD *)&UserData[2].Size = 8LL;
        UserData[3].Ptr = v3 + 16;
        *(_QWORD *)&UserData[3].Size = 4LL;
        if ( (_DWORD)v4 )
        {
          v8 = ExAllocatePoolWithTag(PagedPool, 60 * v4, 0x72637250u);
          v2 = v8;
          if ( !v8 )
            goto LABEL_9;
          memset(v8, 0, 60 * v4);
          v9 = 0;
          v10 = v2 + 2;
          v11 = (_DWORD *)(v3 + 32);
          do
          {
            v12 = v10 - 2;
            *v12 = *(v11 - 2);
            v13 = 2 * v9 + 4;
            *(v10 - 1) = *(v11 - 1);
            v14 = *v11;
            v11 += 20;
            *v10 = v14;
            v10 += 15;
            *(v10 - 14) = *(v11 - 19);
            *(v10 - 13) = *(v11 - 18);
            *(v10 - 12) = *(v11 - 17);
            *(_QWORD *)(v10 - 11) = *((_QWORD *)v11 - 8);
            *(v10 - 9) = *(v11 - 14);
            *((_QWORD *)v10 - 4) = *(_QWORD *)(v11 - 13);
            *(v10 - 6) = *(v11 - 11);
            *(_QWORD *)(v10 - 5) = *((_QWORD *)v11 - 5);
            *(v10 - 3) = *(v11 - 8);
            UserData[v13].Ptr = (unsigned __int64)v12;
            *(_QWORD *)&UserData[v13].Size = 60LL;
            v15 = *((unsigned __int16 *)v11 - 11);
            v16 = 2 * v9++ + 5;
            UserData[v16].Ptr = *((_QWORD *)v11 - 2);
            *(_QWORD *)&UserData[v16].Size = v15;
          }
          while ( v9 < (unsigned int)v4 );
        }
        EtwWrite(
          (REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Blink,
          &PPM_ETW_PROCESSOR_CONTAINER_LPI_STATES,
          0LL,
          2 * v4 + 4,
          UserData);
LABEL_9:
        ExFreePoolWithTag(UserData, 0x72637250u);
        if ( v2 )
          ExFreePoolWithTag(v2, 0x72637250u);
      }
    }
  }
}
