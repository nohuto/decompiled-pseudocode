/*
 * XREFs of MiQueryMemoryPhysicalContiguity @ 0x1408CC950
 * Callers:
 *     MmQueryVirtualMemory @ 0x140634A10 (MmQueryVirtualMemory.c)
 * Callees:
 *     MmUnlockPages @ 0x1402471B0 (MmUnlockPages.c)
 *     KiUnstackDetachProcess @ 0x14025E290 (KiUnstackDetachProcess.c)
 *     MiObtainReferencedVadEx @ 0x140267570 (MiObtainReferencedVadEx.c)
 *     MmMapLockedPagesSpecifyCache @ 0x140274AB0 (MmMapLockedPagesSpecifyCache.c)
 *     MiAllocatePool @ 0x1402A0FB0 (MiAllocatePool.c)
 *     MiUnlockAndDereferenceVadShared @ 0x1402A45A0 (MiUnlockAndDereferenceVadShared.c)
 *     MmProbeAndLockPages @ 0x1402A68D0 (MmProbeAndLockPages.c)
 *     KiStackAttachProcess @ 0x1402A88C0 (KiStackAttachProcess.c)
 *     MmSizeOfMdl @ 0x1402FB560 (MmSizeOfMdl.c)
 *     MiGetLargestPageIndex @ 0x140345334 (MiGetLargestPageIndex.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     MiQueryVaPhysicalContiguity @ 0x140541734 (MiQueryVaPhysicalContiguity.c)
 *     ProbeForWrite @ 0x1405E9480 (ProbeForWrite.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiQueryMemoryPhysicalContiguity(
        ULONG_PTR a1,
        volatile void **a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  struct _MDL *v5; // r14
  volatile signed __int32 *v6; // rsi
  unsigned int v7; // ebx
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // r12
  unsigned int LargestPageIndex; // eax
  char v11; // dl
  __int64 v12; // rcx
  char v13; // r10
  __int64 *v14; // rdx
  SIZE_T v15; // r13
  _BYTE *v16; // rbx
  SIZE_T v17; // rax
  struct _MDL *Pool; // rax
  __int16 v19; // dx
  unsigned __int64 v20; // r15
  unsigned __int64 v21; // r12
  unsigned __int64 v22; // r13
  KPROCESSOR_MODE AccessMode; // [rsp+30h] [rbp-108h]
  int v25; // [rsp+34h] [rbp-104h]
  __int64 v26; // [rsp+38h] [rbp-100h]
  int v27; // [rsp+40h] [rbp-F8h]
  unsigned int v28; // [rsp+44h] [rbp-F4h] BYREF
  struct _MDL *v29; // [rsp+48h] [rbp-F0h]
  SIZE_T v30; // [rsp+50h] [rbp-E8h]
  int v31; // [rsp+58h] [rbp-E0h]
  ULONG_PTR BugCheckParameter1; // [rsp+60h] [rbp-D8h]
  __int128 v33; // [rsp+68h] [rbp-D0h]
  __int128 v34; // [rsp+78h] [rbp-C0h]
  volatile void *Address; // [rsp+88h] [rbp-B0h]
  unsigned __int64 v36; // [rsp+90h] [rbp-A8h]
  struct _KTHREAD *CurrentThread; // [rsp+98h] [rbp-A0h]
  _OWORD v38[3]; // [rsp+A0h] [rbp-98h] BYREF
  _BYTE Src[32]; // [rsp+D0h] [rbp-68h] BYREF

  AccessMode = a4;
  BugCheckParameter1 = a1;
  v28 = 0;
  memset(v38, 0, sizeof(v38));
  v5 = 0LL;
  v29 = 0LL;
  v6 = 0LL;
  v25 = 0;
  CurrentThread = KeGetCurrentThread();
  if ( a3 != 40 )
  {
    v7 = -1073741820;
    goto LABEL_52;
  }
  if ( (_BYTE)a4 )
    ProbeForWrite(a2, 0x28uLL, 8u);
  v33 = *(_OWORD *)a2;
  v34 = *((_OWORD *)a2 + 1);
  Address = a2[4];
  if ( (DWORD2(v34) & 0xFFFFFFFE) != 0 )
    goto LABEL_51;
  v8 = v33;
  if ( (unsigned __int64)v33 > 0x7FFFFFFEFFFFLL )
    goto LABEL_51;
  v9 = v34;
  if ( !(_QWORD)v34 || (((_QWORD)v34 - 1LL) & (unsigned __int64)v34) != 0 || (unsigned __int64)v34 <= 0x1000 )
    goto LABEL_51;
  LargestPageIndex = MiGetLargestPageIndex();
  a4 = LargestPageIndex;
  v27 = LargestPageIndex;
  if ( LargestPageIndex < 3 )
  {
    a3 = (unsigned __int64)v34 >> 12;
    v14 = &MiLargePageSizes[LargestPageIndex];
    do
    {
      if ( *v14 == a3 )
        break;
      a4 = (unsigned int)(a4 + 1);
      v27 = a4;
      ++v14;
    }
    while ( (unsigned int)a4 < 3 );
    v11 = BYTE8(v34);
  }
  if ( (_DWORD)a4 == 3 )
  {
LABEL_16:
    v7 = -1073741637;
    goto LABEL_52;
  }
  if ( (v12 & *((_QWORD *)&v33 + 1)) != 0 || ((unsigned __int64)v33 & ~v12) != (_QWORD)v33 )
    goto LABEL_51;
  v31 = 2 * (v11 & 1);
  v36 = *((_QWORD *)&v33 + 1) / (unsigned __int64)v34;
  v15 = 4 * (*((_QWORD *)&v33 + 1) / (unsigned __int64)v34);
  v30 = v15;
  if ( v15 > 0x20 )
  {
    if ( v15 <= 0xFFFFE000 )
    {
      v17 = MmSizeOfMdl((PVOID)Address, v15);
      Pool = (struct _MDL *)MiAllocatePool(64, v17, 0x20206D4Du);
      v5 = Pool;
      v29 = Pool;
      if ( !Pool )
        goto LABEL_24;
      Pool->Next = 0LL;
      v19 = (__int16)Address;
      Pool->Size = 8 * (((v15 + ((unsigned __int16)Address & 0xFFF) + 4095LL) >> 12) + 6);
      Pool->MdlFlags = 0;
      Pool->StartVa = (PVOID)((unsigned __int64)Address & 0xFFFFFFFFFFFFF000uLL);
      Pool->ByteOffset = v19 & 0xFFF;
      Pool->ByteCount = v15;
      MmProbeAndLockPages(Pool, AccessMode, IoWriteAccess);
      v16 = (v5->MdlFlags & 5) != 0
          ? v5->MappedSystemVa
          : MmMapLockedPagesSpecifyCache(v5, 0, MmCached, 0LL, 0, 0x40000010u);
      if ( !v16 )
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
  v16 = Src;
  if ( v13 )
    ProbeForWrite(Address, v15, 4u);
LABEL_29:
  if ( CurrentThread->ApcState.Process != (_KPROCESS *)BugCheckParameter1 )
  {
    KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0LL, (__int64)v38, (_DWORD *)a4);
    v25 = 1;
  }
  v20 = v8 >> 12;
  v21 = v9 >> 12;
  v26 = 0LL;
  if ( v36 )
  {
    while ( 1 )
    {
      if ( v6
        && (v20 < (*((unsigned int *)v6 + 6) | ((unsigned __int64)*((unsigned __int8 *)v6 + 32) << 32))
         || v20 > (*((unsigned int *)v6 + 7) | ((unsigned __int64)*((unsigned __int8 *)v6 + 33) << 32))) )
      {
        MiUnlockAndDereferenceVadShared((char *)v6);
        v6 = 0LL;
      }
      v22 = v20 << 12;
      if ( !v6 )
      {
        v6 = MiObtainReferencedVadEx(v20 << 12, 2, (int *)&v28);
        if ( !v6 )
        {
          v7 = v28;
          goto LABEL_54;
        }
      }
      v20 += v21;
      if ( v20 - 1 > (*((unsigned int *)v6 + 7) | ((unsigned __int64)*((unsigned __int8 *)v6 + 33) << 32)) )
        break;
      if ( (v6[12] & 0x70) != 0 || (v6[12] & 0x100000) == 0 )
        goto LABEL_16;
      *(_DWORD *)&v16[4 * v26] = 0;
      *(_DWORD *)&v16[4 * v26] ^= (*(_DWORD *)&v16[4 * v26] ^ MiQueryVaPhysicalContiguity(
                                                                BugCheckParameter1 + 1664,
                                                                v22,
                                                                v27,
                                                                v31)) & 3;
      if ( ++v26 >= v36 )
      {
        v15 = v30;
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
    v30 = 0LL;
    if ( v25 )
    {
      KiUnstackDetachProcess((__int64)v38, 0LL, a3, (_DWORD *)a4);
      v25 = 0;
    }
    if ( v16 == Src )
      memmove((void *)Address, v16, v15);
    v7 = 0;
  }
LABEL_52:
  if ( v6 )
    MiUnlockAndDereferenceVadShared((char *)v6);
LABEL_54:
  if ( v25 )
    KiUnstackDetachProcess((__int64)v38, 0LL, a3, (_DWORD *)a4);
  if ( v5 )
  {
    if ( (v5->MdlFlags & 2) != 0 )
      MmUnlockPages(v5);
    ExFreePoolWithTag(v5, 0);
  }
  return v7;
}
