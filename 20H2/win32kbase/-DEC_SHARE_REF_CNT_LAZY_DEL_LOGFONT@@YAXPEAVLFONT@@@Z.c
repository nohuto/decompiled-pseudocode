/*
 * XREFs of ?DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z @ 0x1C0042480
 * Callers:
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C003DE00 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     ?vDeleteDCInternalWorker@@YAXPEAVXDCOBJ@@H@Z @ 0x1C004BBCC (-vDeleteDCInternalWorker@@YAXPEAVXDCOBJ@@H@Z.c)
 *     GreRestoreDCInternal @ 0x1C00D0920 (GreRestoreDCInternal.c)
 * Callees:
 *     ?bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z @ 0x1C0041490 (-bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z.c)
 *     ?GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z @ 0x1C0044450 (-GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C00445F0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C0044950 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C00455B0 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C0045800 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C00475B4 (-TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(struct HOBJ__ **a1)
{
  struct OBJECT *v2; // rsi
  struct HOBJ__ *v3; // r15
  int v4; // eax
  unsigned int v5; // edx
  int v6; // ebp
  _DWORD *v7; // rdi
  char v8; // al
  unsigned int v9; // ebx
  GdiHandleManager *v10; // rdi
  __int64 v11; // rdx
  unsigned int v12; // r8d
  __int64 v13; // rcx
  __int64 v14; // r9
  _DWORD *v15; // rdx
  unsigned int v16; // ebx
  __int64 v17; // rdx
  unsigned int v18; // r8d
  __int64 v19; // rcx
  __int64 v20; // r10
  GdiHandleManager *v21; // rbx
  unsigned int v22; // eax
  __int64 v23; // r9
  unsigned __int64 v24; // rdx
  unsigned int v25; // r8d
  __int64 v26; // rcx
  __int64 v27; // rax
  char v28; // bl
  struct HOBJ__ *v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // [rsp+30h] [rbp-48h] BYREF
  int v32; // [rsp+38h] [rbp-40h]

  if ( !a1 )
    return;
  v2 = 0LL;
  v3 = *a1;
  v4 = (unsigned __int16)*a1;
  v5 = (unsigned int)*a1 >> 8;
  v31 = 0LL;
  v32 = 0;
  LOWORD(v6) = 0;
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v31, v4 | v5 & 0xFF0000, 0, 0, 1);
  if ( v32 )
  {
    v6 = *((_DWORD *)a1 + 2);
    v7 = (_DWORD *)v31;
    v8 = *(_BYTE *)(v31 + 14);
    if ( v8 == 5 )
    {
      v29 = a1[85];
      v30 = 0LL;
    }
    else
    {
      if ( v8 != 16 )
      {
LABEL_5:
        --*((_DWORD *)a1 + 2);
        v9 = *v7 & 0xFFFFFF;
        if ( v9 >= 0x10000 )
        {
          if ( *(_DWORD *)gpHandleManager > 0x10000u )
          {
            if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                        *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                        *(unsigned __int16 *)v7,
                                        1)
                 + 13) == HIWORD(v9) )
              v9 = (unsigned __int16)v9;
          }
          else
          {
            v9 = *(unsigned __int16 *)v7;
          }
        }
        v10 = gpHandleManager;
        v11 = *((_QWORD *)gpHandleManager + 2);
        v12 = *(_DWORD *)(v11 + 2056);
        if ( v9 >= v12 + ((*(unsigned __int16 *)(v11 + 2) + 0xFFFF) << 16) )
          goto LABEL_46;
        v13 = ((v9 - v12) >> 16) + 1;
        if ( v9 < v12 )
          v13 = 0LL;
        v14 = *(_QWORD *)(v11 + 8 * v13 + 8);
        if ( (_DWORD)v13 )
          v9 += ((1 - (_DWORD)v13) << 16) - v12;
        if ( v9 >= *(_DWORD *)(v14 + 20) )
LABEL_46:
          v15 = 0LL;
        else
          v15 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v14 + 24) + 8 * ((unsigned __int64)v9 >> 8))
                           + 16LL * (unsigned __int8)v9
                           + 8);
        v16 = (unsigned __int16)*v15 | (*v15 >> 8) & 0xFF0000;
        if ( v16 >= 0x10000 )
        {
          if ( *(_DWORD *)gpHandleManager > 0x10000u )
          {
            if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                        *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                        (unsigned __int16)*v15,
                                        1)
                 + 13) == HIWORD(v16) )
              v16 = (unsigned __int16)v16;
          }
          else
          {
            v16 = (unsigned __int16)*v15;
          }
        }
        v17 = *((_QWORD *)v10 + 2);
        v18 = *(_DWORD *)(v17 + 2056);
        if ( v16 < v18 + ((*(unsigned __int16 *)(v17 + 2) + 0xFFFF) << 16) )
        {
          v19 = ((v16 - v18) >> 16) + 1;
          if ( v16 < v18 )
            v19 = 0LL;
          v20 = *(_QWORD *)(v17 + 8 * v19 + 8);
          if ( (_DWORD)v19 )
            v16 += ((1 - (_DWORD)v19) << 16) - v18;
          *(_DWORD *)(*(_QWORD *)v20 + 24LL * v16 + 8) &= ~1u;
          ExReleasePushLockExclusiveEx(
            *(_QWORD *)(**(_QWORD **)(v20 + 24) + 8 * ((unsigned __int64)v16 >> 8)) + 16LL * (unsigned __int8)v16,
            0LL);
          KeLeaveCriticalRegion();
        }
        KeLeaveCriticalRegion();
        goto LABEL_25;
      }
      v29 = a1[17];
      v30 = 2LL;
    }
    TrackObjectReferenceDecrement(v30, v29);
    goto LABEL_5;
  }
LABEL_25:
  if ( (unsigned __int16)v6 == 1 )
  {
    v31 = 0LL;
    v32 = 0;
    HANDLELOCK::bLockHobj((HANDLELOCK *)&v31, v3, 10);
    if ( v32 )
    {
      v21 = gpHandleManager;
      v22 = GdiHandleManager::DecodeIndex(gpHandleManager, *(_DWORD *)v31 & 0xFFFFFF);
      v23 = *((_QWORD *)v21 + 2);
      v24 = v22;
      v25 = *(_DWORD *)(v23 + 2056);
      if ( v22 < v25 + ((*(unsigned __int16 *)(v23 + 2) + 0xFFFF) << 16) )
      {
        v26 = ((v22 - v25) >> 16) + 1;
        if ( v22 < v25 )
          v26 = 0LL;
        v27 = *(_QWORD *)(v23 + 8 * v26 + 8);
        if ( (_DWORD)v26 )
          v24 = ((1 - (_DWORD)v26) << 16) - v25 + (unsigned int)v24;
        if ( (unsigned int)v24 < *(_DWORD *)(v27 + 20) )
          v2 = *(struct OBJECT **)(*(_QWORD *)(**(_QWORD **)(v27 + 24) + 8 * (v24 >> 8))
                                 + 16LL * (unsigned __int8)v24
                                 + 8);
      }
      v28 = *((_BYTE *)GdiHandleManager::GetEntryFromObject(v21, v2) + 15);
      HANDLELOCK::vUnlock((HANDLELOCK *)&v31);
      if ( (v28 & 2) != 0 && qword_1C024F160 )
        qword_1C024F160(v3, 0LL);
      if ( v32 )
        HANDLELOCK::vUnlock((HANDLELOCK *)&v31);
    }
  }
}
