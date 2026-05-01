/*
 * XREFs of ?HampDepGroupAddDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAU_HAM_ADD_DEPENDENCY_PARAMETERS@@PEAPEAU_HAM_HOST_DEPENDENCY@@PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18000AF5C
 * Callers:
 *     ?HampDepGroupAddDonationDependency@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_RM_HAM_ACTIVITY_HOST@@_K1PEAU_HAM_ACTIVITY_PROPERTIES@@PEAPEAU_HAM_ACTIVITY@@@Z @ 0x180002D60 (-HampDepGroupAddDonationDependency@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_RM_HAM_ACTIVITY_HOST@@_K1PE.c)
 *     ?HampDepGroupAddDynamicDependency@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_K1PEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x180025FE8 (-HampDepGroupAddDynamicDependency@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_K1PEAU_HAM_ACTIVITY_PROPERTIE.c)
 *     ?HampDepGroupAddTerminateDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K01W4_HAM_TERMINATE_TYPE@@E@Z @ 0x1800281D8 (-HampDepGroupAddTerminateDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K01W4_HAM_TERMINATE_TYPE@@E@.c)
 *     ?HampDepGroupAddProcessDependency@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAX1@Z @ 0x1800284B0 (-HampDepGroupAddProcessDependency@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAX1@Z.c)
 *     ?HampDepGroupAddPpleDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0@Z @ 0x18003D518 (-HampDepGroupAddPpleDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0@Z.c)
 * Callees:
 *     ?HampDonationDepInitialize@@YAXPEAU_HAM_DEPENDENCY_LINK@@PEAU_RM_HAM_ACTIVITY_HOST@@_K1PEAU_HAM_DONATION_DEPENDENCY@@@Z @ 0x1800036C0 (-HampDonationDepInitialize@@YAXPEAU_HAM_DEPENDENCY_LINK@@PEAU_RM_HAM_ACTIVITY_HOST@@_K1PEAU_HAM_.c)
 *     ?HampHostProcessDepAllocateState@@YAJPEAU_HAM_HOST_PROCESS_DEPENDENCY@@KK@Z @ 0x180008D50 (-HampHostProcessDepAllocateState@@YAJPEAU_HAM_HOST_PROCESS_DEPENDENCY@@KK@Z.c)
 *     ?HampDepGroupCreateLink@@YAJPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_DEPENDENCY_LINK_ID@@PEAPEAU_HAM_DEPENDENCY_LINK@@@Z @ 0x180008DEC (-HampDepGroupCreateLink@@YAJPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_DEPENDENCY_LINK_ID@@PEAPEAU_HAM_.c)
 *     ?HampDepGroupEnsureHostDisposition@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180009C60 (-HampDepGroupEnsureHostDisposition@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAPEAU_HAM_DEPENDENCY_GROUP@.c)
 *     ?HampDepGroupFindDepLink@@YAPEAU_HAM_DEPENDENCY_LINK@@PEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_DEPENDENCY_LINK_ID@@@Z @ 0x18000AD94 (-HampDepGroupFindDepLink@@YAPEAU_HAM_DEPENDENCY_LINK@@PEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_DEPEND.c)
 *     ?HampDepGroupCheckCreateDependencyActivity@@YAJPEAU_HAM_ADD_DEPENDENCY_PARAMETERS@@PEAU_RM_HAM_ACTIVITY_HOST@@KPEAU_HAM_HOST_DEPENDENCY@@@Z @ 0x18000AE10 (-HampDepGroupCheckCreateDependencyActivity@@YAJPEAU_HAM_ADD_DEPENDENCY_PARAMETERS@@PEAU_RM_HAM_A.c)
 *     ?HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18000DE3C (-HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18000DEC4 (-HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180017CF0 (-HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupRunStateChangeWorkerIteration@@YAJPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18001B090 (-HampDepGroupRunStateChangeWorkerIteration@@YAJPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampTerminateDepInitialize@@YAXPEAU_HAM_DEPENDENCY_LINK@@PEAU_RM_HAM_ACTIVITY_HOST@@_K12W4_HAM_TERMINATE_REASON@@W4_HAM_TERMINATE_TYPE@@PEAU_HAM_TERMINATE_DEPENDENCY@@@Z @ 0x180025E58 (-HampTerminateDepInitialize@@YAXPEAU_HAM_DEPENDENCY_LINK@@PEAU_RM_HAM_ACTIVITY_HOST@@_K12W4_HAM_.c)
 *     ?HampHostDynamicDepInitialize@@YAXPEAU_HAM_DEPENDENCY_LINK@@PEAU_RM_HAM_ACTIVITY_HOST@@1PEAU_HAM_HOST_DYNAMIC_DEPENDENCY@@@Z @ 0x180025EFC (-HampHostDynamicDepInitialize@@YAXPEAU_HAM_DEPENDENCY_LINK@@PEAU_RM_HAM_ACTIVITY_HOST@@1PEAU_HAM.c)
 *     ?HampHostProcessDepInitialize@@YAXPEAU_HAM_DEPENDENCY_LINK@@PEAU_RM_HAM_ACTIVITY_HOST@@1PEAU_HAM_HOST_PROCESS_DEPENDENCY@@@Z @ 0x180025F78 (-HampHostProcessDepInitialize@@YAXPEAU_HAM_DEPENDENCY_LINK@@PEAU_RM_HAM_ACTIVITY_HOST@@1PEAU_HAM.c)
 *     ?HampDepGroupDereference@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180028438 (-HampDepGroupDereference@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampHostDynamicDepAllocateState@@YAJPEAU_HAM_HOST_DYNAMIC_DEPENDENCY@@@Z @ 0x180034154 (-HampHostDynamicDepAllocateState@@YAJPEAU_HAM_HOST_DYNAMIC_DEPENDENCY@@@Z.c)
 *     ?HampDepLinkGetDependencyByType@@YAPEAU_HAM_HOST_DEPENDENCY@@PEAU_HAM_DEPENDENCY_LINK@@W4_HAM_HOST_DEPENDENCY_TYPE@@@Z @ 0x180035A54 (-HampDepLinkGetDependencyByType@@YAPEAU_HAM_HOST_DEPENDENCY@@PEAU_HAM_DEPENDENCY_LINK@@W4_HAM_HO.c)
 *     ?HampHostDepDestroy@@YAXPEAU_HAM_HOST_DEPENDENCY@@@Z @ 0x180035A9C (-HampHostDepDestroy@@YAXPEAU_HAM_HOST_DEPENDENCY@@@Z.c)
 *     __security_check_cookie @ 0x180044E00 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U1@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@333AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x18007E358 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@U1@U-$_tlgWrapperByVal@$00@@@-$_tlgWriteTemplate@$$A6AJP.c)
 */

