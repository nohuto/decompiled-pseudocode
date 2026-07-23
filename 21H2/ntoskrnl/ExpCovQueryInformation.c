/*
 * XREFs of ExpCovQueryInformation @ 0x1409579AC
 * Callers:
 *     ExpQuerySystemInformation @ 0x140645E90 (ExpQuerySystemInformation.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLock @ 0x1402FC190 (ExfReleasePushLock.c)
 *     ExfAcquirePushLockExclusive @ 0x1402FD9C0 (ExfAcquirePushLockExclusive.c)
 *     ExfAcquirePushLockShared @ 0x1402FDBF0 (ExfAcquirePushLockShared.c)
 *     DbgPrintEx @ 0x14037F370 (DbgPrintEx.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     RtlDuplicateUnicodeString @ 0x1405EAFA0 (RtlDuplicateUnicodeString.c)
 *     RtlFreeAnsiString @ 0x14063DA40 (RtlFreeAnsiString.c)
 *     MmEnumerateSystemImages @ 0x140797FE0 (MmEnumerateSystemImages.c)
 *     ExpCovDeleteUnloadedModuleEntry @ 0x140957550 (ExpCovDeleteUnloadedModuleEntry.c)
 *     ExpCovIsUnLoadedModulePresent @ 0x14095770C (ExpCovIsUnLoadedModulePresent.c)
 *     ExpCovQueryHypervisorInformation @ 0x140957740 (ExpCovQueryHypervisorInformation.c)
 *     ExpCovReadRequestBuffer @ 0x1409580AC (ExpCovReadRequestBuffer.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall ExpCovQueryInformation(unsigned __int64 a1, unsigned int a2, unsigned int *a3)
{
  unsigned int *v3; // r15
  SIZE_T v4; // rdi
  unsigned int *PoolWithTag; // rsi
  __int64 v8; // rax
  int v9; // ebx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned int Buffer; // r13d
  unsigned int *v15; // rdi
  int v16; // eax
  unsigned __int64 v17; // r14
  void *v18; // r12
  __int64 v19; // rax
  __int64 v20; // rdi
  unsigned int v21; // ecx
  unsigned int v22; // r15d
  unsigned int v23; // eax
  void *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  int v28; // [rsp+20h] [rbp-128h] BYREF
  int v29; // [rsp+24h] [rbp-124h]
  unsigned __int64 v30; // [rsp+28h] [rbp-120h]
  unsigned int *v31; // [rsp+30h] [rbp-118h]
  unsigned int *v32; // [rsp+38h] [rbp-110h]
  unsigned int v33; // [rsp+40h] [rbp-108h]
  void *v34; // [rsp+48h] [rbp-100h]
  UNICODE_STRING StringIn; // [rsp+50h] [rbp-F8h] BYREF
  _QWORD *v36; // [rsp+60h] [rbp-E8h]
  unsigned __int64 v37; // [rsp+68h] [rbp-E0h]
  UNICODE_STRING v38[4]; // [rsp+70h] [rbp-D8h] BYREF
  _OWORD v39[4]; // [rsp+B0h] [rbp-98h] BYREF
  UNICODE_STRING v40; // [rsp+F0h] [rbp-58h] BYREF

  v3 = a3;
  v32 = a3;
  v4 = a2;
  v33 = a2;
  v37 = a1;
  memset(v38, 0, sizeof(v38));
  StringIn = 0LL;
  v28 = 0;
  v30 = 0LL;
  PoolWithTag = 0LL;
  v31 = 0LL;
  LODWORD(v38[3].Buffer) = 64;
  LODWORD(v38[0].Buffer) = v4;
  if ( !ExCovMaxPagedPoolToUse )
    return 3221225506LL;
  if ( v3 )
    *v3 = 64;
  if ( (unsigned int)v4 < 0x40 )
    return 3221225476LL;
  v30 = a1 + 32;
  v8 = a1;
  if ( a1 >= 0x7FFFFFFF0000LL )
    v8 = 0x7FFFFFFF0000LL;
  v39[0] = *(_OWORD *)v8;
  v39[1] = *(_OWORD *)(v8 + 16);
  v39[2] = *(_OWORD *)(v8 + 32);
  v39[3] = *(_OWORD *)(v8 + 48);
  BYTE4(v38[0].Buffer) = LODWORD(v39[0]) == 1;
  v9 = ExpCovReadRequestBuffer((char *)v39 + 8, &StringIn, &v40, &v28);
  if ( v9 >= 0 )
  {
    *(_DWORD *)&v38[3].Length = v28;
    v38[2] = v40;
    if ( !StringIn.Buffer || (v9 = RtlDuplicateUnicodeString(1u, &StringIn, &v38[1]), v9 >= 0) )
    {
      PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(NonPagedPoolNx, v4, 0x72766F43u);
      v31 = PoolWithTag;
      *(_QWORD *)&v38[0].Length = PoolWithTag;
      if ( !PoolWithTag )
      {
        v9 = -1073741670;
        goto LABEL_52;
      }
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v9 = MmEnumerateSystemImages((__int64 (__fastcall *)(PVOID *, __int64))ExpCovQueryInfoCallBack, (__int64)v38);
      if ( v9 < 0 )
      {
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v11, v12, v13);
        goto LABEL_52;
      }
      ExpCovQueryHypervisorInformation((__int64 *)v38);
      Buffer = (unsigned int)v38[3].Buffer;
      v29 = *(_DWORD *)(&v38[3].MaximumLength + 1);
      if ( (unsigned int)v4 >= LODWORD(v38[3].Buffer)
        && (unsigned int)((__int64)(*(_QWORD *)&v38[0].Length - (_QWORD)PoolWithTag) >> 5) )
      {
        v15 = PoolWithTag;
        v16 = *(_DWORD *)(&v38[3].MaximumLength + 1);
        v17 = v30;
        while ( v16 )
        {
          v18 = (void *)(v15[6] + v17 + 32);
          *(_DWORD *)v17 = *v15;
          *(_DWORD *)(v17 + 4) = v15[1];
          *(_DWORD *)(v17 + 24) = v15[6];
          memmove((void *)(v17 + 28), v15 + 7, v15[6]);
          *(_WORD *)(v17 + 8) = *((_WORD *)v15 + 4);
          *(_WORD *)(v17 + 10) = *((_WORD *)v15 + 5);
          *(_QWORD *)(v17 + 16) = v18;
          memmove(v18, *((const void **)v15 + 2), *((unsigned __int16 *)v15 + 4));
          v19 = *v15;
          v17 += v19;
          v30 = v17;
          v15 = (unsigned int *)((char *)v15 + v19);
          v16 = --*(_DWORD *)(&v38[3].MaximumLength + 1);
        }
      }
      else
      {
        if ( (unsigned int)v4 < LODWORD(v38[3].Buffer) )
          v9 = -1073741820;
        v17 = v30;
      }
      if ( LODWORD(v39[0]) == 1 )
        ExfAcquirePushLockExclusive((__int64)&ExpCovPushLock);
      else
        ExfAcquirePushLockShared((__int64)&ExpCovPushLock);
      v20 = ExpCovUnloadedModuleList;
      while ( 1 )
      {
        while ( 1 )
        {
          if ( (__int64 *)v20 == &ExpCovUnloadedModuleList )
          {
            ExfReleasePushLock(&ExpCovPushLock);
            KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v25, v26, v27);
            if ( v3 )
              *v3 = Buffer;
            *(_DWORD *)(v37 + 4) = v29;
            goto LABEL_52;
          }
          v36 = (_QWORD *)v20;
          v34 = *(void **)(v20 + 56);
          if ( v34 )
          {
            if ( ExpCovIsUnLoadedModulePresent(v20, v28, &StringIn, &v40) )
              break;
          }
LABEL_31:
          v20 = *(_QWORD *)v20;
        }
        v21 = *(_DWORD *)(v20 + 48);
        if ( LODWORD(v39[0]) != 1 )
          v21 -= *((_DWORD *)v34 + 7);
        if ( v21 < 0xFFFFFFE0 )
        {
          v22 = *(unsigned __int16 *)(v20 + 32) + v21 + 32;
          if ( v22 < 0x20 )
            v22 = -1;
        }
        else
        {
          v22 = -1;
        }
        v23 = v22 + Buffer;
        if ( v22 + Buffer >= Buffer )
        {
          Buffer += v22;
          if ( v33 >= v23 )
          {
            v34 = (void *)(v21 + v17 + 32);
            *(_DWORD *)v17 = v22;
            *(_DWORD *)(v17 + 4) = 0;
            *(_DWORD *)(v17 + 24) = v21;
            memmove((void *)(v17 + 28), *(const void **)(v20 + 56), v21);
            *(_WORD *)(v17 + 8) = *(_WORD *)(v20 + 32);
            *(_WORD *)(v17 + 10) = *(_WORD *)(v20 + 32);
            v24 = v34;
            *(_QWORD *)(v17 + 16) = v34;
            memmove(v24, *(const void **)(v20 + 40), *(unsigned __int16 *)(v20 + 32));
            v17 += v22;
            v30 = v17;
            if ( LODWORD(v39[0]) == 1 )
            {
              v20 = *(_QWORD *)(v20 + 8);
              ExpCovDeleteUnloadedModuleEntry(v36);
            }
            v3 = v32;
          }
          else
          {
            v3 = v32;
            if ( v32 )
              *v32 = v23;
            v9 = -1073741820;
          }
          ++v29;
          goto LABEL_31;
        }
        DbgPrintEx(0x7Eu, 2u, "COV: Overflow when calculating total required length for %wZ\n", v20 + 32);
        v20 = *(_QWORD *)v20;
        v3 = v32;
      }
    }
  }
LABEL_52:
  if ( StringIn.Buffer )
    RtlFreeAnsiString(&StringIn);
  if ( v38[1].Buffer )
    RtlFreeAnsiString(&v38[1]);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0x72766F43u);
  return (unsigned int)v9;
}
