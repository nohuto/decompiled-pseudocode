/*
 * XREFs of KiPerformGroupConfiguration @ 0x140A4EDCC
 * Callers:
 *     KePerformGroupConfiguration @ 0x140A4E3D8 (KePerformGroupConfiguration.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     strstr @ 0x1403D19F0 (strstr.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     HviGetImplementationLimits @ 0x1405BF2C0 (HviGetImplementationLimits.c)
 *     MmGetChannelInformation @ 0x14077DE54 (MmGetChannelInformation.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 *     KiAssignAllNodesToGroup0 @ 0x140A4F164 (KiAssignAllNodesToGroup0.c)
 *     KiAssignAdjustableNodes @ 0x140A9291C (KiAssignAdjustableNodes.c)
 *     KiAssignFixedNodes @ 0x140A929C4 (KiAssignFixedNodes.c)
 *     KiShuffleAssignedNodes @ 0x140A92BD8 (KiShuffleAssignedNodes.c)
 */

__int64 __fastcall KiPerformGroupConfiguration(void *a1)
{
  PVOID v1; // r12
  unsigned __int16 v2; // ax
  __int64 *v3; // rbx
  int v4; // r14d
  unsigned __int16 v5; // r13
  int v6; // r15d
  unsigned __int16 v7; // di
  __int64 v8; // rcx
  _DWORD *v9; // rdx
  unsigned __int16 v10; // di
  unsigned __int16 v11; // si
  unsigned __int16 i; // r14
  int v13; // eax
  unsigned __int16 v14; // si
  int ChannelInformation; // eax
  unsigned __int64 v16; // rdi
  char v17; // cl
  _QWORD *v18; // rax
  __int64 v19; // rdx
  char v20; // al
  PVOID v21; // rcx
  __int64 *v22; // r8
  __int64 v23; // r9
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rsi
  __int64 v27; // r8
  _DWORD *v28; // rdi
  __int64 v29; // r9
  __int64 result; // rax
  int v31; // edi
  __int64 *v32; // r8
  __int64 v33; // r9
  __int64 v34; // rdx
  unsigned __int64 v35; // rax
  __int64 *v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // rax
  __int64 *v39; // rdx
  __int64 v40; // rcx
  int v41; // eax
  int *v42; // rdi
  unsigned __int16 v43; // r9
  __int64 j; // rcx
  unsigned __int16 v45; // cx
  __int64 v46; // rdx
  char v47; // al
  __int64 v48; // rdi
  unsigned int v49; // r8d
  unsigned int v50; // eax
  _DWORD *v51; // rcx
  __int64 v52; // rcx
  __int64 v53; // rdi
  int v54; // r14d
  unsigned __int16 v55; // dx
  unsigned __int16 v56; // r8
  __int64 v57; // rcx
  unsigned __int16 v58; // cx
  __int64 v59; // r11
  __int64 v60; // r10
  _QWORD *v61; // r8
  unsigned int v62; // edi
  bool v63; // zf
  __int64 v64; // r8
  unsigned __int16 v65; // ax
  __int16 v66; // di
  __int64 v67; // rdx
  __int64 *v68; // rcx
  int v69; // [rsp+38h] [rbp-D0h] BYREF
  int v70; // [rsp+3Ch] [rbp-CCh] BYREF
  __int64 v71; // [rsp+40h] [rbp-C8h] BYREF
  PVOID P; // [rsp+48h] [rbp-C0h] BYREF
  _BYTE v73[24]; // [rsp+50h] [rbp-B8h] BYREF
  _DWORD v74[20]; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v75[80]; // [rsp+B8h] [rbp-50h] BYREF
  _QWORD v76[64]; // [rsp+108h] [rbp+0h] BYREF

  v1 = a1;
  P = a1;
  memset(v76, 0, sizeof(v76));
  v2 = KeNumberNodes;
  v3 = KeNodeBlock;
  *(_OWORD *)v73 = 0uLL;
  v4 = 0;
  v70 = 0;
  v5 = 0;
  LODWORD(v71) = 0;
  v6 = 0;
  v7 = 0;
  if ( KeNumberNodes )
  {
    do
    {
      ((void (__fastcall *)(_QWORD, int *))KiNumaQueryNodeCapacity[0])(v7, &v70);
      v8 = KeNodeBlock[v7];
      *(_BYTE *)(v8 + 180) = v70;
      v4 += v70;
      if ( v70 )
        ++v5;
      v9 = (_DWORD *)(v8 + 168);
      if ( KiNumaQueryProximityId )
      {
        ((void (__fastcall *)(_QWORD, _DWORD *, __int64 *))KiNumaQueryProximityId)(v7, v9, &v71);
        ((void (__fastcall *)(_QWORD, __int64))KiNumaQueryProximityNode)((unsigned int)v71, KeNodeBlock[v7] + 148);
        if ( *(_DWORD *)(KeNodeBlock[v7] + 168) == (_DWORD)v71 )
          ++v6;
      }
      else
      {
        *v9 = 0;
        v6 = 1;
        *(_WORD *)(v8 + 148) = *(_WORD *)(v8 + 146);
      }
      ++v7;
      v2 = KeNumberNodes;
    }
    while ( v7 < (unsigned __int16)KeNumberNodes );
    v1 = P;
    *(_DWORD *)&v73[4] = v4;
  }
  if ( v2 > 1u )
  {
    KeNodeDistance = ExAllocatePoolWithTag(NonPagedPoolNx, 4 * v2 * (unsigned int)v2, 0x2020654Bu);
    if ( !KeNodeDistance )
      KeBugCheckEx(0x32u, 0xFFFFFFFFC000009AuLL, 0LL, 0LL, 0LL);
  }
  v10 = KeNumberNodes;
  v11 = 0;
  if ( KeNumberNodes )
  {
    do
    {
      for ( i = 0; i < v10; *((_DWORD *)KeNodeDistance + v13 + v11 * (unsigned __int16)KeNumberNodes) = *(_DWORD *)v73 )
      {
        ((void (__fastcall *)(_QWORD, _QWORD, _BYTE *))KiNumaQueryNodeDistance[0])(v11, i, v73);
        v10 = KeNumberNodes;
        v13 = i++;
      }
      ++v11;
    }
    while ( v11 < v10 );
    v1 = P;
    v3 = KeNodeBlock;
  }
  P = 0LL;
  v14 = 0;
  if ( v10 )
  {
    do
    {
      if ( *(_WORD *)(KeNodeBlock[v14] + 146) == *(_WORD *)(KeNodeBlock[v14] + 148) )
      {
        ChannelInformation = MmGetChannelInformation(0, v14, &P, (size_t *)&v73[8]);
        if ( ChannelInformation < 0 )
          KeBugCheckEx(0x32u, ChannelInformation, 0LL, 0LL, 0LL);
        v16 = 0LL;
        v17 = 1;
        if ( *(_QWORD *)&v73[8] / 0x28uLL )
        {
          v18 = (char *)P + 8;
          while ( !*v18 )
          {
            ++v16;
            v18 += 5;
            if ( v16 >= *(_QWORD *)&v73[8] / 0x28uLL )
              goto LABEL_22;
          }
          v17 = 0;
        }
LABEL_22:
        v19 = KeNodeBlock[v14];
        v20 = (16 * v17) | *(_BYTE *)(v19 + 181) & 0xEF;
        v21 = P;
        *(_BYTE *)(v19 + 181) = v20;
        ExFreePoolWithTag(v21, 0);
        P = 0LL;
      }
      ++v14;
    }
    while ( v14 < (unsigned __int16)KeNumberNodes );
    if ( KeNumberNodes )
    {
      v22 = KeNodeBlock;
      v23 = (unsigned __int16)KeNumberNodes;
      do
      {
        v24 = *(unsigned __int16 *)(*v22 + 148);
        if ( *(_WORD *)(*v22 + 146) != (_WORD)v24 )
          *(_BYTE *)(*v22 + 181) ^= (*(_BYTE *)(*v22 + 181) ^ *(_BYTE *)(KeNodeBlock[v24] + 181)) & 0x10;
        ++v22;
        --v23;
      }
      while ( v23 );
    }
  }
  *(_OWORD *)&v73[8] = 0LL;
  if ( HvlHypervisorConnected )
  {
    v31 = KeRootProcSpecified;
    if ( !KeRootProcSpecified && KeRootProcNumaNodeLpsSpecified )
    {
      v32 = KeRootProcNumaNodeLps;
      v33 = (unsigned int)(KeRootProcSpecified + 64);
      do
      {
        v34 = *v32;
        v35 = *v32++;
        v31 += (unsigned int)((0x101010101010101LL
                             * ((((v34 - ((v35 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                               + (((v34 - ((v35 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                               + ((((v34 - ((v35 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                 + (((v34 - ((v35 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24;
        --v33;
      }
      while ( v33 );
    }
    if ( (HvlpRootFlags & 1) != 0 && (unsigned int)(v31 - 1) <= 0x3F && !KeDynamicPartitioningSupported )
      return KiAssignAllNodesToGroup0();
    if ( (HvlpFlags & 0x80u) == 0 )
    {
      HviGetImplementationLimits(&v73[8]);
      if ( *(_DWORD *)&v73[8] != -1 || (HvlEnlightenments & 0x4004) != 0 )
        return KiAssignAllNodesToGroup0();
    }
  }
  v25 = *((_QWORD *)v1 + 30);
  v26 = 20LL;
  LOWORD(v69) = 0;
  v27 = 0xFFFFLL;
  v28 = *(_DWORD **)(v25 + 304);
  if ( v28 && v6 == *v28 )
  {
    if ( KeNumberNodes )
    {
      v36 = KeNodeBlock;
      v37 = (unsigned __int16)KeNumberNodes;
      do
      {
        v38 = *v36++;
        *(_WORD *)(v38 + 144) = -1;
        *(_BYTE *)(v38 + 181) &= ~2u;
        --v37;
      }
      while ( v37 );
    }
    if ( v6 )
    {
      while ( 1 )
      {
        --v6;
        if ( (unsigned int)((__int64 (__fastcall *)(_QWORD, int *, __int64))KiNumaQueryProximityNode)(
                             (unsigned int)v28[1],
                             &v69,
                             v27) )
          break;
        v28 += 2;
        if ( *v28 >= 0x14u && *v28 != 0xFFFF )
          break;
        if ( KeNumberNodes )
        {
          v39 = KeNodeBlock;
          v27 = (unsigned __int16)KeNumberNodes;
          do
          {
            v40 = *v39;
            if ( *(_WORD *)(*v39 + 148) == (_WORD)v69 )
            {
              *(_WORD *)(v40 + 144) = *(_WORD *)v28;
              *(_BYTE *)(v40 + 181) |= 2u;
            }
            ++v39;
            --v27;
          }
          while ( v27 );
        }
        if ( !v6 )
          goto LABEL_69;
      }
    }
    else
    {
LABEL_69:
      if ( *(_WORD *)(KeNodeBlock[0] + 144) != 0xFFFF )
      {
        v41 = KiMaximumGroupSize;
        v42 = v74;
        v43 = KeNumberNodes;
        for ( j = 20LL; j; --j )
          *v42++ = v41;
        v45 = 0;
        if ( !v43 )
        {
LABEL_80:
          KiMaximumGroups = 0;
          v51 = v74;
          do
          {
            if ( *v51 < (unsigned int)KiMaximumGroupSize )
              ++KiMaximumGroups;
            ++v51;
            --v26;
          }
          while ( v26 );
          result = (unsigned __int16)KeNumberNodes;
          if ( KeNumberNodes )
          {
            v52 = (unsigned __int16)KeNumberNodes;
            do
            {
              result = *v3++;
              *(_BYTE *)(result + 181) |= 8u;
              --v52;
            }
            while ( v52 );
          }
          return result;
        }
        while ( 1 )
        {
          v46 = KeNodeBlock[v45];
          v47 = *(_BYTE *)(v46 + 181);
          if ( (v47 & 2) == 0 )
            break;
          v48 = *(unsigned __int16 *)(v46 + 144);
          if ( (_WORD)v48 == 0xFFFF )
          {
            *(_BYTE *)(v46 + 181) = v47 & 0xFD;
          }
          else
          {
            v49 = *(unsigned __int8 *)(v46 + 180);
            v50 = v74[v48];
            if ( v50 < v49 )
              break;
            v74[v48] = v50 - v49;
          }
          if ( ++v45 >= v43 )
            goto LABEL_80;
        }
      }
    }
  }
  if ( strstr(*((const char **)v1 + 27), "MAXGROUP=OFF") )
  {
    KiMaximizeGroupsCreated = 0;
  }
  else if ( strstr(*((const char **)v1 + 27), "MAXGROUP") )
  {
    KiMaximizeGroupsCreated = 1;
  }
  if ( v5 == 1 || !KiMaximizeGroupsCreated && *(_DWORD *)&v73[4] <= (unsigned int)KiMaximumGroupSize )
    return KiAssignAllNodesToGroup0();
  v53 = (unsigned __int16)KeNumberNodes;
  v54 = 0;
  v55 = 0;
  if ( KeNumberNodes )
  {
    do
    {
      v56 = 0;
      while ( v55 == v56 || *((_DWORD *)KeNodeDistance + v56 + v55 * (int)v53) == 0xFFFF )
      {
        if ( ++v56 >= (unsigned __int16)v53 )
          goto LABEL_96;
      }
      v57 = KeNodeBlock[v55];
      *(_BYTE *)(v57 + 181) |= 8u;
      v54 += *(unsigned __int8 *)(v57 + 180);
LABEL_96:
      ++v55;
    }
    while ( v55 < (unsigned __int16)v53 );
    memmove(v76, KeNodeBlock, 8 * v53);
  }
  if ( (int)v53 - 1 > 0 )
  {
    v58 = 1;
    do
    {
      if ( v58 < (unsigned __int16)KeNumberNodes )
      {
        v59 = (unsigned __int16)(v58 - 1);
        v60 = (unsigned __int16)(KeNumberNodes - v58);
        v61 = &v76[v58];
        do
        {
          v29 = v76[v59];
          if ( *(_BYTE *)(v29 + 180) < *(_BYTE *)(*v61 + 180LL) )
          {
            v76[v59] = *v61;
            *v61 = v29;
          }
          ++v61;
          --v60;
        }
        while ( v60 );
      }
      ++v58;
    }
    while ( (unsigned __int16)(v58 - 1) < (int)v53 - 1 );
  }
  if ( !v54 )
  {
    LOWORD(v62) = 1;
LABEL_113:
    v63 = (_WORD)v62 == 20;
    goto LABEL_114;
  }
  if ( KiMaximizeGroupsCreated )
    LOWORD(v62) = v5;
  else
    v62 = (v54 + KiMaximumGroupSize - 1) / (unsigned int)KiMaximumGroupSize;
  v63 = (_WORD)v62 == 20;
  if ( (unsigned __int16)v62 > 0x14u )
  {
    LOWORD(v62) = 20;
    goto LABEL_113;
  }
  do
  {
LABEL_114:
    LOBYTE(v29) = v63;
    if ( (unsigned __int8)KiAssignFixedNodes(
                            (unsigned int)v76,
                            v5,
                            (unsigned __int16)v62,
                            v29,
                            (__int64)v75,
                            (__int64)v74) )
      break;
    LOWORD(v62) = v62 + 1;
    v63 = (_WORD)v62 == 20;
  }
  while ( (unsigned __int16)v62 <= 0x14u );
  KiShuffleAssignedNodes(v76, v5, v75, v74);
  v65 = KiAssignAdjustableNodes(v76, v5, v64, v75);
  if ( (unsigned __int16)v62 > v65 )
    v65 = v62;
  KiMaximumGroups = v65;
  result = KeNodeBlock[0];
  v66 = *(_WORD *)(KeNodeBlock[0] + 144);
  if ( v5 < (unsigned __int16)KeNumberNodes )
  {
    v67 = (unsigned __int16)(KeNumberNodes - v5);
    v68 = &v76[v5];
    do
    {
      result = *v68++;
      *(_WORD *)(result + 144) = v66;
      *(_BYTE *)(result + 181) |= 2u;
      --v67;
    }
    while ( v67 );
  }
  return result;
}
