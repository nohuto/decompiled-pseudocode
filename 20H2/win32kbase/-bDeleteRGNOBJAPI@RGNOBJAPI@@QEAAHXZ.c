/*
 * XREFs of ?bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ @ 0x1C0039CD0
 * Callers:
 *     GreDeleteObject @ 0x1C0039BA0 (GreDeleteObject.c)
 *     bDeleteRegion @ 0x1C00926B0 (bDeleteRegion.c)
 *     EngDeleteRgn @ 0x1C014CC40 (EngDeleteRgn.c)
 * Callees:
 *     ?bPEBCacheHandle@@YAHW4_HANDLECACHETYPE@@PEAT_OBJECTATTR@@PEAU_ENTRY@@PEAVHANDLELOCK@@PEAPEAU_BASEOBJECT@@@Z @ 0x1C003B020 (-bPEBCacheHandle@@YAHW4_HANDLECACHETYPE@@PEAT_OBJECTATTR@@PEAU_ENTRY@@PEAVHANDLELOCK@@PEAPEAU_BA.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C003C850 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C00445F0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C0045800 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     IsThreadCrossSessionAttached @ 0x1C0045E90 (IsThreadCrossSessionAttached.c)
 *     ?HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z @ 0x1C00475D0 (-HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z.c)
 *     HmgFreeObjectAttr @ 0x1C00A566C (HmgFreeObjectAttr.c)
 */

