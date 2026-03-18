/*
 * XREFs of bDeleteBrush @ 0x1C00371E0
 * Callers:
 *     ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C001783C (-NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z.c)
 *     ??1BRUSHMEMOBJ@@QEAA@XZ @ 0x1C001C8A8 (--1BRUSHMEMOBJ@@QEAA@XZ.c)
 *     GreDeleteObject @ 0x1C0039BA0 (GreDeleteObject.c)
 *     NtGdiDeleteObjectApp @ 0x1C003A900 (NtGdiDeleteObjectApp.c)
 *     ?DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z @ 0x1C0042ED0 (-DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z.c)
 * Callees:
 *     ?vFreeOrCacheRBrush@RBRUSH@@QEAAXW4RBTYPE@@@Z @ 0x1C0018550 (-vFreeOrCacheRBrush@RBRUSH@@QEAAXW4RBTYPE@@@Z.c)
 *     bDeleteSurface @ 0x1C001A650 (bDeleteSurface.c)
 *     ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x1C001C198 (--0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z.c)
 *     ??1BRUSHSELOBJ@@QEAA@XZ @ 0x1C001C1DC (--1BRUSHSELOBJ@@QEAA@XZ.c)
 *     ?ShareCount@HANDLELOCK@@QEAAKXZ @ 0x1C0037510 (-ShareCount@HANDLELOCK@@QEAAKXZ.c)
 *     ?bPEBCacheHandle@@YAHW4_HANDLECACHETYPE@@PEAT_OBJECTATTR@@PEAU_ENTRY@@PEAVHANDLELOCK@@PEAPEAU_BASEOBJECT@@@Z @ 0x1C003B020 (-bPEBCacheHandle@@YAHW4_HANDLECACHETYPE@@PEAT_OBJECTATTR@@PEAU_ENTRY@@PEAVHANDLELOCK@@PEAPEAU_BA.c)
 *     ?bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z @ 0x1C0041490 (-bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C00445F0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C0045800 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z @ 0x1C00475D0 (-HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z.c)
 *     Win32FreePool @ 0x1C0057A50 (Win32FreePool.c)
 *     ?FreeBrushMemory@@YAXPEAVBRUSH@@@Z @ 0x1C00A36F4 (-FreeBrushMemory@@YAXPEAVBRUSH@@@Z.c)
 *     HmgFreeObjectAttr @ 0x1C00A566C (HmgFreeObjectAttr.c)
 *     ?vDeleteIcmDIBs@BRUSH@@QEAAXXZ @ 0x1C00C7698 (-vDeleteIcmDIBs@BRUSH@@QEAAXXZ.c)
 *     ?ReleaseReferenceCountedObjectHandle@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C014E75C (-ReleaseReferenceCountedObjectHandle@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 */