__int64 __fastcall HampDepGroupAddDependency(
        struct _RM_HAM_ACTIVITY_HOST *a1,
        struct _RM_HAM_ACTIVITY_HOST *a2,
        struct _HAM_ADD_DEPENDENCY_PARAMETERS *a3,
        struct _HAM_HOST_DEPENDENCY **a4,
        struct _HAM_DEPENDENCY_GROUP **a5)
{
  int v9; // eax
  struct _HAM_DEPENDENCY_GROUP *v10; // rsi
  int v11; // edi
  struct _HAM_DEPENDENCY_LINK *DepLink; // rax
  __int64 v13; // rdx
  __int64 DependencyByType; // rbx
  SIZE_T v15; // r8
  char *Heap; // rbx
  struct _HAM_DEPENDENCY_LINK *v17; // rsi
  int State; // eax
  struct _HAM_DEPENDENCY_GROUP *v19; // rdi
  _QWORD *v20; // rax
  char *v21; // rsi
  __int64 v22; // rcx
  int v23; // ecx
  int v24; // r8d
  int v25; // r9d
  __int64 v26; // rdx
  char v28[8]; // [rsp+50h] [rbp-51h] BYREF
  struct _HAM_DEPENDENCY_GROUP *v29; // [rsp+58h] [rbp-49h] BYREF
  struct _HAM_DEPENDENCY_LINK *v30; // [rsp+60h] [rbp-41h] BYREF
  __int64 v31; // [rsp+68h] [rbp-39h] BYREF
  __int64 v32; // [rsp+70h] [rbp-31h] BYREF
  __int64 v33; // [rsp+78h] [rbp-29h] BYREF
  __int64 v34; // [rsp+80h] [rbp-21h] BYREF
  struct _HAM_DEPENDENCY_GROUP **v35; // [rsp+88h] [rbp-19h]
  __int64 v36; // [rsp+90h] [rbp-11h] BYREF
  __int64 v37; // [rsp+98h] [rbp-9h]

