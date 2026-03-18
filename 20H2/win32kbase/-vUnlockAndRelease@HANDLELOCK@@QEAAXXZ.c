/*
 * XREFs of ?vUnlockAndRelease@HANDLELOCK@@QEAAXXZ @ 0x1C003E730
 * Callers:
 *     HmgRemoveObject @ 0x1C004A7D0 (HmgRemoveObject.c)
 *     HmgFree @ 0x1C004BFE0 (HmgFree.c)
 *     HmgShareUnlockRemoveObject @ 0x1C0097360 (HmgShareUnlockRemoveObject.c)
 * Callees:
 *     GreReleaseHmgrSemaphore @ 0x1C003D970 (GreReleaseHmgrSemaphore.c)
 *     ?GetW32ProcessFromId@@YAPEAU_W32PROCESS@@KPEAPEAU_EPROCESS@@@Z @ 0x1C003E6B4 (-GetW32ProcessFromId@@YAPEAU_W32PROCESS@@KPEAPEAU_EPROCESS@@@Z.c)
 *     ?GetEtwGdiHandleType@@YA?AW4EtwGdiHandleType@@E@Z @ 0x1C003EAF0 (-GetEtwGdiHandleType@@YA-AW4EtwGdiHandleType@@E@Z.c)
 *     ?ReleaseLockAndEntry@GdiHandleEntryDirectory@@QEAAXI_N@Z @ 0x1C003EBC8 (-ReleaseLockAndEntry@GdiHandleEntryDirectory@@QEAAXI_N@Z.c)
 *     ?AcquireEntryLock@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C0044BB0 (-AcquireEntryLock@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C00455B0 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C0045800 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     GreAcquireHmgrSemaphore @ 0x1C005EA20 (GreAcquireHmgrSemaphore.c)
 *     McTemplateK0pqqq_EtwWriteTransfer @ 0x1C0128CF8 (McTemplateK0pqqq_EtwWriteTransfer.c)
 */

void __fastcall HANDLELOCK::vUnlockAndRelease(HANDLELOCK *this)
{
  int v2; // ebx
  unsigned int v3; // edi
  unsigned __int16 *v4; // r15
  GdiHandleManager *v5; // rsi
  unsigned int v6; // eax
  unsigned __int64 v7; // rdx
  __int64 v8; // r8
  unsigned int v9; // r9d
  __int64 v10; // rcx
  __int64 v11; // r10
  __int64 v12; // r9
  unsigned int v13; // ebx
  GdiHandleManager *v14; // rdi
  __int64 v15; // rdx
  unsigned int v16; // r8d
  __int64 v17; // rcx
  __int64 v18; // r9
  _DWORD *v19; // r15
  unsigned int v20; // ebx
  __int64 v21; // r8
  __int64 v22; // rsi
  unsigned int v23; // edx
  __int64 v24; // rcx
  __int64 v25; // r9
  __int64 v26; // r11
  struct _W32PROCESS *W32ProcessFromId; // rsi
  __int64 v28; // rdx
  int v29; // ecx
  int v30; // r8d
  char EtwGdiHandleType; // al
  _QWORD *v32; // r9
  int v33; // ecx
  int v34; // r8d
  unsigned int v35; // r12d
  PVOID Object; // [rsp+70h] [rbp+8h] BYREF

  v2 = *(_DWORD *)(*(_QWORD *)this + 8LL);
  v3 = v2 & 0xFFFFFFFE;
  if ( (v2 & 0xFFFFFFFE) != 0 && v3 != -2147483630 )
  {
    Object = 0LL;
    W32ProcessFromId = GetW32ProcessFromId(v3, (struct _EPROCESS **)&Object);
    if ( W32ProcessFromId )
    {
      GreAcquireHmgrSemaphore();
      --*((_DWORD *)W32ProcessFromId + 15);
      GreReleaseHmgrSemaphore(v29, v28, v30);
    }
    if ( Object )
      ObfDereferenceObject(Object);
  }
  v4 = *(unsigned __int16 **)this;
  v5 = gpHandleManager;
  v6 = GdiHandleManager::DecodeIndex(gpHandleManager, **(_DWORD **)this & 0xFFFFFF);
  v7 = *((_QWORD *)v5 + 2);
  v8 = v6;
  v9 = *(_DWORD *)(v7 + 2056);
  if ( v6 >= v9 + ((*(unsigned __int16 *)(v7 + 2) + 0xFFFF) << 16) )
    goto LABEL_40;
  v10 = ((v6 - v9) >> 16) + 1;
  if ( v6 < v9 )
    v10 = 0LL;
  v11 = *(_QWORD *)(v7 + 8 * v10 + 8);
  if ( (_DWORD)v10 )
    v8 = ((1 - (_DWORD)v10) << 16) - v9 + v6;
  if ( (unsigned int)v8 >= *(_DWORD *)(v11 + 20) )
  {
LABEL_40:
    v12 = 0LL;
  }
  else
  {
    v7 = (unsigned __int64)(unsigned int)v8 >> 8;
    v12 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v11 + 24) + 8 * v7) + 16LL * (unsigned __int8)v8 + 8);
  }
  if ( (Microsoft_Windows_Win32kEnableBits & 0x40000000000LL) != 0 )
  {
    EtwGdiHandleType = GetEtwGdiHandleType(*((unsigned __int8 *)v4 + 14), v7, v8, v12);
    McTemplateK0pqqq_EtwWriteTransfer(v33, (unsigned int)&GdiDestroyHandle, v34, *v32, EtwGdiHandleType);
    v4 = *(unsigned __int16 **)this;
  }
  *((_BYTE *)v4 + 14) = 0;
  *(_QWORD *)(*(_QWORD *)this + 16LL) = 0LL;
  *(_DWORD *)(*(_QWORD *)this + 8LL) = v2 & 1;
  v13 = **(_DWORD **)this & 0xFFFFFF;
  if ( v13 >= 0x10000 )
  {
    if ( *(_DWORD *)gpHandleManager > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                  **(unsigned __int16 **)this,
                                  1)
           + 13) == HIWORD(v13) )
        v13 = (unsigned __int16)v13;
    }
    else
    {
      v13 = **(unsigned __int16 **)this;
    }
  }
  v14 = gpHandleManager;
  v15 = *((_QWORD *)gpHandleManager + 2);
  v16 = *(_DWORD *)(v15 + 2056);
  if ( v13 >= v16 + ((*(unsigned __int16 *)(v15 + 2) + 0xFFFF) << 16) )
    goto LABEL_44;
  v17 = ((v13 - v16) >> 16) + 1;
  if ( v13 < v16 )
    v17 = 0LL;
  v18 = *(_QWORD *)(v15 + 8 * v17 + 8);
  if ( (_DWORD)v17 )
    v13 += ((1 - (_DWORD)v17) << 16) - v16;
  if ( v13 >= *(_DWORD *)(v18 + 20) )
