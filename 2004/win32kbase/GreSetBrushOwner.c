/*
 * XREFs of GreSetBrushOwner @ 0x1C00A7400
 * Callers:
 *     GreSetDCOwnerEx @ 0x1C0090550 (GreSetDCOwnerEx.c)
 *     SetSysColor @ 0x1C00A6AF4 (SetSysColor.c)
 *     bInitBRUSHOBJ @ 0x1C0293494 (bInitBRUSHOBJ.c)
 * Callees:
 *     HmgAllocateObjectAttr @ 0x1C0015124 (HmgAllocateObjectAttr.c)
 *     GreReleaseHmgrSemaphore @ 0x1C00821C0 (GreReleaseHmgrSemaphore.c)
 *     HmgDecProcessHandleCount @ 0x1C00864EC (HmgDecProcessHandleCount.c)
 *     ?Pid@HANDLELOCK@@QEAAXK@Z @ 0x1C008689C (-Pid@HANDLELOCK@@QEAAXK@Z.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C008A000 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C008A360 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C008B290 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     GreSetBitmapOwnerEx @ 0x1C0099670 (GreSetBitmapOwnerEx.c)
 *     GreAcquireHmgrSemaphore @ 0x1C00A5C20 (GreAcquireHmgrSemaphore.c)
 *     ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x1C00A7384 (--0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z.c)
 *     ??1BRUSHSELOBJ@@QEAA@XZ @ 0x1C00A73C8 (--1BRUSHSELOBJ@@QEAA@XZ.c)
 *     HmgFreeObjectAttr @ 0x1C00C0D68 (HmgFreeObjectAttr.c)
 *     HmgIncProcessHandleCountEx @ 0x1C00CF930 (HmgIncProcessHandleCountEx.c)
 */

__int64 __fastcall GreSetBrushOwner(HBRUSH a1, int a2)
{
  unsigned int v3; // ebx
  int v5; // edx
  __int64 v6; // rcx
  int v7; // r8d
  unsigned int v8; // esi
  _QWORD *ObjectAttr; // r13
  __int64 v10; // rdx
  int v11; // ecx
  int v12; // r8d
  GdiHandleManager *v13; // rbx
  unsigned int v14; // r9d
  __int64 v15; // rdx
  unsigned int v16; // r8d
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rdi
  __int64 v20; // rbx
  __int64 v21; // rdx
  unsigned int v22; // r12d
  unsigned int v23; // eax
  BOOL v24; // ecx
  __int64 v25; // rcx
  int v26; // edx
  unsigned int v27; // ebx
  _QWORD *v28; // rax
  unsigned int CurrentProcessId; // eax
  _QWORD v30[2]; // [rsp+50h] [rbp-68h] BYREF
  __int64 v31; // [rsp+60h] [rbp-58h] BYREF
  int v32; // [rsp+68h] [rbp-50h]
  __int16 v33; // [rsp+C2h] [rbp+Ah]

  v33 = WORD1(a1);
  v3 = (unsigned int)a1;
  BRUSHSELOBJ::BRUSHSELOBJ((BRUSHSELOBJ *)v30, a1);
  if ( v30[0] && (*(_DWORD *)(v30[0] + 40LL) & 0x200) != 0 )
  {
    BRUSHSELOBJ::~BRUSHSELOBJ((BRUSHSELOBJ *)v30);
    return 1LL;
  }
  BRUSHSELOBJ::~BRUSHSELOBJ((BRUSHSELOBJ *)v30);
  v8 = 0;
  ObjectAttr = 0LL;
  if ( a2 == -2147483646 )
    ObjectAttr = (_QWORD *)HmgAllocateObjectAttr();
  GreAcquireHmgrSemaphore(v6, v5, v7);
  v31 = 0LL;
  v32 = 0;
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v31, (unsigned __int16)v3 | (v3 >> 8) & 0xFF0000, 0, 0, 0);
  if ( v32 )
  {
    v13 = gpHandleManager;
    v14 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)gpHandleManager, *(_DWORD *)v31 & 0xFFFFFF);
    v15 = *((_QWORD *)v13 + 2);
    v16 = *(_DWORD *)(v15 + 2056);
    if ( v14 >= v16 + ((*(unsigned __int16 *)(v15 + 2) + 0xFFFF) << 16) )
      goto LABEL_15;
    if ( v14 >= v16 )
      v17 = ((v14 - v16) >> 16) + 1;
    else
      v17 = 0LL;
    v18 = *(_QWORD *)(v15 + 8 * v17 + 8);
    if ( (_DWORD)v17 )
      v14 += ((1 - (_DWORD)v17) << 16) - v16;
    if ( v14 >= *(_DWORD *)(v18 + 20) )
