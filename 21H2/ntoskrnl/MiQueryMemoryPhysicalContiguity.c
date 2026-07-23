/*
 * XREFs of MiQueryMemoryPhysicalContiguity @ 0x1408D1400
 * Callers:
 *     MmQueryVirtualMemory @ 0x1406885A0 (MmQueryVirtualMemory.c)
 * Callees:
 *     MmSizeOfMdl @ 0x140219160 (MmSizeOfMdl.c)
 *     MiGetLargestPageIndex @ 0x1402486D0 (MiGetLargestPageIndex.c)
 *     MiAllocatePool @ 0x14027C2E0 (MiAllocatePool.c)
 *     MiUnlockAndDereferenceVadShared @ 0x14027C7C0 (MiUnlockAndDereferenceVadShared.c)
 *     KiStackAttachProcess @ 0x14027D850 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1402AB900 (KiUnstackDetachProcess.c)
 *     MmProbeAndLockPages @ 0x1402AE010 (MmProbeAndLockPages.c)
 *     MiObtainReferencedVadEx @ 0x1402BFBA0 (MiObtainReferencedVadEx.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1402CB5C0 (MmMapLockedPagesSpecifyCache.c)
 *     MmUnlockPages @ 0x1402E92C0 (MmUnlockPages.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     MiQueryVaPhysicalContiguity @ 0x140547494 (MiQueryVaPhysicalContiguity.c)
 *     ProbeForWrite @ 0x1406495C0 (ProbeForWrite.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiQueryMemoryPhysicalContiguity(ULONG_PTR a1, volatile void **a2, __int64 a3, KPROCESSOR_MODE a4)
{
  struct _MDL *v5; // r14
  __int64 v6; // rsi
  unsigned int v7; // ebx
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // r12
  unsigned int LargestPageIndex; // eax
  char v11; // dl
  __int64 v12; // rcx
  char v13; // r10
  unsigned int v14; // r9d
  __int64 *v15; // rdx
  SIZE_T v16; // r13
  _BYTE *v17; // rbx
  SIZE_T v18; // rax
  struct _MDL *Pool; // rax
  __int16 v20; // dx
  unsigned __int64 v21; // r15
  unsigned __int64 v22; // r12
  unsigned __int64 v23; // r13
  int v26; // [rsp+34h] [rbp-104h]
  __int64 v27; // [rsp+38h] [rbp-100h]
  int v28; // [rsp+40h] [rbp-F8h]
  unsigned int v29; // [rsp+44h] [rbp-F4h] BYREF
  struct _MDL *v30; // [rsp+48h] [rbp-F0h]
  SIZE_T v31; // [rsp+50h] [rbp-E8h]
  unsigned int v32; // [rsp+58h] [rbp-E0h]
  ULONG_PTR BugCheckParameter1; // [rsp+60h] [rbp-D8h]
  __int128 v34; // [rsp+68h] [rbp-D0h]
  __int128 v35; // [rsp+78h] [rbp-C0h]
  volatile void *Address; // [rsp+88h] [rbp-B0h]
  unsigned __int64 v37; // [rsp+90h] [rbp-A8h]
  struct _KTHREAD *CurrentThread; // [rsp+98h] [rbp-A0h]
  _OWORD v39[3]; // [rsp+A0h] [rbp-98h] BYREF
  _BYTE Src[32]; // [rsp+D0h] [rbp-68h] BYREF

  BugCheckParameter1 = a1;
  v29 = 0;
  memset(v39, 0, sizeof(v39));
  v5 = 0LL;
  v30 = 0LL;
  v6 = 0LL;
  v26 = 0;
  CurrentThread = KeGetCurrentThread();
  if ( a3 != 40 )
  {
    v7 = -1073741820;
    goto LABEL_52;
  }
  if ( a4 )
    ProbeForWrite(a2, 0x28uLL, 8u);
  v34 = *(_OWORD *)a2;
  v35 = *((_OWORD *)a2 + 1);
  Address = a2[4];
  if ( (DWORD2(v35) & 0xFFFFFFFE) != 0 )
    goto LABEL_51;
  v8 = v34;
  if ( (unsigned __int64)v34 > 0x7FFFFFFEFFFFLL )
    goto LABEL_51;
  v9 = v35;
  if ( !(_QWORD)v35 || (((_QWORD)v35 - 1LL) & (unsigned __int64)v35) != 0 || (unsigned __int64)v35 <= 0x1000 )
    goto LABEL_51;
  LargestPageIndex = MiGetLargestPageIndex();
  v14 = LargestPageIndex;
  v28 = LargestPageIndex;
  if ( LargestPageIndex < 3 )
  {
    v15 = &MiLargePageSizes[LargestPageIndex];
    do
    {
      if ( *v15 == (unsigned __int64)v35 >> 12 )
        break;
      v28 = ++v14;
      ++v15;
    }
    while ( v14 < 3 );
    v11 = BYTE8(v35);
  }
  if ( v14 == 3 )
  {
LABEL_16:
    v7 = -1073741637;
    goto LABEL_52;
  }
  if ( (v12 & *((_QWORD *)&v34 + 1)) != 0 || ((unsigned __int64)v34 & ~v12) != (_QWORD)v34 )
    goto LABEL_51;
  v32 = 2 * (v11 & 1);
  v37 = *((_QWORD *)&v34 + 1) / (unsigned __int64)v35;
  v16 = 4 * (*((_QWORD *)&v34 + 1) / (unsigned __int64)v35);
  v31 = v16;
  if ( v16 > 0x20 )
  {
    if ( v16 <= 0xFFFFE000 )
    {
      v18 = MmSizeOfMdl((PVOID)Address, v16);
      Pool = (struct _MDL *)MiAllocatePool(64, v18, 0x20206D4Du);
      v5 = Pool;
      v30 = Pool;
      if ( !Pool )
        goto LABEL_24;
      Pool->Next = 0LL;
      v20 = (__int16)Address;
      Pool->Size = 8 * (((v16 + ((unsigned __int16)Address & 0xFFF) + 4095LL) >> 12) + 6);
      Pool->MdlFlags = 0;
      Pool->StartVa = (PVOID)((unsigned __int64)Address & 0xFFFFFFFFFFFFF000uLL);
      Pool->ByteOffset = v20 & 0xFFF;
      Pool->ByteCount = v16;
      MmProbeAndLockPages(Pool, a4, IoWriteAccess);
      v17 = (v5->MdlFlags & 5) != 0
          ? v5->MappedSystemVa
          : MmMapLockedPagesSpecifyCache(v5, 0, MmCached, 0LL, 0, 0x40000010u);
      if ( !v17 )
      {
LABEL_24:
        v7 = -1073741670;
        goto LABEL_52;
      }
      goto LABEL_29;
    }
LABEL_51:
    v7 = -1073741811;
    goto LABEL_52;
  }
  v17 = Src;
  if ( v13 )
    ProbeForWrite(Address, v16, 4u);
LABEL_29:
  if ( CurrentThread->ApcState.Process != (_KPROCESS *)BugCheckParameter1 )
  {
    KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v39);
    v26 = 1;
  }
  v21 = v8 >> 12;
  v22 = v9 >> 12;
  v27 = 0LL;
  if ( v37 )
  {
    while ( 1 )
    {
      if ( v6
        && (v21 < (*(unsigned int *)(v6 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v6 + 32) << 32))
         || v21 > (*(unsigned int *)(v6 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v6 + 33) << 32))) )
      {
        MiUnlockAndDereferenceVadShared((char *)v6);
        v6 = 0LL;
      }
      v23 = v21 << 12;
      if ( !v6 )
      {
        v6 = MiObtainReferencedVadEx(v21 << 12, 2, (int *)&v29);
        if ( !v6 )
        {
          v7 = v29;
          goto LABEL_54;
        }
      }
      v21 += v22;
      if ( v21 - 1 > (*(unsigned int *)(v6 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v6 + 33) << 32)) )
        break;
      if ( (*(_DWORD *)(v6 + 48) & 0x70) != 0 || (*(_DWORD *)(v6 + 48) & 0x100000) == 0 )
        goto LABEL_16;
      *(_DWORD *)&v17[4 * v27] = 0;
      *(_DWORD *)&v17[4 * v27] ^= (*(_DWORD *)&v17[4 * v27] ^ MiQueryVaPhysicalContiguity(
                                                                BugCheckParameter1 + 1664,
                                                                v23,
                                                                v28,
                                                                (_DWORD *)v32)) & 3;
      if ( ++v27 >= v37 )
      {
        v16 = v31;
        goto LABEL_44;
      }
    }
    v7 = -1073741800;
  }
  else
  {
LABEL_44:
    if ( v6 )
      MiUnlockAndDereferenceVadShared((char *)v6);
    v6 = 0LL;
    v31 = 0LL;
    if ( v26 )
    {
      KiUnstackDetachProcess((__int64)v39, 0LL);
      v26 = 0;
    }
    if ( v17 == Src )
      memmove((void *)Address, v17, v16);
    v7 = 0;
  }
LABEL_52:
  if ( v6 )
    MiUnlockAndDereferenceVadShared((char *)v6);
LABEL_54:
  if ( v26 )
    KiUnstackDetachProcess((__int64)v39, 0LL);
  if ( v5 )
  {
    if ( (v5->MdlFlags & 2) != 0 )
      MmUnlockPages(v5);
    ExFreePoolWithTag(v5, 0);
  }
  return v7;
}
