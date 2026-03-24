/*
 * XREFs of ?VidMmiOpenCurrentPartition@@YAJPEAVVIDMM_PROCESS@@PEAPEAUVIDMM_PARTITION@@@Z @ 0x1C0002264
 * Callers:
 *     ?Init@VIDMM_PROCESS@@QEAAJPEAVDXGPROCESS@@@Z @ 0x1C00783C0 (-Init@VIDMM_PROCESS@@QEAAJPEAVDXGPROCESS@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002230 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?CompareVidMmPartitionById@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1C0015948 (-CompareVidMmPartitionById@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 *     ?Initialize@VIDMM_PARTITION@@QEAAJXZ @ 0x1C0017724 (-Initialize@VIDMM_PARTITION@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x1C0017820 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0018BF0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0018EC0 (memset.c)
 *     ??_GVIDMM_PARTITION@@QEAAPEAXI@Z @ 0x1C0026CFC (--_GVIDMM_PARTITION@@QEAAPEAXI@Z.c)
 *     ?InitializePartitionForAllAdapters@VIDMM_GLOBAL@@SAJPEAUVIDMM_PARTITION@@@Z @ 0x1C0099B7C (-InitializePartitionForAllAdapters@VIDMM_GLOBAL@@SAJPEAUVIDMM_PARTITION@@@Z.c)
 */

