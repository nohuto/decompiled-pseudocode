/*
 * XREFs of EtwpBuildProcessEvent @ 0x1405D8FA8
 * Callers:
 *     EtwpWriteProcessEvent @ 0x1405D85C4 (EtwpWriteProcessEvent.c)
 *     EtwpTraceProcessRundown @ 0x14078073C (EtwpTraceProcessRundown.c)
 * Callees:
 *     RtlInitAnsiString @ 0x140203280 (RtlInitAnsiString.c)
 *     ObFastDereferenceObject @ 0x140206540 (ObFastDereferenceObject.c)
 *     MmGetSessionIdEx @ 0x140260EB0 (MmGetSessionIdEx.c)
 *     EtwpQueryProcessCommandLine @ 0x1405D8DCC (EtwpQueryProcessCommandLine.c)
 *     EtwpQueryProcessOtherInfo @ 0x1405D8F68 (EtwpQueryProcessOtherInfo.c)
 *     EtwpQueryTokenPackageInfo @ 0x1405D92C0 (EtwpQueryTokenPackageInfo.c)
 *     PsReferencePrimaryToken @ 0x1405E13A0 (PsReferencePrimaryToken.c)
 *     SeQueryInformationToken @ 0x1405E9F20 (SeQueryInformationToken.c)
 *     RtlUnicodeStringToAnsiString @ 0x14061B5F0 (RtlUnicodeStringToAnsiString.c)
 */

