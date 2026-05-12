/*
 * XREFs of RaidUnitResetTarget @ 0x1C004B168
 * Callers:
 *     RaidUnitHierarchicalReset @ 0x1C004A914 (RaidUnitHierarchicalReset.c)
 * Callees:
 *     RaidAllocateSrb @ 0x1C000BDD4 (RaidAllocateSrb.c)
 *     RaSendIrpSynchronous @ 0x1C0010DE0 (RaSendIrpSynchronous.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C001A58C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     StorFreeSynchronousScsiRequest @ 0x1C001C268 (StorFreeSynchronousScsiRequest.c)
 *     StorBuildSynchronousScsiRequest @ 0x1C001C2B4 (StorBuildSynchronousScsiRequest.c)
 *     __security_check_cookie @ 0x1C001CB10 (__security_check_cookie.c)
 *     McTemplateK0quu_EtwWriteTransfer @ 0x1C00461E4 (McTemplateK0quu_EtwWriteTransfer.c)
 *     StorpAggregateHierarchicalResetTarget @ 0x1C00517EC (StorpAggregateHierarchicalResetTarget.c)
 */

__int64 __fastcall RaidUnitResetTarget(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // r15
  int v4; // ebx
  __int64 v5; // rcx
  _BYTE *Srb; // rax
  __int64 v7; // r8
  unsigned __int64 v8; // rsi
  int Status; // r15d
  __int64 v10; // rcx
  unsigned int v11; // eax
  unsigned int v12; // eax
  IRP *v13; // rax
  IRP *v14; // r13
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  char v20; // di
  __int64 v21; // rcx
  char v23; // [rsp+38h] [rbp-89h] BYREF
  char v24; // [rsp+39h] [rbp-88h] BYREF
  char v25; // [rsp+3Ah] [rbp-87h] BYREF
  int v26; // [rsp+3Ch] [rbp-85h]
  int v27; // [rsp+40h] [rbp-81h] BYREF
  __int64 v28; // [rsp+48h] [rbp-79h] BYREF
  _IO_STATUS_BLOCK v29; // [rsp+50h] [rbp-71h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v30; // [rsp+68h] [rbp-59h] BYREF
  __int64 v31; // [rsp+88h] [rbp-39h]
  __int64 v32; // [rsp+90h] [rbp-31h]
  int *v33; // [rsp+98h] [rbp-29h]
  __int64 v34; // [rsp+A0h] [rbp-21h]
  char *v35; // [rsp+A8h] [rbp-19h]
  __int64 v36; // [rsp+B0h] [rbp-11h]
  char *v37; // [rsp+B8h] [rbp-9h]
  __int64 v38; // [rsp+C0h] [rbp-1h]
  char *v39; // [rsp+C8h] [rbp+7h]
  __int64 v40; // [rsp+D0h] [rbp+Fh]
  __int64 *v41; // [rsp+D8h] [rbp+17h]
  __int64 v42; // [rsp+E0h] [rbp+1Fh]

  v29 = 0LL;
  v2 = MEMORY[0xFFFFF78000000014];
  v3 = *(_QWORD *)(a1 + 24);
  v4 = *(_DWORD *)(a1 + 96);
  v5 = *(_QWORD *)(a1 + 8);
  v26 = v4;
  Srb = RaidAllocateSrb(v5, 0x13u, *(_BYTE *)(v3 + 426), 0);
  v8 = (unsigned __int64)Srb;
  if ( Srb )
  {
    if ( *(_BYTE *)(v3 + 426) == 1 )
    {
      v10 = *((unsigned int *)Srb + 13);
      *((_DWORD *)Srb + 5) = 19;
      Srb[v10 + 8] = *(_BYTE *)(a1 + 96);
      Srb[v10 + 9] = *(_BYTE *)(a1 + 97);
      Srb[v10 + 10] = 0;
      *((_DWORD *)Srb + 8) = -1;
      *((_DWORD *)Srb + 6) = 524560;
      *((_QWORD *)Srb + 8) = 0LL;
      *((_DWORD *)Srb + 15) = 0;
      *((_QWORD *)Srb + 10) = 0LL;
      if ( *(_BYTE *)(a1 + 3216) )
      {
        v11 = *(_DWORD *)(a1 + 3236);
      }
      else
      {
        v11 = *(_DWORD *)(a1 + 1264);
        if ( v11 < 0x1E )
          v11 = 30;
      }
      *(_DWORD *)(v8 + 40) = v11;
    }
    else
    {
      Srb[2] = 19;
      *(_WORD *)Srb = 88;
      Srb[5] = *(_BYTE *)(a1 + 96);
      Srb[6] = *(_BYTE *)(a1 + 97);
      *(_WORD *)(Srb + 7) = -256;
      *(_QWORD *)(Srb + 12) = 524560LL;
      *((_QWORD *)Srb + 3) = 0LL;
      *((_QWORD *)Srb + 6) = 0LL;
      if ( *(_BYTE *)(a1 + 3216) )
      {
        v12 = *(_DWORD *)(a1 + 3236);
      }
      else
      {
        v12 = *(_DWORD *)(a1 + 1264);
        if ( v12 < 0x1E )
          v12 = 30;
      }
      *(_DWORD *)(v8 + 20) = v12;
    }
    v13 = StorBuildSynchronousScsiRequest(*(_QWORD *)(a1 + 8), v8, v7, &v29);
    v14 = v13;
    if ( v13 )
    {
      Status = RaSendIrpSynchronous(*(PDEVICE_OBJECT *)(a1 + 8), v13);
      if ( Status >= 0 )
        Status = v14->IoStatus.Status;
      StorFreeSynchronousScsiRequest(v14);
      LOBYTE(v15) = *(_BYTE *)(v8 + 3);
      StorpAggregateHierarchicalResetTarget(*(_QWORD *)(a1 + 24), v15, MEMORY[0xFFFFF78000000014] - v2);
      v20 = BYTE1(v26);
      if ( (unsigned int)dword_1C0069058 > 5 )
      {
        v21 = *(_QWORD *)(a1 + 24);
        v32 = 16LL;
        v31 = v21 + 5192;
        v27 = *(_DWORD *)(v21 + 56);
        v33 = &v27;
        v35 = &v23;
        v37 = &v24;
        v25 = *(_BYTE *)(v8 + 3);
        v39 = &v25;
        v41 = &v28;
        v34 = 4LL;
        v23 = v4;
        v36 = 1LL;
        v24 = BYTE1(v26);
        v38 = 1LL;
        v40 = 1LL;
        v28 = v18;
        v42 = 8LL;
        tlgWriteTransfer_EtwWriteTransfer(8LL, (unsigned __int8 *)dword_1C005DCC1, v18, v19, 8u, &v30);
      }
      if ( (Microsoft_Windows_StorPortEnableBits & 1) != 0 )
        McTemplateK0quu_EtwWriteTransfer(v17, v16, v18, *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL), v4, v20);
    }
    else
    {
      Status = -1073741801;
    }
    ExFreePoolWithTag((PVOID)v8, 0x72536152u);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)Status;
}
