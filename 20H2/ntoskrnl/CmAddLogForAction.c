/*
 * XREFs of CmAddLogForAction @ 0x1406D1718
 * Callers:
 *     CmpSetSecurityDescriptorInfo @ 0x1405E0E88 (CmpSetSecurityDescriptorInfo.c)
 *     CmDeleteValueKey @ 0x14066C6F4 (CmDeleteValueKey.c)
 *     CmSetValueKey @ 0x14066E7B0 (CmSetValueKey.c)
 *     CmDeleteKey @ 0x1407022EC (CmDeleteKey.c)
 *     CmpCreateChild @ 0x140704B98 (CmpCreateChild.c)
 *     CmRenameKey @ 0x14086ED6C (CmRenameKey.c)
 *     CmSetKeyFlags @ 0x14087047C (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x140870938 (CmSetLastWriteTimeKey.c)
 * Callees:
 *     CmpFreeTransientPoolWithTag @ 0x140268308 (CmpFreeTransientPoolWithTag.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     memmove @ 0x140411040 (memmove.c)
 *     memset @ 0x140411300 (memset.c)
 *     CmpConstructNameWithStatus @ 0x140675D10 (CmpConstructNameWithStatus.c)
 *     CmpGetValueData @ 0x14067B060 (CmpGetValueData.c)
 *     CmpCopyCompressedName @ 0x140703E94 (CmpCopyCompressedName.c)
 *     CmpTransWriteLog @ 0x14075F508 (CmpTransWriteLog.c)
 *     HvBufferCheckSum @ 0x14075F7F8 (HvBufferCheckSum.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmAddLogForAction(__int64 a1, ULONG a2)
{
  _DWORD *v3; // rdi
  unsigned int v4; // r13d
  __int64 v5; // rdx
  unsigned int v6; // r12d
  int v7; // eax
  __int64 v8; // rcx
  const void **v9; // r14
  int v10; // eax
  unsigned int v11; // ebx
  int v12; // ebx
  bool v13; // cc
  __int64 v14; // rcx
  __int64 (__fastcall *v15)(__int64, _QWORD, _DWORD *); // rax
  __int64 v16; // rax
  __int64 v17; // r15
  unsigned __int16 v18; // cx
  unsigned int v19; // r15d
  unsigned int v20; // eax
  unsigned int v21; // ebx
  _DWORD *PoolWithTag; // rax
  int v23; // ecx
  int v24; // eax
  char *v25; // rbx
  size_t v26; // r8
  void *v27; // rdx
  char *v28; // rcx
  bool v29; // zf
  __int64 v30; // rdx
  BOOLEAN v31; // al
  __int64 v32; // r13
  int v33; // ebx
  CLFS_INFORMATION *v34; // rax
  CLFS_INFORMATION *v35; // r15
  int v37; // ebx
  char *v38; // rcx
  __int64 v39; // rdx
  size_t v40; // r8
  unsigned int v41; // edx
  __int64 v42; // rax
  unsigned __int16 v43; // cx
  __int64 v44; // r8
  char *v45; // rcx
  __int16 v46; // ax
  _DWORD v47[2]; // [rsp+40h] [rbp-29h] BYREF
  void *Src; // [rsp+48h] [rbp-21h] BYREF
  __int64 v49; // [rsp+50h] [rbp-19h] BYREF
  __int64 v50; // [rsp+58h] [rbp-11h]
  _DWORD v51[2]; // [rsp+60h] [rbp-9h] BYREF
  CLFS_LSN plsnFinish; // [rsp+68h] [rbp-1h] BYREF
  int v53[20]; // [rsp+70h] [rbp+7h]
  unsigned int v54; // [rsp+D0h] [rbp+67h]
  ULONG pcbInfoBuffer; // [rsp+D8h] [rbp+6Fh] BYREF
  size_t Size; // [rsp+E0h] [rbp+77h] BYREF
  __int64 v57; // [rsp+E8h] [rbp+7Fh]

  pcbInfoBuffer = a2;
  v47[1] = 0;
  v51[1] = 0;
  v47[0] = -1;
  v3 = 0LL;
  v51[0] = -1;
  v4 = 0;
  v5 = *(_QWORD *)(a1 + 56);
  v6 = 0;
  plsnFinish.ullOffset = 0LL;
  v57 = 0LL;
  v54 = -1;
  v7 = *(_DWORD *)(v5 + 48);
  LODWORD(Size) = 0;
  v50 = 0LL;
  pcbInfoBuffer = 0;
  if ( (v7 & 0x80u) != 0 )
    return 0LL;
  v8 = *(_QWORD *)(a1 + 48);
  *(_QWORD *)v53 = *(_QWORD *)(*(_QWORD *)(v8 + 32) + 4192LL);
  if ( !*(_QWORD *)(*(_QWORD *)v53 + 96LL) || !*(_QWORD *)(v5 + 56) || *(_DWORD *)(a1 + 68) == 13 )
    return 0LL;
  v49 = 0LL;
  CmpConstructNameWithStatus(v8, &v49);
  v9 = (const void **)v49;
  if ( v49 )
  {
    v10 = *(_DWORD *)(a1 + 68);
    v11 = 0;
    if ( !v10 || v10 == 2 )
    {
      v37 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 88LL) + 24LL);
    }
    else
    {
      if ( v10 <= 3 )
        goto LABEL_19;
      if ( v10 <= 6 )
      {
        v12 = 80;
        v13 = (unsigned int)(v10 - 4) <= 1;
        v14 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 32LL);
        v15 = *(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(v14 + 8);
        if ( v13 )
        {
          v54 = *(_DWORD *)(a1 + 92);
          v16 = v15(v14, v54, v47);
          v57 = v16;
          v17 = v16;
          if ( v16 )
          {
            v4 = *(_DWORD *)(v16 + 4);
            if ( v4 >= 0x80000000 )
              v4 += 0x80000000;
            v12 = v4 + 80;
            LODWORD(Size) = v4;
            if ( v4 >= 0xFFFFFFB0 )
            {
              v33 = -1073741675;
LABEL_41:
              if ( v17 )
                (*(void (__fastcall **)(_QWORD, _DWORD *))(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 32LL) + 16LL))(
                  *(_QWORD *)(*(_QWORD *)(a1 + 48) + 32LL),
                  v47);
              if ( v3 )
                ExFreePoolWithTag(v3, 0);
              goto LABEL_45;
            }
            goto LABEL_15;
          }
        }
        else
        {
          v54 = *(_DWORD *)(a1 + 88);
          v57 = v15(v14, v54, v47);
          v17 = v57;
          if ( v57 )
          {
LABEL_15:
            v18 = *(_WORD *)(v17 + 2);
            if ( (*(_BYTE *)(v17 + 16) & 1) != 0 )
              v18 *= 2;
            v6 = v18;
            v19 = v12;
            v11 = v18 + v12;
            goto LABEL_18;
          }
        }
LABEL_69:
        v33 = -1073741670;
LABEL_45:
        CmpFreeTransientPoolWithTag(v9, 0x624E4D43u);
        return (unsigned int)v33;
      }
      if ( v10 != 9 )
      {
        if ( v10 == 7 || v10 == 8 )
        {
          v11 = 56;
          goto LABEL_19;
        }
        if ( v10 != 11 )
          goto LABEL_19;
        v19 = 64;
        v42 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _DWORD *))(*(_QWORD *)(*(_QWORD *)(a1 + 88) + 32LL) + 8LL))(
                *(_QWORD *)(*(_QWORD *)(a1 + 88) + 32LL),
                *(unsigned int *)(*(_QWORD *)(a1 + 88) + 40LL),
                v51);
        v50 = v42;
        if ( v42 )
        {
          v43 = *(_WORD *)(v42 + 72);
          if ( (*(_BYTE *)(v42 + 2) & 0x20) != 0 )
            v43 *= 2;
          pcbInfoBuffer = v43;
          v11 = v43 + 64;
LABEL_18:
          if ( v11 < v19 )
          {
            v33 = -1073741675;
            goto LABEL_38;
          }
LABEL_19:
          v20 = *(unsigned __int16 *)v9;
          v21 = v20 + v11;
          if ( v21 < v20 )
          {
            v33 = -1073741562;
          }
          else
          {
            PoolWithTag = ExAllocatePoolWithTag(PagedPool, v21, 0x20204D43u);
            v3 = PoolWithTag;
            if ( PoolWithTag )
            {
              memset(PoolWithTag, 0, v21);
              v3[1] = v21;
              v3[2] = 1;
              *((_OWORD *)v3 + 1) = *(_OWORD *)(*(_QWORD *)(a1 + 56) + 88LL);
              *((_WORD *)v3 + 16) = *(_WORD *)v9;
              *((_WORD *)v3 + 17) = *((_WORD *)v9 + 1);
              v23 = *(_DWORD *)(a1 + 68);
              if ( !v23 || v23 == 2 )
              {
                v3[3] = (v23 != 0) + 1;
                v3[12] = *(_DWORD *)(a1 + 72);
                *((_QWORD *)v3 + 5) = v3 + 16;
                memmove(v3 + 16, v9[1], *(unsigned __int16 *)v9);
                v38 = (char *)v3 + *(unsigned __int16 *)v9 + 64;
                *((_QWORD *)v3 + 7) = v38;
                v39 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 88LL);
                v40 = *(unsigned int *)(v39 + 24);
              }
              else
              {
                if ( v23 <= 3 )
                  goto LABEL_33;
                if ( v23 <= 6 )
                {
                  v49 = 0xFFFFFFFFLL;
                  v24 = 0;
                  Src = 0LL;
                  LOBYTE(pcbInfoBuffer) = 0;
                  if ( v23 == 4 )
                  {
                    v3[3] = 3;
                  }
                  else
                  {
                    LOBYTE(v24) = v23 != 5;
                    v3[3] = v24 + 4;
                  }
                  v17 = v57;
                  v3[16] = *(_DWORD *)(v57 + 12);
                  *((_QWORD *)v3 + 5) = v3 + 20;
                  memmove(v3 + 20, v9[1], *(unsigned __int16 *)v9);
                  v25 = (char *)v3 + *(unsigned __int16 *)v9 + 80;
                  *((_QWORD *)v3 + 7) = v25;
                  if ( (*(_BYTE *)(v17 + 16) & 1) != 0 )
                    CmpCopyCompressedName(v25, v6, v17 + 20);
                  else
                    memmove(v25, (const void *)(v17 + 20), v6);
                  *((_QWORD *)v3 + 7) = 0LL;
                  *((_WORD *)v3 + 25) = v6;
                  *((_WORD *)v3 + 24) = v6;
                  if ( *(_DWORD *)(a1 + 68) == 6 )
                  {
                    v3[17] = 0;
                    *((_QWORD *)v3 + 9) = 0LL;
                  }
                  else
                  {
                    v3[17] = v4;
                    if ( !CmpGetValueData(
                            *(_QWORD *)(*(_QWORD *)(a1 + 48) + 32LL),
                            v54,
                            v17,
                            (unsigned int *)&Size,
                            (__int64)&Src,
                            (__int64)&pcbInfoBuffer,
                            (__int64)&v49) )
                    {
                      v33 = -1073741670;
LABEL_39:
                      if ( v50 )
                        (*(void (__fastcall **)(_QWORD, _DWORD *))(*(_QWORD *)(*(_QWORD *)(a1 + 88) + 32LL) + 16LL))(
                          *(_QWORD *)(*(_QWORD *)(a1 + 88) + 32LL),
                          v51);
                      goto LABEL_41;
                    }
                    v26 = (unsigned int)Size;
                    v27 = Src;
                    v28 = &v25[v6];
                    *((_QWORD *)v3 + 9) = v28;
                    memmove(v28, v27, v26);
                    v29 = (_BYTE)pcbInfoBuffer == 1;
                    *((_QWORD *)v3 + 9) = 0LL;
                    if ( v29 )
                      ExFreePoolWithTag(Src, 0);
                    else
                      (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 32LL) + 16LL))(
                        *(_QWORD *)(*(_QWORD *)(a1 + 48) + 32LL),
                        &v49);
                  }
                  goto LABEL_33;
                }
                if ( v23 != 9 )
                {
                  switch ( v23 )
                  {
                    case 7:
                      v3[3] = 6;
                      *((_QWORD *)v3 + 5) = v3 + 14;
                      memmove(v3 + 14, v9[1], *(unsigned __int16 *)v9);
                      v3[12] = *(_DWORD *)(a1 + 88);
                      break;
                    case 8:
                      v3[3] = 7;
                      *((_QWORD *)v3 + 5) = v3 + 14;
                      memmove(v3 + 14, v9[1], *(unsigned __int16 *)v9);
                      *((_QWORD *)v3 + 6) = *(_QWORD *)(a1 + 88);
                      break;
                    case 11:
                      v3[3] = 9;
                      *((_QWORD *)v3 + 5) = v3 + 16;
                      memmove(v3 + 16, v9[1], *(unsigned __int16 *)v9);
                      v44 = v50;
                      v45 = (char *)v3 + *(unsigned __int16 *)v9 + 64;
                      *((_QWORD *)v3 + 7) = v45;
                      if ( (*(_BYTE *)(v44 + 2) & 0x20) != 0 )
                        CmpCopyCompressedName(v45, pcbInfoBuffer, v44 + 76);
                      else
                        memmove(v45, (const void *)(v44 + 76), pcbInfoBuffer);
                      v46 = pcbInfoBuffer;
                      *((_WORD *)v3 + 25) = pcbInfoBuffer;
                      *((_WORD *)v3 + 24) = v46;
                      goto LABEL_50;
                  }
LABEL_33:
                  v30 = (unsigned int)v3[1];
                  *((_QWORD *)v3 + 5) = 0LL;
                  *v3 = HvBufferCheckSum(v3, v30);
                  v31 = ClfsLsnInvalid((const CLFS_LSN *)(*(_QWORD *)(a1 + 56) + 104LL));
                  v32 = *(_QWORD *)v53;
                  v33 = CmpTransWriteLog(v53[0], (int)v3, v3[1], v31 != 0 ? 2 : 0, &plsnFinish);
                  if ( v33 >= 0 && ClfsLsnInvalid((const CLFS_LSN *)(*(_QWORD *)(a1 + 56) + 104LL)) )
                    *(CLFS_LSN *)(*(_QWORD *)(a1 + 56) + 104LL) = plsnFinish;
                  pcbInfoBuffer = 120;
                  v34 = (CLFS_INFORMATION *)ExAllocatePoolWithTag(PagedPool, 0x78uLL, 0x20204D43u);
                  v35 = v34;
                  if ( v34 )
                  {
                    ClfsGetLogFileInformation(*(PLOG_FILE_OBJECT *)(v32 + 88), v34, &pcbInfoBuffer);
                    ExFreePoolWithTag(v35, 0);
                  }
                  goto LABEL_38;
                }
                v3[3] = 8;
                *((_QWORD *)v3 + 5) = v3 + 16;
                memmove(v3 + 16, v9[1], *(unsigned __int16 *)v9);
                v41 = *(_DWORD *)(*(_QWORD *)(a1 + 88) + 24LL);
                v3[12] = v41;
                v40 = v41;
                v38 = (char *)v3 + *(unsigned __int16 *)v9 + 64;
                *((_QWORD *)v3 + 7) = v38;
                v39 = *(_QWORD *)(a1 + 88);
              }
              memmove(v38, (const void *)(v39 + 32), v40);
LABEL_50:
              *((_QWORD *)v3 + 7) = 0LL;
              goto LABEL_33;
            }
            v33 = -1073741670;
          }
LABEL_38:
          v17 = v57;
          goto LABEL_39;
        }
        goto LABEL_69;
      }
      v37 = *(_DWORD *)(*(_QWORD *)(a1 + 88) + 24LL);
    }
    v19 = 64;
    v11 = v37 + 64;
    goto LABEL_18;
  }
  return 3221225626LL;
}
