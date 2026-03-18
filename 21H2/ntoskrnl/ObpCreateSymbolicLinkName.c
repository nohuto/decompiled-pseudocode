/*
 * XREFs of ObpCreateSymbolicLinkName @ 0x1406A97F0
 * Callers:
 *     ObpCreateHandle @ 0x140731DA0 (ObpCreateHandle.c)
 * Callees:
 *     ObFastReplaceObject @ 0x140276A48 (ObFastReplaceObject.c)
 *     OBP_GET_SILO_ROOT_DIRECTORY_FROM_SILO @ 0x1402A0E90 (OBP_GET_SILO_ROOT_DIRECTORY_FROM_SILO.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     NLS_UPCASE @ 0x1403477B0 (NLS_UPCASE.c)
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 *     PsGetCurrentSilo @ 0x140347D50 (PsGetCurrentSilo.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140347DB0 (PsGetCurrentServerSiloGlobals.c)
 *     ObDereferenceObjectDeferDelete @ 0x140348920 (ObDereferenceObjectDeferDelete.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     ObpUnlockDirectory @ 0x14066960C (ObpUnlockDirectory.c)
 *     ObpLockDirectoryShared @ 0x14066965C (ObpLockDirectoryShared.c)
 *     ObpLookupDirectoryEntry @ 0x1406A9B40 (ObpLookupDirectoryEntry.c)
 *     ObpParseComponentName @ 0x14080EDFC (ObpParseComponentName.c)
 *     ObpLockChildDirectory @ 0x140811430 (ObpLockChildDirectory.c)
 */