  v29 = 0LL;
  v35 = a5;
  if ( a1 == a2 )
    return (unsigned int)-1073741776;
  v9 = HampDepGroupEnsureHostDisposition(a1, a2, &v29);
  v10 = v29;
  v11 = v9;
  if ( v9 >= 0 )
  {
    v36 = *((_QWORD *)a1 - 4);
    v37 = *((_QWORD *)a2 - 4);
    DepLink = HampDepGroupFindDepLink(v29, (struct _HAM_DEPENDENCY_LINK_ID *)&v36);
    v30 = DepLink;
    if ( DepLink )
    {
      if ( *(_BYTE *)a3 > 3u )
      {
        DependencyByType = 0LL;
      }
      else
      {
        LOBYTE(v13) = *(_BYTE *)a3;
        DependencyByType = HampDepLinkGetDependencyByType(DepLink, v13);
      }
    }
    else
    {
      DependencyByType = 0LL;
      v11 = HampDepGroupCreateLink(v10, (struct _HAM_DEPENDENCY_LINK_ID *)&v36, &v30);
      if ( v11 < 0 )
        goto LABEL_32;
    }
    if ( DependencyByType )
    {
      if ( (*(_BYTE *)(DependencyByType + 36) & 1) == 0 )
      {
        v11 = -1073741270;
        goto LABEL_32;
      }
      HampDepGroupRunStateChangeWorkerIteration(v10);
    }
    if ( *(_BYTE *)a3 )
    {
      switch ( *(_BYTE *)a3 )
      {
        case 1:
          v15 = 80LL;
          break;
        case 2:
          v15 = 48LL;
          break;
        case 3:
          v15 = 88LL;
          break;
        case 4:
          v15 = 104LL;
          break;
        default:
          v11 = -1073741583;
          goto LABEL_32;
      }
    }
    else
    {
      v15 = 96LL;
    }
    Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v15);
    if ( Heap )
    {
      v17 = v30;
      Heap[40] = *(_BYTE *)a3;
      if ( *(_BYTE *)a3 )
      {
        if ( *(_BYTE *)a3 != 1 )
        {
          switch ( *(_BYTE *)a3 )
          {
            case 2:
              *(_OWORD *)Heap = 0LL;
              *((_OWORD *)Heap + 1) = 0LL;
              *((_OWORD *)Heap + 2) = 0LL;
              Heap[40] = 2;
              *((_QWORD *)Heap + 1) = v17;
              break;
            case 3:
              HampTerminateDepInitialize(
                v17,
                a1,
                *((_QWORD *)a3 + 51),
                a2,
                *((_QWORD *)a3 + 52),
                *((_DWORD *)a3 + 106),
                *((_DWORD *)a3 + 107),
                Heap);
              break;
            case 4:
              HampDonationDepInitialize(v17, a1, *((_QWORD *)a3 + 51), a2, (struct _HAM_DONATION_DEPENDENCY *)Heap);
              break;
          }
LABEL_19:
          v11 = HampDepGroupCheckCreateDependencyActivity(
                  (struct _HAM_CLIENT_CONTEXT **)a3,
                  a2,
                  Heap[40] == 4,
                  (struct _HAM_HOST_DEPENDENCY *)Heap);
          if ( v11 >= 0 )
          {
            v19 = v29;
            HampDepGroupAcquireLockExclusive(v29);
            v20 = Heap + 16;
            if ( (unsigned __int8)Heap[40] > 3u )
              v21 = (char *)v17 + 80;
            else
              v21 = (char *)v17 + 64;
            v22 = *(_QWORD *)v21;
            if ( *(char **)(*(_QWORD *)v21 + 8LL) != v21 )
              __fastfail(3u);
            *v20 = v22;
            *((_QWORD *)Heap + 3) = v21;
            *(_QWORD *)(v22 + 8) = v20;
            *(_QWORD *)v21 = v20;
            HampDepGroupReleaseLockExclusive(v19);
            if ( *(_QWORD *)Heap )
              v26 = *(_QWORD *)(*(_QWORD *)Heap + 40LL);
            else
              v26 = -1LL;
            if ( (unsigned int)dword_1800B3218 > 4
              && (byte_1800B3228 & 8) != 0
              && (qword_1800B3230 & 8) == qword_1800B3230 )
            {
              v28[0] = *(_BYTE *)a3;
              v31 = v37;
              v32 = v36;
              v33 = *(_QWORD *)v19;
              v34 = v26;
              _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>>(
                v23,
                (unsigned int)&unk_1800A1456,
                v24,
                v25,
                (__int64)&v34,
                (__int64)&v33,
                (__int64)&v32,
                (__int64)&v31,
                (__int64)v28);
            }
            if ( a4 )
              *a4 = (struct _HAM_HOST_DEPENDENCY *)Heap;
            Heap = 0LL;
            v10 = 0LL;
            *v35 = v19;
            v11 = 0;
            goto LABEL_30;
          }
LABEL_58:
          v10 = v29;
LABEL_30:
          if ( Heap )
            HampHostDepDestroy((struct _HAM_HOST_DEPENDENCY *)Heap);
          goto LABEL_32;
        }
        HampHostDynamicDepInitialize(v17, a1, a2, (struct _HAM_HOST_DYNAMIC_DEPENDENCY *)Heap);
        State = HampHostDynamicDepAllocateState((struct _HAM_HOST_DYNAMIC_DEPENDENCY *)Heap);
      }
      else
      {
        HampHostProcessDepInitialize(v17, a1, a2, (struct _HAM_HOST_PROCESS_DEPENDENCY *)Heap);
        State = HampHostProcessDepAllocateState((void **)Heap, *((_DWORD *)a3 + 106), *((_DWORD *)a3 + 107));
      }
      v11 = State;
      if ( State < 0 )
        goto LABEL_58;
      goto LABEL_19;
    }
    v10 = v29;
    v11 = -1073741801;
  }
LABEL_32:
  if ( v10 )
  {
    HampDepGroupRunStateChangeWorker(v10);
    HampDepGroupDereference(v10);
  }
  return (unsigned int)v11;
}
