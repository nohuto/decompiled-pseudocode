/*
 * XREFs of ?PrepareIncrementalUpdateForUser@CEndpointResourceStateManager@@QEAAJPEAVCFlipPresentUpdate@@@Z @ 0x1C006CC18
 * Callers:
 *     ?ConsumerBeginProcessPresent@CFlipManager@@QEAAJPEAI0@Z @ 0x1C006ACF4 (-ConsumerBeginProcessPresent@CFlipManager@@QEAAJPEAI0@Z.c)
 * Callees:
 *     memmove @ 0x1C0028C40 (memmove.c)
 *     ?Release@CFlipResource@@QEAAKXZ @ 0x1C006BCB8 (-Release@CFlipResource@@QEAAKXZ.c)
 *     ?CommitPendingUpdates@CEndpointResourceStateManager@@QEAAXXZ @ 0x1C006C514 (-CommitPendingUpdates@CEndpointResourceStateManager@@QEAAXXZ.c)
 *     ?GetSerializedUpdate@CResourceStateUpdateSerializer@@QEAAXPEAVCFlipPresentUpdate@@@Z @ 0x1C006C71C (-GetSerializedUpdate@CResourceStateUpdateSerializer@@QEAAXPEAVCFlipPresentUpdate@@@Z.c)
 *     ?IncreaseAddedBufferSize@CResourceStateUpdateSerializer@@QEAAJII@Z @ 0x1C006C7AC (-IncreaseAddedBufferSize@CResourceStateUpdateSerializer@@QEAAJII@Z.c)
 *     ?IncreaseAddedContentSize@CResourceStateUpdateSerializer@@QEAAJII@Z @ 0x1C006C7E0 (-IncreaseAddedContentSize@CResourceStateUpdateSerializer@@QEAAJII@Z.c)
 *     ?IncreaseUpdatedContentSize@CResourceStateUpdateSerializer@@QEAAJII@Z @ 0x1C006C814 (-IncreaseUpdatedContentSize@CResourceStateUpdateSerializer@@QEAAJII@Z.c)
 *     ?Allocate@CResourceStateUpdateSerializer@@QEAAJK@Z @ 0x1C006EC0C (-Allocate@CResourceStateUpdateSerializer@@QEAAJK@Z.c)
 */

__int64 __fastcall CEndpointResourceStateManager::PrepareIncrementalUpdateForUser(
        CEndpointResourceStateManager **this,
        struct CFlipPresentUpdate *a2)
{
  CEndpointResourceStateManager *v2; // r9
  unsigned int v3; // r11d
  CEndpointResourceStateManager *v4; // r13
  signed int v5; // esi
  unsigned int v6; // r8d
  __int64 v7; // r10
  __int64 v8; // rax
  int v9; // r8d
  __int64 v10; // rcx
  signed int v11; // eax
  unsigned int v12; // eax
  bool v13; // cf
  char **v14; // rbx
  char **v15; // r9
  __int64 v16; // r10
  __int64 v17; // rax
  int v18; // r8d
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rax
  unsigned int v22; // r8d
  int v23; // eax
  CEndpointResourceStateManager *v24; // rdi
  _DWORD *v25; // r12
  _DWORD *v26; // r15
  char v27; // al
  CEndpointResourceStateManager *v28; // r8
  __int64 v29; // r14
  int v30; // eax
  _DWORD *v31; // rdx
  __int64 v32; // r15
  __int64 v33; // rax
  _DWORD *v34; // rdx
  unsigned int v35; // r13d
  char *v36; // r12
  __int64 v37; // rbx
  __int64 v38; // rcx
  _DWORD *v39; // rdx
  __int64 v40; // rax
  char *v41; // rdi
  _DWORD *v42; // r15
  _DWORD *v43; // r13
  _DWORD *v44; // rsi
  bool v45; // zf
  __int64 v46; // r14
  int v47; // eax
  _DWORD *v48; // rdx
  __int64 v49; // r13
  __int64 v50; // rax
  char *v51; // r15
  unsigned int v52; // r12d
  char *v53; // r13
  __int64 v54; // rbx
  char *v55; // r15
  __int64 v56; // rcx
  __int64 v57; // r14
  int v58; // eax
  _DWORD *v59; // rdx
  __int64 v60; // rsi
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rax
  char *v64; // r12
  unsigned int v65; // r15d
  char *v66; // r13
  __int64 v67; // rbx
  char *v68; // r12
  __int64 v69; // rcx
  CFlipResource *v70; // rcx
  _DWORD *v71; // rdx
  __int64 v72; // rax
  CEndpointResourceStateManager *v74; // [rsp+20h] [rbp-69h]
  _DWORD *v75; // [rsp+20h] [rbp-69h]
  _DWORD *v76; // [rsp+28h] [rbp-61h]
  PVOID P; // [rsp+30h] [rbp-59h] BYREF
  int v78; // [rsp+38h] [rbp-51h]
  __int128 v79; // [rsp+40h] [rbp-49h]
  __int128 v80; // [rsp+50h] [rbp-39h]
  _DWORD *v81; // [rsp+60h] [rbp-29h]
  __int64 v82; // [rsp+68h] [rbp-21h]
  __int64 v83; // [rsp+70h] [rbp-19h]
  int v84; // [rsp+78h] [rbp-11h]
  char *v85; // [rsp+88h] [rbp-1h]
  char *v86; // [rsp+90h] [rbp+7h]
  struct CFlipPresentUpdate *v88; // [rsp+F8h] [rbp+6Fh]
  _DWORD *v89; // [rsp+100h] [rbp+77h]
  int v90; // [rsp+108h] [rbp+7Fh]

