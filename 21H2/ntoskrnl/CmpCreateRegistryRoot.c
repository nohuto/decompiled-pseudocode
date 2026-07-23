/*
 * XREFs of CmpCreateRegistryRoot @ 0x140A5BED4
 * Callers:
 *     CmInitSystem1 @ 0x140A5AF78 (CmInitSystem1.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     CmpTryToLockKcbExclusive @ 0x14061EC84 (CmpTryToLockKcbExclusive.c)
 *     CmpHashUnicodeComponent @ 0x14065F044 (CmpHashUnicodeComponent.c)
 *     ObCloseHandle @ 0x1406847E0 (ObCloseHandle.c)
 *     ObInsertObject @ 0x1406AB4A0 (ObInsertObject.c)
 *     ObCreateObject @ 0x1406ABDC0 (ObCreateObject.c)
 *     CmpCreateKeyControlBlock @ 0x1406DEDB0 (CmpCreateKeyControlBlock.c)
 *     ObReferenceObjectByHandle @ 0x140707FA0 (ObReferenceObjectByHandle.c)
 *     CmpUnlockKcb @ 0x140709F20 (CmpUnlockKcb.c)
 *     EnlistKeyBodyWithKCB @ 0x1407A7FEC (EnlistKeyBodyWithKCB.c)
 *     CmpHiveRootSecurityDescriptor @ 0x1407A861C (CmpHiveRootSecurityDescriptor.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     CmpCreateRootNode @ 0x140A5C0B4 (CmpCreateRootNode.c)
 */

char __fastcall CmpCreateRegistryRoot(__int64 a1, __int64 a2)
{
  ACL *v2; // rdi
  int v3; // ebx
  _QWORD *v4; // rcx
  ULONG_PTR v5; // rax
  _DWORD *v6; // rbx
  ULONG_PTR v7; // rcx
  NTSTATUS v8; // eax
  int v10; // [rsp+30h] [rbp-39h]
  int v11; // [rsp+38h] [rbp-31h]
  PVOID v12; // [rsp+50h] [rbp-19h] BYREF
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-11h] BYREF
  _DWORD v14[2]; // [rsp+68h] [rbp-1h] BYREF
  __int64 v15; // [rsp+70h] [rbp+7h]
  UNICODE_STRING *v16; // [rsp+78h] [rbp+Fh]
  int v17; // [rsp+80h] [rbp+17h]
  int v18; // [rsp+84h] [rbp+1Bh]
  ACL *v19; // [rsp+88h] [rbp+1Fh]
  __int64 v20; // [rsp+90h] [rbp+27h]
  int v21; // [rsp+D0h] [rbp+67h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+D8h] [rbp+6Fh] BYREF
  PVOID Object; // [rsp+E0h] [rbp+77h]
  HANDLE Handle; // [rsp+E8h] [rbp+7Fh] BYREF

  Object = 0LL;
  v14[1] = 0;
  v18 = 0;
  BugCheckParameter2 = 0LL;
  v21 = 0;
  Handle = 0LL;
  DestinationString = 0LL;
  if ( (unsigned __int8)CmpCreateRootNode(a1, a2, &v21) )
  {
    v2 = CmpHiveRootSecurityDescriptor();
    v14[0] = 48;
    v15 = 0LL;
    v16 = &CmRegistryRootName;
    v17 = 576;
    v19 = v2;
    v20 = 0LL;
    v3 = ObCreateObject(0, (int)CmKeyObjectType, (int)v14, 0);
    ExFreePoolWithTag(v2, 0);
    if ( v3 >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, L"REGISTRY");
      v11 = 0;
      v10 = CmpHashUnicodeComponent((__m128i *)&DestinationString);
      if ( (int)CmpCreateKeyControlBlock(
                  (__int64)CmpMasterHive,
                  v21,
                  0LL,
                  0LL,
                  0,
                  &DestinationString.Length,
                  v10,
                  v11,
                  &BugCheckParameter2) >= 0 )
      {
        v4 = Object;
        v5 = BugCheckParameter2;
        *(_DWORD *)Object = 1803104306;
        v4[1] = v5;
        v4[2] = 0LL;
        v6 = Object;
        *((_QWORD *)Object + 3) = KeGetCurrentThread()[1].CycleTime;
        v7 = BugCheckParameter2;
        v6[12] = 0;
        *((_QWORD *)v6 + 10) = v6 + 18;
        *((_QWORD *)v6 + 9) = v6 + 18;
        *((_QWORD *)v6 + 7) = 0LL;
        *((_QWORD *)v6 + 8) = 0LL;
        CmpTryToLockKcbExclusive(v7);
        EnlistKeyBodyWithKCB(v6, 2);
        CmpUnlockKcb(BugCheckParameter2);
        if ( ObInsertObject(v6, 0LL, 0, 0, 0LL, &Handle) >= 0 )
        {
          v12 = 0LL;
          v8 = ObReferenceObjectByHandle(Handle, 0x20019u, 0LL, 0, &v12, 0LL);
          CmpRegistryRootObject = v12;
          if ( v8 >= 0 )
            return 1;
          ObCloseHandle(Handle, 0);
        }
      }
    }
  }
  return 0;
}
