/*
 * XREFs of CmAddLogForAction @ 0x14071784C
 * Callers:
 *     CmpSetSecurityDescriptorInfo @ 0x140677DC0 (CmpSetSecurityDescriptorInfo.c)
 *     CmDeleteKey @ 0x14067E1BC (CmDeleteKey.c)
 *     CmDeleteValueKey @ 0x140714E58 (CmDeleteValueKey.c)
 *     CmpCreateChild @ 0x140719278 (CmpCreateChild.c)
 *     CmSetValueKey @ 0x140720260 (CmSetValueKey.c)
 *     CmSetKeyFlags @ 0x140913964 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x140913E28 (CmSetLastWriteTimeKey.c)
 * Callees:
 *     CmpFreeTransientPoolWithTag @ 0x140346D64 (CmpFreeTransientPoolWithTag.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     HvpGetCellFlat @ 0x1406BF400 (HvpGetCellFlat.c)
 *     HvpReleaseCellFlat @ 0x1406BF450 (HvpReleaseCellFlat.c)
 *     CmpTransWriteLog @ 0x140717EE4 (CmpTransWriteLog.c)
 *     HvBufferCheckSum @ 0x1407181CC (HvBufferCheckSum.c)
 *     CmpCopyCompressedName @ 0x140718AE8 (CmpCopyCompressedName.c)
 *     CmpConstructNameWithStatus @ 0x1407C0690 (CmpConstructNameWithStatus.c)
 *     CmpGetValueData @ 0x1407C46A0 (CmpGetValueData.c)
 *     HvpReleaseCellPaged @ 0x1407C97C0 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1407C9820 (HvpGetCellPaged.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall CmAddLogForAction(__int64 a1, ULONG a2)
{
  unsigned int v2; // ebx
  _DWORD *v4; // rdi
  __int64 v5; // r13
  __int64 v6; // rdx
  unsigned int v7; // r12d
  ULONG v8; // r15d
  int v9; // eax
  __int64 v10; // rcx
  const void **v11; // r14
  int v13; // eax
  unsigned int v14; // r15d
  __int64 v15; // rax
  ULONG_PTR v16; // rcx
  __int64 v17; // rax
  int v18; // ebx
  unsigned __int16 v19; // cx
  int v20; // ebx
  int v21; // ebx
  ULONG_PTR v22; // rcx
  __int64 CellPaged; // rax
  unsigned __int16 v24; // cx
  __int64 CellFlat; // rax
  unsigned int v26; // eax
  unsigned int v27; // ecx
  unsigned int v28; // eax
  unsigned int v29; // ebx
  _DWORD *PoolWithTag; // rax
  int v31; // ecx
  __int64 v32; // r8
  char *v33; // rcx
  unsigned int v34; // edx
  size_t v35; // r8
  char *v36; // rcx
  __int64 v37; // rdx
  int v38; // eax
  int v39; // eax
  char *v40; // rbx
  size_t v41; // r8
  void *v42; // rdx
  char *v43; // rcx
  __int64 v44; // rcx
  __int64 v45; // rdx
  BOOLEAN v46; // al
  __int64 v47; // r12
  CLFS_INFORMATION *v48; // rax
  CLFS_INFORMATION *v49; // r15
  __int64 v50; // rcx
  __int64 v51; // rcx
  __int64 v52; // [rsp+40h] [rbp-29h] BYREF
  __int64 v53; // [rsp+48h] [rbp-21h] BYREF
  __int64 v54; // [rsp+50h] [rbp-19h] BYREF
  __int64 v55; // [rsp+58h] [rbp-11h]
  void *Src; // [rsp+60h] [rbp-9h] BYREF
  CLFS_LSN plsnFinish; // [rsp+68h] [rbp-1h] BYREF
  int v58[20]; // [rsp+70h] [rbp+7h]
  ULONG pcbInfoBuffer; // [rsp+D8h] [rbp+6Fh] BYREF
  size_t Size; // [rsp+E0h] [rbp+77h]
  unsigned int v61; // [rsp+E8h] [rbp+7Fh]

  pcbInfoBuffer = a2;
  v2 = 0;
  v52 = 0xFFFFFFFFLL;
  v4 = 0LL;
  v53 = 0xFFFFFFFFLL;
  v5 = 0LL;
  v6 = *(_QWORD *)(a1 + 56);
  v7 = 0;
  plsnFinish.ullOffset = 0LL;
  v8 = 0;
  v61 = 0;
  v9 = *(_DWORD *)(v6 + 48);
  LODWORD(Size) = 0;
  v55 = 0LL;
  pcbInfoBuffer = 0;
  if ( (v9 & 0x80u) == 0 )
  {
    v10 = *(_QWORD *)(a1 + 48);
    *(_QWORD *)v58 = *(_QWORD *)(*(_QWORD *)(v10 + 32) + 4152LL);
    if ( *(_QWORD *)(*(_QWORD *)v58 + 96LL) )
    {
      if ( *(_QWORD *)(v6 + 56) && *(_DWORD *)(a1 + 68) != 13 )
      {
        Src = 0LL;
        CmpConstructNameWithStatus(v10, &Src);
        v11 = (const void **)Src;
        if ( !Src )
          return 3221225626LL;
        v13 = *(_DWORD *)(a1 + 68);
        if ( (v13 & 0xFFFFFFFD) != 0 )
        {
          if ( v13 <= 3 )
            goto LABEL_46;
          if ( v13 <= 6 )
          {
            v21 = 80;
            v22 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 32LL);
            if ( (unsigned int)(v13 - 4) <= 1 )
            {
              if ( (*(_BYTE *)(v22 + 140) & 1) != 0 )
                CellFlat = HvpGetCellFlat(v22, *(unsigned int *)(a1 + 92), &v52);
              else
                CellFlat = HvpGetCellPaged(v22);
              v5 = CellFlat;
              if ( !CellFlat )
                goto LABEL_18;
              v26 = *(_DWORD *)(CellFlat + 4);
              v27 = v26 + 0x80000000;
              if ( v26 < 0x80000000 )
                v27 = v26;
              v61 = v27;
              LODWORD(Size) = v27;
              v21 = v27 + 80;
              if ( v27 >= 0xFFFFFFB0 )
              {
                v18 = -1073741675;
LABEL_91:
                v51 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 32LL);
                if ( (*(_BYTE *)(v51 + 140) & 1) != 0 )
                  HvpReleaseCellFlat(v51, &v52);
                else
                  HvpReleaseCellPaged(v51, &v52);
LABEL_94:
                if ( v4 )
                  ExFreePoolWithTag(v4, 0);
                goto LABEL_96;
              }
            }
            else
            {
              if ( (*(_BYTE *)(v22 + 140) & 1) != 0 )
                CellPaged = HvpGetCellFlat(v22, *(unsigned int *)(a1 + 88), &v52);
              else
                CellPaged = HvpGetCellPaged(v22);
              v5 = CellPaged;
              if ( !CellPaged )
                goto LABEL_18;
            }
            v14 = v21;
            v24 = 2 * *(_WORD *)(v5 + 2);
            if ( (*(_BYTE *)(v5 + 16) & 1) == 0 )
              v24 = *(_WORD *)(v5 + 2);
            v7 = v24;
            v2 = v24 + v21;
            goto LABEL_43;
          }
          if ( v13 == 7 || v13 == 8 )
          {
            v2 = 56;
            goto LABEL_46;
          }
          if ( v13 != 9 )
          {
            if ( v13 != 11 )
              goto LABEL_46;
            v14 = 64;
            v15 = *(_QWORD *)(a1 + 88);
            v16 = *(_QWORD *)(v15 + 32);
            if ( (*(_BYTE *)(v16 + 140) & 1) != 0 )
              v17 = HvpGetCellFlat(v16, *(unsigned int *)(v15 + 40), &v53);
            else
              v17 = HvpGetCellPaged(v16);
            v55 = v17;
            if ( !v17 )
            {
LABEL_18:
              v18 = -1073741670;
LABEL_96:
              CmpFreeTransientPoolWithTag(v11, 0x624E4D43u);
              return (unsigned int)v18;
            }
            v19 = 2 * *(_WORD *)(v17 + 72);
            if ( (*(_BYTE *)(v17 + 2) & 0x20) == 0 )
              v19 = *(_WORD *)(v17 + 72);
            v20 = v19;
            pcbInfoBuffer = v19;
            goto LABEL_42;
          }
          v20 = *(_DWORD *)(*(_QWORD *)(a1 + 88) + 24LL);
        }
        else
        {
          v20 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 88LL) + 24LL);
        }
        v14 = 64;
LABEL_42:
        v2 = v20 + 64;
LABEL_43:
        if ( v2 < v14 )
        {
          v18 = -1073741675;
          goto LABEL_86;
        }
        v8 = pcbInfoBuffer;
LABEL_46:
        v28 = *(unsigned __int16 *)v11;
        v29 = v28 + v2;
        if ( v29 < v28 )
        {
          v18 = -1073741562;
          goto LABEL_86;
        }
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, v29, 0x20204D43u);
        v4 = PoolWithTag;
        if ( !PoolWithTag )
          goto LABEL_49;
        memset(PoolWithTag, 0, v29);
        v4[1] = v29;
        v4[2] = 1;
        *((_OWORD *)v4 + 1) = *(_OWORD *)(*(_QWORD *)(a1 + 56) + 88LL);
        *((_WORD *)v4 + 16) = *(_WORD *)v11;
        *((_WORD *)v4 + 17) = *((_WORD *)v11 + 1);
        v31 = *(_DWORD *)(a1 + 68);
        if ( (v31 & 0xFFFFFFFD) != 0 )
        {
          if ( v31 <= 3 )
            goto LABEL_81;
          if ( v31 <= 6 )
          {
            Src = 0LL;
            v38 = 0;
            v54 = 0xFFFFFFFFLL;
            LOBYTE(pcbInfoBuffer) = 0;
            if ( v31 == 4 )
            {
              v4[3] = 3;
            }
            else
            {
              LOBYTE(v38) = v31 != 5;
              v4[3] = v38 + 4;
            }
            v39 = *(_DWORD *)(v5 + 12);
            *((_QWORD *)v4 + 5) = v4 + 20;
            v4[16] = v39;
            memmove(v4 + 20, v11[1], *(unsigned __int16 *)v11);
            v40 = (char *)v4 + *(unsigned __int16 *)v11 + 80;
            *((_QWORD *)v4 + 7) = v40;
            if ( (*(_BYTE *)(v5 + 16) & 1) != 0 )
              CmpCopyCompressedName(v40, v7, v5 + 20, *(unsigned __int16 *)(v5 + 2));
            else
              memmove(v40, (const void *)(v5 + 20), v7);
            *((_QWORD *)v4 + 7) = 0LL;
            *((_WORD *)v4 + 25) = v7;
            *((_WORD *)v4 + 24) = v7;
            if ( *(_DWORD *)(a1 + 68) == 6 )
            {
              v4[17] = 0;
              *((_QWORD *)v4 + 9) = 0LL;
            }
            else
            {
              v4[17] = v61;
              if ( !(unsigned __int8)CmpGetValueData(
                                       *(_QWORD *)(*(_QWORD *)(a1 + 48) + 32LL),
                                       (__int64)&Src,
                                       (__int64)&pcbInfoBuffer,
                                       (__int64)&v54) )
              {
LABEL_49:
                v18 = -1073741670;
                goto LABEL_86;
              }
              v41 = (unsigned int)Size;
              v42 = Src;
              v43 = &v40[v7];
              *((_QWORD *)v4 + 9) = v43;
              memmove(v43, v42, v41);
              *((_QWORD *)v4 + 9) = 0LL;
              if ( (_BYTE)pcbInfoBuffer == 1 )
              {
                ExFreePoolWithTag(Src, 0);
              }
              else
              {
                v44 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 32LL);
                if ( (*(_BYTE *)(v44 + 140) & 1) != 0 )
                  HvpReleaseCellFlat(v44, &v54);
                else
                  HvpReleaseCellPaged(v44, &v54);
              }
            }
LABEL_81:
            v45 = (unsigned int)v4[1];
            *((_QWORD *)v4 + 5) = 0LL;
            *v4 = HvBufferCheckSum(v4, v45);
            v46 = ClfsLsnInvalid((const CLFS_LSN *)(*(_QWORD *)(a1 + 56) + 104LL));
            v47 = *(_QWORD *)v58;
            v18 = CmpTransWriteLog(v58[0], (int)v4, v4[1], v46 != 0 ? 2 : 0, &plsnFinish);
            if ( v18 >= 0 && ClfsLsnInvalid((const CLFS_LSN *)(*(_QWORD *)(a1 + 56) + 104LL)) )
              *(CLFS_LSN *)(*(_QWORD *)(a1 + 56) + 104LL) = plsnFinish;
            pcbInfoBuffer = 120;
            v48 = (CLFS_INFORMATION *)ExAllocatePoolWithTag(PagedPool, 0x78uLL, 0x20204D43u);
            v49 = v48;
            if ( v48 )
            {
              ClfsGetLogFileInformation(*(PLOG_FILE_OBJECT *)(v47 + 88), v48, &pcbInfoBuffer);
              ExFreePoolWithTag(v49, 0);
            }
LABEL_86:
            if ( v55 )
            {
              v50 = *(_QWORD *)(*(_QWORD *)(a1 + 88) + 32LL);
              if ( (*(_BYTE *)(v50 + 140) & 1) != 0 )
                HvpReleaseCellFlat(v50, &v53);
              else
                HvpReleaseCellPaged(v50, &v53);
            }
            if ( !v5 )
              goto LABEL_94;
            goto LABEL_91;
          }
          if ( v31 == 7 )
          {
            v4[3] = 6;
            *((_QWORD *)v4 + 5) = v4 + 14;
            memmove(v4 + 14, v11[1], *(unsigned __int16 *)v11);
            v4[12] = *(_DWORD *)(a1 + 88);
            goto LABEL_81;
          }
          if ( v31 == 8 )
          {
            v4[3] = 7;
            *((_QWORD *)v4 + 5) = v4 + 14;
            memmove(v4 + 14, v11[1], *(unsigned __int16 *)v11);
            *((_QWORD *)v4 + 6) = *(_QWORD *)(a1 + 88);
            goto LABEL_81;
          }
          if ( v31 != 9 )
          {
            if ( v31 != 11 )
              goto LABEL_81;
            v4[3] = 9;
            *((_QWORD *)v4 + 5) = v4 + 16;
            memmove(v4 + 16, v11[1], *(unsigned __int16 *)v11);
            v32 = v55;
            v33 = (char *)v4 + *(unsigned __int16 *)v11 + 64;
            *((_QWORD *)v4 + 7) = v33;
            if ( (*(_BYTE *)(v32 + 2) & 0x20) != 0 )
              CmpCopyCompressedName(v33, v8, v32 + 76, *(unsigned __int16 *)(v32 + 72));
            else
              memmove(v33, (const void *)(v32 + 76), v8);
            *((_WORD *)v4 + 25) = v8;
            *((_WORD *)v4 + 24) = v8;
            goto LABEL_80;
          }
          v4[3] = *(_BYTE *)(a1 + 100) != 0 ? 10 : 8;
          *((_QWORD *)v4 + 5) = v4 + 16;
          memmove(v4 + 16, v11[1], *(unsigned __int16 *)v11);
          v34 = *(_DWORD *)(*(_QWORD *)(a1 + 88) + 24LL);
          v4[12] = v34;
          v35 = v34;
          v36 = (char *)v4 + *(unsigned __int16 *)v11 + 64;
          *((_QWORD *)v4 + 7) = v36;
          v37 = *(_QWORD *)(a1 + 88);
        }
        else
        {
          v4[3] = (v31 != 0) + 1;
          v4[12] = *(_DWORD *)(a1 + 72);
          *((_QWORD *)v4 + 5) = v4 + 16;
          memmove(v4 + 16, v11[1], *(unsigned __int16 *)v11);
          v36 = (char *)v4 + *(unsigned __int16 *)v11 + 64;
          *((_QWORD *)v4 + 7) = v36;
          v37 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 88LL);
          v35 = *(unsigned int *)(v37 + 24);
        }
        memmove(v36, (const void *)(v37 + 32), v35);
LABEL_80:
        *((_QWORD *)v4 + 7) = 0LL;
        goto LABEL_81;
      }
    }
  }
  return 0LL;
}
