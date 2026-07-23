/*
 * XREFs of HvlpSelectLpSet @ 0x1404F3494
 * Callers:
 *     HvlStartBootLogicalProcessors @ 0x1403B6AB8 (HvlStartBootLogicalProcessors.c)
 * Callees:
 *     HalEnumerateProcessors @ 0x1403B4FF0 (HalEnumerateProcessors.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     HvlpComputeLpComparisonMetrics @ 0x1404F29E0 (HvlpComputeLpComparisonMetrics.c)
 *     HvlpLpComparison @ 0x1404F3180 (HvlpLpComparison.c)
 *     HvlpQueryApicIdAndNumaNode @ 0x1404F32E4 (HvlpQueryApicIdAndNumaNode.c)
 *     HviGetImplementationLimits @ 0x1405BF2C0 (HviGetImplementationLimits.c)
 */

__int64 __fastcall HvlpSelectLpSet(unsigned int a1, __int64 a2)
{
  unsigned int v4; // r15d
  unsigned int v5; // r13d
  int v6; // eax
  unsigned int v7; // r11d
  int v8; // edx
  unsigned int v9; // esi
  _WORD *v10; // rbx
  int ApicIdAndNumaNode; // eax
  unsigned int v12; // r12d
  __int64 (__fastcall *v13)(__int64, int *, unsigned int *); // rax
  __int64 v14; // rcx
  int v15; // eax
  int v16; // eax
  int v17; // ebx
  int v18; // r12d
  int v19; // r10d
  int v20; // esi
  __int64 v21; // r9
  __int64 v22; // r8
  __int64 v23; // rcx
  __int64 v24; // rcx
  unsigned int v25; // edx
  unsigned int v26; // eax
  _BYTE *v27; // rcx
  unsigned int v28; // ebx
  _BYTE *v29; // rsi
  unsigned int v30; // r9d
  unsigned int v31; // eax
  _BYTE *v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rcx
  _BYTE *v35; // rbx
  unsigned int v36; // edx
  int v37; // r8d
  _DWORD *v38; // rcx
  unsigned int v39; // ecx
  _WORD v41[2]; // [rsp+20h] [rbp-40h] BYREF
  __int16 v42; // [rsp+24h] [rbp-3Ch] BYREF
  int v43; // [rsp+28h] [rbp-38h]
  unsigned int v44; // [rsp+2Ch] [rbp-34h]
  unsigned int v45; // [rsp+30h] [rbp-30h] BYREF
  int v46; // [rsp+34h] [rbp-2Ch]
  int v47; // [rsp+38h] [rbp-28h] BYREF
  int v48; // [rsp+3Ch] [rbp-24h]
  __int128 v49; // [rsp+40h] [rbp-20h] BYREF

  v41[0] = 0;
  v45 = 0;
  v42 = 0;
  v47 = 0;
  v44 = 0;
  v49 = 0LL;
  if ( (HvlpRootFlags & 1) == 0 )
  {
    KeHypervisorNumprocSpecified = 0;
    KeRootProcSpecified = 0;
    KeRootProcNumaNodesSpecified = 0;
    KeRootProcPerNodeSpecified = 0;
    KeRootProcPerCoreSpecified = 0;
    KeRootProcNumaNodeLpsSpecified = 0;
  }
  if ( (HvlpRootFlags & 0x800) != 0 )
  {
    KeRootProcSpecified = 0;
    KeRootProcNumaNodesSpecified = 0;
    KeRootProcPerNodeSpecified = 0;
    KeRootProcPerCoreSpecified = 1;
    KeRootProcNumaNodeLpsSpecified = 0;
  }
  HviGetImplementationLimits(&v49);
  v4 = 64;
  v5 = ~(KeGetCurrentPrcb()->LogicalProcessorsPerCore * KeGetCurrentPrcb()->CoresPerPhysicalProcessor - 1);
  if ( (unsigned int)v49 < 0x40 )
    v4 = v49;
  if ( KeRootProcSpecified && KeRootProcSpecified < v4 && !KeRootProcNumaNodesSpecified )
    v4 = KeRootProcSpecified;
  v6 = HalEnumerateProcessors(KeRegisteredProcessors);
  v7 = 0;
  v43 = v6;
  v8 = v6;
  v9 = 0;
  if ( a1 )
  {
    v10 = (_WORD *)(a2 + 10);
    do
    {
      *((_BYTE *)v10 - 10) = 1;
      ApicIdAndNumaNode = HvlpQueryApicIdAndNumaNode(v9, v10 - 3, v41);
      v7 = 0;
      v44 = ApicIdAndNumaNode;
      v12 = ApicIdAndNumaNode;
      if ( ApicIdAndNumaNode == -1073741275 )
      {
        v44 = 0;
        *((_BYTE *)v10 - 10) = 0;
      }
      else
      {
        if ( ApicIdAndNumaNode < 0 )
          return v12;
        v13 = (__int64 (__fastcall *)(__int64, int *, unsigned int *))HvlpQueryProximityId;
        v14 = v41[0];
        *(v10 - 1) = v41[0];
        if ( v13 )
        {
          v15 = v13(v14, &v47, &v45);
          LOWORD(v14) = v41[0];
          v7 = 0;
        }
        else
        {
          v15 = -1073741275;
        }
        if ( v15 < 0
          || (!HvlpQueryProximityNode
            ? (v16 = -1073741275)
            : (v16 = HvlpQueryProximityNode(v45, &v42), LOWORD(v14) = v41[0], v7 = 0),
              v16 < 0) )
        {
          *v10 = v14;
        }
        else
        {
          *v10 = v42;
        }
        v10[1] = *v10;
      }
      ++v9;
      v10 += 20;
    }
    while ( v9 < a1 );
    v8 = v43;
  }
  v17 = 1;
  *(_BYTE *)(a2 + 1) = 1;
  v18 = 1;
  v19 = 1;
  while ( 1 )
  {
    v48 = v19;
    v20 = v17;
    v46 = v17;
    if ( a1 )
    {
      v21 = a2;
      do
      {
        if ( *(_BYTE *)v21 )
        {
          if ( *(_BYTE *)(v21 + 1) )
            goto LABEL_58;
          v22 = *(unsigned __int16 *)(v21 + 8);
          if ( (unsigned __int16)v22 >= (unsigned __int16)KeNumberNodes
            || (*(_BYTE *)(KeNodeBlock[v22] + 181) & 2) == 0
            || v18 == 1024
            || v18 == v8
            || KeMaximumProcessors && v18 == KeMaximumProcessors )
          {
            goto LABEL_58;
          }
          if ( KeBootprocSpecified && v18 == KeBootprocSpecified
            || KeNumprocSpecified && v7 >= KeNumprocSpecified
            || KeHypervisorNumprocSpecified && v18 == KeHypervisorNumprocSpecified )
          {
            goto LABEL_58;
          }
          if ( v19 == v4 )
          {
            v23 = 0LL;
            do
            {
              if ( *(_WORD *)(a2 + 40 * v23 + 8) == (_WORD)v22 && *(_BYTE *)(a2 + 40 * v23 + 1) )
                break;
              v23 = (unsigned int)(v23 + 1);
            }
            while ( (unsigned int)v23 < a1 );
            if ( (_DWORD)v23 == a1 )
              goto LABEL_58;
          }
          if ( v17 == KeRegisteredProcessors )
          {
            v24 = a2 + 1;
            v25 = 0;
            do
            {
              if ( (v5 & *(_DWORD *)(v21 + 4)) == (v5 & *(_DWORD *)(v24 + 3)) && *(_BYTE *)v24 )
                break;
              ++v25;
              v24 += 40LL;
            }
            while ( v25 < a1 );
            if ( v25 == a1 )
LABEL_58:
              *(_BYTE *)v21 = 0;
          }
        }
        v8 = v43;
        ++v7;
        v21 += 40LL;
      }
      while ( v7 < a1 );
      v20 = v17;
    }
    v7 = 0;
    v26 = 0;
    if ( a1 )
    {
      v27 = (_BYTE *)a2;
      do
      {
        if ( *v27 )
          break;
        ++v26;
        v27 += 40;
      }
      while ( v26 < a1 );
    }
    if ( v26 == a1 )
      return v44;
    v28 = 0;
    if ( a1 )
    {
      v29 = (_BYTE *)a2;
      do
      {
        if ( *v29 )
        {
          HvlpComputeLpComparisonMetrics(a1, a2, v28);
          v7 = 0;
        }
        ++v28;
        v29 += 40;
      }
      while ( v28 < a1 );
      v20 = v46;
    }
    v30 = -1;
    v31 = 0;
    if ( a1 )
    {
      v32 = (_BYTE *)a2;
      while ( !*v32 )
      {
        ++v31;
        v32 += 40;
        if ( v31 >= a1 )
          goto LABEL_78;
      }
      v30 = v31;
    }
LABEL_78:
    v33 = v30 + 1;
    if ( (unsigned int)v33 < a1 )
    {
      v34 = 5 * v33;
      v35 = (_BYTE *)(a2 + 40 * v33);
      do
      {
        if ( *v35 )
        {
          if ( (unsigned int)HvlpLpComparison(v34, a2, v33, v30) == -1 )
            v30 = v33;
          v7 = 0;
        }
        LODWORD(v33) = v33 + 1;
        v35 += 40;
      }
      while ( (unsigned int)v33 < a1 );
    }
    ++v18;
    v36 = 0;
    v37 = v5 & *(_DWORD *)(a2 + 40LL * v30 + 4);
    *(_BYTE *)(a2 + 40LL * v30 + 1) = 1;
    if ( a1 )
    {
      v38 = (_DWORD *)(a2 + 4);
      do
      {
        if ( v36 != v30 && *((_BYTE *)v38 - 3) && (v5 & *v38) == v37 )
          break;
        ++v36;
        v38 += 10;
      }
      while ( v36 < a1 );
    }
    v17 = v20 + 1;
    v39 = 0;
    if ( v36 != a1 )
      v17 = v20;
    if ( a1 )
    {
      do
      {
        if ( v39 != v30
          && *(_BYTE *)(a2 + 40LL * v39 + 1)
          && *(_WORD *)(a2 + 40LL * v39 + 8) == *(_WORD *)(a2 + 40LL * v30 + 8) )
        {
          break;
        }
        ++v39;
      }
      while ( v39 < a1 );
    }
    v8 = v43;
    v19 = v48 + 1;
    if ( v39 != a1 )
      v19 = v48;
  }
}
