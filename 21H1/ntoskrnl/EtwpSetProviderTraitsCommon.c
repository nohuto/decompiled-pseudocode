/*
 * XREFs of EtwpSetProviderTraitsCommon @ 0x1405F38C0
 * Callers:
 *     EtwpSetProviderTraitsUm @ 0x1405F3724 (EtwpSetProviderTraitsUm.c)
 *     EtwpSetProviderTraitsKm @ 0x14076A1F8 (EtwpSetProviderTraitsKm.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x14024EAD0 (RtlRbRemoveNode.c)
 *     RtlRbInsertNodeEx @ 0x14024F7F0 (RtlRbInsertNodeEx.c)
 *     ExAcquireFastMutex @ 0x1402600D0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x140263BB0 (KeReleaseGuardedMutex.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     strnlen @ 0x1403CF790 (strnlen.c)
 *     EtwpGetProviderGroupFromTraits @ 0x1405F3B0C (EtwpGetProviderGroupFromTraits.c)
 *     EtwpAddRegEntryToGroup @ 0x1405F4850 (EtwpAddRegEntryToGroup.c)
 *     TraitsCompare @ 0x1406C55BC (TraitsCompare.c)
 *     EtwpReleaseProviderTraitsReference @ 0x1406C8B78 (EtwpReleaseProviderTraitsReference.c)
 *     AddDecodeGuidToSessions @ 0x14093D33C (AddDecodeGuidToSessions.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpSetProviderTraitsCommon(
        int a1,
        int a2,
        __int64 a3,
        __int64 a4,
        PRTL_BALANCED_NODE Node,
        unsigned int a6,
        PFAST_MUTEX FastMutex,
        PRTL_RB_TREE Tree)
{
  PRTL_BALANCED_NODE v8; // rdi
  __int16 v10; // r13
  __int64 v11; // rdx
  bool v12; // zf
  PRTL_BALANCED_NODE v13; // r14
  unsigned __int64 v14; // rax
  _RTL_BALANCED_NODE *Root; // rbx
  BOOLEAN v16; // bp
  char v17; // r15
  int v18; // eax
  _RTL_BALANCED_NODE *v19; // rax
  unsigned int v20; // ebx
  __int128 *ProviderGroupFromTraits; // rax
  PRTL_BALANCED_NODE P; // [rsp+38h] [rbp-80h]
  __int128 v28; // [rsp+58h] [rbp-60h] BYREF

  v8 = Node;
  v10 = 0;
  P = Node;
  if ( a6 < 3 )
    goto LABEL_39;
  if ( WORD2(Node[1].Left) != a6 )
    goto LABEL_39;
  v11 = (unsigned int)strnlen((const char *)&Node[1].Left + 6, a6 - 2) + 3;
  v12 = (_DWORD)v11 == a6;
  if ( (unsigned int)v11 > a6 )
    goto LABEL_39;
  if ( (unsigned int)v11 < a6 )
  {
    while ( (int)v11 + 2 <= a6 )
    {
      LODWORD(v11) = *(unsigned __int16 *)((char *)&Node[1].Left + v11 + 4) + (_DWORD)v11;
      v12 = (_DWORD)v11 == a6;
      if ( (unsigned int)v11 >= a6 )
        goto LABEL_7;
    }
LABEL_39:
    v20 = -1073741566;
    goto LABEL_29;
  }
LABEL_7:
  if ( !v12 )
    goto LABEL_39;
  v13 = Node + 1;
  Node->0 = 0LL;
  Node->ParentValue = 0LL;
  LODWORD(Node[1].Children[0]) = 1;
  ExAcquireFastMutex(FastMutex);
  if ( (*(_BYTE *)&Tree->0 & 1) != 0 )
  {
    Root = Tree->Root;
    if ( !Tree->Root )
      goto LABEL_33;
    v14 = (unsigned __int64)Tree ^ (unsigned __int64)Root;
  }
  else
  {
    v14 = (unsigned __int64)Tree->Root;
    Root = Tree->Root;
  }
  if ( !v14 )
  {
LABEL_33:
    Root = 0LL;
    v16 = 0;
    v17 = 0;
    goto LABEL_34;
  }
  v16 = 0;
  v17 = 0;
  if ( !Root )
  {
LABEL_19:
    if ( !v17 )
      goto LABEL_34;
    v13 = Root + 1;
    v8 = Root;
    ++LODWORD(Root[1].Children[0]);
    goto LABEL_21;
  }
  while ( 1 )
  {
    v18 = TraitsCompare(Node, Root);
    if ( v18 > 0 )
      break;
    if ( v18 >= 0 )
    {
      v17 = 1;
      goto LABEL_19;
    }
    v19 = Root->Children[0];
    if ( !Root->Children[0] )
    {
      v16 = 0;
      goto LABEL_34;
    }
LABEL_14:
    Root = v19;
  }
  v19 = Root->Children[1];
  if ( v19 )
    goto LABEL_14;
  v16 = 1;
LABEL_34:
  RtlRbInsertNodeEx(Tree, Root, v16, Node);
  P = 0LL;
LABEL_21:
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a4 + 104), (signed __int64)v8, 0LL) )
  {
    if ( v17 )
    {
      --LODWORD(v13->Children[0]);
    }
    else
    {
      RtlRbRemoveNode(Tree, v8);
      P = v8;
    }
    v20 = -1073741823;
  }
  else
  {
    v20 = 0;
  }
  KeReleaseGuardedMutex(FastMutex);
  if ( !v20 )
  {
    if ( WORD2(v8[1].Left) == 22 && *(_DWORD *)((char *)&v8[1].Left + 6) == 33559296 )
    {
      if ( (unsigned __int8)AddDecodeGuidToSessions(a4) )
        v10 = 1024;
LABEL_28:
      _InterlockedOr16((volatile signed __int16 *)(a4 + 98), v10 | 0x200);
    }
    else
    {
      if ( *(_QWORD *)(a4 + 40) )
        goto LABEL_28;
      ProviderGroupFromTraits = (__int128 *)EtwpGetProviderGroupFromTraits();
      if ( !ProviderGroupFromTraits )
        goto LABEL_28;
      v28 = *ProviderGroupFromTraits;
      v20 = EtwpAddRegEntryToGroup(a4, (unsigned int)&v28, a1, a2, a3);
      if ( !v20 )
        goto LABEL_28;
      EtwpReleaseProviderTraitsReference(a4);
    }
  }
LABEL_29:
  if ( P )
    ExFreePoolWithTag(P, 0);
  return v20;
}
