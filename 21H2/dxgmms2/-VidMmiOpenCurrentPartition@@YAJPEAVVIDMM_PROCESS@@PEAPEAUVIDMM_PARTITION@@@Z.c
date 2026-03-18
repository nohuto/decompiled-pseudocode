/*
 * XREFs of ?VidMmiOpenCurrentPartition@@YAJPEAVVIDMM_PROCESS@@PEAPEAUVIDMM_PARTITION@@@Z @ 0x1C0001658
 * Callers:
 *     ?Init@VIDMM_PROCESS@@QEAAJPEAVDXGPROCESS@@@Z @ 0x1C0082118 (-Init@VIDMM_PROCESS@@QEAAJPEAVDXGPROCESS@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0002E04 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?CompareVidMmPartitionById@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1C0018400 (-CompareVidMmPartitionById@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 *     ?Initialize@VIDMM_PARTITION@@QEAAJXZ @ 0x1C001CC84 (-Initialize@VIDMM_PARTITION@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x1C001CD70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001DC40 (memset.c)
 *     ??_GVIDMM_PARTITION@@QEAAPEAXI@Z @ 0x1C003129C (--_GVIDMM_PARTITION@@QEAAPEAXI@Z.c)
 *     ?InitializePartitionForAllAdapters@VIDMM_GLOBAL@@SAJPEAUVIDMM_PARTITION@@@Z @ 0x1C00B87FC (-InitializePartitionForAllAdapters@VIDMM_GLOBAL@@SAJPEAUVIDMM_PARTITION@@@Z.c)
 */

