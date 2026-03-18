/*
 * XREFs of IopGraftName @ 0x1406CE040
 * Callers:
 *     IopSymlinkProcessReparse @ 0x1406CDFE4 (IopSymlinkProcessReparse.c)
 * Callees:
 *     IopSymlinkRemoveECP @ 0x140255A4C (IopSymlinkRemoveECP.c)
 *     IopGetFileObjectExtension @ 0x140281B14 (IopGetFileObjectExtension.c)
 *     IopSymlinkGetMostRecentlyUsedName @ 0x14030ADAC (IopSymlinkGetMostRecentlyUsedName.c)
 *     IopSymlinkGetECP @ 0x14030ADCC (IopSymlinkGetECP.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     memset @ 0x140408F80 (memset.c)
 *     ObQueryNameStringMode @ 0x1405D9AA0 (ObQueryNameStringMode.c)
 *     IopGetFileInformation @ 0x1405DB0F4 (IopGetFileInformation.c)
 *     IoGetIrpExtraCreateParameter @ 0x1405FFDF0 (IoGetIrpExtraCreateParameter.c)
 *     FsRtlFreeExtraCreateParameter @ 0x14066E310 (FsRtlFreeExtraCreateParameter.c)
 *     IopSymlinkUpdateECP @ 0x1406CD9E8 (IopSymlinkUpdateECP.c)
 *     IopSymlinkRememberJunction @ 0x1406CDB70 (IopSymlinkRememberJunction.c)
 *     IopSymlinkInitializeSymlinkInfo @ 0x1406CDE34 (IopSymlinkInitializeSymlinkInfo.c)
 *     IopSymlinkAllocateAndAddECP @ 0x1406CDF18 (IopSymlinkAllocateAndAddECP.c)
 *     IopCopyOverNewPath @ 0x1406CE30C (IopCopyOverNewPath.c)
 *     IopSymlinkGetRelatedMountPoint @ 0x1406CE3EC (IopSymlinkGetRelatedMountPoint.c)
 *     IopSymlinkApplyToOpenedName @ 0x140890F50 (IopSymlinkApplyToOpenedName.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall IopGraftName(PIRP Irp, __int64 a2, int *a3)
{
  unsigned int v4; // edi
  char *v5; // r13
  const void **v6; // rsi
  int IrpExtraCreateParameter; // ebx
  UNICODE_STRING *v9; // r15
  __int64 v10; // r9
  unsigned __int64 v11; // rcx
  __int64 v12; // rdx
  void *v13; // r10
  int v14; // eax
  __int16 v15; // r8
  __int64 RelatedMountPoint; // rax
  unsigned __int16 v17; // dx
  unsigned __int16 v18; // r8
  int v19; // r11d
  char v20; // cl
  unsigned int v21; // eax
  unsigned int v22; // r12d
  char *v23; // rax
  __int16 v24; // r12
  PIRP v25; // rdi
  __int64 result; // rax
  __int64 v27; // rax
  int updated; // eax
  ULONG v29; // esi
  unsigned int v30; // r15d
  unsigned __int16 *PoolWithTag; // rax
  const void **v32; // r12
  int v33; // eax
  int v34; // eax
  struct _FILE_OBJECT *v35; // r12
  struct _IRP *v36; // rax
  struct _IRP *v37; // r15
  int FileInformation; // eax
  unsigned int v39; // ecx
  struct _IRP *v40; // rdi
  char *v41; // rbx
  char *v42; // rdi
  unsigned __int16 v43; // di
  PVOID v44; // rsi
  unsigned int v45; // r15d
  __int16 v46; // dx
  void *MostRecentlyUsedName; // rax
  PVOID EcpContext; // [rsp+50h] [rbp-39h] BYREF
  PVOID P; // [rsp+58h] [rbp-31h]
  __int64 v50; // [rsp+60h] [rbp-29h] BYREF
  PADAPTER_OBJECT DmaAdapter; // [rsp+68h] [rbp-21h]
  struct _ECP_LIST *ExtraCreateParameter; // [rsp+70h] [rbp-19h] BYREF
  __int64 v53; // [rsp+78h] [rbp-11h]
  struct _IRP *v54; // [rsp+80h] [rbp-9h]
  const UNICODE_STRING *v55; // [rsp+88h] [rbp-1h]
  PVOID v56; // [rsp+90h] [rbp+7h]
  char v59; // [rsp+100h] [rbp+77h]
  PVOID v60; // [rsp+108h] [rbp+7Fh] BYREF

  DmaAdapter = *(PADAPTER_OBJECT *)(a2 + 64);
  v4 = 0;
  LODWORD(v50) = 0;
  LOWORD(v60) = 0;
  v5 = 0LL;
  v53 = 0LL;
  EcpContext = 0LL;
  v6 = 0LL;
  v59 = 0;
  v56 = 0LL;
  P = 0LL;
  v54 = 0LL;
  ExtraCreateParameter = 0LL;
  IrpExtraCreateParameter = IoGetIrpExtraCreateParameter(Irp, &ExtraCreateParameter);
  IopSymlinkGetECP(ExtraCreateParameter, &EcpContext);
  v9 = (UNICODE_STRING *)EcpContext;
  v10 = 4194817LL;
  *((_WORD *)EcpContext + 1) |= 2u;
  if ( Irp->IoStatus.Status != 260 )
    IrpExtraCreateParameter = -1073741192;
  v11 = Irp->IoStatus.Information - 2684354563u;
  if ( v11 > 0x16 || !_bittest64(&v10, v11) )
    IrpExtraCreateParameter = -1073741192;
  v12 = *((unsigned __int16 *)a3 + 3);
  LOBYTE(v13) = 0;
  if ( !Irp->Tail.Overlay.AuxiliaryBuffer )
    IrpExtraCreateParameter = -1073741192;
  if ( !a3 )
    IrpExtraCreateParameter = -1073741192;
  if ( (unsigned __int16)v12 >= 0x4000u )
    IrpExtraCreateParameter = -1073741192;
  v14 = *a3;
  if ( *((_WORD *)a3 + 2) >= 0x4000u )
    IrpExtraCreateParameter = -1073741192;
  if ( (unsigned int)(v14 + 1610612733) > 0x16 || !_bittest((const int *)&v10, v14 + 1610612733) )
    IrpExtraCreateParameter = -1073741192;
  v55 = (const UNICODE_STRING *)(a2 + 88);
  if ( !*(_WORD *)(a2 + 88) )
    IrpExtraCreateParameter = -1073741192;
  if ( IrpExtraCreateParameter >= 0 )
  {
    if ( v14 == -1610612733 )
    {
      v15 = *((_WORD *)a3 + 5);
      v53 = (__int64)a3 + *((unsigned __int16 *)a3 + 4) + 16;
      LOWORD(v60) = v15;
      goto LABEL_20;
    }
    if ( v14 != -1610612724 )
    {
      IrpExtraCreateParameter = -1073741194;
      goto LABEL_20;
    }
    v27 = (__int64)a3 + *((unsigned __int16 *)a3 + 4) + 20;
    LOWORD(v60) = *((_WORD *)a3 + 5);
    v53 = v27;
    if ( (a3[4] & 1) != 0 )
    {
      v29 = 256;
      v59 = 1;
      v30 = 256;
      if ( DmaAdapter )
      {
        if ( !IopGetFileObjectExtension((__int64)DmaAdapter, 5, 0LL) )
        {
          while ( 1 )
          {
            PoolWithTag = (unsigned __int16 *)ExAllocatePoolWithTag(PagedPool, v30, 0x63466F49u);
            LOBYTE(v13) = 0;
            P = PoolWithTag;
            v32 = (const void **)PoolWithTag;
            if ( !PoolWithTag )
            {
              IrpExtraCreateParameter = -1073741670;
              v6 = 0LL;
              goto LABEL_55;
            }
            memset(PoolWithTag, 0, v30);
            v33 = ObQueryNameStringMode(*(char **)(a2 + 8), (__int64)v32, v30, &v50, 0);
            LOBYTE(v13) = 0;
            IrpExtraCreateParameter = v33;
            if ( v33 >= 0 )
              break;
            if ( v33 != -2147483643 )
              goto LABEL_53;
            v30 = v50;
            if ( (unsigned int)v50 >= 0xFFFF )
            {
              IrpExtraCreateParameter = -1073741562;
LABEL_53:
              if ( IrpExtraCreateParameter < 0 )
              {
                v6 = v32;
                goto LABEL_55;
              }
              break;
            }
            ExFreePoolWithTag(v32, 0);
          }
          v34 = *(unsigned __int16 *)v32;
          v35 = (struct _FILE_OBJECT *)DmaAdapter;
          v4 = v34 + v55->Length - *((unsigned __int16 *)a3 + 3);
          while ( 1 )
          {
            v36 = (struct _IRP *)ExAllocatePoolWithTag(PagedPool, v29, 0x63466F49u);
            LOBYTE(v13) = 0;
            v56 = v36;
            v37 = v36;
            if ( !v36 )
            {
              IrpExtraCreateParameter = -1073741670;
              goto LABEL_64;
            }
            v54 = v36;
            memset(v36, 0, v29);
            FileInformation = IopGetFileInformation(v35, v29, 9u, v37, &v50);
            LOBYTE(v13) = 0;
            IrpExtraCreateParameter = FileInformation;
            if ( FileInformation >= 0 )
              break;
            if ( FileInformation != -2147483643 )
              goto LABEL_64;
            v29 = *(_DWORD *)&v37->Type + 8;
            if ( v29 >= 0xFFFF )
            {
              IrpExtraCreateParameter = -1073741562;
LABEL_64:
              v6 = (const void **)P;
              goto LABEL_55;
            }
            ExFreePoolWithTag(v37, 0);
          }
          v39 = v4 + *(_DWORD *)&v37->Type;
          if ( v39 < v4 )
          {
            v4 = -1;
            IrpExtraCreateParameter = -1073741675;
            goto LABEL_64;
          }
          v9 = (UNICODE_STRING *)EcpContext;
          v4 = v39;
          v6 = (const void **)P;
          if ( v39 >= 0xFFFF )
            IrpExtraCreateParameter = -1073741562;
          goto LABEL_37;
        }
        v6 = 0LL;
      }
      else
      {
        v6 = 0LL;
      }
LABEL_55:
      v9 = (UNICODE_STRING *)EcpContext;
    }
LABEL_37:
    v12 = *((unsigned __int16 *)a3 + 3);
  }
LABEL_20:
  if ( IrpExtraCreateParameter < 0 )
    goto LABEL_86;
  RelatedMountPoint = IopSymlinkGetRelatedMountPoint(v9, v12);
  if ( !RelatedMountPoint )
    RelatedMountPoint = IopSymlinkGetMostRecentlyUsedName((__int64)v9);
  v20 = v59;
  v21 = *(unsigned __int16 *)(RelatedMountPoint + 16);
  if ( v59 )
  {
    if ( v4 > v21 )
      v21 = v4;
    v4 = v19 + v21;
  }
  v22 = v4 + v18 + v17 + 4;
  if ( v22 >= 0xFFFF )
  {
    IrpExtraCreateParameter = -1073741562;
  }
  else
  {
    v23 = (char *)ExAllocatePoolWithTag(PagedPool, v22, 0x63466F49u);
    v13 = 0LL;
    v5 = v23;
    if ( v23 )
    {
      memset(v23, 0, v22);
      v13 = 0LL;
    }
    else
    {
      IrpExtraCreateParameter = -1073741670;
    }
    v20 = v59;
  }
  v24 = v22 - 2;
  if ( IrpExtraCreateParameter < 0 )
    goto LABEL_86;
  if ( !v20 )
  {
    IopCopyOverNewPath(v5, *((_WORD *)a3 + 3));
    v25 = Irp;
    if ( *a3 == -1610612733 )
    {
      IrpExtraCreateParameter = IopSymlinkRememberJunction(*((_WORD *)a3 + 3), a2, (__int64)Irp, v9);
      goto LABEL_32;
    }
    updated = IopSymlinkUpdateECP(Irp, v9, 0, v55, 0, v9->MaximumLength & 0xFFFE);
    goto LABEL_39;
  }
  v60 = v13;
  if ( !DmaAdapter || IopGetFileObjectExtension((__int64)DmaAdapter, 5, 0LL) )
    goto LABEL_89;
  memmove(v5, v6[1], *(unsigned __int16 *)v6);
  v40 = v54;
  v41 = &v5[2 * ((unsigned __int64)*(unsigned __int16 *)v6 >> 1)];
  memmove(v41, &v54->Size + 1, *(unsigned int *)&v54->Type);
  v42 = &v41[2 * ((unsigned __int64)*(unsigned int *)&v40->Type >> 1)];
  if ( **(_WORD **)(a2 + 96) != 92 && *((_WORD *)v42 - 1) != 92 )
  {
    *(_WORD *)v42 = 92;
    LOWORD(v42) = (_WORD)v42 + 2;
  }
  v43 = (_WORD)v42 - (_WORD)v5;
  IopSymlinkRemoveECP(ExtraCreateParameter, &EcpContext);
  v44 = EcpContext;
  v45 = v43 + *((unsigned __int16 *)EcpContext + 8) + 2;
  if ( v45 < 0xFFFF )
  {
    IrpExtraCreateParameter = IopSymlinkAllocateAndAddECP(Irp, &v60, v43 + *((_WORD *)EcpContext + 8) + 2);
    if ( IrpExtraCreateParameter < 0 )
      goto LABEL_85;
    v46 = v45 + 32;
    v9 = (UNICODE_STRING *)v60;
    IopSymlinkInitializeSymlinkInfo(
      (__int64)v60,
      v46,
      *((const void **)v44 + 3),
      *((_WORD *)v44 + 8),
      *(_WORD *)v44,
      v5,
      v43,
      *(_WORD *)P,
      *((_WORD *)v44 + 1),
      *((_QWORD *)v44 + 1));
    FsRtlFreeExtraCreateParameter(v44);
LABEL_89:
    MostRecentlyUsedName = (void *)IopSymlinkGetRelatedMountPoint(v9, *((unsigned __int16 *)a3 + 3));
    if ( !MostRecentlyUsedName )
      MostRecentlyUsedName = (void *)IopSymlinkGetMostRecentlyUsedName((__int64)v9);
    v25 = Irp;
    updated = IopSymlinkApplyToOpenedName(a2, MostRecentlyUsedName, (int)a3, Irp, v5, v24);
LABEL_39:
    IrpExtraCreateParameter = updated;
    LOBYTE(v13) = 0;
    goto LABEL_40;
  }
  IrpExtraCreateParameter = -1073741562;
LABEL_85:
  ExFreePoolWithTag(v5, 0);
  LOBYTE(v13) = 0;
LABEL_86:
  v25 = Irp;
LABEL_40:
  if ( v59 != (_BYTE)v13 )
  {
    if ( P )
      ExFreePoolWithTag(P, 0);
    if ( v56 )
      ExFreePoolWithTag(v56, 0);
  }
LABEL_32:
  result = 260LL;
  if ( IrpExtraCreateParameter < 0 )
    result = (unsigned int)IrpExtraCreateParameter;
  v25->IoStatus.Status = result;
  return result;
}
