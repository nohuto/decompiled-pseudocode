/*
 * XREFs of MmQueryMemoryListInformation @ 0x140272F20
 * Callers:
 *     PfpMemoryListQuery @ 0x140379CD0 (PfpMemoryListQuery.c)
 *     EtwpLogMemInfo @ 0x1405A8DE8 (EtwpLogMemInfo.c)
 *     ExpQuerySystemInformation @ 0x140645E90 (ExpQuerySystemInformation.c)
 *     PfpVolumePrefetchMetadata @ 0x140675A94 (PfpVolumePrefetchMetadata.c)
 *     PfpPrefetchDirectoryStream @ 0x140675E40 (PfpPrefetchDirectoryStream.c)
 *     PfpPrefetchFilesTrickle @ 0x140678220 (PfpPrefetchFilesTrickle.c)
 *     PfpUpdateRepurposedByPrefetch @ 0x14067856C (PfpUpdateRepurposedByPrefetch.c)
 *     PfSnCheckActionsNeeded @ 0x140679AEC (PfSnCheckActionsNeeded.c)
 *     PfpPrefetchPrivatePages @ 0x1406BE720 (PfpPrefetchPrivatePages.c)
 *     PfpPfnPrioRequest @ 0x140709F90 (PfpPfnPrioRequest.c)
 * Callees:
 *     PsDereferencePartition @ 0x140274588 (PsDereferencePartition.c)
 *     PsReferencePartitionSafe @ 0x1402745B0 (PsReferencePartitionSafe.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     memset @ 0x140414300 (memset.c)
 */