LABEL_44:
    v19 = 0LL;
  else
    v19 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v18 + 24) + 8 * ((unsigned __int64)v13 >> 8))
                     + 16LL * (unsigned __int8)v13
                     + 8);
  v20 = (unsigned __int16)*v19 | (*v19 >> 8) & 0xFF0000;
  if ( v20 >= 0x10000 )
  {
    if ( *(_DWORD *)gpHandleManager > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                  (unsigned __int16)*v19,
                                  1)
           + 13) == HIWORD(v20) )
        v20 = (unsigned __int16)v20;
    }
    else
    {
      v20 = (unsigned __int16)*v19;
    }
  }
  v21 = *((_QWORD *)v14 + 3);
  v22 = *((_QWORD *)v14 + 2);
  if ( v21 )
  {
    v35 = *(_DWORD *)(v21 + 4LL * (unsigned __int16)v20);
    if ( v35 )
    {
      if ( GdiHandleEntryDirectory::AcquireEntryLock(*((GdiHandleEntryDirectory **)v14 + 2), v35, 1) )
        GdiHandleEntryDirectory::ReleaseLockAndEntry(*((GdiHandleEntryDirectory **)v14 + 2), v35, 1);
      *(_DWORD *)(*((_QWORD *)v14 + 3) + 4LL * (unsigned __int16)v20) = 0;
      --*((_DWORD *)v14 + 1);
      v22 = *((_QWORD *)v14 + 2);
    }
  }
  v23 = *(_DWORD *)(v22 + 2056);
  if ( v20 < v23 + ((*(unsigned __int16 *)(v22 + 2) + 0xFFFF) << 16) )
  {
    v24 = ((v20 - v23) >> 16) + 1;
    if ( v20 < v23 )
      v24 = 0LL;
    v25 = *(_QWORD *)(v22 + 8 * v24 + 8);
    if ( (_DWORD)v24 )
      v20 += ((1 - (_DWORD)v24) << 16) - v23;
    if ( v20 < *(_DWORD *)(v25 + 20) )
    {
      v26 = *(_QWORD *)(**(_QWORD **)(v25 + 24) + 8 * ((unsigned __int64)v20 >> 8));
      if ( *(_QWORD *)(v26 + 16LL * (unsigned __int8)v20 + 8) )
      {
        *(_QWORD *)(v26 + 16LL * (unsigned __int8)v20 + 8) = 0LL;
        *(_QWORD *)(*(_QWORD *)v25 + 24LL * v20) = *(unsigned int *)(v25 + 12);
        --*(_DWORD *)(v25 + 16);
        *(_DWORD *)(v25 + 12) = v20;
      }
    }
    ExReleasePushLockExclusiveEx(
      *(_QWORD *)(**(_QWORD **)(v25 + 24) + 8 * ((unsigned __int64)v20 >> 8)) + 16LL * (unsigned __int8)v20,
      0LL);
    KeLeaveCriticalRegion();
    *(_BYTE *)v22 = 0;
  }
  *(_QWORD *)v19 = 0LL;
  --*((_DWORD *)v14 + 1);
  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)this = 0LL;
  KeLeaveCriticalRegion();
}