  v88 = a2;
  v2 = *this;
  v3 = 0;
  P = 0LL;
  v78 = 0;
  v4 = (CEndpointResourceStateManager *)this;
  v79 = 0LL;
  v80 = 0LL;
  v81 = 0LL;
  v5 = 0;
  v82 = 0LL;
  v6 = 0;
  v83 = 0LL;
  v84 = 0;
  do
  {
    if ( v2 == v4 )
      break;
    v7 = (__int64)v2 + 24;
    if ( !v2 )
      v7 = 32LL;
    if ( (*(_BYTE *)v7 & 1) != 0 )
    {
      v8 = (__int64)v2 + 16;
      v9 = v3;
      if ( !v2 )
        v8 = 24LL;
      v10 = *(_QWORD *)(*(_QWORD *)v8 + 32LL);
      if ( v10 )
        v9 = *(_DWORD *)(v10 + 32);
      v11 = CResourceStateUpdateSerializer::IncreaseAddedBufferSize((CResourceStateUpdateSerializer *)&P, 0x18u, v9);
      v6 = HIDWORD(v82);
      v5 = v11;
    }
    if ( v5 >= 0 && (*(_BYTE *)v7 & 2) != 0 )
    {
      v12 = v6 + 16;
      v13 = v6 + 16 < v6;
      v6 = -1;
      if ( !v13 )
        v6 = v12;
      v5 = v13 ? 0xC0000095 : 0;
      HIDWORD(v82) = v6;
    }
    v2 = *(CEndpointResourceStateManager **)v2;
  }
  while ( v5 >= 0 );
  v14 = (char **)((char *)v4 + 16);
  v15 = (char **)*((_QWORD *)v4 + 2);
  v86 = (char *)v4 + 16;
  if ( v5 >= 0 )
  {
    do
    {
      if ( v15 == v14 )
        break;
      v16 = (__int64)(v15 + 3);
      if ( !v15 )
        v16 = 32LL;
      if ( (*(_BYTE *)v16 & 1) != 0 )
      {
        v17 = (__int64)(v15 + 2);
        v18 = v3;
        if ( !v15 )
          v17 = 24LL;
        v19 = *(_QWORD *)(*(_QWORD *)v17 + 32LL);
        if ( v19 )
          v18 = *(_DWORD *)(v19 + 32);
        v5 = CResourceStateUpdateSerializer::IncreaseAddedContentSize((CResourceStateUpdateSerializer *)&P, 0x18u, v18);
      }
      if ( v5 >= 0 )
      {
        v20 = (__int64)(v15 + 6);
        if ( !v15 )
          v20 = 56LL;
        if ( (*(_BYTE *)v20 & 1) != 0 )
        {
          v21 = (__int64)(v15 + 4);
          v22 = v3;
          if ( !v15 )
            v21 = 40LL;
          if ( *(_QWORD *)v21 )
            v22 = *(_DWORD *)(*(_QWORD *)v21 + 32LL);
          v5 = CResourceStateUpdateSerializer::IncreaseUpdatedContentSize(
                 (CResourceStateUpdateSerializer *)&P,
                 (__int64)a2,
                 v22);
        }
        if ( v5 >= 0 && (*(_BYTE *)v16 & 2) != 0 )
        {
          a2 = (struct CFlipPresentUpdate *)HIDWORD(v83);
          v23 = -1;
          if ( (unsigned int)(HIDWORD(v83) + 16) >= HIDWORD(v83) )
            v23 = HIDWORD(v83) + 16;
          v5 = (unsigned int)(HIDWORD(v83) + 16) < HIDWORD(v83) ? 0xC0000095 : 0;
          HIDWORD(v83) = v23;
        }
      }
      v15 = (char **)*v15;
    }
    while ( v5 >= 0 );
    if ( v5 >= 0 )
    {
      v90 = CResourceStateUpdateSerializer::Allocate((CResourceStateUpdateSerializer *)&P, 0x75754346u);
      v5 = v90;
      if ( v90 >= 0 )
      {
        v24 = *(CEndpointResourceStateManager **)v4;
        if ( *(CEndpointResourceStateManager **)v4 != v4 )
        {
          v25 = (_DWORD *)*((_QWORD *)&v79 + 1);
          v26 = (_DWORD *)v79;
          do
          {
            v27 = *((_BYTE *)v24 + 24);
            v28 = *(CEndpointResourceStateManager **)v24;
            v74 = *(CEndpointResourceStateManager **)v24;
            if ( (v27 & 1) != 0 )
            {
              v29 = *(_QWORD *)(*((_QWORD *)v24 + 2) + 32LL);
              v30 = 0;
              if ( v29 )
                v30 = *(_DWORD *)(v29 + 32);
              *v26 = 2;
              v31 = v26;
              v32 = (unsigned int)(v30 + 24);
              v33 = *((_QWORD *)v24 + 2);
              v26 = (_DWORD *)((char *)v31 + v32);
              *(_QWORD *)&v79 = v26;
              *((_QWORD *)v31 + 1) = *(_QWORD *)(v33 + 40);
              if ( v29 )
              {
                v31[4] = *(_DWORD *)(v29 + 32);
                v34 = v31 + 6;
                if ( *(_DWORD *)(v29 + 12) )
                {
                  v35 = 0;
                  v36 = *(char **)(v29 + 24);
                  do
                  {
                    v37 = 32LL * v35;
                    *(_OWORD *)v34 = *(_OWORD *)(v37 + *(_QWORD *)(v29 + 16));
                    v34[4] = *(_DWORD *)(v37 + *(_QWORD *)(v29 + 16) + 16);
                    v89 = v34 + 5;
                    memmove(v34 + 5, v36, *(unsigned int *)(v37 + *(_QWORD *)(v29 + 16) + 16));
                    ++v35;
                    v38 = *(unsigned int *)(v37 + *(_QWORD *)(v29 + 16) + 16);
                    v34 = (_DWORD *)((char *)v89 + v38);
                    v36 += v38;
                  }
                  while ( v35 < *(_DWORD *)(v29 + 12) );
                  v25 = (_DWORD *)*((_QWORD *)&v79 + 1);
                  v4 = (CEndpointResourceStateManager *)this;
                  v28 = v74;
                }
              }
              else
              {
                v31[4] = 0;
              }
              *((_BYTE *)v24 + 24) |= 4u;
              v27 = *((_BYTE *)v24 + 24);
            }
            if ( (v27 & 2) != 0 )
            {
              *v25 = 0;
              v39 = v25;
              v40 = *((_QWORD *)v24 + 2);
              v25 += 4;
              *((_QWORD *)&v79 + 1) = v25;
              *((_QWORD *)v39 + 1) = *(_QWORD *)(v40 + 40);
              *((_BYTE *)v24 + 24) |= 8u;
            }
            v24 = v28;
          }
          while ( v28 != v4 );
          v14 = (char **)((char *)v4 + 16);
        }
        v41 = *v14;
        if ( *v14 != (char *)v14 )
        {
          v42 = (_DWORD *)*((_QWORD *)&v80 + 1);
          v43 = (_DWORD *)v80;
          v44 = v81;
          v75 = (_DWORD *)*((_QWORD *)&v80 + 1);
          v76 = (_DWORD *)v80;
          do
          {
            v45 = (v41[24] & 1) == 0;
            v85 = *(char **)v41;
            if ( !v45 )
            {
              v46 = *(_QWORD *)(*((_QWORD *)v41 + 2) + 32LL);
              v47 = 0;
              if ( v46 )
                v47 = *(_DWORD *)(v46 + 32);
              *v43 = 3;
              v48 = v43;
              v49 = (unsigned int)(v47 + 24);
              v50 = *((_QWORD *)v41 + 2);
              v43 = (_DWORD *)((char *)v48 + v49);
              v76 = v43;
              *(_QWORD *)&v80 = v43;
              *((_QWORD *)v48 + 1) = *(_QWORD *)(v50 + 40);
              if ( v46 )
              {
                v51 = (char *)(v48 + 6);
                v48[4] = *(_DWORD *)(v46 + 32);
                v52 = 0;
                if ( *(_DWORD *)(v46 + 12) )
                {
                  v53 = *(char **)(v46 + 24);
                  do
                  {
                    v54 = 32LL * v52;
                    *(_OWORD *)v51 = *(_OWORD *)(*(_QWORD *)(v46 + 16) + v54);
                    *((_DWORD *)v51 + 4) = *(_DWORD *)(*(_QWORD *)(v46 + 16) + v54 + 16);
                    v55 = v51 + 20;
                    memmove(v55, v53, *(unsigned int *)(*(_QWORD *)(v46 + 16) + v54 + 16));
                    ++v52;
                    v56 = *(unsigned int *)(*(_QWORD *)(v46 + 16) + v54 + 16);
                    v51 = &v55[v56];
                    v53 += v56;
                  }
                  while ( v52 < *(_DWORD *)(v46 + 12) );
                  v43 = v76;
                }
                v42 = v75;
              }
              else
              {
                v48[4] = 0;
              }
              v41[24] |= 4u;
            }
            if ( (v41[48] & 1) != 0 )
            {
              v57 = *((_QWORD *)v41 + 4);
              v58 = 0;
              if ( v57 )
                v58 = *(_DWORD *)(v57 + 32);
              *v44 = 4;
              v59 = v44;
              v60 = (unsigned int)(v58 + 32);
              v61 = *((_QWORD *)v41 + 2);
              v44 = (_DWORD *)((char *)v59 + v60);
              v81 = v44;
              *((_QWORD *)v59 + 1) = *(_QWORD *)(v61 + 40);
              v62 = *((_QWORD *)v41 + 5);
              if ( v62 )
                v63 = *(_QWORD *)(v62 + 40);
              else
                v63 = 0LL;
              *((_QWORD *)v59 + 2) = v63;
              if ( v57 )
              {
                v64 = (char *)(v59 + 8);
                v59[6] = *(_DWORD *)(v57 + 32);
                if ( *(_DWORD *)(v57 + 12) )
                {
                  v65 = 0;
                  v66 = *(char **)(v57 + 24);
                  do
                  {
                    v67 = 32LL * v65;
                    *(_OWORD *)v64 = *(_OWORD *)(*(_QWORD *)(v57 + 16) + v67);
                    *((_DWORD *)v64 + 4) = *(_DWORD *)(*(_QWORD *)(v57 + 16) + v67 + 16);
                    v68 = v64 + 20;
                    memmove(v68, v66, *(unsigned int *)(*(_QWORD *)(v57 + 16) + v67 + 16));
                    ++v65;
                    v69 = *(unsigned int *)(*(_QWORD *)(v57 + 16) + v67 + 16);
                    v64 = &v68[v69];
                    v66 += v69;
                  }
                  while ( v65 < *(_DWORD *)(v57 + 12) );
                  v43 = v76;
                  v42 = v75;
                }
              }
              else
              {
                v59[6] = 0;
              }
              v70 = (CFlipResource *)*((_QWORD *)v41 + 5);
              if ( v70 )
              {
                CFlipResource::Release(v70);
                *((_QWORD *)v41 + 5) = 0LL;
              }
              v41[48] |= 2u;
            }
            if ( (v41[24] & 2) != 0 )
            {
              *v42 = 1;
              v71 = v42;
              v72 = *((_QWORD *)v41 + 2);
              v42 += 4;
              v75 = v42;
              *((_QWORD *)&v80 + 1) = v42;
              *((_QWORD *)v71 + 1) = *(_QWORD *)(v72 + 40);
              v41[24] |= 8u;
            }
            v41 = v85;
          }
          while ( v85 != v86 );
          v5 = v90;
          v4 = (CEndpointResourceStateManager *)this;
        }
        CResourceStateUpdateSerializer::GetSerializedUpdate((CResourceStateUpdateSerializer *)&P, v88);
        CEndpointResourceStateManager::CommitPendingUpdates(v4);
      }
    }
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  return (unsigned int)v5;
}
