/*
 * XREFs of _LdrpInitializeShimDllDependencies@0 @ 0x4B2A672F
 * Callers:
 *     _LdrpLoadShimEngine@4 @ 0x4B2A6525 (_LdrpLoadShimEngine@4.c)
 * Callees:
 *     _LdrpInitializeGraphRecurse@12 @ 0x4B2D1904 (_LdrpInitializeGraphRecurse@12.c)
 *     _ZwTerminateProcess@8 @ 0x4B2F2C40 (_ZwTerminateProcess@8.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 *     _LdrpLogDbgPrint @ 0x4B32E582 (_LdrpLogDbgPrint.c)
 *     _LdrpInitializationFailure@4 @ 0x4B331C4E (_LdrpInitializationFailure@4.c)
 */

PLDR_DATA_TABLE_ENTRY __stdcall LdrpInitializeShimDllDependencies()
{
  PLDR_DATA_TABLE_ENTRY Flink; // ecx
  PLDR_DATA_TABLE_ENTRY v1; // esi
  int v2; // ecx
  PLDR_DATA_TABLE_ENTRY v3; // edx
  bool v4; // zf
  PLDR_DATA_TABLE_ENTRY result; // eax
  _LDR_DDAG_NODE *DdagNode; // eax
  _SINGLE_LIST_ENTRY *Tail; // ebx
  _SINGLE_LIST_ENTRY *v8; // edi
  _SINGLE_LIST_ENTRY *Next; // eax
  char v10; // al
  size_t v11; // [esp-4h] [ebp-94h]
  _BYTE v12[16]; // [esp+10h] [ebp-80h] BYREF
  int v13; // [esp+20h] [ebp-70h]
  NTSTATUS *p_ExitStatus; // [esp+28h] [ebp-68h]
  PLDR_DATA_TABLE_ENTRY v15; // [esp+84h] [ebp-Ch]
  NTSTATUS ExitStatus; // [esp+88h] [ebp-8h] BYREF
  char v17; // [esp+8Fh] [ebp-1h] BYREF

  LODWORD(v11) = 108;
  memset(v12, 0, v11);
  Flink = dword_4B3A5D8C;
  p_ExitStatus = &ExitStatus;
  v13 = 0x80000;
  while ( Flink != (PLDR_DATA_TABLE_ENTRY)&dword_4B3A5D8C )
  {
    if ( Flink->DdagNode->State == LdrModulesReadyToInit && !Flink->LoadContext )
      Flink->LoadContext = (struct _LDRP_LOAD_CONTEXT *)v12;
    Flink = (PLDR_DATA_TABLE_ENTRY)Flink->InLoadOrderLinks.Flink;
  }
  v1 = dword_4B3A5D8C;
  v2 = 0;
  v3 = 0;
  ExitStatus = 0;
  if ( IsListEmpty((struct _LIST_ENTRY *)&dword_4B3A5D8C) )
    goto LABEL_11;
  while ( 1 )
  {
    v4 = (v1->Flags & 0x100) == 0;
    v15 = v1;
    if ( !v4 )
    {
      DdagNode = v1->DdagNode;
      Tail = DdagNode->Dependencies.Tail;
      if ( Tail )
        break;
    }
LABEL_9:
    v1 = (PLDR_DATA_TABLE_ENTRY)v1->InLoadOrderLinks.Flink;
    if ( v1 == (PLDR_DATA_TABLE_ENTRY)&dword_4B3A5D8C )
      goto LABEL_10;
  }
  v8 = DdagNode->Dependencies.Tail;
  while ( 1 )
  {
    v8 = v8->Next;
    if ( ((int)v8[3].Next & 1) == 0 )
    {
      Next = v8[1].Next;
      if ( Next[8].Next == (_SINGLE_LIST_ENTRY *)7 )
      {
        v17 = 0;
        v2 = LdrpInitializeGraphRecurse(&v17);
        ExitStatus = v2;
        if ( v2 < 0 )
          goto LABEL_10;
        goto LABEL_23;
      }
      if ( Next[8].Next == (_SINGLE_LIST_ENTRY *)-4 )
        break;
    }
LABEL_23:
    if ( v8 == Tail )
      goto LABEL_9;
  }
  v2 = -1073741502;
  ExitStatus = -1073741502;
LABEL_10:
  v3 = v15;
LABEL_11:
  result = dword_4B3A5D8C;
  if ( !IsListEmpty((struct _LIST_ENTRY *)&dword_4B3A5D8C) )
  {
    do
    {
      v3 = result;
      if ( (_BYTE *)result->LoadContext == v12 )
        result->LoadContext = 0;
      result = (PLDR_DATA_TABLE_ENTRY)result->InLoadOrderLinks.Flink;
    }
    while ( result != (PLDR_DATA_TABLE_ENTRY)&dword_4B3A5D8C );
    v2 = ExitStatus;
  }
  if ( v2 < 0 )
  {
    v10 = ShowSnaps;
    if ( (ShowSnaps & 3) != 0 )
    {
      LdrpLogDbgPrint(
        "minkernel\\ntdll\\ldrinit.c",
        2566,
        "LdrpInitializeShimDllDependencies",
        0,
        "Initializing a shim dependency \"%wZ\" failed with status 0x%08lx\n",
        &v3->FullDllName,
        v2);
      v2 = ExitStatus;
      v10 = ShowSnaps;
    }
    if ( (v10 & 0x10) != 0 )
      __debugbreak();
    LdrpInitializationFailure(v2);
    return (PLDR_DATA_TABLE_ENTRY)ZwTerminateProcess((HANDLE)0xFFFFFFFF, ExitStatus);
  }
  return result;
}
