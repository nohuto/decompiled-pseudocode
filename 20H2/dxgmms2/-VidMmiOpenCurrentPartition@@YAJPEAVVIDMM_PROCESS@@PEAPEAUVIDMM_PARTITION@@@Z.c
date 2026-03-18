/*
 * XREFs of ?VidMmiOpenCurrentPartition@@YAJPEAVVIDMM_PROCESS@@PEAPEAUVIDMM_PARTITION@@@Z @ 0x1C00117CC
 * Callers:
 *     ?Init@VIDMM_PROCESS@@QEAAJPEAVDXGPROCESS@@@Z @ 0x1C006B3DC (-Init@VIDMM_PROCESS@@QEAAJPEAVDXGPROCESS@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00103F4 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?CompareVidMmPartitionById@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1C00158D8 (-CompareVidMmPartitionById@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 *     ?Initialize@VIDMM_PARTITION@@QEAAJXZ @ 0x1C0017644 (-Initialize@VIDMM_PARTITION@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x1C0017740 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00182E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00185C0 (memset.c)
 *     ??_GVIDMM_PARTITION@@QEAAPEAXI@Z @ 0x1C0026A9C (--_GVIDMM_PARTITION@@QEAAPEAXI@Z.c)
 *     ?InitializePartitionForAllAdapters@VIDMM_GLOBAL@@SAJPEAUVIDMM_PARTITION@@@Z @ 0x1C00966DC (-InitializePartitionForAllAdapters@VIDMM_GLOBAL@@SAJPEAUVIDMM_PARTITION@@@Z.c)
 */