__int16 __fastcall ObpCreateSymbolicLinkName(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // rax
  int v4; // r14d
  __int64 *v5; // rcx
  _QWORD *CurrentServerSiloGlobals; // rax
  unsigned __int16 v7; // dx
  struct _LIST_ENTRY *CurrentSilo; // rax
  __int64 v9; // rsi
  char *v10; // r13
  __int64 v11; // rdx
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 v14; // rsi
  struct _OBJECT_TYPE *v15; // rax
  char v16; // di
  unsigned int v17; // eax
  __int64 v18; // r15
  struct _KTHREAD *CurrentThread; // rax
  __int64 v20; // r12
  int v21; // r15d
  void *v22; // rdi
  struct _KTHREAD *v23; // rcx
  __int128 v24; // xmm0
  bool v25; // zf
  __int128 v27; // [rsp+20h] [rbp-40h] BYREF
  __int128 v28; // [rsp+30h] [rbp-30h] BYREF
  __int128 v29; // [rsp+40h] [rbp-20h] BYREF
  __int64 v30; // [rsp+50h] [rbp-10h]
  __int64 v31; // [rsp+A0h] [rbp+40h]
  PVOID Object; // [rsp+A8h] [rbp+48h]

  v1 = a1 - 48;
  LOWORD(v2) = *(unsigned __int8 *)(a1 - 48 + 26);
  v4 = 64;
  v28 = 0LL;
  if ( (v2 & 2) != 0 )
  {
    v2 = ObpInfoMaskToOffset[v2 & 3];
    v5 = (__int64 *)(v1 - v2);
    if ( v1 != v2 )
    {
      v2 = *v5;
      if ( *(_QWORD *)(*v5 + 304) )
      {
        if ( *((_WORD *)v5 + 4) == 4 )
        {
          v2 = v5[2];
          if ( *(_WORD *)(v2 + 2) == 58 )
          {
            CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
            LOWORD(v2) = NLS_UPCASE(CurrentServerSiloGlobals[154], v7);
            if ( (unsigned __int16)(v2 - 65) <= 0x19u )
            {
              *(_DWORD *)(a1 + 24) = (unsigned __int16)v2 - 64;
              v30 = 0LL;
              v29 = 0LL;
              CurrentSilo = PsGetCurrentSilo();
              Object = OBP_GET_SILO_ROOT_DIRECTORY_FROM_SILO((__int64)CurrentSilo);
              v9 = (__int64)Object;
              ObfReferenceObject(Object);
              v27 = *(_OWORD *)(a1 + 8);
              v10 = (char *)PsGetCurrentServerSiloGlobals();
LABEL_9:
              v11 = v9;
              v12 = *(_QWORD *)(*(_QWORD *)v10 & 0xFFFFFFFFFFFFFFF0uLL);
              if ( v12 && (unsigned __int16)v27 >= 8u && **((_QWORD **)&v27 + 1) == 0x5C003F003F005CLL )
              {
                *((_QWORD *)&v27 + 1) += 8LL;
                LOWORD(v27) = v27 - 8;
                v11 = v12;
              }
              ObpLockDirectoryShared((__int64)&v29, v11);
              while ( (unsigned __int8)ObpParseComponentName(&v27, &v28) )
              {
                v13 = ObpLookupDirectoryEntry(&v28, 0LL, &v29);
                v14 = v13;
                if ( !v13 )
                  goto LABEL_18;
                v15 = (struct _OBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v13 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(v13 - 48) >> 8)];
                if ( v15 != ObpDirectoryObjectType )
                {
                  if ( v15 == ObpSymbolicLinkObjectType && !*(_DWORD *)(v14 + 24) )
                  {
                    if ( v4 )
                    {
                      --v4;
                      ObpUnlockDirectory((__int64)&v29);
                      if ( (_WORD)v27 || (*(_DWORD *)(a1 + 28) & 0xE) != 0 )
                        *(_DWORD *)(a1 + 28) &= ~0x20u;
                      v24 = *(_OWORD *)(v14 + 8);
                      v9 = (__int64)Object;
                      v27 = v24;
                      goto LABEL_9;
                    }
                    v14 = 0LL;
                  }
LABEL_18:
                  v31 = *(_QWORD *)(*(_QWORD *)(v1 - ObpInfoMaskToOffset[*(_BYTE *)(v1 + 26) & 3]) + 304LL);
                  v16 = 1;
                  if ( v14 )
                  {
                    if ( ((unsigned __int8)ObHeaderCookie ^ (unsigned __int8)(*(_BYTE *)(v14 - 24) ^ ((unsigned __int16)(v14 - 48) >> 8))) == *(_BYTE *)(IoDeviceObjectType + 40) )
                    {
                      v17 = *(_DWORD *)(v14 + 72);
                      if ( v17 > 0x13 )
                      {
                        if ( v17 == 20 )
                          goto LABEL_57;
                        if ( v17 != 36 )
                        {
                          v25 = v17 == 40;
                          goto LABEL_54;
                        }
                        v16 = 6;
                      }
                      else
                      {
                        if ( v17 < 0x12 )
                        {
                          if ( v17 < 2 )
                            goto LABEL_55;
                          if ( v17 <= 3 )
                          {
                            v16 = 5;
                            goto LABEL_27;
                          }
                          if ( v17 <= 6 )
                            goto LABEL_55;
                          if ( v17 <= 9 )
                          {
                            v16 = ((*(_DWORD *)(v14 + 52) & 1) == 0) + 2;
                            goto LABEL_27;
                          }
                          v25 = v17 == 16;
LABEL_54:
                          if ( !v25 )
                          {
LABEL_55:
                            v16 = 0;
                            goto LABEL_27;
                          }
                        }
LABEL_57:
                        v16 = 4;
                      }
                    }
                    else
                    {
                      v14 = 0LL;
                    }
                  }
LABEL_27:
                  v18 = (unsigned int)(*(_DWORD *)(a1 + 24) - 1);
                  if ( !v14 || (*(_DWORD *)(a1 + 28) & 0x20) == 0 )
                    v14 = a1;
                  ObfReferenceObject((PVOID)v14);
                  CurrentThread = KeGetCurrentThread();
                  --CurrentThread->SpecialApcDisable;
                  ExAcquirePushLockExclusiveEx((ULONG_PTR)(v10 + 120), 0LL);
                  v20 = (unsigned int)v18;
                  *(_BYTE *)(v18 + v31 + 260) = v16;
                  v21 = 1 << v18;
                  *(_DWORD *)(v31 + 256) |= v21;
                  v22 = (void *)ObFastReplaceObject((volatile __int64 *)(v31 + 32 + 8 * v20), v14);
                  if ( v31 == (*(_QWORD *)v10 & 0xFFFFFFFFFFFFFFF0uLL) )
                    *((_DWORD *)v10 + 2) |= v21;
                  else
                    ++*(_DWORD *)&v10[4 * v20 + 12];
                  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v10 + 15, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                    ExfTryToWakePushLock(v10 + 120);
                  KeAbPostRelease((ULONG_PTR)(v10 + 120));
                  v23 = KeGetCurrentThread();
                  v25 = v23->SpecialApcDisable++ == -1;
                  if ( v25 && ($CEA84C04E3712D858E5667A507841A2A *)v23->ApcState.ApcListHead[0].Flink != &v23->152 )
                    KiCheckForKernelApcDelivery();
                  if ( v22 )
                    ObDereferenceObjectDeferDelete(v22);
                  break;
                }
                ObpLockChildDirectory(&v29, v14, 0LL);
              }
              if ( (_QWORD)v29 )
                ObpUnlockDirectory((__int64)&v29);
              LOWORD(v2) = ObfDereferenceObject(Object);
            }
          }
        }
      }
    }
  }
  return v2;
}
