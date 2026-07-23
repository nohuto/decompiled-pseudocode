/*
 * XREFs of CmAddLogForAction @ 0x14060E74C
 * Callers:
 *     CmSetValueKey @ 0x1406594E0 (CmSetValueKey.c)
 *     CmDeleteValueKey @ 0x14065B364 (CmDeleteValueKey.c)
 *     CmpCreateChild @ 0x14065C8F4 (CmpCreateChild.c)
 *     CmDeleteKey @ 0x140660814 (CmDeleteKey.c)
 *     CmpSetSecurityDescriptorInfo @ 0x140661B1C (CmpSetSecurityDescriptorInfo.c)
 *     CmSetKeyFlags @ 0x14086DDD8 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x14086E29C (CmSetLastWriteTimeKey.c)
 * Callees:
 *     CmpFreeTransientPoolWithTag @ 0x1402483A4 (CmpFreeTransientPoolWithTag.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     CmpCopyCompressedName @ 0x14065ED94 (CmpCopyCompressedName.c)
 *     CmpConstructNameWithStatus @ 0x1406E2750 (CmpConstructNameWithStatus.c)
 *     CmpGetValueData @ 0x1406E7B70 (CmpGetValueData.c)
 *     CmpTransWriteLog @ 0x140763D58 (CmpTransWriteLog.c)
 *     HvBufferCheckSum @ 0x140764048 (HvBufferCheckSum.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall CmAddLogForAction(__int64 a1, int a2)
{
  unsigned int v2; // ebx
  _DWORD *v4; // rdi
  __int64 v5; // r13
  __int64 v6; // rdx
  int v7; // r12d
  unsigned int v8; // r15d
  int v9; // eax
  __int64 v10; // rcx
  const void **v11; // r14
  int v13; // eax
  unsigned int v14; // r12d
  __int64 v15; // rax
  int v16; // ebx
  unsigned __int16 v17; // cx
  int v18; // ebx
  bool v19; // cc
  int v20; // ebx
  __int64 v21; // rcx
  __int64 (__fastcall *v22)(__int64, _QWORD, _DWORD *); // rax
  unsigned __int16 v23; // cx
  __int64 v24; // rax
  unsigned int v25; // r12d
  unsigned int v26; // eax
  unsigned int v27; // ebx
  _DWORD *PoolWithTag; // rax
  int v29; // ecx
  __int64 v30; // r8
  char *v31; // rcx
  __int16 v32; // ax
  unsigned int v33; // edx
  size_t v34; // r8
  char *v35; // rcx
  __int64 v36; // rdx
  int v37; // eax
  int v38; // eax
  char *v39; // rbx
  unsigned int v40; // edx
  size_t v41; // r8
  void *v42; // rdx
  char *v43; // rcx
  __int64 v44; // rdx
  BOOLEAN v45; // al
  __int64 v46; // r12
  CLFS_INFORMATION *v47; // rax
  CLFS_INFORMATION *v48; // r15
  _DWORD v49[2]; // [rsp+40h] [rbp-38h] BYREF
  __int64 v50; // [rsp+48h] [rbp-30h] BYREF
  __int64 v51; // [rsp+50h] [rbp-28h]
  _DWORD v52[2]; // [rsp+58h] [rbp-20h] BYREF
  CLFS_LSN plsnFinish; // [rsp+60h] [rbp-18h] BYREF
  int v54[4]; // [rsp+68h] [rbp-10h]
  void *Src; // [rsp+C0h] [rbp+48h] BYREF
  size_t Size; // [rsp+C8h] [rbp+50h] BYREF
  unsigned int v57; // [rsp+D0h] [rbp+58h]
  size_t v58; // [rsp+D8h] [rbp+60h] BYREF

  LODWORD(Size) = a2;
  v2 = 0;
  v49[1] = 0;
  v52[1] = 0;
  v49[0] = -1;
  v4 = 0LL;
  v52[0] = -1;
  v5 = 0LL;
  v6 = *(_QWORD *)(a1 + 56);
  v7 = 0;
  plsnFinish.ullOffset = 0LL;
  v8 = 0;
  v57 = -1;
  LODWORD(Src) = 0;
  v9 = *(_DWORD *)(v6 + 48);
  LODWORD(v58) = 0;
  v51 = 0LL;
  LODWORD(Size) = 0;
  if ( (v9 & 0x80u) == 0 )
  {
    v10 = *(_QWORD *)(a1 + 48);
    *(_QWORD *)v54 = *(_QWORD *)(*(_QWORD *)(v10 + 32) + 4192LL);
    if ( *(_QWORD *)(*(_QWORD *)v54 + 96LL) )
    {
      if ( *(_QWORD *)(v6 + 56) && *(_DWORD *)(a1 + 68) != 13 )
      {
        v50 = 0LL;
        CmpConstructNameWithStatus(v10, &v50);
        v11 = (const void **)v50;
        if ( !v50 )
          return 3221225626LL;
        v13 = *(_DWORD *)(a1 + 68);
        if ( (v13 & 0xFFFFFFFD) != 0 )
        {
          if ( v13 <= 3 )
            goto LABEL_36;
          if ( v13 <= 6 )
          {
            v19 = (unsigned int)(v13 - 4) <= 1;
            v20 = 80;
            v21 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 32LL);
            v22 = *(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(v21 + 8);
            if ( v19 )
            {
              v57 = *(_DWORD *)(a1 + 92);
              v24 = v22(v21, v57, v49);
              v5 = v24;
              if ( !v24 )
                goto LABEL_15;
              v25 = *(_DWORD *)(v24 + 4);
              LODWORD(Src) = v25;
              if ( v25 >= 0x80000000 )
              {
                v25 += 0x80000000;
                LODWORD(Src) = v25;
              }
              v20 = v25 + 80;
              LODWORD(v58) = v25;
              if ( v25 >= 0xFFFFFFB0 )
              {
                v16 = -1073741675;
LABEL_76:
                if ( v5 )
                  (*(void (__fastcall **)(_QWORD, _DWORD *))(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 32LL) + 16LL))(
                    *(_QWORD *)(*(_QWORD *)(a1 + 48) + 32LL),
                    v49);
                if ( v4 )
                  ExFreePoolWithTag(v4, 0);
                goto LABEL_80;
              }
            }
            else
            {
              v57 = *(_DWORD *)(a1 + 88);
              v5 = v22(v21, v57, v49);
              if ( !v5 )
                goto LABEL_15;
            }
            v23 = *(_WORD *)(v5 + 2);
            if ( (*(_BYTE *)(v5 + 16) & 1) != 0 )
              v23 *= 2;
            v8 = v23;
            v14 = v20;
            v2 = v23 + v20;
            goto LABEL_33;
          }
          if ( v13 == 7 || v13 == 8 )
          {
            v2 = 56;
            goto LABEL_36;
          }
          if ( v13 != 9 )
          {
            if ( v13 != 11 )
              goto LABEL_36;
            v14 = 64;
            v15 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _DWORD *))(*(_QWORD *)(*(_QWORD *)(a1 + 88) + 32LL) + 8LL))(
                    *(_QWORD *)(*(_QWORD *)(a1 + 88) + 32LL),
                    *(unsigned int *)(*(_QWORD *)(a1 + 88) + 40LL),
                    v52);
            v51 = v15;
            if ( !v15 )
            {
LABEL_15:
              v16 = -1073741670;
LABEL_80:
              CmpFreeTransientPoolWithTag(v11, 0x624E4D43u);
              return (unsigned int)v16;
            }
            v17 = *(_WORD *)(v15 + 72);
            if ( (*(_BYTE *)(v15 + 2) & 0x20) != 0 )
              v17 *= 2;
            LODWORD(Size) = v17;
            v2 = v17 + 64;
            goto LABEL_33;
          }
          v18 = *(_DWORD *)(*(_QWORD *)(a1 + 88) + 24LL);
        }
        else
        {
          v18 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 88LL) + 24LL);
        }
        v14 = 64;
        v2 = v18 + 64;
LABEL_33:
        if ( v2 < v14 )
        {
          v16 = -1073741675;
          goto LABEL_74;
        }
        v7 = (int)Src;
LABEL_36:
        v26 = *(unsigned __int16 *)v11;
        v27 = v26 + v2;
        if ( v27 < v26 )
        {
          v16 = -1073741562;
          goto LABEL_74;
        }
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, v27, 0x20204D43u);
        v4 = PoolWithTag;
        if ( !PoolWithTag )
        {
LABEL_39:
          v16 = -1073741670;
LABEL_74:
          if ( v51 )
            (*(void (__fastcall **)(_QWORD, _DWORD *))(*(_QWORD *)(*(_QWORD *)(a1 + 88) + 32LL) + 16LL))(
              *(_QWORD *)(*(_QWORD *)(a1 + 88) + 32LL),
              v52);
          goto LABEL_76;
        }
        memset(PoolWithTag, 0, v27);
        v4[1] = v27;
        v4[2] = 1;
        *((_OWORD *)v4 + 1) = *(_OWORD *)(*(_QWORD *)(a1 + 56) + 88LL);
        *((_WORD *)v4 + 16) = *(_WORD *)v11;
        *((_WORD *)v4 + 17) = *((_WORD *)v11 + 1);
        v29 = *(_DWORD *)(a1 + 68);
        if ( (v29 & 0xFFFFFFFD) != 0 )
        {
          if ( v29 <= 3 )
            goto LABEL_69;
          if ( v29 <= 6 )
          {
            Src = 0LL;
            v37 = 0;
            v50 = 0xFFFFFFFFLL;
            LOBYTE(Size) = 0;
            if ( v29 == 4 )
            {
              v4[3] = 3;
            }
            else
            {
              LOBYTE(v37) = v29 != 5;
              v4[3] = v37 + 4;
            }
            v38 = *(_DWORD *)(v5 + 12);
            *((_QWORD *)v4 + 5) = v4 + 20;
            v4[16] = v38;
            memmove(v4 + 20, v11[1], *(unsigned __int16 *)v11);
            v39 = (char *)v4 + *(unsigned __int16 *)v11 + 80;
            *((_QWORD *)v4 + 7) = v39;
            if ( (*(_BYTE *)(v5 + 16) & 1) != 0 )
              CmpCopyCompressedName(v39, v8, v5 + 20, *(unsigned __int16 *)(v5 + 2));
            else
              memmove(v39, (const void *)(v5 + 20), v8);
            *((_QWORD *)v4 + 7) = 0LL;
            *((_WORD *)v4 + 25) = v8;
            *((_WORD *)v4 + 24) = v8;
            if ( *(_DWORD *)(a1 + 68) == 6 )
            {
              v4[17] = 0;
              *((_QWORD *)v4 + 9) = 0LL;
            }
            else
            {
              v40 = v57;
              v4[17] = v7;
              if ( !(unsigned __int8)CmpGetValueData(
                                       *(_QWORD *)(*(_QWORD *)(a1 + 48) + 32LL),
                                       v40,
                                       v5,
                                       (unsigned int)&v58,
                                       (__int64)&Src,
                                       (__int64)&Size,
                                       (__int64)&v50) )
                goto LABEL_39;
              v41 = (unsigned int)v58;
              v42 = Src;
              v43 = &v39[v8];
              *((_QWORD *)v4 + 9) = v43;
              memmove(v43, v42, v41);
              *((_QWORD *)v4 + 9) = 0LL;
              if ( (_BYTE)Size == 1 )
                ExFreePoolWithTag(Src, 0);
              else
                (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 32LL) + 16LL))(
                  *(_QWORD *)(*(_QWORD *)(a1 + 48) + 32LL),
                  &v50);
            }
LABEL_69:
            v44 = (unsigned int)v4[1];
            *((_QWORD *)v4 + 5) = 0LL;
            *v4 = HvBufferCheckSum(v4, v44);
            v45 = ClfsLsnInvalid((const CLFS_LSN *)(*(_QWORD *)(a1 + 56) + 104LL));
            v46 = *(_QWORD *)v54;
            v16 = CmpTransWriteLog(v54[0], (int)v4, v4[1], v45 != 0 ? 2 : 0, &plsnFinish);
            if ( v16 >= 0 && ClfsLsnInvalid((const CLFS_LSN *)(*(_QWORD *)(a1 + 56) + 104LL)) )
              *(CLFS_LSN *)(*(_QWORD *)(a1 + 56) + 104LL) = plsnFinish;
            LODWORD(Size) = 120;
            v47 = (CLFS_INFORMATION *)ExAllocatePoolWithTag(PagedPool, 0x78uLL, 0x20204D43u);
            v48 = v47;
            if ( v47 )
            {
              ClfsGetLogFileInformation(*(PLOG_FILE_OBJECT *)(v46 + 88), v47, (PULONG)&Size);
              ExFreePoolWithTag(v48, 0);
            }
            goto LABEL_74;
          }
          if ( v29 == 7 )
          {
            v4[3] = 6;
            *((_QWORD *)v4 + 5) = v4 + 14;
            memmove(v4 + 14, v11[1], *(unsigned __int16 *)v11);
            v4[12] = *(_DWORD *)(a1 + 88);
            goto LABEL_69;
          }
          if ( v29 == 8 )
          {
            v4[3] = 7;
            *((_QWORD *)v4 + 5) = v4 + 14;
            memmove(v4 + 14, v11[1], *(unsigned __int16 *)v11);
            *((_QWORD *)v4 + 6) = *(_QWORD *)(a1 + 88);
            goto LABEL_69;
          }
          if ( v29 != 9 )
          {
            if ( v29 != 11 )
              goto LABEL_69;
            v4[3] = 9;
            *((_QWORD *)v4 + 5) = v4 + 16;
            memmove(v4 + 16, v11[1], *(unsigned __int16 *)v11);
            v30 = v51;
            v31 = (char *)v4 + *(unsigned __int16 *)v11 + 64;
            *((_QWORD *)v4 + 7) = v31;
            if ( (*(_BYTE *)(v30 + 2) & 0x20) != 0 )
              CmpCopyCompressedName(v31, (unsigned int)Size, v30 + 76, *(unsigned __int16 *)(v30 + 72));
            else
              memmove(v31, (const void *)(v30 + 76), (unsigned int)Size);
            v32 = Size;
            *((_WORD *)v4 + 25) = Size;
            *((_WORD *)v4 + 24) = v32;
            goto LABEL_68;
          }
          v4[3] = *(_BYTE *)(a1 + 100) != 0 ? 10 : 8;
          *((_QWORD *)v4 + 5) = v4 + 16;
          memmove(v4 + 16, v11[1], *(unsigned __int16 *)v11);
          v33 = *(_DWORD *)(*(_QWORD *)(a1 + 88) + 24LL);
          v4[12] = v33;
          v34 = v33;
          v35 = (char *)v4 + *(unsigned __int16 *)v11 + 64;
          *((_QWORD *)v4 + 7) = v35;
          v36 = *(_QWORD *)(a1 + 88);
        }
        else
        {
          v4[3] = (v29 != 0) + 1;
          v4[12] = *(_DWORD *)(a1 + 72);
          *((_QWORD *)v4 + 5) = v4 + 16;
          memmove(v4 + 16, v11[1], *(unsigned __int16 *)v11);
          v35 = (char *)v4 + *(unsigned __int16 *)v11 + 64;
          *((_QWORD *)v4 + 7) = v35;
          v36 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 88LL);
          v34 = *(unsigned int *)(v36 + 24);
        }
        memmove(v35, (const void *)(v36 + 32), v34);
LABEL_68:
        *((_QWORD *)v4 + 7) = 0LL;
        goto LABEL_69;
      }
    }
  }
  return 0LL;
}
