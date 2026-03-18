/*
 * XREFs of DpiFdoHandleFilterResources @ 0x1C0195980
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C0027140 (memmove.c)
 *     memset @ 0x1C0027400 (memset.c)
 *     DpiDisableInterruptResources @ 0x1C02C6968 (DpiDisableInterruptResources.c)
 */

__int64 __fastcall DpiFdoHandleFilterResources(__int64 a1, IRP *a2)
{
  __int64 v2; // rdi
  IRP *v4; // rbp
  __int64 v5; // r15
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 Status; // rbx
  unsigned int *Information; // rsi
  unsigned int v11; // edi
  _OWORD *PoolWithTag; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  _OWORD *v17; // r14
  unsigned int *v18; // r15
  unsigned int v19; // r12d
  unsigned int *v20; // rdi
  unsigned int *v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax

  v2 = *(_QWORD *)(a1 + 64);
  v4 = a2;
  v5 = *(_QWORD *)(v2 + 40);
  IoForwardIrpSynchronously(*(PDEVICE_OBJECT *)(v2 + 160), a2);
  Status = v4->IoStatus.Status;
  if ( (int)Status >= 0 )
  {
    Information = (unsigned int *)v4->IoStatus.Information;
    if ( !*(_QWORD *)(v5 + 184) )
      DpiDisableInterruptResources(v4->IoStatus.Information);
    if ( *(_BYTE *)(v2 + 1155) != 1 )
    {
      v23 = WdLogNewEntry5_WdEvent(v7, v6);
      *(_QWORD *)(v23 + 24) = a1;
      WdLogEvent5_WdEvent(v23);
      goto LABEL_3;
    }
    v7 = *Information;
    v11 = v7 + 96 * Information[7];
    if ( v11 < (unsigned int)v7 )
      goto LABEL_15;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v11, 0x74727044u);
    v17 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, v11);
      v18 = Information + 8;
      v19 = 0;
      *v17 = *(_OWORD *)Information;
      v17[1] = *((_OWORD *)Information + 1);
      *(_DWORD *)v17 = v11;
      v20 = (unsigned int *)(v17 + 2);
      if ( Information[7] )
      {
        do
        {
          memmove(v20, v18, 32LL * v18[1] + 8);
          ++v19;
          v21 = &v20[8 * v20[1]];
          *((_WORD *)v21 + 4) = 257;
          *((_BYTE *)v21 + 10) = 3;
          *((_WORD *)v21 + 6) = 1;
          v21[4] = 12;
          v21[5] = 1;
          *((_QWORD *)v21 + 3) = 944LL;
          *((_QWORD *)v21 + 4) = 955LL;
          *((_WORD *)v21 + 20) = 257;
          *((_BYTE *)v21 + 42) = 3;
          *((_WORD *)v21 + 22) = 1;
          v21[12] = 32;
          v21[13] = 1;
          *((_QWORD *)v21 + 7) = 960LL;
          *((_QWORD *)v21 + 8) = 991LL;
          *((_WORD *)v21 + 36) = 769;
          *((_BYTE *)v21 + 74) = 3;
          *((_WORD *)v21 + 38) = 0;
          v21[20] = 0x20000;
          v21[21] = 1;
          *((_QWORD *)v21 + 11) = 655360LL;
          *((_QWORD *)v21 + 12) = 786431LL;
          v20[1] += 3;
          v18 += 8 * v18[1] + 2;
          v20 += 8 * v20[1] + 2;
        }
        while ( v19 < Information[7] );
        v4 = a2;
      }
      ExFreePoolWithTag(Information, 0);
      v4->IoStatus.Information = (ULONG_PTR)v17;
    }
    else
    {
      LODWORD(Status) = -1073741801;
      v24 = WdLogNewEntry5_WdLowResource(v14, v13, v15, v16);
      *(_QWORD *)(v24 + 24) = -1073741801LL;
      WdLogEvent5_WdLowResource(v24);
    }
  }
  else if ( !*(_BYTE *)(v2 + 480) && !*(_BYTE *)(v2 + 2695) && !*(_BYTE *)(v2 + 1158) )
  {
LABEL_15:
    v22 = WdLogNewEntry5_WdError(v7, v6);
    *(_QWORD *)(v22 + 24) = Status;
    WdLogEvent5_WdError(v22);
  }
LABEL_3:
  v4->IoStatus.Status = Status;
  IofCompleteRequest(v4, 1);
  return (unsigned int)Status;
}
