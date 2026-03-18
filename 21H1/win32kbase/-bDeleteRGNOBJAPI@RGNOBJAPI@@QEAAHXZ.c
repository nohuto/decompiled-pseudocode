/*
 * XREFs of ?bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ @ 0x1C008B250
 * Callers:
 *     GreDeleteObject @ 0x1C008B120 (GreDeleteObject.c)
 *     bDeleteRegion @ 0x1C00A9EB0 (bDeleteRegion.c)
 *     EngDeleteRgn @ 0x1C0155420 (EngDeleteRgn.c)
 * Callees:
 *     HmgFreeObjectAttr @ 0x1C00350CC (HmgFreeObjectAttr.c)
 *     ?bPEBCacheHandle@@YAHW4_HANDLECACHETYPE@@PEAT_OBJECTATTR@@PEAU_ENTRY@@PEAVHANDLELOCK@@PEAPEAU_BASEOBJECT@@@Z @ 0x1C006CC10 (-bPEBCacheHandle@@YAHW4_HANDLECACHETYPE@@PEAT_OBJECTATTR@@PEAU_ENTRY@@PEAVHANDLELOCK@@PEAPEAU_BA.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0082DC0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C00841C0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     IsThreadCrossSessionAttached @ 0x1C0084880 (IsThreadCrossSessionAttached.c)
 *     ?HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z @ 0x1C00865B0 (-HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C008BC60 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 */

__int64 __fastcall RGNOBJAPI::bDeleteRGNOBJAPI(__int64 **this)
{
  _DWORD *v2; // r13
  __int64 v3; // rsi
  __int64 CurrentThreadWin32ThreadAndEnterCriticalRegion; // rbx
  __int64 v5; // rcx
  __int64 v6; // r15
  GdiHandleManager *v7; // rbx
  unsigned int v8; // eax
  __int64 v9; // rdi
  unsigned int v10; // ebp
  unsigned int v11; // edx
  __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 v14; // rbx
  __int64 v15; // r12
  _QWORD *v16; // rax
  unsigned int v17; // ecx
  char v18; // al
  __int64 *v19; // r15
  GdiHandleManager *v20; // rsi
  unsigned int v21; // eax
  __int64 v22; // rbx
  unsigned int v23; // r9d
  unsigned int v24; // edx
  __int64 v25; // rcx
  __int64 v26; // r10
  __int64 v27; // rdi
  unsigned int v28; // eax
  unsigned int v29; // r9d
  unsigned __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 *v33; // rdx
  __int64 v34; // r8
  GdiHandleManager *v35; // rbx
  unsigned int v36; // eax
  __int64 v37; // r8
  unsigned __int64 v38; // rdx
  unsigned int v39; // r10d
  __int64 v40; // rcx
  __int64 v41; // r9
  _DWORD *v42; // rdx
  unsigned int v43; // eax
  __int64 v44; // r10
  unsigned int v45; // edx
  unsigned int v46; // r8d
  __int64 v47; // rax
  __int64 v48; // r10
  struct HOBJ__ *v49; // rcx
  __int64 v50; // rax
  REGION *v51; // rcx
  __int64 result; // rax
  unsigned int v53; // ebx
  int v54; // edx
  GdiHandleManager *v55; // rbx
  unsigned int v56; // eax
  __int64 v57; // r9
  unsigned __int64 v58; // rdx
  unsigned int v59; // r8d
  __int64 v60; // rcx
  __int64 v61; // r10
  __int64 v62; // rdx
  _DWORD *v63; // [rsp+30h] [rbp-68h] BYREF
  int v64; // [rsp+38h] [rbp-60h]
  int v65; // [rsp+3Ch] [rbp-5Ch]
  __int64 v66; // [rsp+A0h] [rbp+8h]
  __int64 v67; // [rsp+B0h] [rbp+18h] BYREF
  unsigned __int64 v68; // [rsp+B8h] [rbp+20h]

  v2 = 0LL;
  if ( *this )
  {
    v3 = **this;
    v67 = 0LL;
    CurrentThreadWin32ThreadAndEnterCriticalRegion = PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v67);
    if ( !IsThreadCrossSessionAttached(v5)
      && CurrentThreadWin32ThreadAndEnterCriticalRegion
      && *(_QWORD *)CurrentThreadWin32ThreadAndEnterCriticalRegion )
    {
      v6 = *(_QWORD *)(*(_QWORD *)CurrentThreadWin32ThreadAndEnterCriticalRegion + 72LL);
    }
    else
    {
      v6 = 0LL;
    }
    v7 = gpHandleManager;
    v64 = 1;
    v8 = GdiHandleManager::DecodeIndex(
           (GdiHandleEntryDirectory **)gpHandleManager,
           (unsigned __int16)v3 | ((unsigned int)v3 >> 8) & 0xFF0000);
    v9 = *((_QWORD *)v7 + 2);
    v10 = v8;
    v11 = *(_DWORD *)(v9 + 2056);
    if ( v8 < v11 + ((*(unsigned __int16 *)(v9 + 2) + 0xFFFF) << 16) )
    {
      v12 = ((v8 - v11) >> 16) + 1;
      if ( v8 < v11 )
        v12 = 0LL;
      v13 = *(_QWORD *)(v9 + 8 * v12 + 8);
      if ( (_DWORD)v12 )
        v10 = ((1 - (_DWORD)v12) << 16) - v11 + v8;
      v14 = 0LL;
      if ( v10 < *(_DWORD *)(v13 + 20) )
      {
        v15 = 16LL * (unsigned __int8)v10;
        v16 = *(_QWORD **)(v13 + 24);
        v68 = 8 * ((unsigned __int64)v10 >> 8);
        v66 = v15 + *(_QWORD *)(*v16 + v68);
        KeEnterCriticalRegion();
        ExAcquirePushLockExclusiveEx(v66, 0LL);
        if ( v10 < *(_DWORD *)(v13 + 20) && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v13 + 24) + v68) + v15 + 8) )
        {
          *(_DWORD *)(*(_QWORD *)v13 + 24LL * v10 + 8) |= 1u;
          v14 = 24LL * v10 + *(_QWORD *)v13;
        }
        else
        {
          ExReleasePushLockExclusiveEx(v66, 0LL);
          KeLeaveCriticalRegion();
        }
      }
      v63 = (_DWORD *)v14;
      if ( v14 )
      {
        _m_prefetchw((const void *)(v14 + 8));
        v65 = *(_DWORD *)(v14 + 8);
        v17 = v65 & 0xFFFFFFFE;
        if ( (v65 & 0xFFFFFFFE) != (v67 & 0xFFFFFFFC) && v17 && (!v6 || v17 != *(_DWORD *)(v6 + 8)) )
          goto LABEL_89;
        v18 = *(_BYTE *)(v14 + 15);
        if ( (v18 & 0x20) != 0 )
          goto LABEL_89;
        if ( (v18 & 0x40) != 0 )
        {
          v54 = *(_DWORD *)v14;
          v55 = gpHandleManager;
          v56 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)gpHandleManager, v54 & 0xFFFFFF);
          v57 = *((_QWORD *)v55 + 2);
          v58 = v56;
          v59 = *(_DWORD *)(v57 + 2056);
          if ( v56 >= v59 + ((*(unsigned __int16 *)(v57 + 2) + 0xFFFF) << 16) )
            goto LABEL_78;
          v60 = ((v56 - v59) >> 16) + 1;
          if ( v56 < v59 )
            v60 = 0LL;
          v61 = *(_QWORD *)(v57 + 8 * v60 + 8);
          if ( (_DWORD)v60 )
            v58 = ((1 - (_DWORD)v60) << 16) - v59 + v56;
          if ( (unsigned int)v58 >= *(_DWORD *)(v61 + 20) )
