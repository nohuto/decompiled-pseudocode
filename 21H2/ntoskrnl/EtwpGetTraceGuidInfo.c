/*
 * XREFs of EtwpGetTraceGuidInfo @ 0x14072E894
 * Callers:
 *     NtTraceControl @ 0x1406DA6C0 (NtTraceControl.c)
 * Callees:
 *     RtlULongAdd @ 0x140200578 (RtlULongAdd.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140355BE0 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegion @ 0x140356100 (KeLeaveCriticalRegion.c)
 *     memset @ 0x140414300 (memset.c)
 *     EtwpFindGuidEntryByGuid @ 0x1406DB110 (EtwpFindGuidEntryByGuid.c)
 *     EtwpUnreferenceGuidEntry @ 0x1406ECBA8 (EtwpUnreferenceGuidEntry.c)
 */

__int64 __fastcall EtwpGetTraceGuidInfo(__int64 a1, __int64 a2, int *a3, unsigned int *a4)
{
  size_t v4; // r15
  int v5; // r12d
  int v6; // ebx
  __int64 v10; // rdi
  unsigned int i; // ecx
  __int64 v12; // r14
  GUID *v13; // r8
  _QWORD *GuidEntryByGuid; // r14
  __int64 v16; // rdx
  unsigned int v17; // ecx
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v19; // r9
  unsigned int v20; // edi
  _DWORD *v21; // r13
  char v22; // r12
  __int64 v23; // r9
  _QWORD *v24; // r11
  _BYTE *v25; // rcx
  int v26; // r8d
  __int64 v27; // rdx
  __int64 v28; // r10
  unsigned int j; // r12d
  __int64 v30; // r11
  _OWORD *v31; // r10
  __int64 v32; // rax
  _OWORD *v33; // r10
  __int64 v34; // r11
  _QWORD *v35; // r9
  int v36; // ecx
  _DWORD *v37; // r10
  unsigned int v38; // ecx
  int v39; // r13d
  unsigned int k; // r12d
  __int64 v41; // r9
  _OWORD *v42; // r11
  NTSTATUS v43; // eax
  __int64 v44; // r9
  __int64 v45; // r10
  __int64 v46; // r11
  int v47; // [rsp+20h] [rbp-30h]
  int v48; // [rsp+24h] [rbp-2Ch]
  unsigned int v49; // [rsp+28h] [rbp-28h]
  _BYTE *v50; // [rsp+30h] [rbp-20h]
  __int64 v51; // [rsp+40h] [rbp-10h]
  ULONG ulAugend; // [rsp+A0h] [rbp+50h] BYREF
  unsigned int *v53; // [rsp+A8h] [rbp+58h]

  v53 = a4;
  v4 = *a4;
  v5 = 0;
  v6 = 0;
  ulAugend = 8;
  v47 = 0;
  if ( a1 == EtwpHostSiloState )
    v10 = 2147353472LL;
  else
    v10 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1128LL) + 550LL;
  for ( i = 0; i < 0xA; ++i )
  {
    v12 = 2LL * i;
    v13 = (&EtwpUmglProviders)[2 * i];
    if ( *(_QWORD *)&v13->Data1 == *(_QWORD *)a2 && *(_QWORD *)v13->Data4 == *(_QWORD *)(a2 + 8) )
    {
      memset(a3, 0, v4);
      v16 = *((unsigned __int8 *)&(&EtwpUmglProviders)[v12] + 8);
      v17 = 24;
      if ( *(_BYTE *)(v10 + 2 * v16) )
      {
        v17 = 56;
        if ( (unsigned int)v4 >= 0x38 )
        {
          a3[3] = 1;
          a3[6] = 1;
          *((_WORD *)a3 + 15) = *(unsigned __int8 *)(v10 + 2 * v16);
          *((_QWORD *)a3 + 5) = *(unsigned __int8 *)(v10 + 2 * v16 + 1);
        }
      }
      else
      {
        if ( (unsigned int)v4 < 0x18 )
          goto LABEL_17;
        a3[3] = 0;
      }
      if ( v17 <= (unsigned int)v4 )
      {
        *a3 = 1;
        a3[5] = 1;
        a3[4] = 0;
        a3[2] = 0;
LABEL_18:
        *a4 = v17;
        return (unsigned int)v6;
      }
LABEL_17:
      v6 = -1073741789;
      goto LABEL_18;
    }
  }
  GuidEntryByGuid = EtwpFindGuidEntryByGuid(a1, (_DWORD *)a2, 0);
  if ( !GuidEntryByGuid )
    return 3221226133LL;
  memset(a3, 0, *a4);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)(GuidEntryByGuid + 51), 0LL);
  v19 = (_QWORD *)GuidEntryByGuid[7];
  v20 = ulAugend;
  GuidEntryByGuid[52] = KeGetCurrentThread();
  if ( v19 != GuidEntryByGuid + 7 )
  {
    while ( 1 )
    {
      v49 = v20;
      v21 = (int *)((char *)a3 + v20);
      v22 = 0;
      if ( RtlULongAdd(v20, 0x10u, &ulAugend) < 0 )
        break;
      v20 = ulAugend;
      v25 = (_BYTE *)(v23 + 98);
      ++v47;
      v26 = 0;
      v27 = v23;
      v48 = 0;
      v50 = (_BYTE *)(v23 + 98);
      if ( (*(_BYTE *)(v23 + 98) & 8) != 0 )
      {
        v22 = 1;
        if ( (*((_BYTE *)GuidEntryByGuid + 91) & 1) != 0 )
        {
          if ( RtlULongAdd(ulAugend, 0x20u, &ulAugend) < 0 )
            break;
          v20 = ulAugend;
          v27 = v23;
          v26 = 1;
          v25 = v50;
          if ( ulAugend <= (unsigned int)v4 )
          {
            *(_DWORD *)v28 = 1;
            *(_BYTE *)(v28 + 4) = *((_BYTE *)GuidEntryByGuid + 90);
            *(_QWORD *)(v28 + 16) = GuidEntryByGuid[10];
            *(_WORD *)(v28 + 6) = *((_WORD *)GuidEntryByGuid + 44);
          }
        }
      }
      else if ( *(_BYTE *)(v23 + 100) || *(_BYTE *)(v23 + 101) )
      {
        for ( j = 0; j < 8; ++j )
        {
          v30 = 4 * (j + 4LL);
          if ( LODWORD(GuidEntryByGuid[v30]) && ((unsigned __int8)(1 << j) & *(_BYTE *)(v23 + 100)) != 0 )
          {
            v48 = v26 + 1;
            if ( RtlULongAdd(v20, 0x20u, &ulAugend) < 0 )
              goto LABEL_57;
            v20 = ulAugend;
            v26 = v48;
            if ( ulAugend <= (unsigned int)v4 )
            {
              *v31 = *(_OWORD *)&GuidEntryByGuid[v30];
              v31[1] = *(_OWORD *)&GuidEntryByGuid[v30 + 2];
            }
          }
          v32 = *(_QWORD *)(v23 + 40);
          v51 = v32;
          if ( v32 && *(_DWORD *)(v32 + v30 * 8) && ((unsigned __int8)(1 << j) & *(_BYTE *)(v23 + 101)) != 0 )
          {
            v48 = v26 + 1;
            if ( RtlULongAdd(v20, 0x20u, &ulAugend) < 0 )
              goto LABEL_57;
            v20 = ulAugend;
            if ( ulAugend <= (unsigned int)v4 )
            {
              *v33 = *(_OWORD *)(v51 + v34);
              v33[1] = *(_OWORD *)(v51 + v34 + 16);
            }
          }
          v26 = v48;
        }
        v25 = v50;
        v24 = GuidEntryByGuid + 7;
        v22 = 0;
        v27 = v23;
      }
      v35 = *(_QWORD **)v23;
      if ( v20 <= (unsigned int)v4 )
      {
        if ( v22 == 1 )
          v21[3] = 1;
        if ( (*v25 & 2) != 0 )
          v36 = *(_DWORD *)(*(_QWORD *)(v27 + 80) + 1088LL);
        else
          v36 = 0;
        v21[2] = v36;
        v21[1] = v26;
        if ( v35 == v24 )
        {
          *v21 = 0;
LABEL_53:
          v5 = v47;
          goto LABEL_54;
        }
        *v21 = v20 - v49;
      }
      if ( v35 == v24 )
        goto LABEL_53;
    }
LABEL_57:
    GuidEntryByGuid[52] = 0LL;
    ExReleasePushLockEx((ULONG_PTR)(GuidEntryByGuid + 51), 0LL);
    KeLeaveCriticalRegion();
LABEL_58:
    v20 = ulAugend;
    v6 = -2147483643;
    goto LABEL_59;
  }
