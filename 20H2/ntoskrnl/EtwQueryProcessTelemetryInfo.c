/*
 * XREFs of EtwQueryProcessTelemetryInfo @ 0x140651684
 * Callers:
 *     NtQueryInformationProcess @ 0x140636B80 (NtQueryInformationProcess.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140210D20 (ExReleaseRundownProtection_0.c)
 *     ObFastDereferenceObject @ 0x140210E40 (ObFastDereferenceObject.c)
 *     PsGetProcessSessionId @ 0x140244CC0 (PsGetProcessSessionId.c)
 *     PsGetProcessStartKey @ 0x140245DD0 (PsGetProcessStartKey.c)
 *     KiUnstackDetachProcess @ 0x140268320 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402D6FA0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     memmove @ 0x140411040 (memmove.c)
 *     memset @ 0x140411300 (memset.c)
 *     ProbeForWrite @ 0x14060B790 (ProbeForWrite.c)
 *     EtwpQueryProcessCommandLine @ 0x140632B5C (EtwpQueryProcessCommandLine.c)
 *     EtwpQueryProcessOtherInfo @ 0x140632CF8 (EtwpQueryProcessOtherInfo.c)
 *     EtwpQueryTokenPackageInfo @ 0x140633974 (EtwpQueryTokenPackageInfo.c)
 *     PsAcquireProcessExitSynchronization @ 0x140651630 (PsAcquireProcessExitSynchronization.c)
 *     MmGetSessionCreateTime @ 0x140651658 (MmGetSessionCreateTime.c)
 *     SeQueryUserSidToken @ 0x140656B0C (SeQueryUserSidToken.c)
 *     PsReferencePrimaryToken @ 0x14067EEB0 (PsReferencePrimaryToken.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
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
  int UserSidToken; // edi
  unsigned int v12; // edi
  unsigned int v13; // r13d
  __int64 v14; // rcx
  unsigned __int16 *v15; // rbx
  char *v16; // rbx
  char *v17; // rbx
  char *v18; // rbx
  int v21; // [rsp+2Ch] [rbp-2ACh] BYREF
  __int64 v22; // [rsp+30h] [rbp-2A8h] BYREF
  PVOID P[2]; // [rsp+38h] [rbp-2A0h] BYREF
  unsigned int *v24; // [rsp+48h] [rbp-290h]
  const void **v25; // [rsp+50h] [rbp-288h]
  struct _DMA_ADAPTER *v26; // [rsp+58h] [rbp-280h]
  __int64 v27; // [rsp+60h] [rbp-278h]
  size_t PackageSize[52]; // [rsp+70h] [rbp-268h] BYREF
  _OWORD v29[3]; // [rsp+210h] [rbp-C8h] BYREF
  _BYTE Src[80]; // [rsp+240h] [rbp-98h] BYREF

  v5 = (unsigned int)Length;
  v27 = BugCheckParameter1;
  v24 = a5;
  memset(v29, 0, sizeof(v29));
  memset(PackageSize, 0, 0x198uLL);
  memset(Src, 0, 0x44uLL);
  *(_OWORD *)P = 0LL;
  v8 = 0;
  v22 = 0LL;
  v9 = &EmptyUnicodeString;
  if ( *(_QWORD *)(BugCheckParameter1 + 1472) )
    v9 = *(__int64 **)(BugCheckParameter1 + 1472);
  v25 = (const void **)v9;
  v10 = (struct _DMA_ADAPTER *)PsReferencePrimaryToken((PEPROCESS)BugCheckParameter1);
  v26 = v10;
  v21 = 0;
  EtwpQueryTokenPackageInfo(v10, (WCHAR *)PackageSize, &v21);
  UserSidToken = SeQueryUserSidToken(v10, Src, 68LL);
  if ( UserSidToken >= 0 )
  {
    if ( (int)PsAcquireProcessExitSynchronization((struct _EX_RUNDOWN_REF *)BugCheckParameter1) >= 0 )
    {
      KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v29);
      EtwpQueryProcessOtherInfo(BugCheckParameter1, (__int64)&v22);
      EtwpQueryProcessCommandLine(BugCheckParameter1, (__int64)P);
      KiUnstackDetachProcess((__int64)v29, 0);
      ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(BugCheckParameter1 + 1112));
      v8 = v22;
    }
    v12 = LODWORD(PackageSize[0]) + LODWORD(PackageSize[1]) + *(unsigned __int16 *)v9 + LOWORD(P[0]) + 100;
    v13 = v12;
    if ( v24 )
      *v24 = v12;
    if ( a4 )
      ProbeForWrite(Address, v5, 4u);
    if ( v12 >= (unsigned int)v5 )
      v13 = v5;
    memset(Address, 0, v13);
    if ( (unsigned int)v5 < 0x60 )
    {
      UserSidToken = -1073741820;
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
      *((_QWORD *)Address + 6) = MmGetSessionCreateTime(v14);
      *((_DWORD *)Address + 14) = PsGetProcessSessionId(BugCheckParameter1);
      *((_DWORD *)Address + 15) = MEMORY[0xFFFFF780000002C4];
      *((_DWORD *)Address + 16) = v8;
      *((_DWORD *)Address + 17) = HIDWORD(v22);
      if ( (unsigned int)v5 >= v12 )
      {
        *((_DWORD *)Address + 18) = 96;
        memmove(Address + 96, Src, 0LL);
        *((_DWORD *)Address + 19) = 96;
        v15 = (unsigned __int16 *)v25;
        memmove(Address + 96, v25[1], *(unsigned __int16 *)v25);
        v16 = &Address[*v15 + 98];
        *((_DWORD *)Address + 20) = (_DWORD)v16 - (_DWORD)Address;
        memmove(v16, &PackageSize[2], PackageSize[0]);
        v17 = &v16[PackageSize[0]];
        *((_DWORD *)Address + 21) = (_DWORD)v17 - (_DWORD)Address;
        memmove(v17, &PackageSize[34], PackageSize[1]);
        v18 = &v17[PackageSize[1]];
        *((_DWORD *)Address + 22) = (_DWORD)v18 - (_DWORD)Address;
        memmove(v18, P[1], LOWORD(P[0]));
        UserSidToken = 0;
      }
      else
      {
        UserSidToken = -2147483643;
      }
    }
  }
  if ( P[1] )
    ExFreePoolWithTag(P[1], 0);
  if ( v10 )
    ObFastDereferenceObject((signed __int64 *)(BugCheckParameter1 + 1208), v10);
  return (unsigned int)UserSidToken;
}