LABEL_78:
            v62 = 0LL;
          else
            v62 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v61 + 24) + 8 * (v58 >> 8)) + 16LL * (unsigned __int8)v58 + 8);
          if ( !*(_WORD *)(v62 + 12) || *(struct _KTHREAD **)(v62 + 16) != KeGetCurrentThread() )
          {
LABEL_89:
            HANDLELOCK::vUnlock((HANDLELOCK *)&v63);
            if ( !v64 )
              goto LABEL_54;
          }
        }
        if ( *((_BYTE *)v63 + 14) != 4 || *((_WORD *)v63 + 6) != WORD1(v3) )
          HANDLELOCK::vUnlock((HANDLELOCK *)&v63);
        if ( !v64 )
          goto LABEL_54;
        v19 = *this;
        v20 = gpHandleManager;
        v21 = GdiHandleManager::DecodeIndex(
                (GdiHandleEntryDirectory **)gpHandleManager,
                (unsigned __int16)*(_DWORD *)*this | (*(_DWORD *)*this >> 8) & 0xFF0000u);
        v22 = *((_QWORD *)v20 + 2);
        v23 = v21;
        v24 = *(_DWORD *)(v22 + 2056);
        if ( v21 >= v24 + ((*(unsigned __int16 *)(v22 + 2) + 0xFFFF) << 16) )
        {
          v27 = 0LL;
        }
        else
        {
          v25 = ((v21 - v24) >> 16) + 1;
          if ( v21 < v24 )
            v25 = 0LL;
          v26 = *(_QWORD *)(v22 + 8 * v25 + 8);
          if ( (_DWORD)v25 )
            v21 += ((1 - (_DWORD)v25) << 16) - v24;
          v27 = 0LL;
          if ( v21 < *(_DWORD *)(v26 + 20)
            && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v26 + 24) + 8 * ((unsigned __int64)v21 >> 8))
                         + 16LL * (unsigned __int8)v21
                         + 8) )
          {
            v27 = *(_QWORD *)v26 + 24LL * v21;
          }
        }
        v28 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)v20, v23);
        v29 = *(_DWORD *)(v22 + 2056);
        v30 = v28;
        if ( v28 >= v29 + ((*(unsigned __int16 *)(v22 + 2) + 0xFFFF) << 16) )
          goto LABEL_85;
        v31 = ((v28 - v29) >> 16) + 1;
        if ( v28 < v29 )
          v31 = 0LL;
        v32 = *(_QWORD *)(v22 + 8 * v31 + 8);
        if ( (_DWORD)v31 )
          v30 = ((1 - (_DWORD)v31) << 16) - v29 + v28;
        if ( (unsigned int)v30 >= *(_DWORD *)(v32 + 20) )
