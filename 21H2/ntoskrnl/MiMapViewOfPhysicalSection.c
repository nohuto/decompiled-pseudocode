/*
 * XREFs of MiMapViewOfPhysicalSection @ 0x1407C3128
 * Callers:
 *     MiMapViewOfSection @ 0x140702E10 (MiMapViewOfSection.c)
 * Callees:
 *     MiReferenceIoPages @ 0x1402176E4 (MiReferenceIoPages.c)
 *     MiSanitizePage @ 0x140217B28 (MiSanitizePage.c)
 *     MiDereferenceIoPages @ 0x1402183E8 (MiDereferenceIoPages.c)
 *     MiAllocatePool @ 0x14027C2E0 (MiAllocatePool.c)
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x14027C398 (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     MiIsProcessCfgEnabled @ 0x14027C590 (MiIsProcessCfgEnabled.c)
 *     MiReferenceVad @ 0x14027C900 (MiReferenceVad.c)
 *     MiDeleteVad @ 0x1402C08F0 (MiDeleteVad.c)
 *     MiUnlockVad @ 0x14031F3A8 (MiUnlockVad.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x14031F5B0 (UNLOCK_ADDRESS_SPACE.c)
 *     LOCK_ADDRESS_SPACE @ 0x14031FFDC (LOCK_ADDRESS_SPACE.c)
 *     MiLockVad @ 0x1403214A8 (MiLockVad.c)
 *     MiIsPfn @ 0x140353EA0 (MiIsPfn.c)
 *     MiInsertViewOfPhysicalSection @ 0x1403C6F68 (MiInsertViewOfPhysicalSection.c)
 *     MiCommitVadCfgBits @ 0x14068592C (MiCommitVadCfgBits.c)
 *     MiIsVaRangeAvailable @ 0x140687848 (MiIsVaRangeAvailable.c)
 *     MiSelectUserAddress @ 0x1406EA100 (MiSelectUserAddress.c)
 *     MiInsertVadCharges @ 0x140704050 (MiInsertVadCharges.c)
 *     MiAdvanceVadHint @ 0x140704340 (MiAdvanceVadHint.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiMapViewOfPhysicalSection(__int64 a1, unsigned __int64 *a2, _QWORD *a3, unsigned int a4, char *a5)
{
  char v5; // r14
  __int64 v8; // r15
  unsigned int v9; // r13d
  struct _KTHREAD *CurrentThread; // rbp
  _QWORD *Pool; // rax
  __int64 v12; // rbx
  unsigned int v13; // eax
  __int64 v14; // rax
  ULONG_PTR v15; // rdi
  __int64 v16; // rcx
  int inserted; // ebp
  unsigned __int64 v18; // r10
  unsigned __int64 v19; // r12
  unsigned __int64 v20; // r11
  unsigned __int64 v21; // r11
  int v22; // ebp
  unsigned __int64 v23; // r10
  __int64 v24; // rsi
  unsigned __int64 v25; // r13
  int IsPfn; // edx
  __int64 v27; // rcx
  __int64 v28; // rax
  unsigned __int64 v30; // rax
  __int64 v31; // r14
  ULONG_PTR v32; // rsi
  int v33; // eax
  __int64 v34; // rcx
  int v35; // esi
  __int64 v36; // [rsp+50h] [rbp-78h]
  __int64 v37; // [rsp+58h] [rbp-70h]
  unsigned __int64 v38; // [rsp+60h] [rbp-68h]
  unsigned __int64 v39; // [rsp+60h] [rbp-68h]
  unsigned __int64 v40; // [rsp+68h] [rbp-60h]
  _QWORD *v41; // [rsp+70h] [rbp-58h] BYREF
  unsigned __int64 v42; // [rsp+78h] [rbp-50h]
  unsigned __int64 v43; // [rsp+80h] [rbp-48h]
  __int64 v44; // [rsp+D0h] [rbp+8h] BYREF
  unsigned __int64 *v45; // [rsp+D8h] [rbp+10h]
  _DWORD *v46; // [rsp+E0h] [rbp+18h]

  v46 = a3;
  v45 = a2;
  v5 = a4;
  if ( (*(_DWORD *)(a1 + 60) & 2) != 0 || *(_QWORD *)(a1 + 80) )
    return 3221225485LL;
  v8 = *(_QWORD *)(a1 + 88);
  v9 = a4 >> 3;
  if ( a4 >> 3 == 2 || (a4 & 5) == 5 || a4 == 24 )
    return 3221225541LL;
  CurrentThread = KeGetCurrentThread();
  v41 = 0LL;
  v37 = (__int64)CurrentThread;
  Pool = MiAllocatePool(64, 0x40uLL, 0x6C646156u);
  v12 = (__int64)Pool;
  if ( !Pool )
    return 3221225626LL;
  Pool[2] = -2LL;
  v13 = Pool[6] & 0xFFFFF01F;
  *(_QWORD *)(v12 + 40) = 0LL;
  *(_DWORD *)(v12 + 48) = v13 | ((v5 & 0x1F) << 7) | 0x100010;
  v14 = MiSanitizePage(*a3 >> 12);
  v44 = 0LL;
  v40 = -1LL;
  v15 = v14;
  LOCK_ADDRESS_SPACE((__int64)CurrentThread, v8);
  if ( (*(_DWORD *)(v8 + 1124) & 0x20) != 0 )
  {
    inserted = -1073741558;
  }
  else
  {
    v16 = (unsigned __int16)*(_DWORD *)a3;
    if ( (*(_DWORD *)(a1 + 72) & 1) != 0 )
    {
      v19 = v16 + *v45;
      if ( MiIsVaRangeAvailable(v8, v19, *(_QWORD *)(a1 + 24), *(_QWORD *)a1, *(_QWORD *)(a1 + 8)) )
      {
LABEL_11:
        v21 = v20 >> 12;
        v22 = 1;
        v23 = v18 >> 12;
        *(_BYTE *)(v12 + 33) = BYTE4(v23);
        *(_BYTE *)(v12 + 32) = BYTE4(v21);
        v43 = v21;
        v42 = v23;
        *(_DWORD *)(v12 + 24) = v21;
        *(_DWORD *)(v12 + 28) = v23;
        v39 = v15
            + ((unsigned int)v23 | ((unsigned __int64)BYTE4(v23) << 32))
            - ((unsigned int)v21 | ((unsigned __int64)BYTE4(v21) << 32));
        LODWORD(v44) = 1;
        if ( v9 == 3 )
        {
          if ( (v5 & 7) == 0 )
          {
LABEL_14:
            v36 = -1LL;
            v24 = 0LL;
            v25 = v15;
            if ( v15 <= v15
                      + ((unsigned int)v23 | ((unsigned __int64)BYTE4(v23) << 32))
                      - ((unsigned int)v21 | ((unsigned __int64)BYTE4(v21) << 32)) )
            {
              do
              {
                IsPfn = MiIsPfn(v25);
                if ( IsPfn )
                {
                  v28 = v36;
                }
                else
                {
                  v27 = v25;
                  if ( v24 )
                    v27 = v36;
                  ++v24;
                  v28 = v27;
                  v36 = v27;
                }
                if ( (v25 == v39 || IsPfn == 1) && v24 )
                {
                  inserted = MiReferenceIoPages(1u, v28, v24, v22, 0LL, 0LL);
                  if ( inserted < 0 )
                    goto LABEL_39;
                  v30 = v24 + v36 - 1;
                  v24 = 0LL;
                  v36 = -1LL;
                  v40 = v30;
                }
                v22 = v44;
                ++v25;
              }
              while ( v25 <= v39 );
            }
            inserted = MiInsertVadCharges(v12, (struct _KPROCESS *)v8);
            if ( inserted >= 0 )
            {
              MiInsertViewOfPhysicalSection(v8, v12, v15);
              if ( v41 )
                MiAdvanceVadHint(v43, v42, v41);
              if ( (v5 & 2) != 0 && MiIsProcessCfgEnabled() )
              {
                MiLockVad(v37, v12);
                UNLOCK_ADDRESS_SPACE_UNORDERED(v37, v8);
                v35 = MiCommitVadCfgBits(v12, 0LL, a5);
                if ( v35 < 0 )
                {
                  MiReferenceVad(v12);
                  MiDeleteVad((_DWORD *)v12, 0LL, 0);
                  return (unsigned int)v35;
                }
                MiUnlockVad(v37, v12);
              }
              else
              {
                UNLOCK_ADDRESS_SPACE(v37, v8);
              }
              *v45 = v19;
              return 0LL;
            }
            goto LABEL_39;
          }
          v22 = 2;
        }
        else
        {
          v22 = v9 != 1;
        }
        LODWORD(v44) = v22;
        goto LABEL_14;
      }
      inserted = -1073741800;
    }
    else
    {
      v38 = *(_QWORD *)(a1 + 24) + v16;
      inserted = MiSelectUserAddress(
                   *(_DWORD *)(a1 + 40),
                   *(_QWORD *)a1,
                   *(_QWORD *)(a1 + 8),
                   v38,
                   *(_QWORD *)(a1 + 16),
                   0LL,
                   v5,
                   0,
                   (__int64 *)&v41,
                   &v44);
      if ( inserted >= 0 )
      {
        v18 = v44 + v38 - 1;
        v19 = (unsigned __int16)*v46 + v44;
        v20 = v19;
        goto LABEL_11;
      }
    }
  }
LABEL_39:
  UNLOCK_ADDRESS_SPACE(v37, v8);
  if ( v40 != -1LL )
  {
    v31 = -1LL;
    v32 = 0LL;
    while ( v15 <= v40 )
    {
      v33 = MiIsPfn(v15);
      if ( !v33 )
      {
        v34 = v15;
        if ( v32 )
          v34 = v31;
        ++v32;
        v31 = v34;
      }
      if ( (v33 == 1 || v15 == v40) && v32 )
      {
        MiDereferenceIoPages(1, v31, v32);
        v31 = -1LL;
        v32 = 0LL;
      }
      ++v15;
    }
  }
  ExFreePoolWithTag((PVOID)v12, 0);
  return (unsigned int)inserted;
}