__int64 __fastcall RGNOBJAPI::bDeleteRGNOBJAPI(struct HOBJ__ **this)
{
  __int64 v2; // r13
  __int64 v3; // rsi
  __int64 CurrentThreadWin32ThreadAndEnterCriticalRegion; // rbx
  __int64 v5; // r15
  GdiHandleManager *v6; // rbx
  unsigned int v7; // eax
  __int64 v8; // rdi
  unsigned int v9; // ebp
  unsigned int v10; // edx
  __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // rbx
  __int64 v14; // r12
  _QWORD *v15; // rax
  unsigned int v16; // ecx
  char v17; // al
  struct HOBJ__ *v18; // r15
  GdiHandleManager *v19; // rsi
  unsigned int v20; // eax
  __int64 v21; // rbx
  unsigned int v22; // r9d
  unsigned int v23; // edx
  __int64 v24; // rcx
  __int64 v25; // r10
  __int64 v26; // rdi
  unsigned int v27; // eax
  unsigned int v28; // r9d
  unsigned __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  struct HOBJ__ *v32; // rdx
  __int64 v33; // r8
  GdiHandleManager *v34; // rbx
  unsigned int v35; // eax
  __int64 v36; // r8
  unsigned __int64 v37; // rdx
  unsigned int v38; // r10d
  __int64 v39; // rcx
  __int64 v40; // r9
  _DWORD *v41; // rdx
  unsigned int v42; // eax
  __int64 v43; // r10
  unsigned int v44; // edx
  unsigned int v45; // r8d
  __int64 v46; // rax
  __int64 v47; // r10
  struct HOBJ__ *v48; // rcx
  struct HOBJ__ *v49; // rax
  REGION *v50; // rcx
  __int64 result; // rax
  unsigned int v52; // ebx
  int v53; // edx
  GdiHandleManager *v54; // rbx
  unsigned int v55; // eax
  __int64 v56; // r9
  unsigned __int64 v57; // rdx
  unsigned int v58; // r8d
  __int64 v59; // rcx
  __int64 v60; // r10
  __int64 v61; // rdx
  __int64 v62; // [rsp+30h] [rbp-68h] BYREF
  int v63; // [rsp+38h] [rbp-60h]
  int v64; // [rsp+3Ch] [rbp-5Ch]
  __int64 v65; // [rsp+A0h] [rbp+8h]
  __int64 v66; // [rsp+B0h] [rbp+18h] BYREF
  unsigned __int64 v67; // [rsp+B8h] [rbp+20h]

  v2 = 0LL;
  if ( *this )
  {
    v3 = *(_QWORD *)*this;
    v66 = 0LL;
    CurrentThreadWin32ThreadAndEnterCriticalRegion = PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v66);
    if ( !(unsigned int)IsThreadCrossSessionAttached()
      && CurrentThreadWin32ThreadAndEnterCriticalRegion
      && *(_QWORD *)CurrentThreadWin32ThreadAndEnterCriticalRegion )
    {
      v5 = *(_QWORD *)(*(_QWORD *)CurrentThreadWin32ThreadAndEnterCriticalRegion + 72LL);
    }
    else
    {
      v5 = 0LL;
    }
    v6 = gpHandleManager;
    v63 = 1;
    v7 = GdiHandleManager::DecodeIndex(gpHandleManager, (unsigned __int16)v3 | ((unsigned int)v3 >> 8) & 0xFF0000);
    v8 = *((_QWORD *)v6 + 2);
    v9 = v7;
    v10 = *(_DWORD *)(v8 + 2056);
    if ( v7 < v10 + ((*(unsigned __int16 *)(v8 + 2) + 0xFFFF) << 16) )
    {
      v11 = ((v7 - v10) >> 16) + 1;
      if ( v7 < v10 )
        v11 = 0LL;
      v12 = *(_QWORD *)(v8 + 8 * v11 + 8);
      if ( (_DWORD)v11 )
        v9 = ((1 - (_DWORD)v11) << 16) - v10 + v7;
      v13 = 0LL;
      if ( v9 < *(_DWORD *)(v12 + 20) )
      {
        v14 = 16LL * (unsigned __int8)v9;
        v15 = *(_QWORD **)(v12 + 24);
        v67 = 8 * ((unsigned __int64)v9 >> 8);
        v65 = v14 + *(_QWORD *)(*v15 + v67);
        KeEnterCriticalRegion();
        ExAcquirePushLockExclusiveEx(v65, 0LL);
        if ( v9 < *(_DWORD *)(v12 + 20) && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v12 + 24) + v67) + v14 + 8) )
        {
          *(_DWORD *)(*(_QWORD *)v12 + 24LL * v9 + 8) |= 1u;
          v13 = 24LL * v9 + *(_QWORD *)v12;
        }
        else
        {
          ExReleasePushLockExclusiveEx(v65, 0LL);
          KeLeaveCriticalRegion();
        }
      }
      v62 = v13;
      if ( v13 )
      {
        _m_prefetchw((const void *)(v13 + 8));
        v64 = *(_DWORD *)(v13 + 8);
        v16 = v64 & 0xFFFFFFFE;
        if ( (v64 & 0xFFFFFFFE) != (v66 & 0xFFFFFFFC) && v16 && (!v5 || v16 != *(_DWORD *)(v5 + 8)) )
          goto LABEL_89;
        v17 = *(_BYTE *)(v13 + 15);
        if ( (v17 & 0x20) != 0 )
          goto LABEL_89;
        if ( (v17 & 0x40) != 0 )
        {
          v53 = *(_DWORD *)v13;
          v54 = gpHandleManager;
          v55 = GdiHandleManager::DecodeIndex(gpHandleManager, v53 & 0xFFFFFF);
          v56 = *((_QWORD *)v54 + 2);
          v57 = v55;
          v58 = *(_DWORD *)(v56 + 2056);
          if ( v55 >= v58 + ((*(unsigned __int16 *)(v56 + 2) + 0xFFFF) << 16) )
            goto LABEL_78;
          v59 = ((v55 - v58) >> 16) + 1;
          if ( v55 < v58 )
            v59 = 0LL;
          v60 = *(_QWORD *)(v56 + 8 * v59 + 8);
          if ( (_DWORD)v59 )
            v57 = ((1 - (_DWORD)v59) << 16) - v58 + v55;
          if ( (unsigned int)v57 >= *(_DWORD *)(v60 + 20) )
LABEL_78:
            v61 = 0LL;
          else
            v61 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v60 + 24) + 8 * (v57 >> 8)) + 16LL * (unsigned __int8)v57 + 8);
          if ( !*(_WORD *)(v61 + 12) || *(struct _KTHREAD **)(v61 + 16) != KeGetCurrentThread() )
          {
LABEL_89:
            HANDLELOCK::vUnlock((HANDLELOCK *)&v62);
            if ( !v63 )
              goto LABEL_54;
          }
        }
        if ( *(_BYTE *)(v62 + 14) != 4 || *(_WORD *)(v62 + 12) != WORD1(v3) )
          HANDLELOCK::vUnlock((HANDLELOCK *)&v62);
        if ( !v63 )
          goto LABEL_54;
        v18 = *this;
        v19 = gpHandleManager;
        v20 = GdiHandleManager::DecodeIndex(
                gpHandleManager,
                (unsigned __int16)*(_DWORD *)*this | (*(_DWORD *)*this >> 8) & 0xFF0000);
        v21 = *((_QWORD *)v19 + 2);
        v22 = v20;
        v23 = *(_DWORD *)(v21 + 2056);
        if ( v20 >= v23 + ((*(unsigned __int16 *)(v21 + 2) + 0xFFFF) << 16) )
        {
          v26 = 0LL;
        }
        else
        {
          v24 = ((v20 - v23) >> 16) + 1;
          if ( v20 < v23 )
            v24 = 0LL;
          v25 = *(_QWORD *)(v21 + 8 * v24 + 8);
          if ( (_DWORD)v24 )
            v20 += ((1 - (_DWORD)v24) << 16) - v23;
          v26 = 0LL;
          if ( v20 < *(_DWORD *)(v25 + 20)
            && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v25 + 24) + 8 * ((unsigned __int64)v20 >> 8))
                         + 16LL * (unsigned __int8)v20
                         + 8) )
          {
            v26 = *(_QWORD *)v25 + 24LL * v20;
          }
        }
        v27 = GdiHandleManager::DecodeIndex(v19, v22);
        v28 = *(_DWORD *)(v21 + 2056);
        v29 = v27;
        if ( v27 >= v28 + ((*(unsigned __int16 *)(v21 + 2) + 0xFFFF) << 16) )
          goto LABEL_85;
        v30 = ((v27 - v28) >> 16) + 1;
        if ( v27 < v28 )
          v30 = 0LL;
        v31 = *(_QWORD *)(v21 + 8 * v30 + 8);
        if ( (_DWORD)v30 )
          v29 = ((1 - (_DWORD)v30) << 16) - v28 + v27;
        if ( (unsigned int)v29 >= *(_DWORD *)(v31 + 20) )