unsigned int *__fastcall EtwpBuildProcessEvent(
        PEPROCESS Process,
        __int16 a2,
        char a3,
        __int64 a4,
        _QWORD *a5,
        __int64 a6,
        unsigned int *a7,
        ULONG_PTR *PackageSize,
        PSTRING DestinationString,
        unsigned __int16 *a10,
        PVOID *a11)
{
  PSTRING v11; // r15
  PVOID *v14; // r13
  int v15; // eax
  int *v16; // r12
  unsigned int v17; // ebp
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rax
  int v20; // ecx
  int v21; // eax
  __int64 v22; // rsi
  struct _DMA_ADAPTER *v23; // rax
  ULONG_PTR *v24; // r12
  struct _DMA_ADAPTER *v25; // rdi
  NTSTATUS v26; // ebx
  __int64 *v27; // rdx
  int v28; // ecx
  volatile _KAFFINITY_EX *p_ActiveProcessors; // rbx
  __int64 Length; // rdi
  char v31; // di
  unsigned __int16 *v32; // rbx
  int v33; // ecx
  __int64 v34; // rax
  __int64 v35; // rdx
  unsigned int v36; // ebp
  int v37; // ecx
  unsigned int v38; // ecx
  __int64 v39; // rdx
  unsigned int v40; // ebp
  unsigned int *result; // rax
  const UNICODE_STRING *v42; // rdx
  char *Buffer; // rcx
  __int16 v44; // ax
  __int64 v45; // rcx
  PVOID TokenInformation; // [rsp+60h] [rbp+8h] BYREF
  __int16 v47; // [rsp+68h] [rbp+10h]
  char v48; // [rsp+70h] [rbp+18h]

  v48 = a3;
  v47 = a2;
  v11 = DestinationString;
  TokenInformation = 0LL;
  RtlInitAnsiString(DestinationString, 0LL);
  v14 = a11;
  *(_QWORD *)a4 = Process;
  *(_DWORD *)(a4 + 8) = Process[1].Header.WaitListHead.Flink;
  v15 = Process[1].AffinityPadding[2];
  *v14 = 0LL;
  *(_DWORD *)(a4 + 12) = v15;
  *(_DWORD *)(a4 + 16) = MmGetSessionIdEx((__int64)Process);
  v16 = (int *)(a4 + 32);
  v17 = 4;
  *(_DWORD *)(a4 + 20) = *(_DWORD *)&Process[1].Spare2[11];
  v18 = Process->DirectoryTableBase & 0xFFFFFFFFFFFFF000uLL;
  *(_DWORD *)(a4 + 32) = 0;
  *(_QWORD *)(a4 + 24) = v18;
  v19 = Process[1].AffinityPadding[10];
  if ( v19 && ((v44 = *(_WORD *)(v19 + 8), v44 == 332) || v44 == 452) )
  {
    *v16 = 2;
    v20 = 6;
  }
  else
  {
    v20 = 4;
  }
  v21 = *v16;
  v22 = a6;
  if ( (BYTE2(Process[2].Header.WaitListHead.Flink) & 7) != 0 )
    v21 = v20;
  *v16 = v21;
  *(_QWORD *)v22 = a4;
  *(_QWORD *)(v22 + 8) = 36LL;
  v23 = (struct _DMA_ADAPTER *)PsReferencePrimaryToken(Process);
  v24 = PackageSize;
  v25 = v23;
  EtwpQueryTokenPackageInfo(v23, PackageSize);
  v26 = SeQueryInformationToken(v25, TokenUser, &TokenInformation);
  ObFastDereferenceObject((signed __int64 *)&Process[1].Affinity.Bitmap[5], v25);
  if ( v26 < 0 )
  {
    v28 = 4;
    TokenInformation = &EtwpNull;
    v27 = &EtwpNull;
  }
  else
  {
    v27 = (__int64 *)TokenInformation;
    *v14 = TokenInformation;
    v28 = 4 * *(unsigned __int8 *)(*v27 + 1) + 24;
  }
  *(_QWORD *)(v22 + 16) = v27;
  *(_DWORD *)(v22 + 28) = 0;
  p_ActiveProcessors = &Process[1].ActiveProcessors;
  Length = -1LL;
  *(_DWORD *)(v22 + 24) = v28;
  do
    ++Length;
  while ( *((_BYTE *)&p_ActiveProcessors->Count + Length) );
  if ( (_DWORD)Length == 14 )
  {
    v42 = (const UNICODE_STRING *)Process[1].ActiveProcessors.Bitmap[2];
    if ( v42 )
    {
      if ( v42->Length && RtlUnicodeStringToAnsiString(v11, v42, 1u) >= 0 )
      {
        Length = v11->Length;
        Buffer = v11->Buffer;
        p_ActiveProcessors = (volatile _KAFFINITY_EX *)&Buffer[Length];
        while ( p_ActiveProcessors != (volatile _KAFFINITY_EX *)Buffer )
        {
          p_ActiveProcessors = (volatile _KAFFINITY_EX *)((char *)p_ActiveProcessors - 1);
          if ( LOBYTE(p_ActiveProcessors->Count) == 92 )
          {
            p_ActiveProcessors = (volatile _KAFFINITY_EX *)((char *)p_ActiveProcessors + 1);
            break;
          }
        }
        LODWORD(Length) = (_DWORD)Buffer - (_DWORD)p_ActiveProcessors + Length;
      }
    }
  }
  *(_DWORD *)(v22 + 40) = Length;
  v31 = v48;
  *(_QWORD *)(v22 + 32) = p_ActiveProcessors;
  *(_DWORD *)(v22 + 44) = 0;
  *(_QWORD *)(v22 + 48) = &EtwpNull;
  *(_QWORD *)(v22 + 56) = 1LL;
  if ( v31 )
    EtwpQueryProcessOtherInfo((__int64)Process, (__int64)a5);
  else
    *a5 = 0LL;
  v32 = a10;
  *a10 = 0;
  if ( Process[1].AffinityPadding[4] )
  {
    if ( v31 )
    {
      EtwpQueryProcessCommandLine((__int64)Process, (__int64)v32);
      v33 = *v32;
      if ( (_WORD)v33 )
      {
        v17 = 5;
        *(_QWORD *)(v22 + 64) = *((_QWORD *)v32 + 1);
        *(_DWORD *)(v22 + 72) = v33;
        *(_DWORD *)(v22 + 76) = 0;
      }
    }
  }
  v34 = 2LL * v17;
  v35 = v17 + 1;
  v36 = v17 + 2;
  v35 *= 2LL;
  *(_QWORD *)(v22 + 8 * v34) = &EtwpNull;
  *(_QWORD *)(v22 + 8 * v34 + 8) = 2LL;
  v37 = *(_DWORD *)v24;
  *(_QWORD *)(v22 + 8 * v35) = v24 + 2;
  *(_DWORD *)(v22 + 8 * v35 + 8) = v37;
  *(_DWORD *)(v22 + 8 * v35 + 12) = 0;
  v38 = *((_DWORD *)v24 + 2);
  v39 = v36;
  v40 = v36 + 1;
  v39 *= 2LL;
  *(_QWORD *)(v22 + 8 * v39) = v24 + 34;
  *(_QWORD *)(v22 + 8 * v39 + 8) = v38;
  if ( v47 == 807 )
  {
    v45 = 2LL * v40++;
    *(_QWORD *)(v22 + 8 * v45) = (char *)Process + 2112;
    *(_QWORD *)(v22 + 8 * v45 + 8) = 8LL;
  }
  result = a7;
  *a7 = v40;
  return result;
}
