/*
 * XREFs of KeQueryLogicalProcessorRelationship @ 0x140327220
 * Callers:
 *     ExpQuerySystemInformation @ 0x1405E5DF0 (ExpQuerySystemInformation.c)
 * Callees:
 *     KeGetProcessorIndexFromNumber @ 0x140205810 (KeGetProcessorIndexFromNumber.c)
 *     KeAndAffinityEx @ 0x140277C00 (KeAndAffinityEx.c)
 *     KeOrAffinityEx @ 0x140279530 (KeOrAffinityEx.c)
 *     KeQueryMaximumProcessorCountEx @ 0x140327170 (KeQueryMaximumProcessorCountEx.c)
 *     KeQueryActiveProcessorCountEx @ 0x140328380 (KeQueryActiveProcessorCountEx.c)
 *     KeAndGroupAffinityEx @ 0x1403717B0 (KeAndGroupAffinityEx.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memset @ 0x140408F80 (memset.c)
 */

NTSTATUS __stdcall KeQueryLogicalProcessorRelationship(
        PPROCESSOR_NUMBER ProcessorNumber,
        LOGICAL_PROCESSOR_RELATIONSHIP RelationshipType,
        PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX Information,
        PULONG Length)
{
  NTSTATUS v7; // r15d
  ULONG v8; // r14d
  ULONG ProcessorIndexFromNumber; // edi
  __int64 v10; // r13
  char *v11; // rbx
  LOGICAL_PROCESSOR_RELATIONSHIP v12; // r12d
  PPROCESSOR_NUMBER v13; // r13
  __int64 v14; // rbx
  DWORD v15; // ebx
  DWORD v16; // r9d
  __int64 v17; // rcx
  unsigned __int64 v18; // r10
  int v19; // r11d
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  __int64 v30; // rax
  int v31; // eax
  unsigned __int16 v32; // r9
  WORD v33; // dx
  _QWORD *v34; // r8
  __int64 v35; // r10
  bool v36; // zf
  WORD v37; // cx
  __int64 v38; // rax
  unsigned __int16 v39; // dx
  GROUP_AFFINITY *GroupMask; // rcx
  unsigned __int64 *v41; // r8
  unsigned __int64 v42; // r10
  int v43; // edx
  DWORD v44; // eax
  unsigned int v45; // r12d
  __int64 v46; // rbx
  __int64 v47; // rdi
  __int64 v48; // rax
  __int64 v49; // r13
  int v50; // eax
  unsigned int v51; // eax
  __int64 v52; // r12
  unsigned __int64 v53; // r8
  __int64 v54; // rdx
  __int64 v55; // rcx
  _WORD *v56; // r13
  int v57; // eax
  ULONG v58; // [rsp+20h] [rbp-E0h]
  ULONG v59; // [rsp+24h] [rbp-DCh]
  int v61; // [rsp+30h] [rbp-D0h]
  __int64 v62; // [rsp+30h] [rbp-D0h]
  ULONG v63; // [rsp+38h] [rbp-C8h]
  ULONG v65; // [rsp+40h] [rbp-C0h]
  __int64 v66; // [rsp+48h] [rbp-B8h]
  int v67; // [rsp+48h] [rbp-B8h]
  __int128 v68; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v69; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v70; // [rsp+68h] [rbp-98h]
  PULONG v71; // [rsp+70h] [rbp-90h]
  _DWORD v72[44]; // [rsp+80h] [rbp-80h] BYREF
  _DWORD v73[44]; // [rsp+130h] [rbp+30h] BYREF
  _OWORD v74[10]; // [rsp+1E0h] [rbp+E0h] BYREF
  __int64 v75; // [rsp+280h] [rbp+180h]
  _BYTE v76[4]; // [rsp+290h] [rbp+190h] BYREF
  char v77; // [rsp+294h] [rbp+194h] BYREF

  v71 = Length;
  memset(&v72[2], 0, 0xA0uLL);
  memset(&v73[2], 0, 0xA0uLL);
  v7 = 0;
  v8 = 0;
  v61 = 0;
  v58 = *Length;
  if ( ProcessorNumber )
  {
    ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(ProcessorNumber);
    v59 = ProcessorIndexFromNumber;
    if ( ProcessorIndexFromNumber >= (unsigned int)KeNumberProcessors_0 )
      return -1073741811;
    v63 = ProcessorIndexFromNumber;
  }
  else
  {
    ProcessorIndexFromNumber = 0;
    v59 = 0;
    v63 = KeNumberProcessors_0 - 1;
  }
  v10 = 5LL;
  v65 = ProcessorIndexFromNumber;
  v11 = &v77;
  do
  {
    *(_DWORD *)v11 = 0;
    *((_DWORD *)v11 - 1) = 1310721;
    memset(v11 + 4, 0, 0xA0uLL);
    v11 += 168;
    --v10;
  }
  while ( v10 );
  v72[0] = 1310721;
  memset(&v72[1], 0, 0xA4uLL);
  v73[0] = 1310721;
  memset(&v73[1], 0, 0xA4uLL);
  v12 = RelationshipType;
  v68 = 0LL;
  if ( ProcessorIndexFromNumber <= v63 )
  {
    v13 = ProcessorNumber;
    while ( 1 )
    {
      v14 = KiProcessorBlock[ProcessorIndexFromNumber];
      if ( v12 == RelationProcessorPackage || v12 == RelationAll )
      {
        v21 = *(_OWORD *)(v14 + 33696);
        v74[0] = *(_OWORD *)(v14 + 33680);
        v22 = *(_OWORD *)(v14 + 33712);
        v74[1] = v21;
        v23 = *(_OWORD *)(v14 + 33728);
        v74[2] = v22;
        v24 = *(_OWORD *)(v14 + 33744);
        v74[3] = v23;
        v25 = *(_OWORD *)(v14 + 33760);
        v74[4] = v24;
        v26 = *(_OWORD *)(v14 + 33776);
        v74[5] = v25;
        v27 = *(_OWORD *)(v14 + 33792);
        v74[6] = v26;
        v28 = *(_OWORD *)(v14 + 33808);
        v74[7] = v27;
        v29 = *(_OWORD *)(v14 + 33824);
        v30 = *(_QWORD *)(v14 + 33840);
        v74[8] = v28;
        v74[9] = v29;
        v75 = v30;
        v31 = KeAndAffinityEx((unsigned __int16 *)v73, (unsigned __int16 *)v74, 0LL);
        if ( v13 || !v31 )
        {
          KeOrAffinityEx((unsigned __int16 *)v73, (unsigned __int16 *)v74, v73);
          v32 = v74[0];
          v33 = 0;
          if ( LOWORD(v74[0]) )
          {
            v34 = (_QWORD *)v74 + 1;
            v35 = LOWORD(v74[0]);
            do
            {
              v36 = *v34 == 0LL;
              v37 = v33;
              ++v34;
              ++v33;
              if ( v36 )
                v33 = v37;
              --v35;
            }
            while ( v35 );
            ProcessorIndexFromNumber = v59;
          }
          v38 = (16 * v33 + 39) & 0xFFFFFFF8;
          v8 += v38;
          if ( v8 > v58 )
          {
            v7 = -1073741820;
            v61 = -1073741820;
          }
          else
          {
            Information->Processor.GroupCount = v33;
            Information->Relationship = RelationProcessorPackage;
            Information->Size = v38;
            v39 = 0;
            Information->Group.MaximumGroupCount = 0;
            *(_OWORD *)((char *)&Information->NumaNode.NodeNumber + 2) = 0LL;
            *(_DWORD *)&Information->Group.Reserved[14] = 0;
            GroupMask = Information->Processor.GroupMask;
            if ( v32 )
            {
              v41 = (unsigned __int64 *)v74 + 1;
              do
              {
                v42 = *v41;
                if ( *v41 )
                {
                  *GroupMask = 0LL;
                  GroupMask->Group = v39;
                  GroupMask->Mask = v42;
                  ++GroupMask;
                }
                ++v39;
                ++v41;
              }
              while ( v39 < v32 );
              v7 = v61;
            }
            Information = (PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX)((char *)Information + v38);
          }
        }
      }
      if ( v12 == RelationProcessorCore || v12 == RelationAll )
      {
        v48 = *(_QWORD *)(v14 + 33880);
        v49 = *(unsigned __int8 *)(v14 + 208);
        WORD4(v68) = *(unsigned __int8 *)(v14 + 208);
        v66 = v48;
        *(_QWORD *)&v68 = v48;
        v50 = KeAndGroupAffinityEx(v72, &v68, 0LL);
        if ( !ProcessorNumber && v50 )
        {
          v13 = 0LL;
        }
        else
        {
          if ( LOWORD(v72[0]) <= (unsigned __int16)v49 )
            LOWORD(v72[0]) = v49 + 1;
          *(_QWORD *)&v72[2 * v49 + 2] |= v66;
          v13 = ProcessorNumber;
          v8 += 48;
          if ( v8 > v58 )
          {
            v7 = -1073741820;
            v61 = -1073741820;
          }
          else
          {
            Information->Processor.Flags = *(_QWORD *)(v14 + 200) != v66;
            Information->Relationship = RelationProcessorCore;
            Information->Size = 48;
            Information->Processor.EfficiencyClass = *(_BYTE *)(v14 + 33208);
            Information->Processor.GroupCount = 1;
            *(_OWORD *)((char *)&Information->NumaNode.NodeNumber + 2) = 0LL;
            *(_DWORD *)&Information->Group.Reserved[14] = 0;
            *(_OWORD *)&Information->Group.GroupInfo[0].MaximumProcessorCount = 0LL;
            Information->Processor.GroupMask[0].Group = *(unsigned __int8 *)(v14 + 208);
            Information->Processor.GroupMask[0].Mask = *(_QWORD *)(v14 + 33880);
            Information = (PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX)((char *)Information + 48);
          }
        }
      }
      if ( v12 == RelationAll || v12 == RelationCache )
      {
        WORD4(v68) = *(unsigned __int8 *)(v14 + 208);
        v51 = 0;
        v67 = 0;
        if ( *(_DWORD *)(v14 + 33556) )
          break;
      }
LABEL_13:
      v59 = ++ProcessorIndexFromNumber;
      if ( ProcessorIndexFromNumber > v63 )
        goto LABEL_14;
    }
    v52 = WORD4(v68);
    while ( 1 )
    {
      v53 = *(_QWORD *)(v14 + 200);
      v54 = v51;
      v69 = v51;
      v55 = *(_QWORD *)(v14 + 8LL * v51 + 33904);
      v62 = v55;
      if ( v55 )
      {
        v70 = *(_QWORD *)(v14 + 8LL * v51 + 33904);
        v56 = &v76[168 * v51];
        *(_QWORD *)&v68 = v55;
        v57 = KeAndGroupAffinityEx(v56, &v68, 0LL);
        if ( !ProcessorNumber && v57 )
          goto LABEL_69;
        if ( *v56 <= (unsigned __int16)v52 )
          *v56 = v52 + 1;
        *(_QWORD *)&v56[4 * v52 + 4] |= v62;
        v51 = v67;
        v54 = v69;
        v53 = v70;
      }
      v8 += 56;
      if ( v8 > v58 )
      {
        v7 = -1073741820;
        goto LABEL_70;
      }
      Information->Relationship = RelationCache;
      Information->Size = 56;
      Information->Processor.Flags = *(_BYTE *)(v14 + 12 * v54 + 33496);
      Information->Processor.EfficiencyClass = *(_BYTE *)(v14 + 12 * v54 + 33497);
      Information->Cache.LineSize = *(_WORD *)(v14 + 12 * v54 + 33498);
      Information->Cache.CacheSize = *(_DWORD *)(v14 + 12 * v54 + 33500);
      Information->Cache.Type = *(_DWORD *)(v14 + 12 * v54 + 33504);
      *(_OWORD *)&Information->Group.Reserved[8] = 0LL;
      *(_DWORD *)&Information->Group.GroupInfo[0].Reserved[2] = 0;
      *(_OWORD *)&Information->Group.GroupInfo[0].Reserved[6] = 0LL;
      Information->Cache.GroupMask.Group = *(unsigned __int8 *)(v14 + 208);
      Information->Cache.GroupMask.Mask = v53;
      Information = (PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX)((char *)Information + 56);
LABEL_69:
      v51 = v67;
LABEL_70:
      v67 = ++v51;
      if ( v51 >= *(_DWORD *)(v14 + 33556) )
      {
        ProcessorIndexFromNumber = v59;
        v12 = RelationshipType;
        v13 = ProcessorNumber;
        v61 = v7;
        goto LABEL_13;
      }
    }
  }
LABEL_14:
  if ( v12 == RelationNumaNode || v12 == RelationAll )
  {
    v15 = (unsigned __int16)KeNumberNodes;
    v16 = 0;
    do
    {
      v17 = KeNodeBlock[v16];
      v18 = *(_QWORD *)(v17 + 136);
      if ( v18 )
      {
        v19 = *(unsigned __int16 *)(v17 + 144);
        if ( !ProcessorNumber
          || ((unsigned int)(v18 >> (KiProcessorIndexToNumberMappingTable[v65] & 0x3F)) & ((unsigned int)KiProcessorIndexToNumberMappingTable[v65] >> 6 == v19)) != 0 )
        {
          v8 += 48;
          if ( v8 > v58 )
          {
            v7 = -1073741820;
          }
          else
          {
            Information->Size = 48;
            Information->Relationship = RelationNumaNode;
            Information->NumaNode.NodeNumber = v16;
            *(_OWORD *)Information->Group.Reserved = 0LL;
            *(_DWORD *)&Information->Group.Reserved[16] = 0;
            *(_OWORD *)&Information->Group.GroupInfo[0].MaximumProcessorCount = 0LL;
            Information->Processor.GroupMask[0].Group = v19;
            Information->Processor.GroupMask[0].Mask = v18;
            Information = (PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX)((char *)Information + 48);
          }
        }
      }
      ++v16;
    }
    while ( v16 < v15 );
    v12 = RelationshipType;
    v61 = v7;
  }
  if ( v12 == RelationGroup || v12 == RelationAll && !ProcessorNumber )
  {
    v43 = (unsigned __int16)KiActiveGroups;
    v44 = (48 * (unsigned __int16)KiActiveGroups + 39) & 0xFFFFFFF8;
    v8 += v44;
    if ( v8 > v58 )
    {
      v7 = -1073741820;
    }
    else
    {
      Information->Size = v44;
      v45 = 0;
      Information->Group.MaximumGroupCount = KiMaximumGroups;
      Information->Relationship = RelationGroup;
      Information->Cache.LineSize = v43;
      *(_OWORD *)Information->Group.Reserved = 0LL;
      *(_DWORD *)&Information->Group.Reserved[16] = 0;
      if ( v43 )
      {
        do
        {
          v46 = v45;
          v47 = v45;
          Information->Cache.Reserved[48 * v45 + 12] = KeQueryMaximumProcessorCountEx(v45);
          Information->Cache.Reserved[48 * v45 + 13] = KeQueryActiveProcessorCountEx(v45);
          ++v45;
          Information->Group.GroupInfo[v47].ActiveProcessorMask = qword_140CFC838[v46];
          *(_OWORD *)Information->Group.GroupInfo[v47].Reserved = 0LL;
          *(_OWORD *)&Information->Group.GroupInfo[v47].Reserved[16] = 0LL;
          *(_DWORD *)&Information->Group.GroupInfo[v47].Reserved[32] = 0;
          *(_WORD *)&Information->Group.GroupInfo[v47].Reserved[36] = 0;
        }
        while ( v45 < (unsigned __int16)KiActiveGroups );
        v7 = v61;
      }
    }
  }
  if ( !v7 && !v8 )
    v7 = -1073741823;
  *v71 = v8;
  return v7;
}
