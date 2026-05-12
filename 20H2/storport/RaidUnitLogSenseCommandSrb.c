/*
 * XREFs of RaidUnitLogSenseCommandSrb @ 0x1C001DF50
 * Callers:
 *     StorpTelemetrySendUnitScsiDiagnostics @ 0x1C001EA4C (StorpTelemetrySendUnitScsiDiagnostics.c)
 *     RaidUnitLogSenseTemperatureSrb @ 0x1C004ACE4 (RaidUnitLogSenseTemperatureSrb.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C000BD70 (RaidAllocatePool.c)
 *     RaidAllocateSrb @ 0x1C000BDD4 (RaidAllocateSrb.c)
 *     RaSendIrpSynchronous @ 0x1C0010DE0 (RaSendIrpSynchronous.c)
 *     StorFreeSynchronousScsiRequest @ 0x1C001C268 (StorFreeSynchronousScsiRequest.c)
 *     StorBuildSynchronousScsiRequest @ 0x1C001C2B4 (StorBuildSynchronousScsiRequest.c)
 *     memset @ 0x1C001F8C0 (memset.c)
 *     PortSrbTranslateSrbToNtStatus @ 0x1C0059458 (PortSrbTranslateSrbToNtStatus.c)
 */

__int64 __fastcall RaidUnitLogSenseCommandSrb(__int64 a1, __int64 a2, char a3, char a4, unsigned int *a5, _BYTE *a6)
{
  _BYTE *v9; // rsi
  size_t v10; // r8
  _BYTE *v11; // r15
  _BYTE *Srb; // rdi
  int Status; // ebx
  PVOID Pool; // rax
  void *v15; // r13
  char v16; // al
  __int64 v17; // rcx
  _BYTE *v18; // rcx
  char v19; // al
  IRP *v20; // rax
  IRP *v21; // rbp
  __int64 v22; // rcx
  unsigned int v23; // ecx
  _IO_STATUS_BLOCK v25; // [rsp+20h] [rbp-48h] BYREF
  __int64 v26; // [rsp+70h] [rbp+8h]
  unsigned __int16 v29; // [rsp+90h] [rbp+28h]

  v9 = 0LL;
  v10 = *a5;
  v11 = 0LL;
  v25 = 0LL;
  memset(a6, 0, v10);
  v26 = *(_QWORD *)(a1 + 24);
  Srb = RaidAllocateSrb(*(_QWORD *)(a1 + 8), 0, *(_BYTE *)(v26 + 426), 1);
  if ( !Srb )
    return (unsigned int)-1073741801;
  Pool = RaidAllocatePool(NonPagedPoolNx, 0xFFuLL, 0x4E536152u, *(_QWORD *)(a1 + 8));
  v15 = Pool;
  if ( Pool )
  {
    memset(Pool, 0, 0xFFuLL);
    v16 = *(_BYTE *)(v26 + 426);
    Srb[3] = 0;
    if ( v16 == 1 )
    {
      *((_DWORD *)Srb + 8) = -1;
      v9 = Srb;
      v17 = *((unsigned int *)Srb + 13);
      *((_DWORD *)Srb + 5) = 0;
      *((_DWORD *)Srb + 6) = 524626;
      *((_QWORD *)Srb + 8) = a6;
      *((_DWORD *)Srb + 15) = *a5;
      *((_QWORD *)Srb + 10) = a2;
      *((_DWORD *)Srb + 10) = *(_DWORD *)(a1 + 1264);
      Srb[v17 + 8] = *(_BYTE *)(a1 + 96);
      Srb[v17 + 9] = *(_BYTE *)(a1 + 97);
      Srb[v17 + 10] = *(_BYTE *)(a1 + 98);
      v11 = &Srb[*((unsigned int *)Srb + 30)];
      *(_DWORD *)v11 = 64;
      v18 = v11 + 24;
      *((_DWORD *)v11 + 1) = 32;
      *((_WORD *)v11 + 4) = -256;
      *((_QWORD *)v11 + 2) = v15;
      v11[10] = 10;
      v19 = Srb[2];
    }
    else
    {
      Srb[2] = 0;
      v18 = Srb + 72;
      *((_DWORD *)Srb + 3) = 524626;
      *(_WORD *)Srb = 88;
      Srb[5] = *(_BYTE *)(a1 + 96);
      Srb[6] = *(_BYTE *)(a1 + 97);
      Srb[7] = *(_BYTE *)(a1 + 98);
      Srb[8] = -1;
      *((_QWORD *)Srb + 3) = a6;
      *((_DWORD *)Srb + 4) = *a5;
      *((_QWORD *)Srb + 6) = a2;
      *((_DWORD *)Srb + 5) = *(_DWORD *)(a1 + 1264);
      v19 = 0;
      *((_WORD *)Srb + 5) = -246;
      *((_QWORD *)Srb + 4) = v15;
    }
    if ( v19 == 40 )
      *((_WORD *)Srb + 19) = 32;
    else
      Srb[9] = 32;
    v18[3] = a4;
    *(_WORD *)(v18 + 5) = 0;
    v18[2] = a3 & 0x3F;
    *v18 = 77;
    v18[8] = *(_BYTE *)a5;
    v18[7] = *((_BYTE *)a5 + 1);
    v20 = StorBuildSynchronousScsiRequest(*(_QWORD *)(a1 + 8), (unsigned __int64)Srb, 32LL, &v25);
    v21 = v20;
    if ( !v20 )
    {
      Status = -1073741801;
LABEL_26:
      ExFreePoolWithTag(v15, 0x4E536152u);
      goto LABEL_27;
    }
    Status = RaSendIrpSynchronous(*(PDEVICE_OBJECT *)(a1 + 8), v20);
    if ( Status >= 0 )
    {
      Status = v21->IoStatus.Status;
      if ( Status >= 0 )
      {
        LOBYTE(v22) = Srb[3];
        Status = PortSrbTranslateSrbToNtStatus(v22);
      }
    }
    if ( Status == -2147483643 )
    {
      if ( *((_DWORD *)Srb + 4) > *a5 )
        goto LABEL_20;
      Status = 0;
      Srb[3] = 1;
    }
    if ( (int)(Status + 0x80000000) >= 0 )
    {
LABEL_25:
      StorFreeSynchronousScsiRequest(v21);
      goto LABEL_26;
    }
LABEL_20:
    if ( *((_DWORD *)Srb + 4) >= 4u && (HIBYTE(v29) = a6[2], LOBYTE(v29) = a6[3], v23 = v29 + 4, (*a6 & 0x3F) == a3) )
    {
      if ( v23 < *a5 )
        *a5 = v23;
    }
    else
    {
      Status = -1073741668;
    }
    goto LABEL_25;
  }
  Status = -1073741801;
LABEL_27:
  if ( *(_BYTE *)(v26 + 426) == 1 )
  {
    if ( !v9 )
      v9 = Srb;
    *((_QWORD *)v9 + 10) = 0LL;
    *((_QWORD *)v9 + 13) = 0LL;
    if ( v11 )
      *((_QWORD *)v11 + 2) = 0LL;
  }
  else
  {
    *((_QWORD *)Srb + 6) = 0LL;
    *((_QWORD *)Srb + 7) = 0LL;
    *((_QWORD *)Srb + 4) = 0LL;
  }
  ExFreePoolWithTag(Srb, 0x72536152u);
  return (unsigned int)Status;
}
