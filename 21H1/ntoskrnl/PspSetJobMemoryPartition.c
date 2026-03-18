/*
 * XREFs of PspSetJobMemoryPartition @ 0x140904E8C
 * Callers:
 *     NtSetInformationJobObject @ 0x140660620 (NtSetInformationJobObject.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14025A2D0 (ObfReferenceObjectWithTag.c)
 *     ExReleaseResourceLite @ 0x140261460 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x140261C10 (ExAcquireResourceExclusiveLite.c)
 *     PsDereferencePartition @ 0x1402D4730 (PsDereferencePartition.c)
 *     PsIsServerSilo @ 0x1402D9650 (PsIsServerSilo.c)
 *     PsReferencePartitionByHandle @ 0x1406624C4 (PsReferencePartitionByHandle.c)
 *     PsAssignProcessToJobObject @ 0x140674EF0 (PsAssignProcessToJobObject.c)
 *     PspConvertJobToMixed @ 0x140904604 (PspConvertJobToMixed.c)
 */

__int64 __fastcall PspSetJobMemoryPartition(char *Object, char a2, ULONG_PTR a3)
{
  char v4; // r14
  int v5; // ebx
  __int64 v6; // rcx
  volatile signed __int32 *v7; // rdi
  PVOID Objecta; // [rsp+68h] [rbp+20h] BYREF

  Objecta = 0LL;
  v4 = 0;
  v5 = PsReferencePartitionByHandle(a3, 1LL, a2, 0x624A7350u, &Objecta);
  if ( v5 < 0 )
    goto LABEL_13;
  if ( _interlockedbittestandset((volatile signed __int32 *)Objecta + 30, 0) )
  {
    v5 = -1073741637;
LABEL_13:
    v7 = (volatile signed __int32 *)Objecta;
    goto LABEL_14;
  }
  v4 = 1;
  ExAcquireResourceExclusiveLite((PERESOURCE)(Object + 56), 1u);
  if ( PsIsServerSilo((__int64)Object)
    || *((_QWORD *)Object + 195)
    || *((char **)Object + 132) != Object + 1056
    || *((_DWORD *)Object + 54) )
  {
    v5 = -1073741637;
    goto LABEL_12;
  }
  v5 = PspConvertJobToMixed(v6, 1);
  if ( v5 < 0 )
  {
LABEL_12:
    ExReleaseResourceLite((PERESOURCE)(Object + 56));
    goto LABEL_13;
  }
  *((_QWORD *)Object + 195) = -1LL;
  ExReleaseResourceLite((PERESOURCE)(Object + 56));
  v7 = (volatile signed __int32 *)Objecta;
  v5 = PsAssignProcessToJobObject(Object, *((PEPROCESS *)Objecta + 13), 0LL);
  if ( v5 >= 0 )
  {
    ObfReferenceObjectWithTag((PVOID)v7, 0x624A7350u);
    ExAcquireResourceExclusiveLite((PERESOURCE)(Object + 56), 1u);
    *((_QWORD *)Object + 195) = v7;
    *((_QWORD *)Object + 196) = Object;
    ExReleaseResourceLite((PERESOURCE)(Object + 56));
    v4 = 0;
    v5 = 0;
  }
LABEL_14:
  if ( v7 )
  {
    if ( *((_QWORD *)Object + 195) == -1LL )
      *((_QWORD *)Object + 195) = 0LL;
    if ( v4 )
    {
      _interlockedbittestandreset(v7 + 30, 0);
      v7 = (volatile signed __int32 *)Objecta;
    }
    PsDereferencePartition((__int64)v7);
  }
  return (unsigned int)v5;
}
