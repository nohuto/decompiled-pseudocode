/*
 * XREFs of MmEnumerateAddressSpaceAndReferenceImages @ 0x140688200
 * Callers:
 *     EtwpEnumerateAddressSpace @ 0x1406840BC (EtwpEnumerateAddressSpace.c)
 *     EtwpCovSampEnumerateProcess @ 0x140944C50 (EtwpCovSampEnumerateProcess.c)
 * Callees:
 *     MiAllocatePool @ 0x14027C2E0 (MiAllocatePool.c)
 *     MiUnlockVadShared @ 0x14027C67C (MiUnlockVadShared.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x14027C780 (LOCK_ADDRESS_SPACE_SHARED.c)
 *     MiVadDeleted @ 0x14027C8A0 (MiVadDeleted.c)
 *     MiLockVadShared @ 0x14027C8B4 (MiLockVadShared.c)
 *     KiStackAttachProcess @ 0x14027D850 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1402AB900 (KiUnstackDetachProcess.c)
 *     MiReferenceControlAreaFile @ 0x140327C00 (MiReferenceControlAreaFile.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x1403534E0 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     MiFillMapFileInfo @ 0x1408C46CC (MiFillMapFileInfo.c)
 */

PVOID __fastcall MmEnumerateAddressSpaceAndReferenceImages(__int64 BugCheckParameter1, char a2)
{
  int v5; // ecx
  int v6; // edx
  struct _KTHREAD *CurrentThread; // rbp
  unsigned int v8; // r15d
  PVOID v9; // r13
  __int64 v10; // rax
  unsigned __int64 v11; // rax
  PVOID Pool; // rax
  _QWORD *v13; // rcx
  unsigned __int64 *v14; // rbx
  _QWORD *i; // rdi
  _QWORD **v16; // rax
  __int64 v17; // rsi
  _QWORD *v18; // rcx
  _QWORD *v19; // rcx
  int v20; // edx
  __int64 v21; // rcx
  int v22; // r8d
  __int64 v23; // r12
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // rax
  __int64 v27; // rdx
  unsigned __int64 v28; // rcx
  int v29; // r8d
  int v30; // eax
  int v31; // ecx
  unsigned __int64 v32; // rcx
  __int64 v33; // rax
  unsigned __int64 v34; // rax
  int v35; // [rsp+20h] [rbp-68h]
  _OWORD v36[3]; // [rsp+28h] [rbp-60h] BYREF

  v5 = a2 & 1;
  memset(v36, 0, 32);
  v6 = v5 | 2;
  if ( (a2 & 2) == 0 )
    v6 = v5;
  v36[2] = 0LL;
  CurrentThread = KeGetCurrentThread();
  v8 = v6 | 4;
  if ( (a2 & 4) == 0 )
    v8 = v6;
  v9 = 0LL;
  if ( CurrentThread->ApcState.Process == (_KPROCESS *)BugCheckParameter1 )
  {
    v35 = 0;
  }
  else
  {
    KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v36);
    v35 = 1;
  }
  LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, BugCheckParameter1);
  v10 = *(_QWORD *)(BugCheckParameter1 + 2024);
  if ( v10 )
  {
    v11 = v10 + 1;
    if ( v11 <= 0x555555555555555LL )
    {
      Pool = MiAllocatePool(256, 48 * v11, 0x3031704Du);
      v9 = Pool;
      if ( Pool )
      {
        v13 = *(_QWORD **)(BugCheckParameter1 + 2008);
        v14 = (unsigned __int64 *)Pool;
        i = 0LL;
        while ( v13 )
        {
          i = v13;
          v13 = (_QWORD *)*v13;
        }
        while ( 1 )
        {
          while ( 1 )
          {
            if ( !i )
            {
              *v14 = 0LL;
              goto LABEL_38;
            }
            v16 = (_QWORD **)i[1];
            v17 = (__int64)i;
            v18 = i;
            if ( v16 )
            {
              v19 = *v16;
              for ( i = (_QWORD *)i[1]; v19; v19 = (_QWORD *)*v19 )
                i = v19;
            }
            else
            {
              while ( 1 )
              {
                i = (_QWORD *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL);
                if ( !i || (_QWORD *)*i == v18 )
                  break;
                v18 = i;
              }
            }
            MiLockVadShared((__int64)CurrentThread, v17);
            if ( (unsigned int)MiVadDeleted(v17) == 1 || v22 == 1 )
              goto LABEL_15;
            if ( (v20 & 0x100000) == 0 )
              break;
            if ( v8 >= 4 )
            {
              *v14 = (*(unsigned int *)(v17 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v17 + 32) << 32)) << 12;
              v14[1] = ((*(unsigned int *)(v17 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v17 + 33) << 32))
                      - (*(unsigned int *)(v17 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v17 + 32) << 32))
                      + 1) << 12;
              v27 = *(unsigned int *)(v17 + 52);
              LODWORD(v27) = v27 & 0x7FFFFFFF;
              if ( (v27 | ((unsigned __int64)*(unsigned __int8 *)(v17 + 34) << 31)) < 0x7FFFFFFFDLL )
                v28 = (v27 | ((unsigned __int64)*(unsigned __int8 *)(v17 + 34) << 31)) << 12;
              else
                v28 = 0LL;
              v14[3] = v28;
              *((_DWORD *)v14 + 4) = *(_DWORD *)(BugCheckParameter1 + 1088);
              *((_DWORD *)v14 + 5) = 0x2000;
              v29 = v22 - 3;
              if ( v29 )
              {
                if ( v29 == 1 )
                {
                  *((_DWORD *)v14 + 5) = 8396800;
                  v31 = 8396800;
                }
                else
                {
                  v30 = *(_DWORD *)(v17 + 48);
                  v31 = 0x2000;
                  if ( (v30 & 0x100000) != 0 && ((v30 & 0x400000) != 0 || (v30 & 0xC0000u) >= 0x80000) )
                  {
                    *((_DWORD *)v14 + 5) = 536879104;
                    v31 = 536879104;
                  }
                }
              }
              else if ( (*(_DWORD *)(v17 + 48) & 0x3100000) == 0x2100000 )
              {
                v31 = 0x2000;
              }
              else
              {
                *((_DWORD *)v14 + 5) = 4202496;
                v31 = 4202496;
              }
              if ( (*(_DWORD *)(v17 + 48) & 0x300000) == 0x300000 )
                *((_DWORD *)v14 + 5) = v31 | 0x200000;
              v34 = *v14 & 0xFFFFFFFFFFFFFFFCuLL | 2;
              goto LABEL_58;
            }
LABEL_15:
            MiUnlockVadShared((__int64)CurrentThread, v17);
          }
          if ( v22 != 2 || (v20 & 0xF80) != 0x380 || (v8 & 1) == 0 )
          {
            if ( (v8 & 2) != 0 )
            {
              MiFillMapFileInfo(v21, v14);
              v34 = *v14 & 0xFFFFFFFFFFFFFFFCuLL | 1;
LABEL_58:
              *v14 = v34;
              goto LABEL_33;
            }
            goto LABEL_15;
          }
          v23 = **(_QWORD **)(v17 + 72);
          *v14 = MiReferenceControlAreaFile(v23);
          v14[1] = (*(unsigned int *)(v17 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v17 + 32) << 32)) << 12;
          v14[2] = *(_QWORD *)(*(_QWORD *)v23 + 32LL);
          v14[3] = ((*(unsigned int *)(v17 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v17 + 33) << 32))
                  - (*(unsigned int *)(v17 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v17 + 32) << 32))
                  + 1) << 12;
          *((_DWORD *)v14 + 10) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v23 + 56LL) + 60LL);
          if ( (*(_DWORD *)(v17 + 64) & 0x8000000) != 0 )
          {
            v25 = v14[1] & 0xFFFFFFFFFFFFE03FuLL;
          }
          else
          {
            v24 = v14[1] & 0xFFFFFFFFFFFFFC3FuLL | (4LL * (*(_BYTE *)(*(_QWORD *)v23 + 15LL) & 0xF0));
            v14[1] = v24;
            v25 = v24 ^ ((unsigned __int16)v24 ^ (unsigned __int16)(*(unsigned __int8 *)(*(_QWORD *)v23 + 15LL) << 9)) & 0x1C00;
          }
          v14[1] = v25;
          if ( (v8 & 2) != 0 )
          {
            v32 = HIBYTE(*(_DWORD *)(v17 + 64)) & 1 | v14[1] & 0xFFFFFFFFFFFFFFFEuLL;
            v14[1] = v32;
            v14[1] = v32 ^ ((unsigned __int8)v32 ^ (unsigned __int8)((unsigned __int64)*(unsigned int *)(v17 + 48) >> 6)) & 0x3E;
            v33 = *(unsigned int *)(v17 + 52);
            LODWORD(v33) = v33 & 0x7FFFFFFF;
            v14[4] = (v33 | ((unsigned __int64)*(unsigned __int8 *)(v17 + 34) << 31)) << 12;
          }
LABEL_33:
          MiUnlockVadShared((__int64)CurrentThread, v17);
          v14 += 6;
        }
      }
    }
  }
LABEL_38:
  UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, BugCheckParameter1);
  if ( v35 == 1 )
    KiUnstackDetachProcess((__int64)v36, 0LL);
  return v9;
}
