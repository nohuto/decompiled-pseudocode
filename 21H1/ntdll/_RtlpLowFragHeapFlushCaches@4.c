/*
 * XREFs of _RtlpLowFragHeapFlushCaches@4 @ 0x4B37172A
 * Callers:
 *     _RtlpFlushHeap@4 @ 0x4B35D672 (_RtlpFlushHeap@4.c)
 * Callees:
 *     _RtlpFreeUserBlockToHeap@12 @ 0x4B2ADD03 (_RtlpFreeUserBlockToHeap@12.c)
 *     _RtlpGetHeapProtection@8 @ 0x4B2AF0A0 (_RtlpGetHeapProtection@8.c)
 *     @RtlpInterlockedPushEntrySList@8 @ 0x4B2C2090 (@RtlpInterlockedPushEntrySList@8.c)
 *     @RtlpFreeUserBlock@12 @ 0x4B2C24DB (@RtlpFreeUserBlock@12.c)
 *     _RtlpIsSubSegmentReuseable@8 @ 0x4B2C3AA6 (_RtlpIsSubSegmentReuseable@8.c)
 *     _RtlGetCurrentServiceSessionId@0 @ 0x4B2C3BF0 (_RtlGetCurrentServiceSessionId@0.c)
 *     _ZwProtectVirtualMemory@20 @ 0x4B2F2E80 (_ZwProtectVirtualMemory@20.c)
 *     @RtlpInterlockedFlushSList@4 @ 0x4B33E8E6 (@RtlpInterlockedFlushSList@4.c)
 *     _RtlpLogHeapFreeEvent@12 @ 0x4B36F097 (_RtlpLogHeapFreeEvent@12.c)
 *     _RtlpLogHeapSubSegmentAllocCached@16 @ 0x4B36F34D (_RtlpLogHeapSubSegmentAllocCached@16.c)
 *     _RtlpLogHeapSubSegmentFree@16 @ 0x4B36F3D2 (_RtlpLogHeapSubSegmentFree@16.c)
 *     @RtlpGetReservedBlockSize@4 @ 0x4B370C7D (@RtlpGetReservedBlockSize@4.c)
 *     _RtlpLocalInfoAllocFromCache@8 @ 0x4B37109C (_RtlpLocalInfoAllocFromCache@8.c)
 *     _RtlpLogHeapFailure@24 @ 0x4B375E3D (_RtlpLogHeapFailure@24.c)
 */

