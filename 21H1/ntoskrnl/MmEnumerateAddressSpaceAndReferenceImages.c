/*
 * XREFs of MmEnumerateAddressSpaceAndReferenceImages @ 0x140635840
 * Callers:
 *     EtwpEnumerateAddressSpace @ 0x1406389A4 (EtwpEnumerateAddressSpace.c)
 *     EtwpCovSampEnumerateProcess @ 0x140940270 (EtwpCovSampEnumerateProcess.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x14025E290 (KiUnstackDetachProcess.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x140264380 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     MiReferenceControlAreaFile @ 0x140282C60 (MiReferenceControlAreaFile.c)
 *     MiAllocatePool @ 0x1402A0FB0 (MiAllocatePool.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x1402A4560 (LOCK_ADDRESS_SPACE_SHARED.c)
 *     MiVadDeleted @ 0x1402A4680 (MiVadDeleted.c)
 *     MiLockVadShared @ 0x1402A4694 (MiLockVadShared.c)
 *     MiUnlockVadShared @ 0x1402A5470 (MiUnlockVadShared.c)
 *     KiStackAttachProcess @ 0x1402A88C0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     MiFillMapFileInfo @ 0x1408BFC1C (MiFillMapFileInfo.c)
 */

PVOID __fastcall MmEnumerateAddressSpaceAndReferenceImages(__int64 BugCheckParameter1, char a2, __int64 a3, _DWORD *a4)
{
  int v7; // ecx
  int v8; // edx
  struct _KTHREAD *CurrentThread; // rbp
  unsigned int v10; // r15d
  PVOID v11; // r13
  __int64 v12; // rax
  unsigned __int64 v13; // rax
  PVOID Pool; // rax
  _QWORD *v15; // rcx
  unsigned __int64 *v16; // rbx
  _QWORD *i; // rdi
  _QWORD **v18; // rax
  __int64 v19; // rsi
  _QWORD *v20; // rcx
  _QWORD *v21; // rcx
  int v22; // edx
  __int64 v23; // rcx
  int v24; // r8d
  __int64 v25; // r12
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // rax
  __int64 v28; // r8
  _DWORD *v29; // r9
  __int64 v31; // rdx
  unsigned __int64 v32; // rcx
  int v33; // r8d
  int v34; // eax
  int v35; // ecx
  unsigned __int64 v36; // rcx
  __int64 v37; // rax
  unsigned __int64 v38; // rax
  int v39; // [rsp+20h] [rbp-68h]
  _OWORD v40[3]; // [rsp+28h] [rbp-60h] BYREF

  v7 = a2 & 1;
  memset(v40, 0, 32);
  v8 = v7 | 2;
  if ( (a2 & 2) == 0 )
    v8 = v7;
  v40[2] = 0LL;
  CurrentThread = KeGetCurrentThread();
  v10 = v8 | 4;
  if ( (a2 & 4) == 0 )
    v10 = v8;
  v11 = 0LL;
  if ( CurrentThread->ApcState.Process == (_KPROCESS *)BugCheckParameter1 )
  {
    v39 = 0;
  }
  else
  {
    KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0LL, (__int64)v40, a4);
    v39 = 1;
  }
  LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, BugCheckParameter1);
  v12 = *(_QWORD *)(BugCheckParameter1 + 2024);
  if ( v12 )
  {
    v13 = v12 + 1;
    if ( v13 <= 0x555555555555555LL )
    {
      Pool = MiAllocatePool(256, 48 * v13, 0x3031704Du);
      v11 = Pool;
      if ( Pool )
      {
        v15 = *(_QWORD **)(BugCheckParameter1 + 2008);
        v16 = (unsigned __int64 *)Pool;
        i = 0LL;
        while ( v15 )
        {
          i = v15;
          v15 = (_QWORD *)*v15;
        }
        while ( 1 )
        {
          while ( 1 )
          {
            if ( !i )
            {
              *v16 = 0LL;
              goto LABEL_38;
            }
            v18 = (_QWORD **)i[1];
            v19 = (__int64)i;
            v20 = i;
            if ( v18 )
            {
              v21 = *v18;
              for ( i = (_QWORD *)i[1]; v21; v21 = (_QWORD *)*v21 )
                i = v21;
            }
            else
            {
              while ( 1 )
              {
                i = (_QWORD *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL);
                if ( !i || (_QWORD *)*i == v20 )
                  break;
                v20 = i;
              }
            }
            MiLockVadShared((__int64)CurrentThread, v19);
            if ( (unsigned int)MiVadDeleted(v19) == 1 || v24 == 1 )
              goto LABEL_15;
            if ( (v22 & 0x100000) == 0 )
              break;
            if ( v10 >= 4 )
            {
              *v16 = (*(unsigned int *)(v19 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v19 + 32) << 32)) << 12;
              v16[1] = ((*(unsigned int *)(v19 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v19 + 33) << 32))
                      - (*(unsigned int *)(v19 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v19 + 32) << 32))
                      + 1) << 12;
              v31 = *(unsigned int *)(v19 + 52);
              LODWORD(v31) = v31 & 0x7FFFFFFF;
              if ( (v31 | ((unsigned __int64)*(unsigned __int8 *)(v19 + 34) << 31)) < 0x7FFFFFFFDLL )
                v32 = (v31 | ((unsigned __int64)*(unsigned __int8 *)(v19 + 34) << 31)) << 12;
              else
                v32 = 0LL;
              v16[3] = v32;
              *((_DWORD *)v16 + 4) = *(_DWORD *)(BugCheckParameter1 + 1088);
              *((_DWORD *)v16 + 5) = 0x2000;
              v33 = v24 - 3;
              if ( v33 )
              {
                if ( v33 == 1 )
                {
                  *((_DWORD *)v16 + 5) = 8396800;
                  v35 = 8396800;
                }
                else
                {
                  v34 = *(_DWORD *)(v19 + 48);
                  v35 = 0x2000;
                  if ( (v34 & 0x100000) != 0 && ((v34 & 0x400000) != 0 || (v34 & 0xC0000u) >= 0x80000) )
                  {
                    *((_DWORD *)v16 + 5) = 536879104;
                    v35 = 536879104;
                  }
                }
              }
              else if ( (*(_DWORD *)(v19 + 48) & 0x3100000) == 0x2100000 )
              {
                v35 = 0x2000;
              }
              else
              {
                *((_DWORD *)v16 + 5) = 4202496;
                v35 = 4202496;
              }
              if ( (*(_DWORD *)(v19 + 48) & 0x300000) == 0x300000 )
                *((_DWORD *)v16 + 5) = v35 | 0x200000;
              v38 = *v16 & 0xFFFFFFFFFFFFFFFCuLL | 2;
              goto LABEL_58;
            }
LABEL_15:
            MiUnlockVadShared((__int64)CurrentThread, v19);
          }
          if ( v24 != 2 || (v22 & 0xF80) != 0x380 || (v10 & 1) == 0 )
          {
            if ( (v10 & 2) != 0 )
            {
              MiFillMapFileInfo(v23, v16);
              v38 = *v16 & 0xFFFFFFFFFFFFFFFCuLL | 1;
LABEL_58:
              *v16 = v38;
              goto LABEL_33;
            }
            goto LABEL_15;
          }
          v25 = **(_QWORD **)(v19 + 72);
          *v16 = MiReferenceControlAreaFile(v25);
          v16[1] = (*(unsigned int *)(v19 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v19 + 32) << 32)) << 12;
          v16[2] = *(_QWORD *)(*(_QWORD *)v25 + 32LL);
          v16[3] = ((*(unsigned int *)(v19 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v19 + 33) << 32))
                  - (*(unsigned int *)(v19 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v19 + 32) << 32))
                  + 1) << 12;
          *((_DWORD *)v16 + 10) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v25 + 56LL) + 60LL);
          if ( (*(_DWORD *)(v19 + 64) & 0x8000000) != 0 )
          {
            v27 = v16[1] & 0xFFFFFFFFFFFFE03FuLL;
          }
          else
          {
            v26 = v16[1] & 0xFFFFFFFFFFFFFC3FuLL | (4LL * (*(_BYTE *)(*(_QWORD *)v25 + 15LL) & 0xF0));
            v16[1] = v26;
            v27 = v26 ^ ((unsigned __int16)v26 ^ (unsigned __int16)(*(unsigned __int8 *)(*(_QWORD *)v25 + 15LL) << 9)) & 0x1C00;
          }
          v16[1] = v27;
          if ( (v10 & 2) != 0 )
          {
            v36 = HIBYTE(*(_DWORD *)(v19 + 64)) & 1 | v16[1] & 0xFFFFFFFFFFFFFFFEuLL;
            v16[1] = v36;
            v16[1] = v36 ^ ((unsigned __int8)v36 ^ (unsigned __int8)((unsigned __int64)*(unsigned int *)(v19 + 48) >> 6)) & 0x3E;
            v37 = *(unsigned int *)(v19 + 52);
            LODWORD(v37) = v37 & 0x7FFFFFFF;
            v16[4] = (v37 | ((unsigned __int64)*(unsigned __int8 *)(v19 + 34) << 31)) << 12;
          }
LABEL_33:
          MiUnlockVadShared((__int64)CurrentThread, v19);
          v16 += 6;
        }
      }
    }
  }
LABEL_38:
  UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, BugCheckParameter1);
  if ( v39 == 1 )
    KiUnstackDetachProcess((__int64)v40, 0LL, v28, v29);
  return v11;
}