__int64 __fastcall VidMmiOpenCurrentPartition(struct VIDMM_PROCESS *a1, struct _RTL_BALANCED_NODE **a2)
{
  struct _RTL_BALANCED_NODE *v4; // rbx
  __int64 v5; // r14
  int v6; // r15d
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rdi
  void *v12; // rsi
  int v13; // eax
  unsigned int v14; // edx
  struct _RTL_BALANCED_NODE *v16; // rdi
  struct _RTL_BALANCED_NODE *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  struct _RTL_BALANCED_NODE *v21; // rax
  struct _RTL_BALANCED_NODE *v22; // rax
  struct _RTL_BALANCED_NODE *v23; // rsi
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  unsigned int v30; // eax
  void *Right_low; // r15
  PVOID Object; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v33; // [rsp+38h] [rbp-C8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD v35[2]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v36; // [rsp+58h] [rbp-A8h]
  struct _UNICODE_STRING *p_DestinationString; // [rsp+60h] [rbp-A0h]
  int v38; // [rsp+68h] [rbp-98h]
  int v39; // [rsp+6Ch] [rbp-94h]
  __int128 v40; // [rsp+70h] [rbp-90h]
  _QWORD v41[30]; // [rsp+80h] [rbp-80h] BYREF

  v4 = 0LL;
  v5 = -1LL;
  memset(v41, 0, sizeof(v41));
  v6 = 0;
  if ( *(_BYTE *)(((__int64 (*)(void))DxgCoreInterface[3])() + 304320) )
  {
    if ( *(_BYTE *)(*((_QWORD *)a1 + 4) + 478LL) )
    {
      v35[1] = 0;
      v39 = 0;
      v33 = 0LL;
      DestinationString = 0LL;
      RtlInitUnicodeString(&DestinationString, L"\\??\\MemoryPartitionGraphics");
      v35[0] = 48;
      p_DestinationString = &DestinationString;
      v36 = 0LL;
      v38 = 64;
      v40 = 0LL;
      if ( (int)ZwOpenPartition(&v33, 2031619LL, v35) >= 0 )
      {
        v5 = v33;
        v6 = 1;
      }
    }
  }
  HIDWORD(v41[0]) = -1;
  LODWORD(v41[1]) = -1;
  v7 = ZwManagePartition(v5, 0LL, 0LL, v41, 240);
  v11 = v7;
  if ( v7 < 0 )
  {
    v24 = WdLogNewEntry5_WdAssertion(v9, v8, v10);
    *(_QWORD *)(v24 + 24) = v11;
    WdLogEvent5_WdAssertion(v24);
    goto LABEL_9;
  }
  v12 = (void *)LODWORD(v41[29]);
  ExAcquirePushLockExclusiveEx(&VIDMM_PARTITION::_PartitionLock, 0LL);
  v4 = VIDMM_PARTITION::_PartitionTree;
  if ( !VIDMM_PARTITION::_PartitionTree )
    goto LABEL_13;
  while ( 1 )
  {
    v13 = CompareVidMmPartitionById(v12, v4);
    if ( v13 >= 0 )
      break;
    v4 = v4->Children[0];
LABEL_6:
    if ( !v4 )
      goto LABEL_7;
  }
  if ( v13 > 0 )
  {
    v4 = v4->Children[1];
    goto LABEL_6;
  }
LABEL_7:
  if ( v4 )
    goto LABEL_8;
LABEL_13:
  v16 = (struct _RTL_BALANCED_NODE *)((v41[6] - v41[28]) << 12);
  v17 = (struct _RTL_BALANCED_NODE *)operator new[](0x50uLL, 0x62356956u, PagedPool);
  v4 = v17;
  if ( v17 )
  {
    v17[1].Children[0] = 0LL;
    LODWORD(v17[1].Right) = (_DWORD)v12;
    HIDWORD(v17[1].Right) = 0;
    v17[1].ParentValue = 0LL;
    v17[2].Children[1] = 0LL;
    v17[2].ParentValue = 0LL;
    LODWORD(v17[3].Children[0]) = 0;
    v17[2].Children[0] = v16;
  }
  else
  {
    v4 = 0LL;
  }
  if ( !v4 )
  {
    _InterlockedIncrement(&dword_1C005178C);
    v25 = WdLogNewEntry5_WdLowResource();
    *(_QWORD *)(v25 + 24) = 209LL;
    WdLogEvent5_WdLowResource(v25);
    LODWORD(v11) = -1073741801;
    ExReleasePushLockExclusiveEx(&VIDMM_PARTITION::_PartitionLock, 0LL);
LABEL_40:
    if ( v5 != -1 )
      ObCloseHandle((HANDLE)v5, 0);
    goto LABEL_10;
  }
  LODWORD(v11) = VIDMM_PARTITION::Initialize((VIDMM_PARTITION *)v4);
  if ( (int)v11 < 0
    || (LODWORD(v11) = VIDMM_GLOBAL::InitializePartitionForAllAdapters((struct VIDMM_PARTITION *)v4), (int)v11 < 0) )
  {
    v26 = WdLogNewEntry5_WdWarning(v19, v18);
    WdLogEvent5_WdWarning(v26);
LABEL_34:
    ExReleasePushLockExclusiveEx(&VIDMM_PARTITION::_PartitionLock, 0LL);
    goto LABEL_9;
  }
  v21 = 0LL;
  if ( v5 != -1 )
  {
    Object = 0LL;
    v11 = ObReferenceObjectByHandle((HANDLE)v5, 0, PsPartitionType, 0, &Object, 0LL);
    v21 = (struct _RTL_BALANCED_NODE *)Object;
    if ( (int)v11 < 0 )
    {
      v27 = WdLogNewEntry5_WdAssertion(v29, v28, v20);
      *(_QWORD *)(v27 + 24) = v11;
      WdLogEvent5_WdAssertion(v27);
      goto LABEL_34;
    }
  }
  v4[1].Children[0] = v21;
  LOBYTE(v20) = 0;
  v30 = v6 | (__int64)v4[3].Children[0] & 0xFFFFFFFE;
  Right_low = (void *)LODWORD(v4[1].Right);
  LODWORD(v4[3].Children[0]) = v30;
  v23 = VIDMM_PARTITION::_PartitionTree;
  if ( VIDMM_PARTITION::_PartitionTree )
  {
    while ( 1 )
    {
      if ( (int)CompareVidMmPartitionById(Right_low, v23) < 0 )
      {
        v22 = v23->Children[0];
        if ( !v23->Children[0] )
        {
          LOBYTE(v20) = 0;
          break;
        }
      }
      else
      {
        v22 = v23->Children[1];
        if ( !v22 )
        {
          LOBYTE(v20) = 1;
          break;
        }
      }
      v23 = v22;
    }
  }
  RtlAvlInsertNodeEx(&VIDMM_PARTITION::_PartitionTree, v23, v20, v4);
LABEL_8:
  _InterlockedIncrement((volatile signed __int32 *)&v4[1].Right + 1);
  ExReleasePushLockExclusiveEx(&VIDMM_PARTITION::_PartitionLock, 0LL);
  *((_QWORD *)a1 + 37) = v5;
LABEL_9:
  if ( (int)v11 < 0 )
  {
    if ( v4 )
    {
      VIDMM_PARTITION::`scalar deleting destructor'(v4, v14);
      v4 = 0LL;
    }
    goto LABEL_40;
  }
LABEL_10:
  *a2 = v4;
  return (unsigned int)v11;
}