LABEL_15:
      v19 = 0LL;
    else
      v19 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v18 + 24) + 8LL * (v14 >> 8)) + 16LL * (unsigned __int8)v14 + 8);
    v20 = v31;
    if ( *(_BYTE *)(v31 + 14) != 16 || *(_WORD *)(v31 + 12) != v33 )
      goto LABEL_48;
    if ( *(_WORD *)(v19 + 12) )
    {
      if ( *(struct _KTHREAD **)(v19 + 16) != KeGetCurrentThread() )
        goto LABEL_48;
      v20 = v31;
    }
    if ( a2 == -2147483630 || !a2 )
    {
      v27 = *(_DWORD *)(v20 + 8) & 0xFFFFFFFE;
      if ( v27 == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
      {
        v28 = *(_QWORD **)(v19 + 48);
        if ( v28 != (_QWORD *)(v19 + 72) )
        {
          *(_QWORD *)(v19 + 72) = *v28;
          ObjectAttr = *(_QWORD **)(v19 + 48);
          *(_QWORD *)(v19 + 48) = v19 + 72;
          *(_QWORD *)(v31 + 16) = 0LL;
        }
        HANDLELOCK::Pid((HANDLELOCK *)&v31, a2);
        CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
        HmgDecProcessHandleCount(CurrentProcessId & 0xFFFFFFFC);
      }
      else
      {
        if ( (*(_DWORD *)(v31 + 8) & 0xFFFFFFFE) != 0x80000012 )
          goto LABEL_48;
        HANDLELOCK::Pid((HANDLELOCK *)&v31, a2);
      }
      v8 = 1;
      if ( !a2 )
      {
        v25 = *(_QWORD *)(v19 + 24);
        if ( v25 )
        {
          v26 = 0;
LABEL_47:
          GreSetBitmapOwnerEx(v25, v26);
        }
      }
    }
    else if ( a2 == -2147483646 )
    {
      v22 = (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
      v23 = *(_DWORD *)(v20 + 8) & 0xFFFFFFFE;
      if ( v23 == v22 || v23 == -2147483630 || !v23 )
      {
        v24 = 0;
        v8 = 1;
        if ( v23 != v22 )
        {
          v8 = HmgIncProcessHandleCountEx(v22, v21, 0LL);
          v24 = v8 != 0;
        }
        if ( v8 )
        {
          if ( *(_QWORD *)(v20 + 16) )
          {
LABEL_33:
            HANDLELOCK::Pid((HANDLELOCK *)&v31, v22);
            v25 = *(_QWORD *)(v19 + 24);
            if ( !v25 )
              goto LABEL_48;
            v26 = -2147483646;
            goto LABEL_47;
          }
          if ( ObjectAttr )
          {
            *(_QWORD *)(v19 + 48) = ObjectAttr;
            *(_QWORD *)(v20 + 16) = ObjectAttr;
            *ObjectAttr = *(_QWORD *)(v19 + 72);
            ObjectAttr = 0LL;
            goto LABEL_33;
          }
          v8 = 0;
        }
        if ( v24 )
          HmgDecProcessHandleCount(v22);
      }
    }
LABEL_48:
    HANDLELOCK::vUnlock((HANDLELOCK *)&v31);
    if ( v32 )
      HANDLELOCK::vUnlock((HANDLELOCK *)&v31);
  }
  GreReleaseHmgrSemaphore(v11, v10, v12);
  if ( ObjectAttr )
    HmgFreeObjectAttr(ObjectAttr);
  return v8;
}
