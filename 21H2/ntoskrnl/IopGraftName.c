/*
 * XREFs of IopGraftName @ 0x1406B9FD4
 * Callers:
 *     IopSymlinkProcessReparse @ 0x1406B9F74 (IopSymlinkProcessReparse.c)
 * Callees:
 *     IopSymlinkGetMostRecentlyUsedName @ 0x14024011C (IopSymlinkGetMostRecentlyUsedName.c)
 *     IopSymlinkGetECP @ 0x14024013C (IopSymlinkGetECP.c)
 *     IopGetFileObjectExtension @ 0x1402A3A14 (IopGetFileObjectExtension.c)
 *     IopSymlinkRemoveECP @ 0x1402A4DEC (IopSymlinkRemoveECP.c)
 *     Feature_2506530111__private_IsEnabled @ 0x140417C90 (Feature_2506530111__private_IsEnabled.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     IopCopyOverNewPathSecure @ 0x140658770 (IopCopyOverNewPathSecure.c)
 *     FsRtlFreeExtraCreateParameter @ 0x14066EF20 (FsRtlFreeExtraCreateParameter.c)
 *     IoGetIrpExtraCreateParameter @ 0x14069B6E0 (IoGetIrpExtraCreateParameter.c)
 *     IopSymlinkUpdateECP @ 0x1406B9A14 (IopSymlinkUpdateECP.c)
 *     IopSymlinkRememberJunction @ 0x1406B9BC0 (IopSymlinkRememberJunction.c)
 *     IopSymlinkInitializeSymlinkInfo @ 0x1406B9DC4 (IopSymlinkInitializeSymlinkInfo.c)
 *     IopSymlinkAllocateAndAddECP @ 0x1406B9EA8 (IopSymlinkAllocateAndAddECP.c)
 *     IopCopyOverNewPath @ 0x1406BA5E4 (IopCopyOverNewPath.c)
 *     IopSymlinkGetRelatedMountPoint @ 0x1406BA6C4 (IopSymlinkGetRelatedMountPoint.c)
 *     IopGetFileInformation @ 0x14070FC40 (IopGetFileInformation.c)
 *     ObQueryNameStringMode @ 0x1407103B0 (ObQueryNameStringMode.c)
 *     IopSymlinkApplyToOpenedName @ 0x140937CC0 (IopSymlinkApplyToOpenedName.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

void __fastcall IopGraftName(IRP *a1, __int64 a2, int *a3)
{
  IRP *v5; // r15
  unsigned int v6; // r14d
  void *v7; // rdi
  NTSTATUS IrpExtraCreateParameter; // edi
  UNICODE_STRING *v9; // r13
  int v10; // ebx
  __int64 v11; // r8
  unsigned __int64 v12; // rcx
  int v13; // eax
  unsigned __int16 v14; // r11
  __int64 v15; // rdx
  char *v16; // rax
  unsigned int v17; // r15d
  __int64 Pool2; // rax
  unsigned __int16 *v19; // r12
  int NameStringMode; // eax
  unsigned int v21; // ebx
  PVOID v22; // rdi
  unsigned int *v23; // rax
  _DWORD *v24; // r15
  int FileInformation; // eax
  unsigned int v26; // ecx
  __int64 RelatedMountPoint; // rax
  unsigned __int16 v28; // dx
  unsigned __int16 v29; // r11
  PVOID v30; // r15
  unsigned int v31; // r10d
  unsigned int v32; // r12d
  __int64 v33; // rax
  int v34; // ecx
  char *v35; // rdi
  unsigned int v36; // r12d
  unsigned __int16 *v37; // rbx
  unsigned int *v38; // r14
  char *v39; // rbx
  char *v40; // r14
  unsigned __int16 v41; // r14
  PVOID v42; // r15
  unsigned int v43; // r13d
  __int16 v44; // dx
  __int64 MostRecentlyUsedName; // rax
  int IsEnabled; // eax
  __int64 v47; // rbx
  int updated; // eax
  __int16 v49; // [rsp+20h] [rbp-69h]
  __int64 v50; // [rsp+50h] [rbp-39h] BYREF
  PVOID Object; // [rsp+58h] [rbp-31h]
  PVOID EcpContext; // [rsp+60h] [rbp-29h] BYREF
  char *v53; // [rsp+68h] [rbp-21h]
  const void **v54; // [rsp+70h] [rbp-19h]
  struct _ECP_LIST *ExtraCreateParameter; // [rsp+78h] [rbp-11h] BYREF
  unsigned int *v56; // [rsp+80h] [rbp-9h]
  const UNICODE_STRING *v57; // [rsp+88h] [rbp-1h]
  PVOID P; // [rsp+90h] [rbp+7h]
  PVOID v61; // [rsp+100h] [rbp+77h] BYREF
  unsigned __int16 v62; // [rsp+108h] [rbp+7Fh]

  v5 = a1;
  v6 = 0;
  LODWORD(v50) = 0;
  v62 = 0;
  v7 = *(void **)(a2 + 64);
  v53 = 0LL;
  EcpContext = 0LL;
  LOBYTE(v61) = 0;
  P = 0LL;
  v54 = 0LL;
  v56 = 0LL;
  ExtraCreateParameter = 0LL;
  Object = v7;
  IrpExtraCreateParameter = IoGetIrpExtraCreateParameter(a1, &ExtraCreateParameter);
  IopSymlinkGetECP(ExtraCreateParameter, &EcpContext);
  v9 = (UNICODE_STRING *)EcpContext;
  v10 = -1073741192;
  v11 = 4194817LL;
  *((_WORD *)EcpContext + 1) |= 2u;
  if ( v5->IoStatus.Status != 260 )
    IrpExtraCreateParameter = -1073741192;
  v12 = v5->IoStatus.Information - 2684354563u;
  if ( v12 > 0x16 || !_bittest64(&v11, v12) )
    IrpExtraCreateParameter = -1073741192;
  if ( !v5->Tail.Overlay.AuxiliaryBuffer )
    IrpExtraCreateParameter = -1073741192;
  if ( !a3 )
    IrpExtraCreateParameter = -1073741192;
  if ( *((_WORD *)a3 + 3) >= 0x4000u )
    IrpExtraCreateParameter = -1073741192;
  v13 = *a3;
  if ( *((_WORD *)a3 + 2) >= 0x4000u )
    IrpExtraCreateParameter = -1073741192;
  if ( (unsigned int)(v13 + 1610612733) > 0x16 || !_bittest((const int *)&v11, v13 + 1610612733) )
    IrpExtraCreateParameter = -1073741192;
  v57 = (const UNICODE_STRING *)(a2 + 88);
  if ( !*(_WORD *)(a2 + 88) )
    goto LABEL_92;
  v10 = IrpExtraCreateParameter;
  if ( IrpExtraCreateParameter >= 0 )
  {
    if ( v13 == -1610612733 )
    {
      v14 = *((_WORD *)a3 + 5);
      v53 = (char *)a3 + *((unsigned __int16 *)a3 + 4) + 16;
      v62 = v14;
LABEL_21:
      v15 = *((unsigned __int16 *)a3 + 3);
      goto LABEL_46;
    }
    if ( v13 != -1610612724 )
    {
      v10 = -1073741194;
      goto LABEL_92;
    }
    v16 = (char *)a3 + *((unsigned __int16 *)a3 + 4) + 20;
    v62 = *((_WORD *)a3 + 5);
    v53 = v16;
    if ( (a3[4] & 1) != 0 )
    {
      v17 = 256;
      LOBYTE(v61) = 1;
      if ( Object )
      {
        if ( !IopGetFileObjectExtension((__int64)Object, 5, 0LL) )
        {
          while ( 1 )
          {
            Pool2 = ExAllocatePool2(256LL, v17, 1665560393LL);
            v54 = (const void **)Pool2;
            v19 = (unsigned __int16 *)Pool2;
            if ( !Pool2 )
            {
              v10 = -1073741670;
              goto LABEL_77;
            }
            NameStringMode = ObQueryNameStringMode(*(_QWORD *)(a2 + 8), Pool2, v17, (unsigned int)&v50, 0);
            v10 = NameStringMode;
            if ( NameStringMode >= 0 )
              break;
            if ( NameStringMode != -2147483643 )
              goto LABEL_45;
            v17 = v50;
            if ( (unsigned int)v50 >= 0xFFFF )
            {
LABEL_37:
              v10 = -1073741562;
              goto LABEL_86;
            }
            ExFreePoolWithTag(v19, 0);
          }
          v21 = 256;
          v22 = Object;
          v6 = *v19 + v57->Length - *((unsigned __int16 *)a3 + 3);
          while ( 1 )
          {
            v23 = (unsigned int *)ExAllocatePool2(256LL, v21, 1665560393LL);
            P = v23;
            v24 = v23;
            if ( !v23 )
            {
              v10 = -1073741670;
              goto LABEL_86;
            }
            v56 = v23;
            FileInformation = IopGetFileInformation(v22, (__int64)&v50);
            v10 = FileInformation;
            if ( FileInformation >= 0 )
              break;
            if ( FileInformation != -2147483643 )
              goto LABEL_45;
            v21 = *v24 + 8;
            if ( v21 >= 0xFFFF )
              goto LABEL_37;
            ExFreePoolWithTag(v24, 0);
          }
          v26 = v6 + *v24;
          if ( v26 < v6 )
          {
            v10 = -1073741675;
            goto LABEL_86;
          }
          v6 += *v24;
          if ( v26 < 0xFFFF )
            goto LABEL_21;
          v10 = -1073741562;
        }
      }
    }
  }
LABEL_45:
  v15 = *((unsigned __int16 *)a3 + 3);
  if ( v10 < 0 )
    goto LABEL_84;
LABEL_46:
  RelatedMountPoint = IopSymlinkGetRelatedMountPoint(v9, v15);
  if ( !RelatedMountPoint )
    RelatedMountPoint = IopSymlinkGetMostRecentlyUsedName((__int64)v9);
  v30 = Object;
  v31 = *(unsigned __int16 *)(RelatedMountPoint + 16);
  if ( (_BYTE)v61 )
  {
    if ( !Object || IopGetFileObjectExtension((__int64)Object, 5, 0LL) )
    {
      if ( v6 <= v31 )
        v6 = v31;
    }
    else
    {
      v6 += v31;
    }
    v28 = *((_WORD *)a3 + 3);
    v6 += 2;
  }
  v32 = v6 + v29 + v28 + 4;
  if ( v32 >= 0xFFFF )
  {
    v10 = -1073741562;
    goto LABEL_84;
  }
  v33 = ExAllocatePool2(256LL, v32, 1665560393LL);
  v34 = v10;
  v35 = (char *)v33;
  if ( !v33 )
    v34 = -1073741670;
  v36 = v32 - 2;
  v10 = v34;
  if ( v34 < 0 )
  {
LABEL_84:
    if ( !(_BYTE)v61 )
    {
LABEL_89:
      v5 = a1;
LABEL_90:
      if ( v10 >= 0 )
        v10 = 260;
      goto LABEL_92;
    }
LABEL_85:
    v19 = (unsigned __int16 *)v54;
    if ( v54 )
LABEL_86:
      ExFreePoolWithTag(v19, 0);
    if ( P )
      ExFreePoolWithTag(P, 0);
    goto LABEL_89;
  }
  if ( (_BYTE)v61 )
  {
    v61 = 0LL;
    if ( v30 && !IopGetFileObjectExtension((__int64)v30, 5, 0LL) )
    {
      v37 = (unsigned __int16 *)v54;
      memmove(v35, v54[1], *(unsigned __int16 *)v54);
      v38 = v56;
      v39 = &v35[2 * ((unsigned __int64)*v37 >> 1)];
      memmove(v39, v56 + 1, *v56);
      v40 = &v39[2 * ((unsigned __int64)*v38 >> 1)];
      if ( **(_WORD **)(a2 + 96) != 92 && *((_WORD *)v40 - 1) != 92 )
      {
        *(_WORD *)v40 = 92;
        LOWORD(v40) = (_WORD)v40 + 2;
      }
      v41 = (_WORD)v40 - (_WORD)v35;
      IopSymlinkRemoveECP(ExtraCreateParameter, &EcpContext);
      v42 = EcpContext;
      v43 = *((unsigned __int16 *)EcpContext + 8) + 2 + v41;
      if ( v43 >= 0xFFFF )
      {
        v10 = -1073741562;
LABEL_67:
        ExFreePoolWithTag(v35, 0);
        goto LABEL_85;
      }
      v10 = IopSymlinkAllocateAndAddECP(a1, &v61, v43);
      if ( v10 < 0 )
        goto LABEL_67;
      v44 = v43 + 32;
      v9 = (UNICODE_STRING *)v61;
      IopSymlinkInitializeSymlinkInfo(
        (__int64)v61,
        v44,
        *((const void **)v42 + 3),
        *((_WORD *)v42 + 8),
        *(_WORD *)v42,
        v35,
        v41,
        *(_WORD *)v54,
        *((_WORD *)v42 + 1),
        *((_QWORD *)v42 + 1));
      FsRtlFreeExtraCreateParameter(v42);
    }
    MostRecentlyUsedName = IopSymlinkGetRelatedMountPoint(v9, *((unsigned __int16 *)a3 + 3));
    if ( !MostRecentlyUsedName )
      MostRecentlyUsedName = IopSymlinkGetMostRecentlyUsedName((__int64)v9);
    v10 = IopSymlinkApplyToOpenedName(a2, MostRecentlyUsedName, a3, a1, v35, v36);
    goto LABEL_85;
  }
  IsEnabled = Feature_2506530111__private_IsEnabled();
  v49 = *((_WORD *)a3 + 3);
  if ( !IsEnabled )
  {
    v47 = a2;
    IopCopyOverNewPath(v35, v49);
LABEL_79:
    v5 = a1;
    if ( *a3 == -1610612733 )
      updated = IopSymlinkRememberJunction(*((_WORD *)a3 + 3), v47, (__int64)a1, v9);
    else
      updated = IopSymlinkUpdateECP(a1, v9, 0, v57, 0, v9->MaximumLength & 0xFFFE);
    v10 = updated;
    goto LABEL_90;
  }
  v10 = IopCopyOverNewPathSecure(v35, v53, v62, a2, v49);
  if ( v10 >= 0 )
  {
    v47 = a2;
    goto LABEL_79;
  }
  ExFreePoolWithTag(v35, 0);
LABEL_77:
  v5 = a1;
LABEL_92:
  v5->IoStatus.Status = v10;
}
