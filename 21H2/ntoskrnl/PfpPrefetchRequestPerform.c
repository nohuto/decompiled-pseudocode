/*
 * XREFs of PfpPrefetchRequestPerform @ 0x140674268
 * Callers:
 *     PfpPrefetchRequest @ 0x140673EA0 (PfpPrefetchRequest.c)
 * Callees:
 *     PfpCheckPrefetchAbort @ 0x140272EDC (PfpCheckPrefetchAbort.c)
 *     KeInitializeEvent @ 0x14035E640 (KeInitializeEvent.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 *     PfpPrefetchRequestPatchOffsets @ 0x14067409C (PfpPrefetchRequestPatchOffsets.c)
 *     PfpPrefetchVolumesCleanup @ 0x14067463C (PfpPrefetchVolumesCleanup.c)
 *     PfpVolumeOpenAndVerify @ 0x1406746EC (PfpVolumeOpenAndVerify.c)
 *     PfpPrefetchSharedInitialize @ 0x140674B98 (PfpPrefetchSharedInitialize.c)
 *     PfpPrefetchSharedDeref @ 0x140675528 (PfpPrefetchSharedDeref.c)
 *     PfpPrefetchSharedStart @ 0x140675848 (PfpPrefetchSharedStart.c)
 *     PfpPrefetchSharedCleanup @ 0x140675994 (PfpPrefetchSharedCleanup.c)
 *     PfpVolumePrefetchMetadata @ 0x140675A94 (PfpVolumePrefetchMetadata.c)
 *     PfpOpenHandleClose @ 0x140677F80 (PfpOpenHandleClose.c)
 *     PfpPrefetchFilesTrickle @ 0x140678220 (PfpPrefetchFilesTrickle.c)
 *     PfpPrefetchPrivatePages @ 0x1406BE720 (PfpPrefetchPrivatePages.c)
 *     PfpPrefetchFiles @ 0x1408DF9C0 (PfpPrefetchFiles.c)
 *     PfpScenCtxPrefetchAbortSet @ 0x14099A060 (PfpScenCtxPrefetchAbortSet.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PfpPrefetchRequestPerform(__int64 a1)
{
  char PreviousMode; // r12
  PVOID PoolWithTag; // rax
  int v4; // ebx
  int v5; // r15d
  unsigned int v6; // eax
  unsigned int v7; // ebx
  PVOID v8; // rax
  unsigned int i; // edx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  bool v13; // cf
  unsigned int v14; // r14d
  int v15; // eax
  bool v16; // zf
  int v18; // eax
  int v19; // eax
  unsigned int j; // ecx
  __int64 v21; // rax
  __int64 v22; // rax
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rdx
  unsigned int k; // edi
  __int64 v27; // rcx
  struct _KEVENT Event; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v29; // [rsp+48h] [rbp-C0h]
  _QWORD v30[28]; // [rsp+58h] [rbp-B0h] BYREF

  v29 = 0LL;
  Event.Header.WaitListHead = 0LL;
  memset(&v30[1], 0, 0xD8uLL);
  v30[0] = a1;
  KeInitializeEvent((PRKEVENT)&Event.Header.WaitListHead, NotificationEvent, 0);
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  KeGetCurrentThread()->PreviousMode = 0;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x90uLL, 0x43536650u);
  v30[5] = PoolWithTag;
  if ( !PoolWithTag )
  {
    v4 = -1073741670;
    goto LABEL_28;
  }
  PfpPrefetchSharedInitialize(PoolWithTag);
  *(_QWORD *)(v30[5] + 24LL) = v30;
  if ( (*(_DWORD *)(v30[0] + 80LL) & 4) != 0 )
  {
    *(_DWORD *)(v30[5] + 60LL) = 60000;
    *(_DWORD *)(v30[5] + 56LL) = 150;
  }
  else
  {
    *(_DWORD *)(v30[5] + 60LL) = 250;
    *(_DWORD *)(v30[5] + 56LL) = 15;
  }
  v4 = PfpPrefetchSharedStart(v30[5]);
  if ( v4 >= 0 )
  {
    v5 = *(unsigned __int8 *)(v30[0] + 81LL);
    if ( *(_BYTE *)(v30[0] + 81LL) )
    {
      _InterlockedAdd(&dword_140CEC398, 1u);
      v4 = PfpScenCtxPrefetchAbortSet((ULONG_PTR)&qword_140C50320, 0);
      if ( v4 < 0 )
        goto LABEL_26;
      if ( !*(_QWORD *)(v30[0] + 72LL) )
        *(_QWORD *)(v30[0] + 72LL) = &Event.Header.WaitListHead;
    }
    v6 = *(_DWORD *)(a1 + 8) << 6;
    if ( v6 )
    {
      v7 = *(_DWORD *)(a1 + 8) << 6;
      v8 = ExAllocatePoolWithTag(PagedPool, v6, 0x48566650u);
      v30[2] = v8;
      if ( !v8 )
        goto LABEL_43;
      memset(v8, 0, v7);
      for ( i = 0; i < *(_DWORD *)(a1 + 8); *(_QWORD *)(v11 + v12 + 56) |= 0x200000000uLL )
      {
        v10 = v30[2];
        v11 = i++;
        v11 <<= 6;
        *(_OWORD *)(v11 + v30[2]) = 0LL;
        *(_OWORD *)(v11 + v10 + 16) = 0LL;
        *(_QWORD *)(v11 + v10 + 24) |= 0x200000000uLL;
        v12 = v30[2];
        *(_OWORD *)(v11 + v30[2] + 32) = 0LL;
        *(_OWORD *)(v11 + v12 + 48) = 0LL;
      }
    }
    v13 = (*(_DWORD *)(v30[0] + 80LL) & 4) != 0;
    LODWORD(v30[4]) = v13 ? 16 : 768;
    v30[3] = ExAllocatePoolWithTag(PagedPool, (-(__int64)v13 & 0xFFFFFFFFFFFFE880uLL) + 6160, 0x504D6650u);
    if ( v30[3] )
    {
      if ( (*(_DWORD *)(v30[0] + 80LL) & 4) != 0 || (v19 = *(_DWORD *)(v30[0] + 12LL)) == 0 )
      {
LABEL_12:
        PfpPrefetchRequestPatchOffsets(a1);
        if ( !*(_WORD *)(a1 + 30) && *(_WORD *)(a1 + 28) )
          *(_WORD *)(a1 + 30) = *(_WORD *)(a1 + 28) - 1;
        if ( *(_DWORD *)(a1 + 20) )
        {
          v18 = PfpPrefetchPrivatePages(v30);
          v4 = v18;
          if ( v18 == -1073741248 || v18 == -1073741670 || v18 == -1073741801 )
            goto LABEL_26;
        }
        v14 = 0;
        if ( *(_DWORD *)(a1 + 8) )
        {
          do
          {
            if ( (int)PfpVolumeOpenAndVerify(
                        v30[5],
                        v30[2] + ((unsigned __int64)v14 << 6),
                        *(_QWORD *)(a1 + 32) + 40LL * v14) >= 0 )
            {
              v4 = PfpVolumePrefetchMetadata(v30, v14);
              if ( v4 == -1073741248 )
                goto LABEL_26;
            }
          }
          while ( ++v14 < *(_DWORD *)(a1 + 8) );
        }
        if ( (*(_DWORD *)(v30[0] + 80LL) & 4) != 0 )
        {
          v15 = PfpPrefetchFilesTrickle(v30);
          v16 = v15 == -1073741248;
LABEL_22:
          v4 = v15;
          if ( !v16 && v15 != -1073741670 && v15 != -1073741801 )
            v4 = 0;
          goto LABEL_26;
        }
        v23 = PfpPrefetchFiles(v30, 0LL);
        v4 = v23;
        if ( v23 != -1073741248 && v23 != -1073741670 && v23 != -1073741801 )
        {
          if ( !PfpCheckPrefetchAbort(v30) )
          {
            LOBYTE(v24) = 1;
            v15 = PfpPrefetchFiles(v30, v24);
            v16 = v15 == -1073741248;
            goto LABEL_22;
          }
          v4 = -1073741248;
        }
LABEL_26:
        if ( v5 )
        {
          _InterlockedDecrement(&dword_140CEC398);
          PfpScenCtxPrefetchAbortSet((ULONG_PTR)&qword_140C50320, 0);
        }
        goto LABEL_28;
      }
      v30[1] = ExAllocatePoolWithTag(PagedPool, (unsigned int)(32 * v19), 0x68466650u);
      if ( v30[1] )
      {
        for ( j = 0; j < *(_DWORD *)(v30[0] + 12LL); *(_QWORD *)(v22 + 24) |= 0x200000000uLL )
        {
          v21 = 32LL * j++;
          v22 = v30[1] + v21;
          *(_OWORD *)v22 = 0LL;
          *(_OWORD *)(v22 + 16) = 0LL;
        }
        goto LABEL_12;
      }
    }
LABEL_43:
    v4 = -1073741670;
    goto LABEL_26;
  }
LABEL_28:
  if ( v30[1] )
  {
    v25 = v30[0];
    for ( k = 0; k < *(_DWORD *)(v25 + 12); ++k )
    {
      v27 = v30[1] + 32LL * k;
      if ( (*(_QWORD *)(v27 + 24) & 0x400000000LL) != 0 )
      {
        PfpOpenHandleClose(v27, v30[5]);
        v25 = v30[0];
      }
    }
    ExFreePoolWithTag((PVOID)v30[1], 0);
  }
  PfpPrefetchVolumesCleanup(v30);
  if ( v30[3] )
    ExFreePoolWithTag((PVOID)v30[3], 0);
  if ( v30[5] )
  {
    PfpPrefetchSharedCleanup();
    PfpPrefetchSharedDeref(v30[5]);
  }
  KeGetCurrentThread()->PreviousMode = PreviousMode;
  return (unsigned int)v4;
}
