/*
 * XREFs of EtwQueryProcessTelemetryInfo @ 0x140666164
 * Callers:
 *     NtQueryInformationProcess @ 0x1405DBB20 (NtQueryInformationProcess.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140206420 (ExReleaseRundownProtection_0.c)
 *     ObFastDereferenceObject @ 0x140206540 (ObFastDereferenceObject.c)
 *     KiUnstackDetachProcess @ 0x14025E290 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402A88C0 (KiStackAttachProcess.c)
 *     PsGetProcessSessionId @ 0x1402D5FA0 (PsGetProcessSessionId.c)
 *     PsGetProcessStartKey @ 0x1402D7050 (PsGetProcessStartKey.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     memset @ 0x140408F80 (memset.c)
 *     EtwpQueryProcessCommandLine @ 0x1405D8DCC (EtwpQueryProcessCommandLine.c)
 *     EtwpQueryProcessOtherInfo @ 0x1405D8F68 (EtwpQueryProcessOtherInfo.c)
 *     EtwpQueryTokenPackageInfo @ 0x1405D92C0 (EtwpQueryTokenPackageInfo.c)
 *     PsReferencePrimaryToken @ 0x1405E13A0 (PsReferencePrimaryToken.c)
 *     ProbeForWrite @ 0x1405E9480 (ProbeForWrite.c)
 *     PsAcquireProcessExitSynchronization @ 0x140666110 (PsAcquireProcessExitSynchronization.c)
 *     MmGetSessionCreateTime @ 0x140666138 (MmGetSessionCreateTime.c)
 *     SeQueryUserSidToken @ 0x14066B11C (SeQueryUserSidToken.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwQueryProcessTelemetryInfo(
        __int64 BugCheckParameter1,
        char *Address,
        SIZE_T Length,
        char a4,
        unsigned int *a5)
{
  SIZE_T v5; // r15
  int v8; // ebx
  __int64 *v9; // r13
  struct _DMA_ADAPTER *v10; // r12
  int v11; // edi
  _DWORD *v12; // r9
  __int64 v13; // r8
  _DWORD *v14; // r9
  unsigned int v15; // edi
  unsigned int v16; // r13d
  __int64 v17; // rcx
  __int64 v18; // rbx
  char *v19; // rdi
  unsigned __int16 *v20; // rbx
  char *v21; // rbx
  char *v22; // rbx
  char *v23; // rbx
  unsigned int Size; // [rsp+24h] [rbp-2B4h] BYREF
  int Size_4; // [rsp+28h] [rbp-2B0h]
  int v28; // [rsp+2Ch] [rbp-2ACh] BYREF
  __int64 v29; // [rsp+30h] [rbp-2A8h] BYREF
  PVOID P[2]; // [rsp+38h] [rbp-2A0h] BYREF
  unsigned int *v31; // [rsp+48h] [rbp-290h]
  const void **v32; // [rsp+50h] [rbp-288h]
  struct _DMA_ADAPTER *v33; // [rsp+58h] [rbp-280h]
  __int64 v34; // [rsp+60h] [rbp-278h]
  size_t PackageSize[52]; // [rsp+70h] [rbp-268h] BYREF
  _OWORD v36[3]; // [rsp+210h] [rbp-C8h] BYREF
  _BYTE Src[80]; // [rsp+240h] [rbp-98h] BYREF

  v5 = (unsigned int)Length;
  v34 = BugCheckParameter1;
  v31 = a5;
  memset(v36, 0, sizeof(v36));
  memset(PackageSize, 0, 0x198uLL);
  memset(Src, 0, 0x44uLL);
  Size = 0;
  *(_OWORD *)P = 0LL;
  v8 = 0;
  v29 = 0LL;
  v9 = &EmptyUnicodeString;
  if ( *(_QWORD *)(BugCheckParameter1 + 1472) )
    v9 = *(__int64 **)(BugCheckParameter1 + 1472);
  v32 = (const void **)v9;
  v10 = (struct _DMA_ADAPTER *)PsReferencePrimaryToken((PEPROCESS)BugCheckParameter1);
  v33 = v10;
  v28 = 0;
  EtwpQueryTokenPackageInfo(v10, (WCHAR *)PackageSize, &v28);
  v11 = SeQueryUserSidToken(v10, Src, 68LL, &Size);
  if ( v11 >= 0 )
  {
    if ( (int)PsAcquireProcessExitSynchronization((struct _EX_RUNDOWN_REF *)BugCheckParameter1) >= 0 )
    {
      KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0LL, (__int64)v36, v12);
      EtwpQueryProcessOtherInfo(BugCheckParameter1, (__int64)&v29);
      EtwpQueryProcessCommandLine(BugCheckParameter1, (__int64)P);
      KiUnstackDetachProcess((__int64)v36, 0LL, v13, v14);
      ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(BugCheckParameter1 + 1112));
      v8 = v29;
    }
    v15 = Size + 100 + LODWORD(PackageSize[0]) + LODWORD(PackageSize[1]) + *(unsigned __int16 *)v9 + LOWORD(P[0]);
    v16 = v15;
    if ( v31 )
      *v31 = v15;
    if ( a4 )
      ProbeForWrite(Address, v5, 4u);
    if ( v15 >= (unsigned int)v5 )
      v16 = v5;
    memset(Address, 0, v16);
    if ( (unsigned int)v5 < 0x60 )
    {
      v11 = -1073741820;
      Size_4 = -1073741820;
    }
    else
    {
      *(_DWORD *)Address = 96;
      *((_DWORD *)Address + 1) = *(_DWORD *)(BugCheckParameter1 + 1088);
      *((_QWORD *)Address + 1) = PsGetProcessStartKey(BugCheckParameter1);
      *((_QWORD *)Address + 2) = *(_QWORD *)(BugCheckParameter1 + 1128);
      *((_QWORD *)Address + 3) = *(_QWORD *)(BugCheckParameter1 + 2304);
      *((_QWORD *)Address + 4) = *(_QWORD *)(BugCheckParameter1 + 2312);
      *((_QWORD *)Address + 5) = *(_QWORD *)(BugCheckParameter1 + 2296);
      *((_QWORD *)Address + 6) = MmGetSessionCreateTime(v17);
      *((_DWORD *)Address + 14) = PsGetProcessSessionId(BugCheckParameter1);
      *((_DWORD *)Address + 15) = MEMORY[0xFFFFF780000002C4];
      *((_DWORD *)Address + 16) = v8;
      *((_DWORD *)Address + 17) = HIDWORD(v29);
      if ( (unsigned int)v5 >= v15 )
      {
        *((_DWORD *)Address + 18) = 96;
        v18 = Size;
        memmove(Address + 96, Src, Size);
        v19 = &Address[v18 + 96];
        *((_DWORD *)Address + 19) = v18 + 96;
        v20 = (unsigned __int16 *)v32;
        memmove(v19, v32[1], *(unsigned __int16 *)v32);
        v21 = &v19[*v20 + 2];
        *((_DWORD *)Address + 20) = (_DWORD)v21 - (_DWORD)Address;
        memmove(v21, &PackageSize[2], PackageSize[0]);
        v22 = &v21[PackageSize[0]];
        *((_DWORD *)Address + 21) = (_DWORD)v22 - (_DWORD)Address;
        memmove(v22, &PackageSize[34], PackageSize[1]);
        v23 = &v22[PackageSize[1]];
        *((_DWORD *)Address + 22) = (_DWORD)v23 - (_DWORD)Address;
        memmove(v23, P[1], LOWORD(P[0]));
        v11 = 0;
      }
      else
      {
        v11 = -2147483643;
        Size_4 = -2147483643;
      }
    }
  }
  if ( P[1] )
    ExFreePoolWithTag(P[1], 0);
  if ( v10 )
    ObFastDereferenceObject((signed __int64 *)(BugCheckParameter1 + 1208), v10);
  return (unsigned int)v11;
}