__int64 __fastcall VidMmiOpenCurrentPartition(struct VIDMM_PROCESS *a1, struct VIDMM_PARTITION **a2)
{
  struct _RTL_BALANCED_NODE *v3; // rdi
  __int64 v4; // r14
  int v5; // r15d
  int v6; // eax
  __int64 v7; // rsi
  void *v8; // r12
  int v9; // eax
  unsigned int v10; // edx
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // r8
  struct _RTL_BALANCED_NODE *v15; // rax
  struct _RTL_BALANCED_NODE *v16; // rax
  struct _RTL_BALANCED_NODE *v17; // rbx
  unsigned int v18; // eax
  void *Right_low; // r15
  __int64 v20; // [rsp+50h] [rbp-B0h] BYREF
  PVOID Object; // [rsp+58h] [rbp-A8h] BYREF
  struct VIDMM_PARTITION **v22; // [rsp+60h] [rbp-A0h]
  struct _UNICODE_STRING DestinationString; // [rsp+68h] [rbp-98h] BYREF
  _DWORD v24[2]; // [rsp+78h] [rbp-88h] BYREF
  __int64 v25; // [rsp+80h] [rbp-80h]
  struct _UNICODE_STRING *p_DestinationString; // [rsp+88h] [rbp-78h]
  int v27; // [rsp+90h] [rbp-70h]
  int v28; // [rsp+94h] [rbp-6Ch]
  __int128 v29; // [rsp+98h] [rbp-68h]
  _QWORD v30[30]; // [rsp+A8h] [rbp-58h] BYREF

  v22 = a2;
  v3 = 0LL;
  v4 = -1LL;
  memset(v30, 0, sizeof(v30));
  v5 = 0;
  if ( *(_BYTE *)(((__int64 (*)(void))DxgCoreInterface[3])() + 304512) )
  {
    if ( *(_BYTE *)(*((_QWORD *)a1 + 4) + 590LL) )
    {
      v24[1] = 0;
      v28 = 0;
      v20 = 0LL;
      DestinationString = 0LL;
      RtlInitUnicodeString(&DestinationString, L"\\??\\MemoryPartitionGraphics");
      v24[0] = 48;
      p_DestinationString = &DestinationString;
      v25 = 0LL;
      v27 = 64;
      v29 = 0LL;
      if ( (int)ZwOpenPartition(&v20, 2031619LL, v24) >= 0 )
      {
        v4 = v20;
        v5 = 1;
      }
    }
  }
  HIDWORD(v30[0]) = -1;
  LODWORD(v30[1]) = -1;
  v6 = ZwManagePartition(v4, 0LL, 0LL, v30, 240);
  v7 = v6;
  if ( v6 < 0 )
  {
    WdLogSingleEntry1(1LL, v6);
    ((void (*)(_QWORD, __int64, __int64, const wchar_t *, ...))DxgCoreInterface[85])(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Failed to get partition information from NtManagedPartition. Status=0x%.8x",
      v7,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_37;
  }
  v8 = (void *)LODWORD(v30[29]);
  ExAcquirePushLockExclusiveEx(&VIDMM_PARTITION::_PartitionLock, 0LL);
  v3 = VIDMM_PARTITION::_PartitionTree;
  while ( v3 )
  {
    v9 = CompareVidMmPartitionById(v8, v3);
    if ( v9 < 0 )
    {
      v3 = v3->Children[0];
    }
    else
    {
      if ( v9 <= 0 )
        break;
      v3 = v3->Children[1];
    }
  }
  if ( !v3 )
  {
    v12 = v30[6] << 12;
    v13 = operator new(80LL, 1647667542LL, 256LL);
    v3 = (struct _RTL_BALANCED_NODE *)v13;
    if ( !v13 )
    {
      _InterlockedIncrement(&dword_1C006E86C);
      WdLogSingleEntry1(6LL, 208LL);
      DxgCoreInterface[85](
        0LL,
        262145LL,
        0xFFFFFFFFLL,
        L"Couldn't allocate memory for vidmmpartition.",
        208LL,
        0LL,
        0LL,
        0LL,
        0LL);
      LODWORD(v7) = -1073741801;
      ExReleasePushLockExclusiveEx(&VIDMM_PARTITION::_PartitionLock, 0LL);
      v3 = 0LL;
      goto LABEL_37;
    }
    *(_DWORD *)(v13 + 32) = (_DWORD)v8;
    *(_QWORD *)(v13 + 24) = 0LL;
    *(_DWORD *)(v13 + 36) = 0;
    *(_QWORD *)(v13 + 40) = 0LL;
    *(_QWORD *)(v13 + 56) = 0LL;
    *(_QWORD *)(v13 + 64) = 0LL;
    *(_DWORD *)(v13 + 72) = 0;
    *(_QWORD *)(v13 + 48) = v12;
    LODWORD(v7) = VIDMM_PARTITION::Initialize((VIDMM_PARTITION *)v13);
    if ( (int)v7 < 0
      || (LODWORD(v7) = VIDMM_GLOBAL::InitializePartitionForAllAdapters((struct VIDMM_PARTITION *)v3), (int)v7 < 0) )
    {
      WdLogSingleEntry0(3LL);
    }
    else
    {
      v15 = 0LL;
      if ( v4 == -1
        || (Object = 0LL,
            v7 = ObReferenceObjectByHandle((HANDLE)v4, 0, PsPartitionType, 0, &Object, 0LL),
            v15 = (struct _RTL_BALANCED_NODE *)Object,
            (int)v7 >= 0) )
      {
        v3[1].Children[0] = v15;
        LOBYTE(v14) = 0;
        v18 = v5 | (__int64)v3[3].Children[0] & 0xFFFFFFFE;
        Right_low = (void *)LODWORD(v3[1].Right);
        LODWORD(v3[3].Children[0]) = v18;
        v17 = VIDMM_PARTITION::_PartitionTree;
        if ( VIDMM_PARTITION::_PartitionTree )
        {
          while ( 1 )
          {
            if ( (int)CompareVidMmPartitionById(Right_low, v17) < 0 )
            {
              v16 = v17->Children[0];
              if ( !v17->Children[0] )
              {
                LOBYTE(v14) = 0;
                break;
              }
            }
            else
            {
              v16 = v17->Children[1];
              if ( !v16 )
              {
                LOBYTE(v14) = 1;
                break;
              }
            }
            v17 = v16;
          }
        }
        RtlAvlInsertNodeEx(&VIDMM_PARTITION::_PartitionTree, v17, v14, v3);
        goto LABEL_10;
      }
      WdLogSingleEntry1(1LL, v7);
      ((void (*)(_QWORD, __int64, __int64, const wchar_t *, ...))DxgCoreInterface[85])(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Failed to reference partition object, Status=0x%.8x",
        v7,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    ExReleasePushLockExclusiveEx(&VIDMM_PARTITION::_PartitionLock, 0LL);
LABEL_36:
    VIDMM_PARTITION::`scalar deleting destructor'(v3, v10);
    v3 = 0LL;
    goto LABEL_37;
  }
LABEL_10:
  _InterlockedIncrement((volatile signed __int32 *)&v3[1].Right + 1);
  ExReleasePushLockExclusiveEx(&VIDMM_PARTITION::_PartitionLock, 0LL);
  *((_QWORD *)a1 + 37) = v4;
  if ( (int)v7 >= 0 )
    goto LABEL_11;
  if ( v3 )
    goto LABEL_36;
LABEL_37:
  if ( v4 != -1 )
    ObCloseHandle((HANDLE)v4, 0);
LABEL_11:
  *v22 = (struct VIDMM_PARTITION *)v3;
  return (unsigned int)v7;
}
