/*
 * XREFs of CmAddLogForAction @ 0x1406DBB4C
 * Callers:
 *     CmSetValueKey @ 0x140619570 (CmSetValueKey.c)
 *     CmpSetSecurityDescriptorInfo @ 0x14068B1C0 (CmpSetSecurityDescriptorInfo.c)
 *     CmDeleteKey @ 0x140692448 (CmDeleteKey.c)
 *     CmDeleteValueKey @ 0x1406941D8 (CmDeleteValueKey.c)
 *     CmpCreateChild @ 0x140696A68 (CmpCreateChild.c)
 *     CmRenameKey @ 0x140867FFC (CmRenameKey.c)
 *     CmSetKeyFlags @ 0x1408696D8 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x140869B94 (CmSetLastWriteTimeKey.c)
 * Callees:
 *     CmpFreeTransientPoolWithTag @ 0x14025C5D8 (CmpFreeTransientPoolWithTag.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     CmpConstructNameWithStatus @ 0x14061DE60 (CmpConstructNameWithStatus.c)
 *     CmpGetValueData @ 0x1406214E0 (CmpGetValueData.c)
 *     CmpCopyCompressedName @ 0x1406937C4 (CmpCopyCompressedName.c)
 *     CmpTransWriteLog @ 0x14074C508 (CmpTransWriteLog.c)
 *     HvBufferCheckSum @ 0x14074C7F8 (HvBufferCheckSum.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall CmAddLogForAction(__int64 a1, ULONG a2)
{
  unsigned int v2; // ebx
  _DWORD *v4; // rdi
  ULONG v5; // r15d
  __int64 v6; // rdx
  unsigned int v7; // r12d
  unsigned int v8; // r13d
  int v9; // eax
  __int64 v10; // rcx
  const void **v11; // r14
  int v12; // eax
  int v13; // ebx
  bool v14; // cc
  __int64 v15; // rcx
  __int64 (__fastcall *v16)(__int64, _QWORD, _DWORD *); // rax
  __int64 v17; // rax
  ULONG v18; // r15d
  unsigned __int16 v19; // cx
  unsigned int v20; // r15d
  unsigned int v21; // eax
  unsigned int v22; // ebx
  _DWORD *PoolWithTag; // rax
  int v24; // ecx
  int v25; // eax
  __int64 v26; // r13
  _WORD *v27; // rbx
  size_t v28; // r8
  void *v29; // rdx
  char *v30; // rcx
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
  _WORD *v45; // rcx
  _DWORD v46[2]; // [rsp+40h] [rbp-29h] BYREF
  void *Src; // [rsp+48h] [rbp-21h] BYREF
  __int64 v48; // [rsp+50h] [rbp-19h] BYREF
  __int64 v49; // [rsp+58h] [rbp-11h]
  _DWORD v50[2]; // [rsp+60h] [rbp-9h] BYREF
  CLFS_LSN plsnFinish; // [rsp+68h] [rbp-1h] BYREF
  int v52[20]; // [rsp+70h] [rbp+7h]
  unsigned int v53; // [rsp+D0h] [rbp+67h]
  ULONG pcbInfoBuffer; // [rsp+D8h] [rbp+6Fh] BYREF
  size_t Size; // [rsp+E0h] [rbp+77h] BYREF
  __int64 v56; // [rsp+E8h] [rbp+7Fh]

  pcbInfoBuffer = a2;
  v2 = 0;
  v46[1] = 0;
  v50[1] = 0;
  v46[0] = -1;
  v4 = 0LL;
  v50[0] = -1;
  v5 = 0;
  v6 = *(_QWORD *)(a1 + 56);
  v7 = 0;
  plsnFinish.ullOffset = 0LL;
  v8 = 0;
  v56 = 0LL;
  v53 = -1;
  v9 = *(_DWORD *)(v6 + 48);
  pcbInfoBuffer = 0;
  LODWORD(Size) = 0;
  v49 = 0LL;
  if ( (v9 & 0x80u) != 0 )
    return 0LL;
  v10 = *(_QWORD *)(a1 + 48);
  *(_QWORD *)v52 = *(_QWORD *)(*(_QWORD *)(v10 + 32) + 4192LL);
  if ( !*(_QWORD *)(*(_QWORD *)v52 + 96LL) || !*(_QWORD *)(v6 + 56) || *(_DWORD *)(a1 + 68) == 13 )
    return 0LL;
  v48 = 0LL;
  CmpConstructNameWithStatus(v10, &v48);
  v11 = (const void **)v48;
  if ( v48 )
  {
    v12 = *(_DWORD *)(a1 + 68);
    if ( !v12 || v12 == 2 )
    {
      v37 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 88LL) + 24LL);
    }
    else
    {
      if ( v12 <= 3 )
        goto LABEL_20;
      if ( v12 <= 6 )
      {
        v13 = 80;
        v14 = (unsigned int)(v12 - 4) <= 1;
        v15 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 32LL);
        v16 = *(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(v15 + 8);
        if ( v14 )
        {
          v53 = *(_DWORD *)(a1 + 92);
          v17 = v16(v15, v53, v46);
          v56 = v17;
          if ( v17 )
          {
            v18 = *(_DWORD *)(v17 + 4);
            pcbInfoBuffer = v18;
            if ( v18 >= 0x80000000 )
            {
              v18 += 0x80000000;
              pcbInfoBuffer = v18;
            }
            v13 = v18 + 80;
            LODWORD(Size) = v18;
            if ( v18 >= 0xFFFFFFB0 )
            {
              v33 = -1073741675;
LABEL_42:
              if ( v17 )
                (*(void (__fastcall **)(_QWORD, _DWORD *))(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 32LL) + 16LL))(
                  *(_QWORD *)(*(_QWORD *)(a1 + 48) + 32LL),
                  v46);
              if ( v4 )
                ExFreePoolWithTag(v4, 0);
              goto LABEL_46;
            }
            goto LABEL_15;
          }
        }
        else
        {
          v53 = *(_DWORD *)(a1 + 88);
          v17 = v16(v15, v53, v46);
          v56 = v17;
          if ( v17 )
          {
LABEL_15:
            v19 = *(_WORD *)(v17 + 2);
            if ( (*(_BYTE *)(v17 + 16) & 1) != 0 )
              v19 *= 2;
            v7 = v19;
            v20 = v13;
            v2 = v19 + v13;
            goto LABEL_18;
          }
        }
LABEL_69:
        v33 = -1073741670;
LABEL_46:
        CmpFreeTransientPoolWithTag(v11, 0x624E4D43u);
        return (unsigned int)v33;
      }
      if ( v12 != 9 )
      {
        if ( v12 == 7 || v12 == 8 )
        {
          v2 = 56;
          goto LABEL_20;
        }
        if ( v12 != 11 )
        {
LABEL_20:
          v21 = *(unsigned __int16 *)v11;
          v22 = v21 + v2;
          if ( v22 >= v21 )
          {
            PoolWithTag = ExAllocatePoolWithTag(PagedPool, v22, 0x20204D43u);
            v4 = PoolWithTag;
            if ( !PoolWithTag )
            {
LABEL_74:
              v33 = -1073741670;
              goto LABEL_39;
            }
            PoolWithTag[1] = v22;
            PoolWithTag[2] = 1;
            *((_OWORD *)PoolWithTag + 1) = *(_OWORD *)(*(_QWORD *)(a1 + 56) + 88LL);
            *((_WORD *)PoolWithTag + 16) = *(_WORD *)v11;
            *((_WORD *)PoolWithTag + 17) = *((_WORD *)v11 + 1);
            v24 = *(_DWORD *)(a1 + 68);
            if ( !v24 || v24 == 2 )
            {
              PoolWithTag[3] = (v24 != 0) + 1;
              PoolWithTag[12] = *(_DWORD *)(a1 + 72);
              *((_QWORD *)PoolWithTag + 5) = PoolWithTag + 16;
              memmove(PoolWithTag + 16, v11[1], *(unsigned __int16 *)v11);
              v38 = (char *)v4 + *(unsigned __int16 *)v11 + 64;
              *((_QWORD *)v4 + 7) = v38;
              v39 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 88LL);
              v40 = *(unsigned int *)(v39 + 24);
            }
            else
            {
              if ( v24 <= 3 )
                goto LABEL_34;
              if ( v24 <= 6 )
              {
                Src = 0LL;
                v25 = 0;
                v48 = 0xFFFFFFFFLL;
                LOBYTE(pcbInfoBuffer) = 0;
                if ( v24 == 4 )
                {
                  v4[3] = 3;
                }
                else
                {
                  LOBYTE(v25) = v24 != 5;
                  v4[3] = v25 + 4;
                }
                v26 = v56;
                v4[16] = *(_DWORD *)(v56 + 12);
                *((_QWORD *)v4 + 5) = v4 + 20;
                memmove(v4 + 20, v11[1], *(unsigned __int16 *)v11);
                v27 = (_WORD *)((char *)v4 + *(unsigned __int16 *)v11 + 80);
                *((_QWORD *)v4 + 7) = v27;
                if ( (*(_BYTE *)(v26 + 16) & 1) != 0 )
                  CmpCopyCompressedName(v27, v7, (unsigned __int8 *)(v26 + 20), *(unsigned __int16 *)(v26 + 2));
                else
                  memmove(v27, (const void *)(v26 + 20), v7);
                *((_WORD *)v4 + 25) = v7;
                *((_WORD *)v4 + 24) = v7;
                if ( *(_DWORD *)(a1 + 68) != 6 )
                {
                  v4[17] = v5;
                  if ( CmpGetValueData(
                         *(_QWORD *)(*(_QWORD *)(a1 + 48) + 32LL),
                         v53,
                         v26,
                         (unsigned int *)&Size,
                         (__int64)&Src,
                         (__int64)&pcbInfoBuffer,
                         (__int64)&v48) )
                  {
                    v28 = (unsigned int)Size;
                    v29 = Src;
                    v30 = (char *)v27 + v7;
                    *((_QWORD *)v4 + 9) = v30;
                    memmove(v30, v29, v28);
                    if ( (_BYTE)pcbInfoBuffer == 1 )
                      ExFreePoolWithTag(Src, 0);
                    else
                      (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 32LL) + 16LL))(
                        *(_QWORD *)(*(_QWORD *)(a1 + 48) + 32LL),
                        &v48);
                    goto LABEL_34;
                  }
                  goto LABEL_74;
                }
                v4[17] = 0;
                *((_QWORD *)v4 + 9) = 0LL;
LABEL_34:
                *v4 = HvBufferCheckSum(v4, (unsigned int)v4[1]);
                v31 = ClfsLsnInvalid((const CLFS_LSN *)(*(_QWORD *)(a1 + 56) + 104LL));
                v32 = *(_QWORD *)v52;
                v33 = CmpTransWriteLog(v52[0], (int)v4, v4[1], v31 != 0 ? 2 : 0, &plsnFinish);
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
                goto LABEL_39;
              }
              if ( v24 != 9 )
              {
                switch ( v24 )
                {
                  case 7:
                    PoolWithTag[3] = 6;
                    *((_QWORD *)PoolWithTag + 5) = PoolWithTag + 14;
                    memmove(PoolWithTag + 14, v11[1], *(unsigned __int16 *)v11);
                    v4[12] = *(_DWORD *)(a1 + 88);
                    break;
                  case 8:
                    PoolWithTag[3] = 7;
                    *((_QWORD *)PoolWithTag + 5) = PoolWithTag + 14;
                    memmove(PoolWithTag + 14, v11[1], *(unsigned __int16 *)v11);
                    *((_QWORD *)v4 + 6) = *(_QWORD *)(a1 + 88);
                    break;
                  case 11:
                    PoolWithTag[3] = 9;
                    *((_QWORD *)PoolWithTag + 5) = PoolWithTag + 16;
                    memmove(PoolWithTag + 16, v11[1], *(unsigned __int16 *)v11);
                    v44 = v49;
                    v45 = (_WORD *)((char *)v4 + *(unsigned __int16 *)v11 + 64);
                    *((_QWORD *)v4 + 7) = v45;
                    if ( (*(_BYTE *)(v44 + 2) & 0x20) != 0 )
                      CmpCopyCompressedName(v45, v8, (unsigned __int8 *)(v44 + 76), *(unsigned __int16 *)(v44 + 72));
                    else
                      memmove(v45, (const void *)(v44 + 76), v8);
                    *((_WORD *)v4 + 25) = v8;
                    *((_WORD *)v4 + 24) = v8;
                    break;
                }
                goto LABEL_34;
              }
              PoolWithTag[3] = 8;
              *((_QWORD *)PoolWithTag + 5) = PoolWithTag + 16;
              memmove(PoolWithTag + 16, v11[1], *(unsigned __int16 *)v11);
              v41 = *(_DWORD *)(*(_QWORD *)(a1 + 88) + 24LL);
              v4[12] = v41;
              v40 = v41;
              v38 = (char *)v4 + *(unsigned __int16 *)v11 + 64;
              *((_QWORD *)v4 + 7) = v38;
              v39 = *(_QWORD *)(a1 + 88);
            }
            memmove(v38, (const void *)(v39 + 32), v40);
            goto LABEL_34;
          }
          v33 = -1073741562;
LABEL_39:
          if ( v49 )
            (*(void (__fastcall **)(_QWORD, _DWORD *))(*(_QWORD *)(*(_QWORD *)(a1 + 88) + 32LL) + 16LL))(
              *(_QWORD *)(*(_QWORD *)(a1 + 88) + 32LL),
              v50);
          v17 = v56;
          goto LABEL_42;
        }
        v20 = 64;
        v42 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _DWORD *))(*(_QWORD *)(*(_QWORD *)(a1 + 88) + 32LL) + 8LL))(
                *(_QWORD *)(*(_QWORD *)(a1 + 88) + 32LL),
                *(unsigned int *)(*(_QWORD *)(a1 + 88) + 40LL),
                v50);
        v49 = v42;
        if ( v42 )
        {
          v43 = *(_WORD *)(v42 + 72);
          if ( (*(_BYTE *)(v42 + 2) & 0x20) != 0 )
            v43 *= 2;
          v8 = v43;
          v2 = v43 + 64;
          goto LABEL_18;
        }
        goto LABEL_69;
      }
      v37 = *(_DWORD *)(*(_QWORD *)(a1 + 88) + 24LL);
    }
    v20 = 64;
    v2 = v37 + 64;
LABEL_18:
    if ( v2 < v20 )
    {
      v33 = -1073741675;
      goto LABEL_39;
    }
    v5 = pcbInfoBuffer;
    goto LABEL_20;
  }
  return 3221225626LL;
}