__int64 __fastcall VidMmiOpenCurrentPartition(struct VIDMM_PROCESS *a1, struct _RTL_BALANCED_NODE **a2)
{
  struct _RTL_BALANCED_NODE *v4; // rbx
  __int64 v5; // r14
  int v6; // r15d
  int v7; // eax
  __int64 v8; // rdi
  void *v9; // rsi
  int v10; // eax
  unsigned int v11; // edx
  struct _RTL_BALANCED_NODE *v13; // rdi
  struct _RTL_BALANCED_NODE *v14; // rax
  __int64 v15; // r8
  struct _RTL_BALANCED_NODE *v16; // rax
  struct _RTL_BALANCED_NODE *v17; // rax
  struct _RTL_BALANCED_NODE *v18; // rsi
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  unsigned int v23; // eax
  void *Right_low; // r15
  PVOID Object; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v26; // [rsp+38h] [rbp-C8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD v28[2]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v29; // [rsp+58h] [rbp-A8h]
  struct _UNICODE_STRING *p_DestinationString; // [rsp+60h] [rbp-A0h]
  int v31; // [rsp+68h] [rbp-98h]
  int v32; // [rsp+6Ch] [rbp-94h]
  __int128 v33; // [rsp+70h] [rbp-90h]
  _QWORD v34[30]; // [rsp+80h] [rbp-80h] BYREF

  v4 = 0LL;
  v5 = -1LL;
  memset(v34, 0, sizeof(v34));
  v6 = 0;
  if ( *(_BYTE *)(DxgCoreInterface[3]() + 304320) )
  {
    if ( *(_BYTE *)(*((_QWORD *)a1 + 4) + 478LL) )
    {
      v28[1] = 0;
      v32 = 0;
      v26 = 0LL;
      DestinationString = 0LL;
      RtlInitUnicodeString(&DestinationString, L"\\??\\MemoryPartitionGraphics");
      v28[0] = 48;
      p_DestinationString = &DestinationString;
      v29 = 0LL;
      v31 = 64;
      v33 = 0LL;
      if ( (int)ZwOpenPartition(&v26, 2031619LL, v28) >= 0 )
      {
        v5 = v26;
        v6 = 1;
      }
    }
  }
  HIDWORD(v34[0]) = -1;
  LODWORD(v34[1]) = -1;
  v7 = ZwManagePartition(v5, 0LL, 0LL, v34, 240);
  v8 = v7;
  if ( v7 < 0 )
  {
    v19 = WdLogNewEntry5_WdAssertion();
    *(_QWORD *)(v19 + 24) = v8;
    WdLogEvent5_WdAssertion(v19);
    goto LABEL_9;
  }
  v9 = (void *)LODWORD(v34[29]);
  ExAcquirePushLockExclusiveEx(&VIDMM_PARTITION::_PartitionLock, 0LL);
  v4 = VIDMM_PARTITION::_PartitionTree;
  if ( !VIDMM_PARTITION::_PartitionTree )
    goto LABEL_13;
  while ( 1 )
  {
    v10 = CompareVidMmPartitionById(v9, v4);
    if ( v10 >= 0 )
      break;
    v4 = v4->Children[0];
LABEL_6:
    if ( !v4 )
      goto LABEL_7;
  }
  if ( v10 > 0 )
  {
    v4 = v4->Children[1];
    goto LABEL_6;
  }
LABEL_7:
  if ( v4 )
    goto LABEL_8;
LABEL_13:
  v13 = (struct _RTL_BALANCED_NODE *)((v34[6] - v34[28]) << 12);
  v14 = (struct _RTL_BALANCED_NODE *)operator new[](0x50uLL, 0x62356956u, PagedPool);
  v4 = v14;
  if ( v14 )
  {
    v14[1].Children[0] = 0LL;
    LODWORD(v14[1].Right) = (_DWORD)v9;
    HIDWORD(v14[1].Right) = 0;
    v14[1].ParentValue = 0LL;
    v14[2].Children[1] = 0LL;
    v14[2].ParentValue = 0LL;
    LODWORD(v14[3].Children[0]) = 0;
    v14[2].Children[0] = v13;
  }
  else
  {
    v4 = 0LL;
  }
  if ( !v4 )
  {
    _InterlockedIncrement(&dword_1C00507BC);
    v20 = WdLogNewEntry5_WdLowResource();
    *(_QWORD *)(v20 + 24) = 209LL;
    WdLogEvent5_WdLowResource(v20);
    LODWORD(v8) = -1073741801;
    ExReleasePushLockExclusiveEx(&VIDMM_PARTITION::_PartitionLock, 0LL);
LABEL_40:
    if ( v5 != -1 )
      ObCloseHandle((HANDLE)v5, 0);
    goto LABEL_10;
  }
  LODWORD(v8) = VIDMM_PARTITION::Initialize((VIDMM_PARTITION *)v4);
  if ( (int)v8 < 0
    || (LODWORD(v8) = VIDMM_GLOBAL::InitializePartitionForAllAdapters((struct VIDMM_PARTITION *)v4), (int)v8 < 0) )
  {
    v21 = WdLogNewEntry5_WdWarning();
    WdLogEvent5_WdWarning(v21);
LABEL_34:
    ExReleasePushLockExclusiveEx(&VIDMM_PARTITION::_PartitionLock, 0LL);
    goto LABEL_9;
  }
  v16 = 0LL;
  if ( v5 != -1 )
  {
    Object = 0LL;
    v8 = ObReferenceObjectByHandle((HANDLE)v5, 0, PsPartitionType, 0, &Object, 0LL);
    v16 = (struct _RTL_BALANCED_NODE *)Object;
    if ( (int)v8 < 0 )
    {
      v22 = WdLogNewEntry5_WdAssertion();
      *(_QWORD *)(v22 + 24) = v8;
      WdLogEvent5_WdAssertion(v22);
      goto LABEL_34;
    }
  }
  v4[1].Children[0] = v16;
  LOBYTE(v15) = 0;
  v23 = v6 | (__int64)v4[3].Children[0] & 0xFFFFFFFE;
  Right_low = (void *)LODWORD(v4[1].Right);
  LODWORD(v4[3].Children[0]) = v23;
  v18 = VIDMM_PARTITION::_PartitionTree;
  if ( VIDMM_PARTITION::_PartitionTree )
  {
    while ( 1 )
    {
      if ( (int)CompareVidMmPartitionById(Right_low, v18) < 0 )
      {
        v17 = v18->Children[0];
        if ( !v18->Children[0] )
        {
          LOBYTE(v15) = 0;
          break;
        }
      }
      else
      {
        v17 = v18->Children[1];
        if ( !v17 )
        {
          LOBYTE(v15) = 1;
          break;
        }
      }
      v18 = v17;
    }
  }
  RtlAvlInsertNodeEx(&VIDMM_PARTITION::_PartitionTree, v18, v15, v4);
LABEL_8:
  _InterlockedIncrement((volatile signed __int32 *)&v4[1].Right + 1);
  ExReleasePushLockExclusiveEx(&VIDMM_PARTITION::_PartitionLock, 0LL);
  *((_QWORD *)a1 + 37) = v5;
LABEL_9:
  if ( (int)v8 < 0 )
  {
    if ( v4 )
    {
      VIDMM_PARTITION::`scalar deleting destructor'(v4, v11);
      v4 = 0LL;
    }
    goto LABEL_40;
  }
LABEL_10:
  *a2 = v4;
  return (unsigned int)v8;
}