int __thiscall RtlpLowFragHeapFlushCaches(int this)
{
  int v1; // edi
  unsigned int v2; // edx
  unsigned int v3; // ecx
  _DWORD *v4; // esi
  int v5; // esi
  unsigned int v6; // eax
  unsigned int v7; // ebx
  unsigned int v8; // ecx
  int v9; // edi
  int v10; // esi
  unsigned int v11; // ecx
  int v12; // eax
  int v13; // edx
  signed __int32 *v14; // eax
  signed __int32 v15; // esi
  _DWORD *v16; // edx
  unsigned int v17; // ecx
  unsigned int v18; // ebx
  _DWORD *v19; // edx
  unsigned int v20; // ecx
  int v21; // eax
  _DWORD *v22; // esi
  int v23; // eax
  unsigned int v24; // ebx
  unsigned int v25; // edx
  int v26; // esi
  volatile signed __int32 *v27; // ebx
  unsigned int v28; // ecx
  signed __int32 v29; // edx
  unsigned int *v30; // ecx
  int v31; // ebx
  signed __int32 v32; // edx
  _DWORD *v33; // edx
  int v34; // esi
  int v35; // ebx
  ULONG HeapProtection; // eax
  int v37; // edi
  signed __int64 v38; // rax
  signed __int64 v39; // rax
  signed __int64 v40; // kr00_8
  bool v41; // zf
  volatile signed __int32 *v42; // ebx
  signed __int32 v43; // edx
  int v44; // ecx
  int v45; // esi
  volatile signed __int32 *v46; // ebx
  signed __int32 v47; // edx
  unsigned int v48; // ebx
  int v49; // esi
  int result; // eax
  _DWORD *v51; // edi
  _DWORD *v52; // edx
  unsigned int v53; // eax
  int v54; // [esp+Ch] [ebp-3Ch]
  unsigned int v55; // [esp+10h] [ebp-38h]
  int v56; // [esp+14h] [ebp-34h]
  unsigned int v57; // [esp+18h] [ebp-30h]
  int v58; // [esp+18h] [ebp-30h]
  int v59; // [esp+1Ch] [ebp-2Ch]
  unsigned int *v60; // [esp+1Ch] [ebp-2Ch]
  int v61; // [esp+1Ch] [ebp-2Ch]
  int v62; // [esp+1Ch] [ebp-2Ch]
  unsigned int v63; // [esp+20h] [ebp-28h]
  unsigned int v64; // [esp+20h] [ebp-28h]
  unsigned int v65; // [esp+24h] [ebp-24h]
  int v66; // [esp+24h] [ebp-24h]
  int v67; // [esp+28h] [ebp-20h]
  signed __int32 v69; // [esp+30h] [ebp-18h]
  volatile signed __int32 *v70; // [esp+30h] [ebp-18h]
  int v71; // [esp+30h] [ebp-18h]
  int v72; // [esp+30h] [ebp-18h]
  volatile signed __int32 *v73; // [esp+34h] [ebp-14h]
  unsigned int v74; // [esp+38h] [ebp-10h]
  ULONG_PTR RegionSize; // [esp+3Ch] [ebp-Ch] BYREF
  ULONG OldProtect; // [esp+44h] [ebp-4h] BYREF

  v1 = this;
  v67 = 0;
  v2 = 0;
  v65 = 0;
  do
  {
    if ( (*(_BYTE *)(v1 + 4 * v2 + 447) & 1) == 0 || (*(_BYTE *)(v1 + 440) & 1) != 0 )
    {
      v63 = 1;
    }
    else
    {
      v63 = RtlpAffinityState;
      if ( !RtlpAffinityState )
        goto LABEL_86;
    }
    v3 = 0;
    v55 = 0;
    do
    {
      if ( v3 )
      {
        v5 = 104 * v3;
        v3 = v55;
        v4 = (_DWORD *)(*(_DWORD *)(v1 + 4 * v2 + 1476) + v5 - 104);
      }
      else
      {
        v4 = *(_DWORD **)(v1 + 4 * v2 + 960);
      }
      if ( !v4 || v4[21] != 1 )
        goto LABEL_85;
      v6 = RtlpLocalInfoAllocFromCache((unsigned int)v4, v3);
      v7 = v6;
      if ( !v6 )
        goto LABEL_84;
      *(_DWORD *)(*v4 + 20) = 0;
      v8 = *(_DWORD *)v6 ^ *(_DWORD *)(v1 + 12) ^ RtlpLFHKey ^ (v6 >> 3);
      if ( (_WORD)v8
        || (v9 = *(_DWORD *)(v6 - (v8 >> 13)), (v54 = v9) == 0)
        || (v59 = 0,
            v56 = *(_DWORD *)(v9 + 4),
            v57 = (unsigned __int16)(*(_DWORD *)(v6 + 4) >> 8),
            v10 = *(_DWORD *)(**(_DWORD **)v9 + 12),
            v11 = v56 ^ RtlpLFHKey ^ v10 ^ *(_DWORD *)(v56 + 16),
            v56 + v57 * HIWORD(v11) + (unsigned __int16)v11 != v6) )
      {
        RtlpLogHeapFailure(v6, 0, 0, 0);
        goto LABEL_83;
      }
      if ( RtlGetCurrentServiceSessionId() )
        v12 = (int)NtCurrentPeb()->SharedData + 550;
      else
        v12 = 2147353472;
      if ( *(_BYTE *)v12 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
        RtlpLogHeapFreeEvent(*(_DWORD *)(v10 + 12), v7 + 8, 2);
      v74 = MEMORY[0x7FFE036A] > 1u ? 0x64 : 0;
      v13 = 0;
      v14 = (signed __int32 *)(v9 + 16);
      v73 = (volatile signed __int32 *)(v9 + 16);
      while ( 1 )
      {
        v15 = *v14;
        v69 = *v14;
        if ( (*v14 & 0x80000000) == 0 )
        {
          v9 = v54;
          if ( _InterlockedCompareExchange(v73, v15 | 0x80000000, v15) == v15 )
            break;
        }
        if ( ++v13 > v74 )
        {
          v15 = -1;
          LOWORD(v69) = -1;
          break;
        }
        v14 = (signed __int32 *)(v9 + 16);
      }
      *(_BYTE *)(v7 + 7) = 0x80;
      if ( v15 == -1 )
      {
        v16 = (_DWORD *)(v7 + 8);
        v17 = v9 + 8;
        goto LABEL_63;
      }
      v18 = v57;
      _bittestandreset(*(signed __int32 **)(v56 + 24), v57);
      if ( *(_WORD *)(v9 + 12) )
      {
        v19 = (_DWORD *)RtlpInterlockedFlushSList(v9 + 8);
        if ( v19 )
        {
          do
          {
            v20 = *(v19 - 1);
            v19 = (_DWORD *)*v19;
            _bittestandreset(*(signed __int32 **)(v56 + 24), (unsigned __int16)(v20 >> 8));
            ++v59;
          }
          while ( v19 );
          LOWORD(v15) = v69;
          v9 = v54;
          v18 = (unsigned __int16)(v20 >> 8);
        }
      }
      v21 = (unsigned __int16)v15;
      v22 = *(_DWORD **)v9;
      v23 = (v18 << 16) | (v59 + 1 + v21);
      if ( (_WORD)v23 != *(_WORD *)(v9 + 24)
        || (v24 = v22[22], v25 = *(_DWORD *)(*v22 + 16), v22[21] == 1)
        && v25 >= v24
        && v25 - v24 < *(_DWORD *)(*v22 + 20) )
      {
        v42 = (volatile signed __int32 *)(v9 + 28);
        *(_DWORD *)(v9 + 16) = v23;
        if ( (*(_DWORD *)(v9 + 28) & 2) != 0 || !RtlpIsSubSegmentReuseable((int)v22, v9) )
          goto LABEL_83;
        do
        {
          v43 = *v42;
          if ( !*v42 || (v43 & 2) != 0 )
            goto LABEL_83;
        }
        while ( _InterlockedCompareExchange(v42, v43 | 2, v43) != v43 );
        v44 = *(_DWORD *)v9;
        v71 = *(_DWORD *)v9;
        v45 = 0;
        while ( 1 )
        {
          v46 = (volatile signed __int32 *)(v44 + 4 * ((((_BYTE)v45 + (unsigned __int8)*(_WORD *)(v44 + 94)) & 0xF) + 2));
          v47 = *v46;
          if ( !*v46 )
            break;
          if ( (*(_DWORD *)(v47 + 28) & 1) == 0 )
          {
            if ( _InterlockedCompareExchange(v46, v9, v47) == v47 )
            {
              if ( _InterlockedAnd((volatile signed __int32 *)(v47 + 28), 0xFFFFFFFD) != 2 )
                goto LABEL_83;
              v17 = **(_DWORD **)v47;
              *(_DWORD *)v47 = 0;
              v16 = (_DWORD *)(v47 + 32);
LABEL_63:
              RtlpInterlockedPushEntrySList(v17, v16);
              goto LABEL_83;
            }
            goto LABEL_77;
          }
LABEL_78:
          if ( (unsigned int)++v45 >= 0x10 )
          {
            v16 = (_DWORD *)(v9 + 32);
            v17 = *(_DWORD *)(*(_DWORD *)(**(_DWORD **)v9 + 12) + 4 * *(unsigned __int16 *)(*(_DWORD *)v9 + 92) + 960)
                + 72;
            goto LABEL_63;
          }
        }
        if ( !_InterlockedCompareExchange(v46, v9, 0) )
          goto LABEL_83;
LABEL_77:
        v44 = v71;
        goto LABEL_78;
      }
      v58 = *(_DWORD *)v9;
      v26 = _InterlockedExchange((volatile __int32 *)(*(_DWORD *)v9 + 4), 0);
      if ( !v26 )
        goto LABEL_56;
      v27 = (volatile signed __int32 *)(v26 + 28);
      if ( _InterlockedAnd((volatile signed __int32 *)(v26 + 28), 0xFFFFFFF9) == 6 )
      {
        v28 = **(_DWORD **)v26;
        *(_DWORD *)v26 = 0;
LABEL_54:
        v33 = (_DWORD *)(v26 + 32);
LABEL_55:
        RtlpInterlockedPushEntrySList(v28, v33);
        goto LABEL_56;
      }
      if ( !RtlpIsSubSegmentReuseable(v58, v26) )
        goto LABEL_56;
      do
      {
        v29 = *v27;
        if ( !*v27 || (v29 & 2) != 0 )
          goto LABEL_56;
      }
      while ( _InterlockedCompareExchange(v27, v29 | 2, v29) != v29 );
      v30 = *(unsigned int **)v26;
      v60 = *(unsigned int **)v26;
      v31 = 0;
      while ( 1 )
      {
        v32 = v30[(((_BYTE)v31 + (unsigned __int8)*((_WORD *)v30 + 47)) & 0xF) + 2];
        v70 = (volatile signed __int32 *)&v30[(((_BYTE)v31 + (unsigned __int8)*((_WORD *)v30 + 47)) & 0xF) + 2];
        if ( !v32 )
        {
          if ( !_InterlockedCompareExchange(v70, v26, 0) )
            goto LABEL_56;
          goto LABEL_51;
        }
        if ( (*(_DWORD *)(v32 + 28) & 1) == 0 )
          break;
LABEL_52:
        if ( (unsigned int)++v31 >= 0x10 )
        {
          v28 = *(_DWORD *)(*(_DWORD *)(**(_DWORD **)v26 + 12) + 4 * *(unsigned __int16 *)(*(_DWORD *)v26 + 92) + 960)
              + 72;
          goto LABEL_54;
        }
      }
      v9 = v54;
      if ( _InterlockedCompareExchange(v70, v26, v32) != v32 )
      {
LABEL_51:
        v30 = v60;
        goto LABEL_52;
      }
      if ( _InterlockedAnd((volatile signed __int32 *)(v32 + 28), 0xFFFFFFFD) == 2 )
      {
        v28 = **(_DWORD **)v32;
        *(_DWORD *)v32 = 0;
        v33 = (_DWORD *)(v32 + 32);
        goto LABEL_55;
      }
LABEL_56:
      v34 = *(_DWORD *)v9;
      v35 = *(_DWORD *)(*(_DWORD *)v58 + 12);
      if ( (*(_BYTE *)(v9 + 22) & 3) != 0 )
      {
        HIDWORD(RegionSize) = (*(_DWORD *)(v9 + 4) + 4127) & 0xFFFFF000;
        LODWORD(RegionSize) = 8 * (unsigned __int16)RtlpGetReservedBlockSize(v9) * *(unsigned __int16 *)(v9 + 24);
        HeapProtection = RtlpGetHeapProtection(*(_DWORD **)(v35 + 12), 1);
        ZwProtectVirtualMemory((HANDLE)0xFFFFFFFF, (PVOID *)&RegionSize + 1, &RegionSize, HeapProtection, &OldProtect);
      }
      *(_DWORD *)(*(_DWORD *)(v9 + 4) + 12) = 0;
      RtlpFreeUserBlock(v35, *(int **)(v9 + 4), 0);
      v37 = -*(unsigned __int16 *)(v9 + 24);
      LODWORD(v38) = v34 + 80;
      v61 = v37;
      do
      {
        do
        {
          v39 = *(_QWORD *)v38;
          v40 = v39;
          v38 = _InterlockedCompareExchange64(
                  (volatile signed __int64 *)(v34 + 80),
                  __SPAIR64__(HIDWORD(v39) - 1, (int)v39 + v37),
                  v39);
          v37 = v61;
          v41 = (_DWORD)v38 == (_DWORD)v40;
          LODWORD(v38) = v34 + 80;
        }
        while ( !v41 );
      }
      while ( HIDWORD(v38) != HIDWORD(v40) );
      *(_DWORD *)(v54 + 4) = 0;
      _InterlockedIncrement((volatile signed __int32 *)(v35 + 32));
      *(_DWORD *)(v54 + 16) = 0;
      if ( _InterlockedAnd((volatile signed __int32 *)(v54 + 28), 0xFFFFFFFE) == 1 )
      {
        v16 = (_DWORD *)(v54 + 32);
        v17 = **(_DWORD **)v54;
        *(_DWORD *)v54 = 0;
        goto LABEL_63;
      }
LABEL_83:
      v1 = this;
LABEL_84:
      v2 = v65;
      v3 = v55;
LABEL_85:
      v55 = ++v3;
    }
    while ( v3 < v63 );
LABEL_86:
    v65 = ++v2;
  }
  while ( v2 < 0x81 );
  v48 = v1 + 56;
  v62 = 12;
  v64 = v1 + 56;
  do
  {
    v49 = 0;
    result = RtlpInterlockedFlushSList(v48);
    v51 = (_DWORD *)result;
    if ( result )
    {
      do
      {
        v52 = v51;
        v51 = (_DWORD *)*v51;
        v66 = (int)v52;
        v53 = 1 << *((_BYTE *)v52 + 8);
        if ( v53 > 0x78000 )
          v53 = 491520;
        v67 += v53 + *((unsigned __int16 *)v52 + 5);
        v72 = v53 + *((unsigned __int16 *)v52 + 5);
        RtlpFreeUserBlockToHeap(*(PVOID *)(this + 12), v52, v72);
        ++v49;
        if ( RtlGetCurrentServiceSessionId() )
          result = (int)NtCurrentPeb()->SharedData + 550;
        else
          result = 2147353472;
        if ( *(_BYTE *)result )
        {
          result = (int)NtCurrentPeb();
          if ( (*(_BYTE *)(result + 576) & 1) != 0 )
          {
            RtlpLogHeapSubSegmentAllocCached(*(_DWORD *)(this + 12), v66, v72, 0);
            result = RtlpLogHeapSubSegmentFree(*(_DWORD *)(this + 12), v66, v72, 0);
          }
        }
      }
      while ( v51 );
      v48 = v64;
      if ( v49 )
      {
        result = v64 + 8;
        _InterlockedExchangeAdd((volatile signed __int32 *)(v64 + 8), -v49);
      }
    }
    v48 += 32;
    v41 = v62-- == 1;
    v64 = v48;
  }
  while ( !v41 );
  if ( v67 )
  {
    result = this + 44;
    _InterlockedExchangeAdd((volatile signed __int32 *)(this + 44), -v67);
  }
  return result;
}
