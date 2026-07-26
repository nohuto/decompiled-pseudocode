/*
 * XREFs of ?ndisValidateQosParameters@@YAHPEAU_NDIS_MINIPORT_BLOCK@@EPEAU_NDIS_QOS_PARAMETERS@@KPEAK@Z @ 0x1C00A0FBC
 * Callers:
 *     ?ndisMIndicateQosParametersChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXK@Z @ 0x1C006F574 (-ndisMIndicateQosParametersChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXK@Z.c)
 *     ?ndisOidPreQosSetParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C009D7F0 (-ndisOidPreQosSetParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0008B64 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_Dd @ 0x1C00170C0 (WPP_RECORDER_SF_Dd.c)
 *     WPP_RECORDER_SF_d @ 0x1C001935C (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_DDD @ 0x1C003234C (WPP_RECORDER_SF_DDD.c)
 *     WPP_RECORDER_SF_DD @ 0x1C005E538 (WPP_RECORDER_SF_DD_ea_1C005E538.c)
 *     WPP_RECORDER_SF_DDDD @ 0x1C007240C (WPP_RECORDER_SF_DDDD.c)
 *     WPP_RECORDER_SF_DDDDDDDDDDD @ 0x1C00A1934 (WPP_RECORDER_SF_DDDDDDDDDDD.c)
 *     WPP_RECORDER_SF_LLL @ 0x1C00A1C78 (WPP_RECORDER_SF_LLL_ea_1C00A1C78.c)
 *     WPP_RECORDER_SF_LLLL @ 0x1C00A1D54 (WPP_RECORDER_SF_LLLL.c)
 *     WPP_RECORDER_SF_LLLLLLq @ 0x1C00A1E50 (WPP_RECORDER_SF_LLLLLLq.c)
 *     WPP_RECORDER_SF_qDqLq @ 0x1C00A1FC4 (WPP_RECORDER_SF_qDqLq.c)
 *     WPP_RECORDER_SF_qDqLqD @ 0x1C00A20F0 (WPP_RECORDER_SF_qDqLqD.c)
 */