__int64 __fastcall MmQueryMemoryListInformation(
        ULONG_PTR **BugCheckParameter2,
        _OWORD *a2,
        unsigned int a3,
        __int64 a4,
        _DWORD *a5)
{
  int v8; // edx
  ULONG_PTR *v9; // r13
  ULONG_PTR v10; // rax
  ULONG_PTR v11; // rsi
  ULONG_PTR v12; // r8
  ULONG_PTR v13; // r11
  ULONG_PTR v14; // r9
  ULONG_PTR v15; // r10
  ULONG_PTR v16; // rbx
  ULONG_PTR v17; // r14
  ULONG_PTR v18; // r15
  ULONG_PTR v19; // r12
  ULONG_PTR v20; // r13
  ULONG_PTR v21; // rax
  ULONG_PTR v22; // rax
  ULONG_PTR v23; // rax
  ULONG_PTR v24; // rax
  ULONG_PTR v25; // rax
  ULONG_PTR v26; // rax
  ULONG_PTR v27; // rax
  ULONG_PTR v28; // rax
  ULONG_PTR v29; // rax
  ULONG_PTR v30; // rax
  ULONG_PTR v31; // rax
  ULONG_PTR v32; // rax
  char v34; // [rsp+30h] [rbp-128h]
  ULONG_PTR *v35; // [rsp+38h] [rbp-120h]
  ULONG_PTR v36; // [rsp+40h] [rbp-118h]
  ULONG_PTR v37; // [rsp+48h] [rbp-110h]
  ULONG_PTR v38; // [rsp+50h] [rbp-108h]
  ULONG_PTR v39; // [rsp+58h] [rbp-100h]
  _BYTE v40[112]; // [rsp+70h] [rbp-E8h] BYREF
  __int128 v41; // [rsp+E0h] [rbp-78h]
  __int128 v42; // [rsp+F0h] [rbp-68h]
  __int128 v43; // [rsp+100h] [rbp-58h]
  __int128 v44; // [rsp+110h] [rbp-48h]

  memset(v40, 0, 0x68uLL);
  *((_QWORD *)&v44 + 1) = 0LL;
  *a5 = 0;
  if ( a3 < 0xB0 )
  {
    *a5 = 176;
    return 3221225476LL;
  }
  v8 = 0;
  v34 = 0;
  if ( BugCheckParameter2 )
  {
    if ( BugCheckParameter2 == (ULONG_PTR **)-1LL )
    {
      v9 = *(ULONG_PTR **)(qword_140C4E688 + 8LL * KeGetCurrentThread()->ApcState.Process[1].IdealProcessorPadding[5]);
    }
    else
    {
      v9 = *BugCheckParameter2;
      v8 = 1;
    }
  }
  else
  {
    v9 = &MiSystemPartition;
  }
  v35 = v9;
  if ( *((_DWORD *)v9 + 2) != 305535296 )
    goto LABEL_57;
  if ( v8 != 1 )
    goto LABEL_7;
  if ( (ULONG_PTR **)v9[22] != BugCheckParameter2 )
LABEL_57:
    KeBugCheckEx(0x1Au, 0x41001uLL, (ULONG_PTR)BugCheckParameter2, (ULONG_PTR)v9, 0LL);
  if ( !(unsigned __int8)PsReferencePartitionSafe(BugCheckParameter2) )
    return 3221226656LL;
  v34 = 1;
LABEL_7:
  v10 = v9[866];
  v36 = v9[280];
  *(_QWORD *)v40 = v36;
  v37 = v9[288];
  *(_QWORD *)&v40[8] = v37;
  v11 = v9[936];
  *(_QWORD *)&v40[16] = v11;
  v38 = v9[944];
  *(_QWORD *)&v40[24] = v38;
  v39 = v9[512];
  *(_QWORD *)&v40[32] = v39;
  v12 = v9[950];
  v13 = v9[304];
  *(_QWORD *)&v40[40] = v13;
  *(_QWORD *)&v40[104] = *((unsigned int *)v9 + 1070);
  v14 = v9[309];
  *(_QWORD *)&v40[48] = v14;
  *(_QWORD *)&v41 = *((unsigned int *)v9 + 1071);
  v15 = v9[314];
  *(_QWORD *)&v40[56] = v15;
  *((_QWORD *)&v41 + 1) = *((unsigned int *)v9 + 1072);
  v16 = v9[319];
  *(_QWORD *)&v40[64] = v16;
  *(_QWORD *)&v42 = *((unsigned int *)v9 + 1073);
  v17 = v9[324];
  *(_QWORD *)&v40[72] = v17;
  *((_QWORD *)&v42 + 1) = *((unsigned int *)v9 + 1074);
  v18 = v9[329];
  *(_QWORD *)&v40[80] = v18;
  *(_QWORD *)&v43 = *((unsigned int *)v9 + 1075);
  v19 = v9[334];
  *(_QWORD *)&v40[88] = v19;
  *((_QWORD *)&v43 + 1) = *((unsigned int *)v9 + 1076);
  v20 = v9[339];
  *(_QWORD *)&v40[96] = v20;
  *(_QWORD *)&v44 = *((unsigned int *)v35 + 1077);
  if ( v36 > v10 )
  {
    *(_QWORD *)v40 = v10;
    v21 = 0LL;
  }
  else
  {
    v21 = v10 - v36;
  }
  if ( v37 > v21 )
  {
    *(_QWORD *)&v40[8] = v21;
    v22 = 0LL;
  }
  else
  {
    v22 = v21 - v37;
  }
  if ( v11 > v22 )
  {
    v11 = v22;
    *(_QWORD *)&v40[16] = v22;
    v23 = 0LL;
  }
  else
  {
    v23 = v22 - v11;
  }
  if ( v38 > v23 )
  {
    *(_QWORD *)&v40[24] = v23;
    v24 = 0LL;
  }
  else
  {
    v24 = v23 - v38;
  }
  if ( v39 > v24 )
  {
    *(_QWORD *)&v40[32] = v24;
    v25 = 0LL;
  }
  else
  {
    v25 = v24 - v39;
  }
  if ( v12 >= v11 )
    v12 = v11;
  *((_QWORD *)&v44 + 1) = v12;
  if ( v13 > v25 )
  {
    *(_QWORD *)&v40[40] = v25;
    v26 = 0LL;
  }
  else
  {
    v26 = v25 - v13;
  }
  if ( v14 > v26 )
  {
    *(_QWORD *)&v40[48] = v26;
    v27 = 0LL;
  }
  else
  {
    v27 = v26 - v14;
  }
  if ( v15 > v27 )
  {
    *(_QWORD *)&v40[56] = v27;
    v28 = 0LL;
  }
  else
  {
    v28 = v27 - v15;
  }
  if ( v16 > v28 )
  {
    *(_QWORD *)&v40[64] = v28;
    v29 = 0LL;
  }
  else
  {
    v29 = v28 - v16;
  }
  if ( v17 > v29 )
  {
    *(_QWORD *)&v40[72] = v29;
    v30 = 0LL;
  }
  else
  {
    v30 = v29 - v17;
  }
  if ( v18 > v30 )
  {
    *(_QWORD *)&v40[80] = v30;
    v31 = 0LL;
  }
  else
  {
    v31 = v30 - v18;
  }
  if ( v19 > v31 )
  {
    *(_QWORD *)&v40[88] = v31;
    v32 = 0LL;
  }
  else
  {
    v32 = v31 - v19;
  }
  if ( v20 > v32 )
    *(_QWORD *)&v40[96] = v32;
  *a2 = *(_OWORD *)v40;
  a2[1] = *(_OWORD *)&v40[16];
  a2[2] = *(_OWORD *)&v40[32];
  a2[3] = *(_OWORD *)&v40[48];
  a2[4] = *(_OWORD *)&v40[64];
  a2[5] = *(_OWORD *)&v40[80];
  a2[6] = *(_OWORD *)&v40[96];
  a2[7] = v41;
  a2[8] = v42;
  a2[9] = v43;
  a2[10] = v44;
  *a5 = 176;
  if ( v34 )
    PsDereferencePartition(v35[22]);
  return 0LL;
}