LABEL_54:
  GuidEntryByGuid[52] = 0LL;
  ExReleasePushLockEx((ULONG_PTR)(GuidEntryByGuid + 51), 0LL);
  KeLeaveCriticalRegion();
  if ( !v5 )
  {
    v5 = 2;
    v47 = 2;
    if ( RtlULongAdd(v20, 0x10u, &ulAugend) >= 0 )
    {
      v38 = ulAugend;
      v39 = 0;
      for ( k = 0; k < 8; ++k )
      {
        if ( LODWORD(GuidEntryByGuid[4 * k + 16]) )
        {
          ++v39;
          if ( RtlULongAdd(v38, 0x20u, &ulAugend) < 0 )
            goto LABEL_58;
          v38 = ulAugend;
          if ( ulAugend <= (unsigned int)v4 )
          {
            *v42 = *(_OWORD *)((char *)GuidEntryByGuid + v41);
            v42[1] = *(_OWORD *)((char *)GuidEntryByGuid + v41 + 16);
          }
        }
      }
      if ( v38 <= (unsigned int)v4 )
      {
        v37[2] = 0;
        v37[1] = v39;
        *v37 = v38 - v20;
        v37[3] = 2;
      }
      if ( RtlULongAdd(v38, 0x10u, &ulAugend) < 0 )
        goto LABEL_58;
      v43 = RtlULongAdd(ulAugend, 0x20u, &ulAugend);
      v20 = ulAugend;
      if ( v43 < 0 )
      {
        v6 = -2147483643;
        goto LABEL_59;
      }
      if ( ulAugend > (unsigned int)v4 )
      {
LABEL_59:
        v5 = v47;
      }
      else
      {
        *(_QWORD *)(v44 + 4) = v46;
        *(_DWORD *)v44 = v46;
        *(_DWORD *)(v44 + 12) = 3;
        *(_DWORD *)v45 = *((_BYTE *)GuidEntryByGuid + 91) & 1;
        v5 = 2;
        if ( (*((_BYTE *)GuidEntryByGuid + 91) & 1) != 0 )
        {
          *(_DWORD *)(v44 + 4) = 1;
          *(_BYTE *)(v45 + 4) = *((_BYTE *)GuidEntryByGuid + 90);
          *(_QWORD *)(v45 + 16) = GuidEntryByGuid[10];
          *(_WORD *)(v45 + 6) = *((_WORD *)GuidEntryByGuid + 44);
        }
      }
    }
    else
    {
      v20 = ulAugend;
      v6 = -2147483643;
    }
  }
  EtwpUnreferenceGuidEntry(GuidEntryByGuid);
  if ( v6 >= 0 )
  {
    if ( v20 > (unsigned int)v4 )
      v6 = -1073741789;
    else
      *a3 = v5;
  }
  *v53 = v20;
  return (unsigned int)v6;
}