__int64 __fastcall ndisValidateQosParameters(
        struct _NDIS_MINIPORT_BLOCK *a1,
        __int64 FirstClassificationElementOffset,
        struct _NDIS_QOS_PARAMETERS *a3,
        __int64 ClassificationElementSize,
        unsigned int *a5)
{
  unsigned int v5; // r15d
  char v6; // di
  _NDIS_QOS_CAPABILITIES *QosCurrentCapabilities; // r8
  unsigned int Flags; // r13d
  unsigned int NumTrafficClasses; // ecx
  int v13; // r12d
  unsigned int v14; // r11d
  int v15; // r10d
  unsigned int v16; // edx
  unsigned __int8 *PriorityAssignmentTable; // r14
  __int64 v18; // rax
  unsigned int v19; // ecx
  unsigned __int8 v20; // al
  int v21; // eax
  __int64 NumClassificationElements; // r11
  unsigned int v23; // eax
  int v24; // r10d
  unsigned int v25; // ebp
  int MaxNumEtsCapableTrafficClasses_low; // edx
  char v27[8]; // [rsp+28h] [rbp-80h]
  struct _NDIS_QOS_PARAMETERS *v28; // [rsp+38h] [rbp-70h]
  char v29[4]; // [rsp+40h] [rbp-68h]
  int v30; // [rsp+40h] [rbp-68h]
  unsigned int *v31; // [rsp+48h] [rbp-60h]

  v5 = ClassificationElementSize;
  v6 = FirstClassificationElementOffset;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
  {
    v31 = a5;
    *(_DWORD *)v29 = ClassificationElementSize;
    v28 = a3;
    *(_DWORD *)&v27[4] = HIDWORD(a1);
    WPP_RECORDER_SF_qDqLq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      FirstClassificationElementOffset,
      (_DWORD)a3,
      ClassificationElementSize);
  }
  if ( a5 )
    *a5 = 52;
  QosCurrentCapabilities = a1->QosCurrentCapabilities;
  if ( !QosCurrentCapabilities )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      if ( *((_WORD *)WPP_GLOBAL_Control + 36) )
        WPP_RECORDER_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          5u,
          0xBu,
          0x5Eu,
          (struct _GUID *)&WPP_93ff7000ef23321ff506bf3726c88bdb_Traceguids);
    }
    return 3221225659LL;
  }
  Flags = a3->Flags;
  if ( (Flags & 2) != 0 )
  {
    NumTrafficClasses = a3->NumTrafficClasses;
    v13 = 0;
    v14 = 0;
    LODWORD(ClassificationElementSize) = 0;
    v15 = 0;
    if ( !NumTrafficClasses || v6 && NumTrafficClasses > QosCurrentCapabilities->MaxNumTrafficClasses )
    {
      if ( v6 )
      {
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
          WPP_RECORDER_SF_Dd(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            5u,
            0xBu,
            0x5Fu,
            (struct _GUID *)&WPP_93ff7000ef23321ff506bf3726c88bdb_Traceguids,
            NumTrafficClasses,
            QosCurrentCapabilities->MaxNumTrafficClasses,
            v28,
            *(_DWORD *)v29,
            v31);
      }
      else if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
      {
        WPP_RECORDER_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          5u,
          0xBu,
          0x60u,
          (struct _GUID *)&WPP_93ff7000ef23321ff506bf3726c88bdb_Traceguids);
      }
    }
    else
    {
      v16 = 0;
      PriorityAssignmentTable = a3->PriorityAssignmentTable;
      do
      {
        v18 = *PriorityAssignmentTable;
        if ( (unsigned __int8)v18 >= 8u )
        {
          if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
          {
            LODWORD(v28) = 8;
            WPP_RECORDER_SF_DDD(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              5u,
              0xBu,
              0x61u,
              (struct _GUID *)&WPP_93ff7000ef23321ff506bf3726c88bdb_Traceguids,
              v16,
              v18,
              v28,
              *(_DWORD *)v29,
              v31);
          }
          return 3221291029LL;
        }
        if ( !_bittest(&v13, v18) )
        {
          v13 |= 1 << v18;
          ++v14;
          if ( a3->TsaAssignmentTable[v18] == 2 )
            LODWORD(ClassificationElementSize) = ClassificationElementSize + 1;
        }
        ++v16;
        ++PriorityAssignmentTable;
      }
      while ( v16 < 8 );
      if ( v14 > NumTrafficClasses
        || v6 && (unsigned int)ClassificationElementSize > QosCurrentCapabilities->MaxNumEtsCapableTrafficClasses )
      {
        if ( v6 )
        {
          if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
            WPP_RECORDER_SF_LLLL(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              (_DWORD)WPP_GLOBAL_Control,
              (_DWORD)QosCurrentCapabilities,
              ClassificationElementSize);
        }
        else if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
        {
          WPP_RECORDER_SF_Dd(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            5u,
            0xBu,
            0x63u,
            (struct _GUID *)&WPP_93ff7000ef23321ff506bf3726c88bdb_Traceguids,
            v14,
            a3->NumTrafficClasses,
            v28,
            *(_DWORD *)v29,
            v31);
        }
      }
      else
      {
        v19 = 0;
        FirstClassificationElementOffset = 0LL;
        do
        {
          if ( _bittest(&v13, v19) )
          {
            v20 = a3->TsaAssignmentTable[FirstClassificationElementOffset];
            if ( v20 )
            {
              if ( v20 != 2 )
              {
                if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
                  && *((_WORD *)WPP_GLOBAL_Control + 36) )
                {
                  WPP_RECORDER_SF_DDDD(
                    *((_QWORD *)WPP_GLOBAL_Control + 8),
                    a3->TsaAssignmentTable[v19],
                    0xBu,
                    0x67u,
                    (struct _GUID *)&WPP_93ff7000ef23321ff506bf3726c88bdb_Traceguids,
                    v19,
                    a3->TsaAssignmentTable[v19],
                    0,
                    2,
                    v31);
                }
                return 3221291029LL;
              }
              v21 = a3->TcBandwidthAssignmentTable[FirstClassificationElementOffset];
              if ( !(_BYTE)v21 )
              {
                if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
                  && *((_WORD *)WPP_GLOBAL_Control + 36) )
                {
                  WPP_RECORDER_SF_DD(
                    *((_QWORD *)WPP_GLOBAL_Control + 8),
                    5u,
                    0xBu,
                    0x66u,
                    (struct _GUID *)&WPP_93ff7000ef23321ff506bf3726c88bdb_Traceguids,
                    v19,
                    v19);
                }
                return 3221291029LL;
              }
              v15 += v21;
            }
            else if ( v6 && (QosCurrentCapabilities->Flags & 1) == 0
                   || a3->TcBandwidthAssignmentTable[FirstClassificationElementOffset] )
            {
              if ( v6 )
              {
                if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
                  && *((_WORD *)WPP_GLOBAL_Control + 36) )
                {
                  v30 = a3->TcBandwidthAssignmentTable[v19];
                  WPP_RECORDER_SF_DDDD(
                    *((_QWORD *)WPP_GLOBAL_Control + 8),
                    v30,
                    0xBu,
                    0x64u,
                    (struct _GUID *)&WPP_93ff7000ef23321ff506bf3726c88bdb_Traceguids,
                    v19,
                    QosCurrentCapabilities->Flags,
                    v19,
                    v30,
                    v31);
                }
              }
              else if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
                     && *((_WORD *)WPP_GLOBAL_Control + 36) )
              {
                LODWORD(v28) = a3->TcBandwidthAssignmentTable[v19];
                WPP_RECORDER_SF_DDD(
                  *((_QWORD *)WPP_GLOBAL_Control + 8),
                  5u,
                  0xBu,
                  0x65u,
                  (struct _GUID *)&WPP_93ff7000ef23321ff506bf3726c88bdb_Traceguids,
                  v19,
                  v19,
                  v28,
                  *(_DWORD *)v29,
                  v31);
              }
              return 3221291029LL;
            }
          }
          ++v19;
          ++FirstClassificationElementOffset;
        }
        while ( v19 < 8 );
        if ( !v15 || v15 == 100 )
          goto LABEL_69;
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
        {
          *(_DWORD *)v27 = v15;
          WPP_RECORDER_SF_d(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            5u,
            0xBu,
            0x68u,
            (struct _GUID *)&WPP_93ff7000ef23321ff506bf3726c88bdb_Traceguids,
            *(_QWORD *)v27);
        }
      }
    }
    return 3221291029LL;
  }