LABEL_85:
          v32 = 0LL;
        else
          v32 = *(struct HOBJ__ **)(*(_QWORD *)(**(_QWORD **)(v31 + 24) + 8 * (v29 >> 8))
                                  + 16LL * (unsigned __int8)v29
                                  + 8);
        v33 = 0LL;
        if ( v32 == v18 )
          v33 = v26;
        v2 = *(_QWORD *)(v33 + 16);
        if ( v2 )
        {
          result = bPEBCacheHandle(2LL, v2, v33, &v62, this);
          v52 = result;
          if ( (_DWORD)result )
          {
            if ( v63 )
            {
              HANDLELOCK::vUnlock((HANDLELOCK *)&v62);
              return v52;
            }
            return result;
          }
        }
        v34 = gpHandleManager;
        v35 = GdiHandleManager::DecodeIndex(gpHandleManager, *(_DWORD *)v62 & 0xFFFFFF);
        v36 = *((_QWORD *)v34 + 2);
        v37 = v35;
        v38 = *(_DWORD *)(v36 + 2056);
        if ( v35 >= v38 + ((*(unsigned __int16 *)(v36 + 2) + 0xFFFF) << 16) )
          goto LABEL_86;
        v39 = ((v35 - v38) >> 16) + 1;
        if ( v35 < v38 )
          v39 = 0LL;
        v40 = *(_QWORD *)(v36 + 8 * v39 + 8);
        if ( (_DWORD)v39 )
          v37 = ((1 - (_DWORD)v39) << 16) - v38 + v35;
        if ( (unsigned int)v37 >= *(_DWORD *)(v40 + 20) )
LABEL_86:
          v41 = 0LL;
        else
          v41 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v40 + 24) + 8 * (v37 >> 8)) + 16LL * (unsigned __int8)v37 + 8);
        v42 = GdiHandleManager::DecodeIndex(v34, (unsigned __int16)*v41 | (*v41 >> 8) & 0xFF0000);
        v43 = *((_QWORD *)v34 + 2);
        v44 = v42;
        v45 = *(_DWORD *)(v43 + 2056);
        if ( v42 < v45 + ((*(unsigned __int16 *)(v43 + 2) + 0xFFFF) << 16) )
        {
          v46 = ((v42 - v45) >> 16) + 1;
          if ( v44 < v45 )
            v46 = 0LL;
          v47 = *(_QWORD *)(v43 + 8 * v46 + 8);
          if ( (_DWORD)v46 )
            v44 += ((1 - (_DWORD)v46) << 16) - v45;
          *(_DWORD *)(*(_QWORD *)v47 + 24LL * v44 + 8) &= ~1u;
          ExReleasePushLockExclusiveEx(
            *(_QWORD *)(**(_QWORD **)(v47 + 24) + 8 * ((unsigned __int64)v44 >> 8)) + 16LL * (unsigned __int8)v44,
            0LL);
          KeLeaveCriticalRegion();
        }
      }
    }
    KeLeaveCriticalRegion();
  }
LABEL_54:
  v48 = this[1];
  if ( v48 == (struct HOBJ__ *)hrgnDefault )
    return 0LL;
  v49 = (struct HOBJ__ *)HmgRemoveObjectImpl(v48, 1, 0, 0, 4, 0LL);
  v50 = *this;
  if ( v49 != *this )
    return 0LL;
  this[1] = 0LL;
  REGION::vDeleteREGION(v50);
  *this = 0LL;
  if ( v2 )
    HmgFreeObjectAttr(v2);
  return 1LL;
}
