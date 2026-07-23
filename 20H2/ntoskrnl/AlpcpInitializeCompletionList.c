/*
 * XREFs of AlpcpInitializeCompletionList @ 0x14070FBF4
 * Callers:
 *     NtAlpcSetInformation @ 0x14070D270 (NtAlpcSetInformation.c)
 * Callees:
 *     IoFreeMdl @ 0x14020A410 (IoFreeMdl.c)
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     IoAllocateMdl @ 0x140248500 (IoAllocateMdl.c)
 *     MmProbeAndLockPages @ 0x14026AA30 (MmProbeAndLockPages.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1402864D0 (MmMapLockedPagesSpecifyCache.c)
 *     MmUnlockPages @ 0x1402936A0 (MmUnlockPages.c)
 *     AlpcGetHeaderSize @ 0x14033FBF0 (AlpcGetHeaderSize.c)
 *     AlpcpFreeCompletionPacketLookaside @ 0x14035D8E8 (AlpcpFreeCompletionPacketLookaside.c)
 *     memset @ 0x140411300 (memset.c)
 *     AlpcpUnregisterCompletionListDatabase @ 0x1406E3C40 (AlpcpUnregisterCompletionListDatabase.c)
 *     AlpcpAllocateCompletionPacketLookaside @ 0x14070AD3C (AlpcpAllocateCompletionPacketLookaside.c)
 *     AlpcpRegisterCompletionListDatabase @ 0x14070FB5C (AlpcpRegisterCompletionListDatabase.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall AlpcpInitializeCompletionList(__int64 a1, char *a2, unsigned int a3, int a4, int Flags, int a6)
{
  size_t v6; // r15
  char v8; // r12
  char v9; // r13
  __int64 **v10; // rsi
  __int64 **PoolWithTag; // rax
  struct _MDL *Mdl; // rcx
  __int64 *v13; // rcx
  __int64 *v14; // rax
  __int64 *v15; // r12
  __int64 *v16; // r9
  __int64 *v17; // r10
  unsigned int v18; // r11d
  __int64 v19; // rax
  ULONG HeaderSize; // eax
  __int64 *v21; // rdi
  __int64 *v22; // rax
  unsigned __int64 v23; // rcx
  int v24; // eax
  __int64 v25; // rdx
  char *CompletionPacketLookaside; // rdi
  unsigned int v27; // edi
  char v28; // r15
  int v30; // ecx
  int v31; // eax
  ULONG v32; // ecx
  ULONG v33; // edx
  struct _MDL *v34; // rcx
  unsigned int v35; // [rsp+38h] [rbp-60h]
  int v36; // [rsp+3Ch] [rbp-5Ch]
  unsigned int P; // [rsp+40h] [rbp-58h]

  v6 = a3;
  v8 = 0;
  v9 = 0;
  v10 = 0LL;
  if ( ((unsigned __int16)a2 & 0xFFF) != 0LL || (a3 & 0xFFF) != 0 || a3 - 0x4000 > 0x3FFFC000 )
    goto LABEL_32;
  if ( (Flags & 0x55FFFFFF) != 0 || !a4 )
  {
    v9 = 0;
LABEL_32:
    v27 = -1073741811;
LABEL_33:
    v28 = 0;
    goto LABEL_25;
  }
  PoolWithTag = (__int64 **)ExAllocatePoolWithTag(PagedPool, 0xA0uLL, 0x6E496C41u);
  v10 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v27 = -1073741670;
LABEL_36:
    v9 = 0;
    goto LABEL_33;
  }
  memset(PoolWithTag, 0, 0xA0uLL);
  v10[2] = (__int64 *)&KeGetCurrentThread()->ApcState.Process->Header.Lock;
  v10[5] = (__int64 *)a2;
  v10[6] = (__int64 *)&a2[v6];
  if ( !(unsigned int)AlpcpRegisterCompletionListDatabase(v10) )
  {
    v27 = -1073741800;
    goto LABEL_36;
  }
  Mdl = IoAllocateMdl(a2, v6, 0, 0, 0LL);
  v10[4] = (__int64 *)Mdl;
  if ( !Mdl )
  {
    v27 = -1073741670;
    v9 = 1;
    goto LABEL_33;
  }
  MmProbeAndLockPages(Mdl, KeGetCurrentThread()->PreviousMode, IoModifyAccess);
  v13 = v10[4];
  if ( (*((_BYTE *)v13 + 10) & 5) != 0 )
    v14 = (__int64 *)v13[3];
  else
    v14 = (__int64 *)MmMapLockedPagesSpecifyCache((PMDL)v13, 0, MmCached, 0LL, 0, 0x40000000u);
  v10[8] = v14;
  if ( v14 )
  {
    memset(v14, 0, v6);
    v15 = v10[8];
    *v15 = 0xDEADBEEFBAADF00DuLL;
    v15[41] = 0xBAADF00DDEADBEEFuLL;
    v16 = (__int64 *)((8 * ((unsigned int)v6 >> 6) + 4095) & 0xFFFFF000);
    v35 = (unsigned int)v16;
    v17 = (__int64 *)((((unsigned int)(v6 - (_DWORD)v16 - 4096) >> 9) + 4095) & 0xFFFFF000);
    v36 = (int)v17;
    v18 = v6 - (_DWORD)v16 - 4096 - (_DWORD)v17;
    P = v18;
    v10[9] = (__int64 *)v6;
    v10[10] = v15;
    v19 = (__int64)(v10[8] + 512);
    v10[11] = (__int64 *)v19;
    v10[12] = v16;
    v10[13] = (__int64 *)((char *)v16 + v19);
    v10[14] = v17;
    *((_DWORD *)v10 + 34) = ((unsigned int)(v6 - (_DWORD)v16 - 4096) >> 6)
                          - (((((unsigned int)(v6 - (_DWORD)v16 - 4096) >> 9) + 4095) & 0xFFFFF000) >> 6);
    v10[15] = (__int64 *)((char *)v17 + (_QWORD)v16 + v19);
    v10[16] = (__int64 *)v18;
    *((_DWORD *)v10 + 36) = a4;
    v10[5] = (__int64 *)a2;
    v10[6] = (__int64 *)&a2[v6];
    v10[7] = (__int64 *)((char *)v16 + (_QWORD)v17 + (unsigned __int64)(a2 + 4096));
    *((_DWORD *)v10 + 37) = Flags;
    if ( a6 )
    {
      v30 = ((Flags >> 31) & 0xC) + 24;
      if ( (Flags & 0x40000000) == 0 )
        v30 = ((Flags >> 31) & 0xC) + 8;
      v31 = v30 + 20;
      if ( (Flags & 0x20000000) == 0 )
        v31 = v30;
      v32 = v31 + 16;
      if ( (Flags & 0x10000000) == 0 )
        v32 = v31;
      v33 = v32 + 24;
      if ( (Flags & 0x8000000) == 0 )
        v33 = v32;
      HeaderSize = v33 + 8;
      if ( (Flags & 0x2000000) == 0 )
        HeaderSize = v33;
    }
    else
    {
      HeaderSize = AlpcGetHeaderSize(Flags);
      LODWORD(v16) = v35;
      LODWORD(v17) = v36;
      v18 = P;
    }
    *((_DWORD *)v10 + 38) = HeaderSize;
    *((_DWORD *)v15 + 2) = a3;
    *((_DWORD *)v15 + 3) = 4096;
    *((_DWORD *)v15 + 4) = (_DWORD)v16;
    *((_DWORD *)v15 + 5) = (_DWORD)v16 + 4096;
    *((_DWORD *)v15 + 6) = (_DWORD)v17;
    *((_DWORD *)v15 + 7) = (_DWORD)v17 + (_DWORD)v16 + 4096;
    *((_DWORD *)v15 + 8) = v18;
    v15[8] |= 0xFFFFFFuLL;
    v15[8] |= 0xFFFFFF000000uLL;
    v15[8] &= 0xFFFFFFFFFFFFuLL;
    *((_DWORD *)v15 + 9) = *((_DWORD *)v10 + 37);
    *((_DWORD *)v15 + 10) = *((_DWORD *)v10 + 38);
    v21 = v10[11];
    v22 = v10[12];
    v23 = ((unsigned __int64)v22 + 3) >> 2;
    if ( v21 > (__int64 *)((char *)v21 + (_QWORD)v22) )
      v23 = 0LL;
    if ( v23 )
    {
      while ( v23 )
      {
        *(_DWORD *)v21 = -1;
        v21 = (__int64 *)((char *)v21 + 4);
        --v23;
      }
    }
    ExAcquirePushLockExclusiveEx(a1 + 352, 0LL);
    v8 = 1;
    if ( *(_QWORD *)(a1 + 360) )
    {
      v27 = -1073740006;
    }
    else
    {
      v24 = *(_DWORD *)(a1 + 416);
      if ( (v24 & 0x40) != 0 )
      {
        v27 = -1073740032;
      }
      else
      {
        v25 = *(_QWORD *)(a1 + 32);
        if ( v25 )
        {
          CompletionPacketLookaside = AlpcpAllocateCompletionPacketLookaside(v35 >> 3, v25, *(_QWORD *)(a1 + 40));
          if ( !CompletionPacketLookaside )
          {
            v27 = -1073741670;
            goto LABEL_24;
          }
          AlpcpFreeCompletionPacketLookaside(*(KSPIN_LOCK **)(a1 + 48));
          *(_QWORD *)(a1 + 48) = CompletionPacketLookaside;
          v24 = *(_DWORD *)(a1 + 416);
        }
        *(_QWORD *)(a1 + 360) = v10;
        v10 = 0LL;
        *(_DWORD *)(a1 + 416) = v24 & 0xFFFFF7FF | ((a6 & 1 | 0x38) << 11);
        v27 = 0;
      }
    }
LABEL_24:
    v28 = 1;
    v9 = 1;
    goto LABEL_25;
  }
  v27 = -1073741670;
  v28 = 1;
  v9 = 1;
LABEL_25:
  if ( v8 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 352), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 352));
    KeAbPostRelease(a1 + 352);
  }
  if ( v10 )
  {
    if ( v28 )
      MmUnlockPages((PMDL)v10[4]);
    v34 = (struct _MDL *)v10[4];
    if ( v34 )
      IoFreeMdl(v34);
    if ( v9 )
      AlpcpUnregisterCompletionListDatabase(v10);
    ExFreePoolWithTag(v10, 0);
  }
  return v27;
}