__int64 __fastcall bDeleteBrush(struct HOBJ__ *a1, int a2)
{
  int v2; // r13d
  unsigned int v4; // r14d
  int v5; // r15d
  _DWORD *v6; // rsi
  int v7; // r13d
  _DWORD *v8; // rsi
  GdiHandleManager *v9; // rbx
  unsigned int v10; // r9d
  __int64 v11; // rdx
  unsigned int v12; // r8d
  unsigned int v13; // ecx
  __int64 v14; // rdx
  __int64 v15; // rbx
  int v16; // edx
  _DWORD *v18; // rax
  __int64 v19; // rdx
  ULONG_PTR v20; // rbx
  int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // rcx
  int v24; // r8d
  int v25; // r8d
  volatile signed __int32 *v26; // rcx
  _QWORD v27[3]; // [rsp+40h] [rbp-68h] BYREF
  _DWORD *v28; // [rsp+58h] [rbp-50h] BYREF
  int v29; // [rsp+60h] [rbp-48h]

  v2 = a2;
  v4 = 1;
  v5 = 1;
  v6 = 0LL;
  if ( a2 )
    goto LABEL_22;
  v28 = 0LL;
  v29 = 0;
  HANDLELOCK::bLockHobj((HANDLELOCK *)&v28, a1, 0x10u);
  if ( !v29 )
    goto LABEL_22;
  v7 = 1;
  v8 = v28;
  v9 = gpHandleManager;
  v10 = GdiHandleManager::DecodeIndex(gpHandleManager, *v28 & 0xFFFFFF);
  v11 = *((_QWORD *)v9 + 2);
  v12 = *(_DWORD *)(v11 + 2056);
  if ( v10 >= v12 + ((*(unsigned __int16 *)(v11 + 2) + 0xFFFF) << 16) )
    goto LABEL_52;
  if ( v10 >= v12 )
    v13 = ((v10 - v12) >> 16) + 1;
  else
    v13 = 0;
  v14 = *(_QWORD *)(v11 + 8LL * v13 + 8);
  v27[2] = v14;
  if ( v13 )
    v10 += ((1 - v13) << 16) - v12;
  if ( v10 >= *(_DWORD *)(v14 + 20) )
LABEL_52:
    v15 = 0LL;
  else
    v15 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v14 + 24) + 8LL * (v10 >> 8)) + 16LL * (unsigned __int8)v10 + 8);
  v27[0] = v15;
  v6 = (_DWORD *)*((_QWORD *)v8 + 2);
  if ( HANDLELOCK::ShareCount((HANDLELOCK *)&v28) )
  {
    **(_DWORD **)(v15 + 48) = 2;
LABEL_25:
    v5 = 0;
    goto LABEL_18;
  }
  if ( v6 )
  {
    if ( (*v6 & 1) == 0 )
    {
      v16 = *(_DWORD *)(v15 + 40) & 0x400;
      if ( (*(_DWORD *)(v15 + 40) & 0x10) != 0
        && (!v16 || ((unsigned int)a1 & 0x7F0000) != 0x500000)
        && (unsigned int)bPEBCacheHandle(v16 != 0, v6, v28, &v28, 0LL) )
      {
        v5 = 0;
      }
      v7 = v5;
      goto LABEL_18;
    }
    goto LABEL_25;
  }
LABEL_18:
  if ( v7 )
    HANDLELOCK::vUnlock((HANDLELOCK *)&v28);
  v2 = 0;
  if ( v29 )
    HANDLELOCK::vUnlock((HANDLELOCK *)&v28);
LABEL_22:
  if ( v5 )
  {
    v18 = HmgRemoveObjectImpl(a1, 0, 0, 0, 16, 0LL);
    v20 = (ULONG_PTR)v18;
    if ( v18 )
    {
      v21 = v18[10];
      if ( (v21 & 0x400) != 0 )
      {
        v22 = *(_QWORD *)(v20 + 152);
        if ( v22 )
        {
          if ( (v21 & 0x4000) == 0 )
            Win32FreePool(v22);
        }
      }
      v23 = *(_QWORD *)(v20 + 24);
      if ( v23 )
        bDeleteSurface(v23, v19);
      if ( *(_DWORD *)(v20 + 100) != -1 )
      {
        v24 = *(_DWORD *)(v20 + 40);
        if ( v24 >= 0 )
        {
          v25 = v24 & 0x40000000;
          v26 = *(volatile signed __int32 **)(v20 + 120);
          if ( _InterlockedExchangeAdd(v26, 0xFFFFFFFF) == 1 )
            RBRUSH::vFreeOrCacheRBrush(v26, v25 != 0);
          *(_QWORD *)(v20 + 120) = 0LL;
        }
      }
      if ( (*(_DWORD *)(v20 + 40) & 0x80u) != 0 )
        BRUSH::vDeleteIcmDIBs((BRUSH *)v20);
      if ( *(_QWORD *)(v20 + 136) )
        ReleaseReferenceCountedObjectHandle(2LL);
      FreeBrushMemory(v20);
      if ( !v2 && v6 )
        HmgFreeObjectAttr(v6);
    }
    else
    {
      BRUSHSELOBJ::BRUSHSELOBJ((BRUSHSELOBJ *)v27, (HBRUSH)a1);
      if ( !v27[0] || (*(_DWORD *)(v27[0] + 40LL) & 0x200) == 0 )
        v4 = 0;
      BRUSHSELOBJ::~BRUSHSELOBJ((BRUSHSELOBJ *)v27);
    }
  }
  return v4;
}