LABEL_85:
          v33 = 0LL;
        else
          v33 = *(__int64 **)(*(_QWORD *)(**(_QWORD **)(v32 + 24) + 8 * (v30 >> 8)) + 16LL * (unsigned __int8)v30 + 8);
        v34 = 0LL;
        if ( v33 == v19 )
          v34 = v27;
        v2 = *(_DWORD **)(v34 + 16);
        if ( v2 )
        {
          result = bPEBCacheHandle(2LL, v2, (_DWORD *)v34, &v63, (__int64)this);
          v53 = result;
          if ( (_DWORD)result )
          {
            if ( v64 )
            {
              HANDLELOCK::vUnlock((HANDLELOCK *)&v63);
              return v53;
            }
            return result;
          }
        }
        v35 = gpHandleManager;
        v36 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)gpHandleManager, *v63 & 0xFFFFFF);
        v37 = *((_QWORD *)v35 + 2);
        v38 = v36;
        v39 = *(_DWORD *)(v37 + 2056);
        if ( v36 >= v39 + ((*(unsigned __int16 *)(v37 + 2) + 0xFFFF) << 16) )
          goto LABEL_86;
        v40 = ((v36 - v39) >> 16) + 1;
        if ( v36 < v39 )
          v40 = 0LL;
        v41 = *(_QWORD *)(v37 + 8 * v40 + 8);
        if ( (_DWORD)v40 )
          v38 = ((1 - (_DWORD)v40) << 16) - v39 + v36;
        if ( (unsigned int)v38 >= *(_DWORD *)(v41 + 20) )
LABEL_86:
          v42 = 0LL;
        else
          v42 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v41 + 24) + 8 * (v38 >> 8)) + 16LL * (unsigned __int8)v38 + 8);
        v43 = GdiHandleManager::DecodeIndex(
                (GdiHandleEntryDirectory **)v35,
                (unsigned __int16)*v42 | (*v42 >> 8) & 0xFF0000u);
        v44 = *((_QWORD *)v35 + 2);
        v45 = v43;
        v46 = *(_DWORD *)(v44 + 2056);
        if ( v43 < v46 + ((*(unsigned __int16 *)(v44 + 2) + 0xFFFF) << 16) )
        {
          v47 = ((v43 - v46) >> 16) + 1;
          if ( v45 < v46 )
            v47 = 0LL;
          v48 = *(_QWORD *)(v44 + 8 * v47 + 8);
          if ( (_DWORD)v47 )
            v45 += ((1 - (_DWORD)v47) << 16) - v46;
          *(_DWORD *)(*(_QWORD *)v48 + 24LL * v45 + 8) &= ~1u;
          ExReleasePushLockExclusiveEx(
            *(_QWORD *)(**(_QWORD **)(v48 + 24) + 8 * ((unsigned __int64)v45 >> 8)) + 16LL * (unsigned __int8)v45,
            0LL);
          KeLeaveCriticalRegion();
        }
      }
    }
    KeLeaveCriticalRegion();
  }
LABEL_54:
  v49 = (struct HOBJ__ *)this[1];
  if ( v49 == (struct HOBJ__ *)hrgnDefault )
    return 0LL;
  v50 = HmgRemoveObjectImpl(v49, 1, 0, 0, 4, 0LL);
  v51 = (REGION *)*this;
  if ( (__int64 *)v50 != *this )
    return 0LL;
  this[1] = 0LL;
  REGION::vDeleteREGION(v51);
  *this = 0LL;
  if ( v2 )
    HmgFreeObjectAttr((__int64)v2);
  return 1LL;
}
