/*
 * XREFs of EtwpSetProviderTraitsCommon @ 0x14063804C
 * Callers:
 *     EtwpSetProviderTraitsUm @ 0x140637E80 (EtwpSetProviderTraitsUm.c)
 *     EtwpSetProviderTraitsKm @ 0x14077F308 (EtwpSetProviderTraitsKm.c)
 * Callees:
 *     RtlULongAdd @ 0x140200578 (RtlULongAdd.c)
 *     KeReleaseGuardedMutex @ 0x140253C70 (KeReleaseGuardedMutex.c)
 *     RtlRbInsertNodeEx @ 0x14034B1D0 (RtlRbInsertNodeEx.c)
 *     RtlRbRemoveNode @ 0x14034B830 (RtlRbRemoveNode.c)
 *     ExAcquireFastMutex @ 0x140354DD0 (ExAcquireFastMutex.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     strnlen @ 0x1403D3D40 (strnlen.c)
 *     Feature_1445264698__private_IsEnabledDeviceUsage @ 0x1403F9524 (Feature_1445264698__private_IsEnabledDeviceUsage.c)
 *     TraitsCompare @ 0x1405F4B10 (TraitsCompare.c)
 *     EtwpReleaseProviderTraitsReference @ 0x1405F8C48 (EtwpReleaseProviderTraitsReference.c)
 *     EtwpGetProviderGroupFromTraits @ 0x140638338 (EtwpGetProviderGroupFromTraits.c)
 *     EtwpAddRegEntryToGroup @ 0x140638390 (EtwpAddRegEntryToGroup.c)
 *     AddDecodeGuidToSessions @ 0x140941D1C (AddDecodeGuidToSessions.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpSetProviderTraitsCommon(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        PRTL_BALANCED_NODE Node,
        unsigned int a6,
        PFAST_MUTEX FastMutex,
        PRTL_RB_TREE Tree)
{
  PRTL_BALANCED_NODE v8; // rdi
  struct _FAST_MUTEX *v9; // r15
  bool v11; // r14
  PRTL_BALANCED_NODE v12; // rbp
  __int16 v13; // r13
  unsigned int v14; // ebx
  __int64 v15; // rdx
  bool v16; // zf
  PRTL_BALANCED_NODE v17; // r14
  __int64 Root; // rbx
  unsigned __int64 v19; // rax
  BOOLEAN v20; // bp
  char v21; // r15
  unsigned int v22; // r9d
  int v23; // eax
  __int64 v24; // rax
  int IsEnabledDeviceUsage; // eax
  ULONG v26; // eax
  NTSTATUS v27; // eax
  int v28; // eax
  bool v29; // dl
  __int128 *ProviderGroupFromTraits; // rax
  bool v32; // [rsp+30h] [rbp-88h]
  ULONG pulResult; // [rsp+34h] [rbp-84h] BYREF
  int v34; // [rsp+38h] [rbp-80h]
  PKGUARDED_MUTEX Mutex; // [rsp+40h] [rbp-78h]
  __int64 v36; // [rsp+48h] [rbp-70h]
  __int64 v37; // [rsp+50h] [rbp-68h]
  __int128 v38; // [rsp+58h] [rbp-60h] BYREF

  v8 = Node;
  v9 = FastMutex;
  v11 = 0;
  v12 = Node;
  v36 = a3;
  v13 = 0;
  v34 = a2;
  v37 = a1;
  Mutex = FastMutex;
  pulResult = 0;
  *(_QWORD *)&v38 = Node;
  if ( a6 < 3 )
    goto LABEL_2;
  if ( WORD2(Node[1].Left) != a6 )
    goto LABEL_2;
  v15 = (unsigned int)strnlen((const char *)&Node[1].Left + 6, a6 - 2) + 3;
  v16 = (_DWORD)v15 == a6;
  if ( (unsigned int)v15 > a6 )
    goto LABEL_2;
  if ( (unsigned int)v15 < a6 )
  {
    while ( (int)v15 + 2 <= a6 )
    {
      LODWORD(v15) = *(unsigned __int16 *)((char *)&Node[1].Left + v15 + 4) + (_DWORD)v15;
      v16 = (_DWORD)v15 == a6;
      if ( (unsigned int)v15 >= a6 )
        goto LABEL_8;
    }
LABEL_2:
    v14 = -1073741566;
    goto LABEL_48;
  }
LABEL_8:
  if ( !v16 )
    goto LABEL_2;
  v17 = Node + 1;
  Node->0 = 0LL;
  Node->ParentValue = 0LL;
  LODWORD(Node[1].Children[0]) = 1;
  ExAcquireFastMutex(FastMutex);
  v32 = (unsigned int)Feature_1445264698__private_IsEnabledDeviceUsage() != 0;
  if ( (*(_BYTE *)&Tree->0 & 1) != 0 )
  {
    Root = (__int64)Tree->Root;
    if ( !Tree->Root )
    {
LABEL_14:
      Root = 0LL;
      v20 = 0;
      v21 = 0;
LABEL_15:
      RtlRbInsertNodeEx(Tree, (PRTL_BALANCED_NODE)Root, v20, Node);
      v22 = 0;
      v12 = 0LL;
      goto LABEL_16;
    }
    v19 = (unsigned __int64)Tree ^ Root;
  }
  else
  {
    v19 = (unsigned __int64)Tree->Root;
    Root = (__int64)Tree->Root;
  }
  if ( !v19 )
    goto LABEL_14;
  v20 = 0;
  v21 = 0;
  if ( !Root )
    goto LABEL_27;
  while ( 1 )
  {
    v23 = TraitsCompare((__int64)Node, Root);
    if ( v23 <= 0 )
      break;
    v24 = *(_QWORD *)(Root + 8);
    if ( !v24 )
    {
      v20 = 1;
      goto LABEL_15;
    }
LABEL_25:
    Root = v24;
  }
  if ( v23 < 0 )
  {
    v24 = *(_QWORD *)Root;
    if ( !*(_QWORD *)Root )
      goto LABEL_15;
    goto LABEL_25;
  }
  v21 = 1;
LABEL_27:
  if ( !v21 )
    goto LABEL_15;
  v8 = (PRTL_BALANCED_NODE)Root;
  IsEnabledDeviceUsage = Feature_1445264698__private_IsEnabledDeviceUsage();
  v22 = 0;
  v17 = (PRTL_BALANCED_NODE)(Root + 24);
  v16 = IsEnabledDeviceUsage == 0;
  v26 = *(_DWORD *)(Root + 24);
  if ( v16 )
  {
    v12 = (PRTL_BALANCED_NODE)v38;
    LODWORD(v17->Children[0]) = v26 + 1;
LABEL_16:
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a4 + 104), (signed __int64)v8, 0LL) )
    {
      if ( v21 )
      {
        --LODWORD(v17->Children[0]);
      }
      else
      {
        RtlRbRemoveNode(Tree, v8);
        v12 = v8;
      }
      v14 = -1073741823;
    }
    else
    {
      v14 = v22;
    }
    v28 = Feature_1445264698__private_IsEnabledDeviceUsage();
    v29 = 0;
    v9 = Mutex;
    if ( !v28 )
      v29 = v32;
    v11 = v29;
    KeReleaseGuardedMutex(Mutex);
    if ( !v14 )
    {
      if ( WORD2(v8[1].Left) == 22 && *(_DWORD *)((char *)&v8[1].Left + 6) == 33559296 )
      {
        if ( (unsigned __int8)AddDecodeGuidToSessions(a4) )
          v13 = 1024;
      }
      else if ( !*(_QWORD *)(a4 + 40) )
      {
        ProviderGroupFromTraits = (__int128 *)EtwpGetProviderGroupFromTraits();
        if ( ProviderGroupFromTraits )
        {
          v38 = *ProviderGroupFromTraits;
          v14 = EtwpAddRegEntryToGroup(a4, (unsigned int)&v38, v37, v34, v36);
          if ( v14 )
          {
            EtwpReleaseProviderTraitsReference(a4);
            goto LABEL_48;
          }
        }
      }
      _InterlockedOr16((volatile signed __int16 *)(a4 + 98), v13 | 0x200);
    }
  }
  else
  {
    v27 = RtlULongAdd(v26, 1u, &pulResult);
    v12 = (PRTL_BALANCED_NODE)v38;
    v14 = v27;
    if ( v27 >= 0 )
    {
      LODWORD(v17->Children[0]) = pulResult;
      goto LABEL_16;
    }
    v11 = v32;
    v9 = Mutex;
  }
LABEL_48:
  if ( (unsigned int)Feature_1445264698__private_IsEnabledDeviceUsage() && v11 )
    KeReleaseGuardedMutex(v9);
  if ( v12 )
    ExFreePoolWithTag(v12, 0);
  return v14;
}
