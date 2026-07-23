/*
 * XREFs of IopGraftName @ 0x1405FDA74
 * Callers:
 *     IopSymlinkProcessReparse @ 0x1405FDA18 (IopSymlinkProcessReparse.c)
 * Callees:
 *     IopSymlinkGetMostRecentlyUsedName @ 0x140239680 (IopSymlinkGetMostRecentlyUsedName.c)
 *     IopSymlinkGetECP @ 0x1402396A0 (IopSymlinkGetECP.c)
 *     IopSymlinkRemoveECP @ 0x14035FB2C (IopSymlinkRemoveECP.c)
 *     IopGetFileObjectExtension @ 0x140361530 (IopGetFileObjectExtension.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     IopCopyOverNewPathSecure @ 0x1405CDC80 (IopCopyOverNewPathSecure.c)
 *     IoGetIrpExtraCreateParameter @ 0x1405DDD60 (IoGetIrpExtraCreateParameter.c)
 *     IopSymlinkUpdateECP @ 0x1405FD41C (IopSymlinkUpdateECP.c)
 *     IopSymlinkRememberJunction @ 0x1405FD5A4 (IopSymlinkRememberJunction.c)
 *     IopSymlinkInitializeSymlinkInfo @ 0x1405FD868 (IopSymlinkInitializeSymlinkInfo.c)
 *     IopSymlinkAllocateAndAddECP @ 0x1405FD94C (IopSymlinkAllocateAndAddECP.c)
 *     IopSymlinkGetRelatedMountPoint @ 0x1405FE0C4 (IopSymlinkGetRelatedMountPoint.c)
 *     IopGetFileInformation @ 0x14068A684 (IopGetFileInformation.c)
 *     FsRtlFreeExtraCreateParameter @ 0x14069C490 (FsRtlFreeExtraCreateParameter.c)
 *     ObQueryNameStringMode @ 0x1406C7460 (ObQueryNameStringMode.c)
 *     IopSymlinkApplyToOpenedName @ 0x140895620 (IopSymlinkApplyToOpenedName.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

IRP *__fastcall IopGraftName(IRP *a1, __int64 a2, int *a3)
{
  struct _DMA_ADAPTER *v3; // r12
  unsigned int v5; // edi
  char *v6; // r13
  const void **v7; // rsi
  int IrpExtraCreateParameter; // ebx
  UNICODE_STRING *v9; // r15
  __int64 v10; // r10
  unsigned __int64 v11; // rcx
  char v12; // r9
  __int64 v13; // rdx
  int v14; // eax
  bool v15; // sf
  __int16 v16; // r10
  char *v17; // rax
  unsigned int v18; // esi
  unsigned int v19; // r15d
  unsigned __int16 *PoolWithTag; // rax
  const void **v21; // r12
  int NameStringMode; // eax
  struct _DMA_ADAPTER *v23; // r15
  unsigned int *v24; // rax
  _DWORD *v25; // r12
  int FileInformation; // eax
  unsigned int v27; // ecx
  __int64 RelatedMountPoint; // rax
  unsigned __int16 v29; // r10
  char v30; // r11
  unsigned int v31; // r9d
  unsigned int v32; // r12d
  char *v33; // rax
  __int16 v34; // r12
  unsigned int *v35; // rdi
  char *v36; // rbx
  char *v37; // rdi
  unsigned __int16 v38; // di
  PVOID v39; // rsi
  unsigned int v40; // r15d
  __int16 v41; // dx
  void *MostRecentlyUsedName; // rax
  int updated; // eax
  PVOID v44; // rcx
  IRP *result; // rax
  int v46; // ecx
  PVOID EcpContext; // [rsp+50h] [rbp-39h] BYREF
  PVOID P; // [rsp+58h] [rbp-31h]
  PADAPTER_OBJECT DmaAdapter; // [rsp+60h] [rbp-29h]
  __int64 v50; // [rsp+68h] [rbp-21h] BYREF
  struct _ECP_LIST *ExtraCreateParameter; // [rsp+70h] [rbp-19h] BYREF
  char *v52; // [rsp+78h] [rbp-11h]
  unsigned int *v53; // [rsp+80h] [rbp-9h]
  PVOID v54; // [rsp+88h] [rbp-1h]
  unsigned __int16 *v55; // [rsp+90h] [rbp+7h]
  char v58; // [rsp+100h] [rbp+77h]
  PVOID v59; // [rsp+108h] [rbp+7Fh] BYREF

  v3 = *(struct _DMA_ADAPTER **)(a2 + 64);
  DmaAdapter = v3;
  LODWORD(v50) = 0;
  v5 = 0;
  LOWORD(v59) = 0;
  v6 = 0LL;
  v52 = 0LL;
  EcpContext = 0LL;
  v7 = 0LL;
  v58 = 0;
  v54 = 0LL;
  P = 0LL;
  v53 = 0LL;
  ExtraCreateParameter = 0LL;
  IrpExtraCreateParameter = IoGetIrpExtraCreateParameter(a1, &ExtraCreateParameter);
  IopSymlinkGetECP(ExtraCreateParameter, &EcpContext);
  v9 = (UNICODE_STRING *)EcpContext;
  v10 = 4194817LL;
  *((_WORD *)EcpContext + 1) |= 2u;
  if ( a1->IoStatus.Status != 260 )
    IrpExtraCreateParameter = -1073741192;
  v11 = a1->IoStatus.Information - 2684354563u;
  if ( v11 > 0x16 || !_bittest64(&v10, v11) )
    IrpExtraCreateParameter = -1073741192;
  v12 = 0;
  v13 = *((unsigned __int16 *)a3 + 3);
  if ( !a1->Tail.Overlay.AuxiliaryBuffer )
    IrpExtraCreateParameter = -1073741192;
  if ( !a3 )
    IrpExtraCreateParameter = -1073741192;
  if ( (unsigned __int16)v13 >= 0x4000u )
    IrpExtraCreateParameter = -1073741192;
  v14 = *a3;
  if ( *((_WORD *)a3 + 2) >= 0x4000u )
    IrpExtraCreateParameter = -1073741192;
  if ( (unsigned int)(v14 + 1610612733) > 0x16 || !_bittest((const int *)&v10, v14 + 1610612733) )
    IrpExtraCreateParameter = -1073741192;
  v55 = (unsigned __int16 *)(a2 + 88);
  if ( !*(_WORD *)(a2 + 88) )
    IrpExtraCreateParameter = -1073741192;
  v15 = IrpExtraCreateParameter < 0;
  if ( IrpExtraCreateParameter >= 0 )
  {
    if ( v14 == -1610612733 )
    {
      v16 = *((_WORD *)a3 + 5);
      v52 = (char *)a3 + *((unsigned __int16 *)a3 + 4) + 16;
      LOWORD(v59) = v16;
    }
    else if ( v14 == -1610612724 )
    {
      v17 = (char *)a3 + *((unsigned __int16 *)a3 + 4) + 20;
      LOWORD(v59) = *((_WORD *)a3 + 5);
      v52 = v17;
      if ( (a3[4] & 1) == 0 )
        goto LABEL_51;
      v58 = 1;
      v18 = 256;
      v19 = 256;
      if ( v3 && !IopGetFileObjectExtension((__int64)v3, 5, 0LL) )
      {
        while ( 1 )
        {
          PoolWithTag = (unsigned __int16 *)ExAllocatePoolWithTag(PagedPool, v19, 0x63466F49u);
          v12 = 0;
          P = PoolWithTag;
          v21 = (const void **)PoolWithTag;
          if ( !PoolWithTag )
            break;
          memset(PoolWithTag, 0, v19);
          NameStringMode = ObQueryNameStringMode(*(_QWORD *)(a2 + 8), (_DWORD)v21, v19, (unsigned int)&v50, 0);
          v12 = 0;
          IrpExtraCreateParameter = NameStringMode;
          if ( NameStringMode >= 0 )
            goto LABEL_33;
          if ( NameStringMode != -2147483643 )
            goto LABEL_32;
          v19 = v50;
          if ( (unsigned int)v50 >= 0xFFFF )
          {
            IrpExtraCreateParameter = -1073741562;
LABEL_32:
            if ( IrpExtraCreateParameter >= 0 )
            {
LABEL_33:
              v23 = DmaAdapter;
              v5 = *(unsigned __int16 *)v21 + *v55 - *((unsigned __int16 *)a3 + 3);
              while ( 1 )
              {
                v24 = (unsigned int *)ExAllocatePoolWithTag(PagedPool, v18, 0x63466F49u);
                v12 = 0;
                v54 = v24;
                v25 = v24;
                if ( !v24 )
                {
                  IrpExtraCreateParameter = -1073741670;
                  goto LABEL_40;
                }
                v53 = v24;
                memset(v24, 0, v18);
                FileInformation = IopGetFileInformation(v23, (__int64)&v50);
                v12 = 0;
                IrpExtraCreateParameter = FileInformation;
                if ( FileInformation >= 0 )
                  break;
                if ( FileInformation != -2147483643 )
                  goto LABEL_40;
                v18 = *v25 + 8;
                if ( v18 >= 0xFFFF )
                {
                  IrpExtraCreateParameter = -1073741562;
LABEL_40:
                  v7 = (const void **)P;
                  goto LABEL_49;
                }
                ExFreePoolWithTag(v25, 0);
              }
              v27 = v5 + *v25;
              if ( v27 < v5 )
              {
                v5 = -1;
                IrpExtraCreateParameter = -1073741675;
                goto LABEL_40;
              }
              v9 = (UNICODE_STRING *)EcpContext;
              v5 += *v25;
              v7 = (const void **)P;
              v3 = DmaAdapter;
              if ( v27 >= 0xFFFF )
                IrpExtraCreateParameter = -1073741562;
              goto LABEL_51;
            }
            v7 = v21;
LABEL_49:
            v3 = DmaAdapter;
            goto LABEL_50;
          }
          ExFreePoolWithTag(v21, 0);
        }
        IrpExtraCreateParameter = -1073741670;
        v7 = 0LL;
        goto LABEL_49;
      }
      v7 = 0LL;
LABEL_50:
      v9 = (UNICODE_STRING *)EcpContext;
LABEL_51:
      v13 = *((unsigned __int16 *)a3 + 3);
    }
    else
    {
      IrpExtraCreateParameter = -1073741194;
    }
    if ( IrpExtraCreateParameter < 0 )
      goto LABEL_91;
    RelatedMountPoint = IopSymlinkGetRelatedMountPoint(v9, v13);
    if ( !RelatedMountPoint )
      RelatedMountPoint = IopSymlinkGetMostRecentlyUsedName((__int64)v9);
    v30 = v58;
    v31 = *(unsigned __int16 *)(RelatedMountPoint + 16);
    if ( v58 )
    {
      if ( !v3 || IopGetFileObjectExtension((__int64)v3, 5, 0LL) )
      {
        if ( v5 <= v31 )
          v5 = v31;
      }
      else
      {
        v5 += v31;
      }
      v5 += 2;
    }
    v32 = v5 + v29 + *((unsigned __int16 *)a3 + 3) + 4;
    if ( v32 >= 0xFFFF )
    {
      IrpExtraCreateParameter = -1073741562;
    }
    else
    {
      v33 = (char *)ExAllocatePoolWithTag(PagedPool, v32, 0x63466F49u);
      v12 = 0;
      v6 = v33;
      if ( !v33 )
      {
        v29 = (unsigned __int16)v59;
        IrpExtraCreateParameter = -1073741670;
        v30 = v58;
        goto LABEL_69;
      }
      memset(v33, 0, v32);
      v29 = (unsigned __int16)v59;
      v30 = v58;
    }
    v12 = 0;
LABEL_69:
    v34 = v32 - 2;
    if ( IrpExtraCreateParameter < 0 )
      goto LABEL_91;
    if ( v30 )
    {
      v59 = 0LL;
      if ( DmaAdapter && !IopGetFileObjectExtension((__int64)DmaAdapter, 5, 0LL) )
      {
        memmove(v6, v7[1], *(unsigned __int16 *)v7);
        v35 = v53;
        v36 = &v6[2 * ((unsigned __int64)*(unsigned __int16 *)v7 >> 1)];
        memmove(v36, v53 + 1, *v53);
        v37 = &v36[2 * ((unsigned __int64)*v35 >> 1)];
        if ( **(_WORD **)(a2 + 96) != 92 && *((_WORD *)v37 - 1) != 92 )
        {
          *(_WORD *)v37 = 92;
          LOWORD(v37) = (_WORD)v37 + 2;
        }
        v38 = (_WORD)v37 - (_WORD)v6;
        IopSymlinkRemoveECP(ExtraCreateParameter, &EcpContext);
        v39 = EcpContext;
        v40 = *((unsigned __int16 *)EcpContext + 8) + 2 + v38;
        if ( v40 >= 0xFFFF )
        {
          IrpExtraCreateParameter = -1073741562;
LABEL_78:
          ExFreePoolWithTag(v6, 0);
LABEL_90:
          v12 = 0;
LABEL_91:
          if ( v58 == v12 )
            goto LABEL_97;
          if ( P )
            ExFreePoolWithTag(P, 0);
          if ( !v54 )
            goto LABEL_97;
          v44 = v54;
          goto LABEL_96;
        }
        IrpExtraCreateParameter = IopSymlinkAllocateAndAddECP(a1, &v59, v40);
        if ( IrpExtraCreateParameter < 0 )
          goto LABEL_78;
        v41 = v40 + 32;
        v9 = (UNICODE_STRING *)v59;
        IopSymlinkInitializeSymlinkInfo(
          (__int64)v59,
          v41,
          *((const void **)v39 + 3),
          *((_WORD *)v39 + 8),
          *(_WORD *)v39,
          v6,
          v38,
          *(_WORD *)P,
          *((_WORD *)v39 + 1),
          *((_QWORD *)v39 + 1));
        FsRtlFreeExtraCreateParameter(v39);
      }
      MostRecentlyUsedName = (void *)IopSymlinkGetRelatedMountPoint(v9, *((unsigned __int16 *)a3 + 3));
      if ( !MostRecentlyUsedName )
        MostRecentlyUsedName = (void *)IopSymlinkGetMostRecentlyUsedName((__int64)v9);
      updated = IopSymlinkApplyToOpenedName(a2, MostRecentlyUsedName, (int)a3, a1, v6, v34);
    }
    else
    {
      IrpExtraCreateParameter = IopCopyOverNewPathSecure(v6, v52, v29, a2, *((_WORD *)a3 + 3));
      if ( IrpExtraCreateParameter < 0 )
      {
        v44 = v6;
LABEL_96:
        ExFreePoolWithTag(v44, 0);
        goto LABEL_97;
      }
      if ( *a3 == -1610612733 )
      {
        IrpExtraCreateParameter = IopSymlinkRememberJunction(*((_WORD *)a3 + 3), a2, (__int64)a1, v9);
LABEL_97:
        v15 = IrpExtraCreateParameter < 0;
        goto LABEL_98;
      }
      updated = IopSymlinkUpdateECP(a1, v9, 0, (const UNICODE_STRING *)(a2 + 88), 0, v9->MaximumLength & 0xFFFE);
    }
    IrpExtraCreateParameter = updated;
    goto LABEL_90;
  }
LABEL_98:
  result = a1;
  v46 = 260;
  if ( v15 )
    v46 = IrpExtraCreateParameter;
  a1->IoStatus.Status = v46;
  return result;
}