LABEL_69:
  if ( (Flags & 0x20000) != 0 )
  {
    FirstClassificationElementOffset = a3->FirstClassificationElementOffset;
    NumClassificationElements = a3->NumClassificationElements;
    ClassificationElementSize = a3->ClassificationElementSize;
    QosCurrentCapabilities = (_NDIS_QOS_CAPABILITIES *)(&a3->Header.Type + FirstClassificationElementOffset);
    if ( (_DWORD)NumClassificationElements
      && ((unsigned int)ClassificationElementSize < 0x10
       || (ClassificationElementSize & 3) != 0
       || (unsigned int)FirstClassificationElementOffset < 0x34
       || (unsigned int)FirstClassificationElementOffset > v5
       || ((unsigned __int8)QosCurrentCapabilities & 3) != 0) )
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
        WPP_RECORDER_SF_LLLLLLq(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          FirstClassificationElementOffset,
          (_DWORD)QosCurrentCapabilities,
          ClassificationElementSize);
      return 3221291029LL;
    }
    if ( (unsigned __int64)(ClassificationElementSize * NumClassificationElements) > 0xFFFFFFFF
      || (v23 = FirstClassificationElementOffset + ClassificationElementSize * NumClassificationElements,
          v23 < (unsigned int)FirstClassificationElementOffset) )
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
        WPP_RECORDER_SF_LLL(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          FirstClassificationElementOffset,
          (_DWORD)QosCurrentCapabilities,
          ClassificationElementSize);
      return 3221291029LL;
    }
    if ( v5 < v23 )
    {
      if ( a5 )
        *a5 = v23;
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
        WPP_RECORDER_SF_Dd(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          5u,
          0xBu,
          0x6Bu,
          (struct _GUID *)&WPP_93ff7000ef23321ff506bf3726c88bdb_Traceguids,
          v5,
          FirstClassificationElementOffset + ClassificationElementSize * NumClassificationElements);
      return 3221291028LL;
    }
    v24 = 0;
    if ( (_DWORD)NumClassificationElements )
    {
      LOBYTE(FirstClassificationElementOffset) = 16;
      while ( QosCurrentCapabilities->Header.Type == 0xB7
           && QosCurrentCapabilities->Header.Revision
           && QosCurrentCapabilities->Header.Size >= 0x10u )
      {
        v25 = QosCurrentCapabilities->Flags;
        if ( (v25 & 0xFF000000) != 0
          || (unsigned __int16)(LOWORD(QosCurrentCapabilities->MaxNumTrafficClasses) - 1) > 5u
          || LOWORD(QosCurrentCapabilities->MaxNumEtsCapableTrafficClasses)
          || HIWORD(QosCurrentCapabilities->MaxNumEtsCapableTrafficClasses) >= 8u )
        {
          if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
          {
            MaxNumEtsCapableTrafficClasses_low = LOWORD(QosCurrentCapabilities->MaxNumEtsCapableTrafficClasses);
            LOBYTE(MaxNumEtsCapableTrafficClasses_low) = 5;
            WPP_RECORDER_SF_DDDDDDDDDDD(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              MaxNumEtsCapableTrafficClasses_low,
              11,
              109,
              (struct _GUID *)&WPP_93ff7000ef23321ff506bf3726c88bdb_Traceguids,
              v24,
              v25,
              0,
              0,
              QosCurrentCapabilities->MaxNumTrafficClasses,
              7,
              QosCurrentCapabilities->MaxNumEtsCapableTrafficClasses,
              1,
              0,
              HIWORD(QosCurrentCapabilities->MaxNumEtsCapableTrafficClasses),
              8);
          }
          return 3221291029LL;
        }
        QosCurrentCapabilities = (_NDIS_QOS_CAPABILITIES *)((char *)QosCurrentCapabilities + ClassificationElementSize);
        if ( ++v24 >= (unsigned int)NumClassificationElements )
          goto LABEL_98;
      }
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
      {
        *(_DWORD *)v27 = v24;
        WPP_RECORDER_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          5u,
          0xBu,
          0x6Cu,
          (struct _GUID *)&WPP_93ff7000ef23321ff506bf3726c88bdb_Traceguids,
          *(_QWORD *)v27);
      }
      return 3221291029LL;
    }
  }
LABEL_98:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
    WPP_RECORDER_SF_qDqLqD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      FirstClassificationElementOffset,
      (_DWORD)QosCurrentCapabilities,
      ClassificationElementSize);
  return 0LL;
}
