/*
 * XREFs of VrpTranslatePath @ 0x1405CBA18
 * Callers:
 *     VrpPreOpenOrCreate @ 0x1405CB6B0 (VrpPreOpenOrCreate.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140207C80 (ExAcquirePushLockSharedEx.c)
 *     ObfDereferenceObjectWithTag @ 0x140208290 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObject @ 0x140208380 (ObfReferenceObject.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x1402748E0 (ExfReleasePushLockShared.c)
 *     ObfReferenceObjectWithTag @ 0x140296B50 (ObfReferenceObjectWithTag.c)
 *     RtlInitUnicodeString @ 0x140298F60 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1403F37A0 (ZwClose.c)
 *     ZwOpenKey @ 0x1403F3800 (ZwOpenKey.c)
 *     VrpFindNamespaceNode @ 0x1405CB8C8 (VrpFindNamespaceNode.c)
 *     VrpGetNextToken @ 0x1405CBED8 (VrpGetNextToken.c)
 *     VrpStripTrailingCharacters @ 0x1405CBFC8 (VrpStripTrailingCharacters.c)
 *     VrpBuildKeyPath @ 0x1405CC004 (VrpBuildKeyPath.c)
 *     ObReferenceObjectByHandle @ 0x1405F5C90 (ObReferenceObjectByHandle.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

__int64 __fastcall VrpTranslatePath(
        PVOID Object,
        void *a2,
        __int64 a3,
        UNICODE_STRING *a4,
        UNICODE_STRING *a5,
        _QWORD *a6,
        __int64 a7,
        int *a8,
        _DWORD *a9)
{
  int v9; // eax
  PVOID v10; // r14
  PVOID v11; // rbx
  int v12; // r12d
  UNICODE_STRING v13; // xmm0
  struct _KTHREAD *CurrentThread; // rax
  __int64 NamespaceNode; // r13
  unsigned __int64 v16; // rdi
  unsigned __int64 v17; // rcx
  wchar_t *Buffer; // r14
  __int16 v19; // r15
  NTSTATUS v20; // edi
  UNICODE_STRING v21; // xmm6
  int v22; // ecx
  int v23; // r12d
  int v24; // ecx
  int v25; // eax
  void *v26; // rdi
  int v27; // r14d
  int v28; // edx
  PVOID v29; // rax
  __int64 v30; // rsi
  wchar_t *v31; // r15
  unsigned __int16 Length; // di
  unsigned __int64 i; // rcx
  __int64 v34; // r14
  __int16 v35; // di
  unsigned __int64 v37; // [rsp+38h] [rbp-B1h] BYREF
  int v38; // [rsp+40h] [rbp-A9h]
  UNICODE_STRING v39; // [rsp+48h] [rbp-A1h] BYREF
  HANDLE KeyHandle[3]; // [rsp+58h] [rbp-91h] BYREF
  unsigned __int64 v41; // [rsp+70h] [rbp-79h] BYREF
  PVOID v42; // [rsp+78h] [rbp-71h] BYREF
  UNICODE_STRING DestinationString; // [rsp+88h] [rbp-61h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+98h] [rbp-51h] BYREF
  int v47; // [rsp+148h] [rbp+5Fh]

  v41 = 0LL;
  v9 = *(unsigned __int16 *)(a3 + 32);
  v10 = Object;
  v11 = Object;
  v12 = 0;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  memset(KeyHandle, 0, sizeof(KeyHandle));
  v47 = v9;
  LOBYTE(v38) = 0;
  v13 = *a4;
  DestinationString = 0LL;
  v39 = v13;
  while ( 1 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockSharedEx((ULONG_PTR)v11 + 16, 0LL);
    NamespaceNode = VrpFindNamespaceNode((unsigned __int64 *)v11, (__int64)&v39, 1, 0LL, &v41);
    if ( !NamespaceNode )
      break;
    v16 = v41;
    v17 = 0LL;
    v37 = 0LL;
    if ( v41 )
    {
      do
      {
        VrpGetNextToken(&v39, &v37, &KeyHandle[1]);
        --v16;
      }
      while ( v16 );
      v17 = v37;
    }
    Buffer = v39.Buffer;
    v19 = v39.Length - 2 * v17;
    KeyHandle[2] = &v39.Buffer[v17];
    LOWORD(KeyHandle[1]) = v19;
    WORD1(KeyHandle[1]) = v19;
    v20 = VrpBuildKeyPath((PCUNICODE_STRING)(NamespaceNode + 24), (PCUNICODE_STRING)&KeyHandle[1], &DestinationString);
    if ( v20 < 0 )
      goto LABEL_29;
    VrpStripTrailingCharacters(&DestinationString);
    if ( Buffer != a4->Buffer )
      ExFreePoolWithTag(Buffer, 0);
    v21 = DestinationString;
    v39 = DestinationString;
    RtlInitUnicodeString(&DestinationString, 0LL);
    v22 = *(_DWORD *)(NamespaceNode + 56);
    v23 = v22 & 4 | v12;
    if ( v11 == Object )
      v23 |= v22 & 2;
    v24 = *(unsigned __int16 *)(NamespaceNode + 64);
    v25 = v23 | 0x20000000;
    v26 = *(void **)(NamespaceNode + 16);
    if ( v19 )
      v25 = v23;
    v27 = (unsigned __int8)v38;
    v12 = v25;
    if ( v47 < v24 )
      v27 = 1;
    v28 = *(unsigned __int16 *)(NamespaceNode + 66) - v24 + v47;
    v38 = v27;
    v47 = v28;
    if ( !v26 )
    {
      if ( a6 )
      {
        if ( !(_BYTE)v27 )
        {
          ObfReferenceObject(a2);
          v29 = a2;
          goto LABEL_19;
        }
        ObjectAttributes.Length = 48;
        ObjectAttributes.ObjectName = (PUNICODE_STRING)(NamespaceNode + 24);
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.Attributes = 576;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        v20 = ZwOpenKey(KeyHandle, 0x80000000, &ObjectAttributes);
        if ( v20 < 0
          || (v42 = 0LL,
              v20 = ObReferenceObjectByHandle(KeyHandle[0], 0, (POBJECT_TYPE)CmKeyObjectType, 0, &v42, 0LL),
              v29 = v42,
              v20 < 0) )
        {
LABEL_29:
          v10 = Object;
          goto LABEL_30;
        }
LABEL_19:
        v28 = v47;
        *a6 = v29;
      }
      v30 = a7;
      if ( a7 )
      {
        v31 = v39.Buffer;
        Length = v39.Length;
        if ( (_BYTE)v27 )
        {
          for ( i = (unsigned __int64)*(unsigned __int16 *)(NamespaceNode + 24) >> 1; ; ++i )
          {
            v37 = i;
            if ( 2 * i >= v39.Length || v39.Buffer[i] != 92 )
              break;
          }
        }
        else
        {
          v37 = 0LL;
          i = 0LL;
          v34 = 0LL;
          if ( v28 > 0 )
          {
            do
            {
              VrpGetNextToken(&v39, &v37, &KeyHandle[1]);
              ++v34;
            }
            while ( (int)v34 < v47 );
            i = v37;
            v30 = a7;
            v31 = v39.Buffer;
          }
        }
        v35 = Length - 2 * i;
        *(_QWORD *)(v30 + 8) = &v31[i];
        *(_WORD *)v30 = v35;
        *(_WORD *)(v30 + 2) = v35;
      }
      if ( a8 )
        *a8 = v12;
      *a9 = *(_DWORD *)(NamespaceNode + 60);
      *a5 = v21;
      RtlInitUnicodeString(&v39, 0LL);
      v20 = 0;
      goto LABEL_29;
    }
    ObfReferenceObjectWithTag(v26, 0x67655256u);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v11 + 2, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)v11 + 2);
    KeAbPostRelease((ULONG_PTR)v11 + 16);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v10 = Object;
    if ( v11 != Object )
      ObfDereferenceObjectWithTag(v11, 0x67655256u);
    v11 = v26;
  }
  v20 = -1073741772;
LABEL_30:
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v11 + 2, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)v11 + 2);
  KeAbPostRelease((ULONG_PTR)v11 + 16);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( v11 && v11 != v10 )
    ObfDereferenceObjectWithTag(v11, 0x67655256u);
  if ( v39.Buffer && v39.Buffer != a4->Buffer )
    ExFreePoolWithTag(v39.Buffer, 0);
  if ( KeyHandle[0] )
    ZwClose(KeyHandle[0]);
  return (unsigned int)v20;
}
