/*
 * XREFs of DpiFdoEnumChildDevices @ 0x1C0181324
 * Callers:
 *     DpiFdoStartAdapter @ 0x1C0171310 (DpiFdoStartAdapter.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C000F30C (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     memset @ 0x1C0026840 (memset.c)
 *     DpiAcpiExposeInfo @ 0x1C0181058 (DpiAcpiExposeInfo.c)
 *     DpiFdoCreateChildDescriptor @ 0x1C0181654 (DpiFdoCreateChildDescriptor.c)
 *     DxgkDWCloneCheckTargetID @ 0x1C01817DC (DxgkDWCloneCheckTargetID.c)
 *     DpiDxgkDdiQueryChildRelations @ 0x1C0181BFC (DpiDxgkDdiQueryChildRelations.c)
 *     DpiFdoRemoveChildDescriptors @ 0x1C02C727C (DpiFdoRemoveChildDescriptors.c)
 */

__int64 __fastcall DpiFdoEnumChildDevices(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // r14
  __int64 v3; // r13
  unsigned int v4; // ebx
  _DWORD *PoolWithTag; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  _DWORD *v10; // rdi
  int ChildRelations; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rsi
  unsigned int v15; // eax
  unsigned int v16; // r12d
  __int64 v17; // rdx
  char v18; // r9
  int v19; // r8d
  __int64 v20; // rcx
  __int64 v21; // r14
  __int64 v22; // r15
  int v23; // eax
  int v24; // ebx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v28; // ebx
  __int64 v29; // rcx
  char v30; // r8
  bool v31; // zf
  unsigned int i; // ebx
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  bool v39; // al
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rbx
  int v45; // eax
  __int64 v46; // rcx
  __int64 v47; // rax
  __int64 v48; // rcx
  __int64 v49; // rax
  int v50; // [rsp+30h] [rbp-68h]
  unsigned int v51; // [rsp+34h] [rbp-64h]
  int v52; // [rsp+38h] [rbp-60h]
  char v54; // [rsp+A8h] [rbp+10h]
  unsigned int v55; // [rsp+B0h] [rbp+18h]
  unsigned int v56; // [rsp+B8h] [rbp+20h]

  v1 = *(_QWORD *)(a1 + 64);
  v2 = a1;
  v3 = *(_QWORD *)(v1 + 40);
  v4 = 28 * (*(_DWORD *)(v1 + 2680) + 1);
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v4, 0x74727044u);
  v10 = PoolWithTag;
  if ( !PoolWithTag )
  {
    LODWORD(v14) = -1073741801;
    v34 = WdLogNewEntry5_WdLowResource(v7, v6, v8, v9);
    *(_QWORD *)(v34 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v34);
    goto LABEL_41;
  }
  memset(PoolWithTag, 0, v4);
  ChildRelations = DpiDxgkDdiQueryChildRelations(v3, *(_QWORD *)(v1 + 48), v10, v4);
  v14 = ChildRelations;
  if ( ChildRelations < 0 )
  {
    v35 = WdLogNewEntry5_WdError(v13, v12);
    *(_QWORD *)(v35 + 24) = *(_QWORD *)(v3 + 200);
    *(_QWORD *)(v35 + 32) = v14;
    WdLogEvent5_WdError(v35);
    goto LABEL_33;
  }
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite((PERESOURCE)(v1 + 3304), 1u);
  KeWaitForSingleObject((PVOID)(v1 + 3408), Executive, 0, 0, 0LL);
  v50 = -1;
  v15 = 0;
  *(_DWORD *)(v1 + 3480) = 0;
  v16 = -1;
  v17 = 0xFFFFFFFFLL;
  v51 = 0;
  v18 = 0;
  v56 = -1;
  v19 = -1;
  v54 = 0;
  v20 = 0LL;
  v52 = -1;
  *(_WORD *)(v1 + 2698) = 257;
  v55 = 0;
  if ( !*(_DWORD *)(v1 + 2680) )
  {
LABEL_16:
    if ( *(_QWORD *)(v1 + 3184) )
    {
      v31 = v15 == 1;
      if ( v15 <= 1 )
        goto LABEL_24;
    }
    else if ( !v15 )
    {
      v31 = 0;
LABEL_24:
      if ( v31 )
        *(_DWORD *)(v1 + 3224) = v19;
      if ( v16 != -1 )
      {
        v48 = 7LL * v16;
        if ( v10[v48 + 1] == 6 )
          v10[v48 + 1] = 0x80000000;
        if ( v18 )
        {
          v49 = WdLogNewEntry5_WdError(v48 * 4, v17);
          *(_QWORD *)(v49 + 24) = 0LL;
          WdLogEvent5_WdError(v49);
          *(_DWORD *)(v1 + 2720) |= 1u;
        }
      }
      if ( *(_BYTE *)(v1 + 1156) == 1 )
        DpiAcpiExposeInfo(v2);
      for ( i = 0; i < *(_DWORD *)(v1 + 2680); ++i )
      {
        LOBYTE(v19) = 1;
        LODWORD(v14) = DpiFdoCreateChildDescriptor(
                         v1,
                         v10[7 * i + 6],
                         v19,
                         (unsigned int)v10 + 28 * i,
                         (__int64)&v10[7 * i + 1],
                         v10[7 * i + 5]);
        if ( (int)v14 < 0 )
          break;
      }
      goto LABEL_32;
    }
LABEL_95:
    LODWORD(v14) = -1073741637;
    v47 = WdLogNewEntry5_WdError(v20, v17);
    *(_QWORD *)(v47 + 24) = -1073741637LL;
    WdLogEvent5_WdError(v47);
    goto LABEL_32;
  }
  while ( 1 )
  {
    v21 = (unsigned int)v20;
    v22 = 7LL * (unsigned int)v20;
    if ( v10[v22 + 4] == 2 )
    {
      v36 = WdLogNewEntry5_WdError(v20, v17);
      *(_QWORD *)(v36 + 24) = 0LL;
      WdLogEvent5_WdError(v36);
      v20 = v55;
      v17 = v56;
      v10[v22 + 4] = 4;
    }
    v23 = v10[v22];
    if ( v23 == 1 )
    {
      *(_BYTE *)(v1 + 2698) &= DxgkDWCloneCheckTargetID((unsigned int)v10[v22 + 6]);
      v24 = v10[v22 + 6];
      DXGGLOBAL::GetGlobal(v26, v25);
      *(_BYTE *)(v1 + 2699) &= (v24 & 0xF0000000) == 0;
      if ( *(_DWORD *)(v3 + 28) < 0x104Fu )
      {
        v10[v22 + 1] = -1;
        v28 = D3DKMDT_VOT_OTHER;
        v37 = WdLogNewEntry5_WdWarning(v20, v17, v27);
        *(_QWORD *)(v37 + 24) = 0LL;
        WdLogEvent5_WdWarning(v37);
      }
      else
      {
        v28 = v10[v22 + 1];
        if ( v28 < D3DKMDT_VOT_HD15 )
        {
          v28 = D3DKMDT_VOT_OTHER;
          if ( (v10[v22 + 1] & 0x7FFFFFFFu) <= 0xE )
            v28 = 0x80000000;
        }
        v10[v22 + 1] = v28;
        if ( (unsigned int)v28 >= D3DKMDT_VOT_MIRACAST
          && (unsigned int)v28 <= (D3DKMDT_VOT_SVIDEO_7PIN|D3DKMDT_VOT_INDIRECT_WIRED) )
        {
          if ( v10[v22 + 4] != 4 )
            goto LABEL_45;
          if ( v28 == D3DKMDT_VOT_MIRACAST )
          {
            ++v51;
            v52 = v10[v22 + 6];
          }
          else if ( !*(_BYTE *)(v1 + 1158) )
          {
            goto LABEL_45;
          }
        }
      }
      if ( !IsInternalVideoOutput(v28) && v28 != D3DKMDT_VOT_LVDS )
        goto LABEL_12;
      v17 = v56;
      if ( v56 == -1 )
      {
        *(_DWORD *)(v1 + 3484) = v10[v22 + 6];
        if ( *(_BYTE *)(*(_QWORD *)(v1 + 168) + 108LL) == v30
          && (*(_BYTE *)(v1 + 1154) == v30 || *(_BYTE *)(v1 + 480) == v30) )
        {
          v2 = a1;
          v20 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 40LL);
          if ( *(_DWORD *)(v20 + 28) >= 0x4000u && *(_BYTE *)(v1 + 2692) == v30 )
            goto LABEL_95;
        }
        if ( v16 == -1 )
        {
          v16 = v55;
          LODWORD(v20) = v55;
          v50 = v28;
          goto LABEL_14;
        }
        if ( *(_BYTE *)(v1 + 2692) != v30 )
        {
          LODWORD(v20) = v55;
          goto LABEL_14;
        }
        if ( RtlCompareMemory((const void *)(v1 + 544), &GUID_BUS_VMBUS, 0x10uLL) == 16 && byte_1C00AFA19 )
          goto LABEL_12;
        v54 = 1;
        if ( v28 == v50 )
          goto LABEL_66;
        switch ( v28 )
        {
          case D3DKMDT_VOT_INTERNAL:
            v39 = 1;
            break;
          case D3DKMDT_VOT_LVDS:
            v39 = v50 != 0x80000000;
            break;
          case D3DKMDT_VOT_DISPLAYPORT_EMBEDDED:
            v39 = v50 == 13;
            break;
          default:
LABEL_66:
            v10[v22 + 1] = -1;
LABEL_12:
            LODWORD(v20) = v55;
LABEL_13:
            v17 = v56;
            goto LABEL_14;
        }
        if ( v39 )
        {
          v40 = v16;
          v16 = v55;
          v50 = v28;
          v10[7 * v40 + 1] = -1;
          LODWORD(v20) = v55;
          goto LABEL_13;
        }
        goto LABEL_66;
      }
      LODWORD(v14) = -1073741637;
      v38 = WdLogNewEntry5_WdError(v29, v56);
      *(_QWORD *)(v38 + 24) = (unsigned int)v10[v22 + 6];
      v46 = (unsigned int)v10[7 * v56 + 6];
LABEL_97:
      *(_QWORD *)(v38 + 32) = v46;
      goto LABEL_94;
    }
    if ( v23 != 3 )
    {
      if ( v23 == 2 || *(_DWORD *)(v3 + 28) < 0x700Au )
        goto LABEL_14;
      LODWORD(v14) = -1073741637;
      v38 = WdLogNewEntry5_WdError(v20, v17);
      *(_QWORD *)(v38 + 24) = (unsigned int)v10[7 * v21 + 6];
      v46 = (int)v10[7 * v21];
      goto LABEL_97;
    }
    if ( *(_DWORD *)(v3 + 28) < 0x7007u )
    {
      LODWORD(v14) = -1073741637;
      v41 = WdLogNewEntry5_WdError(v20, v17);
      *(_QWORD *)(v41 + 24) = *(unsigned int *)(v3 + 28);
      *(_QWORD *)(v41 + 32) = 28680LL;
      WdLogEvent5_WdError(v41);
      goto LABEL_12;
    }
    if ( v16 != -1 )
    {
      LODWORD(v14) = -1073741637;
      v38 = WdLogNewEntry5_WdError(v20, v17);
      *(_QWORD *)(v38 + 24) = (unsigned int)v10[7 * v16 + 6];
      goto LABEL_100;
    }
    if ( !*(_BYTE *)(*(_QWORD *)(v1 + 168) + 108LL)
      && (!*(_BYTE *)(v1 + 1154) || !*(_BYTE *)(v1 + 480))
      && !*(_BYTE *)(v1 + 2692)
      || !*(_BYTE *)(v1 + 2692) && !byte_1C00AFA19 && (_DWORD)v17 != -1 )
    {
LABEL_45:
      LODWORD(v14) = -1073741637;
      v38 = WdLogNewEntry5_WdError(v20, v17);
      *(_QWORD *)(v38 + 24) = -1073741637LL;
      goto LABEL_94;
    }
    if ( !(unsigned int)DxgkDWCloneCheckTargetID((unsigned int)v10[v22 + 6]) )
    {
      LODWORD(v14) = -1073741637;
      v38 = WdLogNewEntry5_WdError(v43, v42);
      *(_QWORD *)(v38 + 24) = (unsigned int)v10[v22 + 6];
      goto LABEL_94;
    }
    v44 = (int)v10[v22 + 1];
    if ( (_DWORD)v44 != 0x80000000 && ((int)v44 <= 3 || (int)v44 > 6 && (unsigned int)(v44 - 8) > 5) )
      break;
    v45 = v10[v22 + 4];
    if ( v45 != 4 && v45 != 1 )
    {
      LODWORD(v14) = -1073741637;
      v38 = WdLogNewEntry5_WdError(v43, v42);
      *(_QWORD *)(v38 + 24) = (unsigned int)v10[7 * v21 + 6];
      goto LABEL_94;
    }
    v17 = v56;
    if ( v56 == -1 )
    {
      v17 = v55;
      LODWORD(v20) = v55;
      v56 = v55;
      *(_DWORD *)(v1 + 3484) = v10[v22 + 6];
    }
    else
    {
      LODWORD(v20) = v55;
    }
LABEL_14:
    v20 = (unsigned int)(v20 + 1);
    v55 = v20;
    if ( (unsigned int)v20 >= *(_DWORD *)(v1 + 2680) )
    {
      v15 = v51;
      v2 = a1;
      v19 = v52;
      v18 = v54;
      goto LABEL_16;
    }
  }
  LODWORD(v14) = -1073741637;
  v38 = WdLogNewEntry5_WdError(v43, v42);
  *(_QWORD *)(v38 + 24) = v44;
LABEL_100:
  *(_QWORD *)(v38 + 32) = (unsigned int)v10[7 * v21 + 6];
LABEL_94:
  WdLogEvent5_WdError(v38);
  v2 = a1;
LABEL_32:
  KeReleaseMutex((PRKMUTEX)(v1 + 3408), 0);
  ExReleaseResourceLite((PERESOURCE)(v1 + 3304));
  KeLeaveCriticalRegion();
LABEL_33:
  if ( (int)v14 < 0 )
LABEL_41:
    DpiFdoRemoveChildDescriptors(v2);
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
  return (unsigned int)v14;
}
