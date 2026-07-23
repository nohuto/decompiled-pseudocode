/*
 * XREFs of EtwQueryProcessTelemetryInfo @ 0x1406A0CC4
 * Callers:
 *     NtQueryInformationProcess @ 0x14068AF10 (NtQueryInformationProcess.c)
 * Callees:
 *     PsGetProcessStartKey @ 0x14023F080 (PsGetProcessStartKey.c)
 *     ExReleaseRundownProtection @ 0x14026A490 (ExReleaseRundownProtection.c)
 *     ObFastDereferenceObject @ 0x14026A5B0 (ObFastDereferenceObject.c)
 *     KiStackAttachProcess @ 0x14027D850 (KiStackAttachProcess.c)
 *     PsGetProcessSessionId @ 0x140285D20 (PsGetProcessSessionId.c)
 *     KiUnstackDetachProcess @ 0x1402AB900 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     ProbeForWrite @ 0x1406495C0 (ProbeForWrite.c)
 *     MmGetSessionCreateTime @ 0x1406A102C (MmGetSessionCreateTime.c)
 *     PsAcquireProcessExitSynchronization @ 0x1406A1060 (PsAcquireProcessExitSynchronization.c)
 *     EtwpQueryTokenPackageInfo @ 0x1406F1B5C (EtwpQueryTokenPackageInfo.c)
 *     EtwpQueryProcessOtherInfo @ 0x1406F2088 (EtwpQueryProcessOtherInfo.c)
 *     EtwpQueryProcessCommandLine @ 0x1406F20C8 (EtwpQueryProcessCommandLine.c)
 *     PsReferencePrimaryToken @ 0x14071E0E0 (PsReferencePrimaryToken.c)
 *     SeQueryUserSidToken @ 0x14071E204 (SeQueryUserSidToken.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
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
  unsigned __int16 *v14; // rbx
  char *v15; // rbx
  char *v16; // rbx
  char *v17; // rbx
  __int64 v20; // [rsp+30h] [rbp-2A8h] BYREF
  PVOID P[2]; // [rsp+38h] [rbp-2A0h] BYREF
  unsigned int *v22; // [rsp+48h] [rbp-290h]
  const void **v23; // [rsp+50h] [rbp-288h]
  struct _DMA_ADAPTER *v24; // [rsp+58h] [rbp-280h]
  __int64 v25; // [rsp+60h] [rbp-278h]
  size_t PackageSize[52]; // [rsp+70h] [rbp-268h] BYREF
  _OWORD v27[3]; // [rsp+210h] [rbp-C8h] BYREF
  _BYTE Src[80]; // [rsp+240h] [rbp-98h] BYREF

  v5 = (unsigned int)Length;
  v25 = BugCheckParameter1;
  v22 = a5;
  memset(v27, 0, sizeof(v27));
  memset(PackageSize, 0, 0x198uLL);
  memset(Src, 0, 0x44uLL);
  *(_OWORD *)P = 0LL;
  v8 = 0;
  v20 = 0LL;
  v9 = &EmptyUnicodeString;
  if ( *(_QWORD *)(BugCheckParameter1 + 1472) )
    v9 = *(__int64 **)(BugCheckParameter1 + 1472);
  v23 = (const void **)v9;
  v10 = (struct _DMA_ADAPTER *)PsReferencePrimaryToken((PEPROCESS)BugCheckParameter1);
  v24 = v10;
  EtwpQueryTokenPackageInfo(v10, PackageSize);
  UserSidToken = SeQueryUserSidToken(v10, Src, 68LL);
  if ( UserSidToken >= 0 )
  {
    if ( (int)PsAcquireProcessExitSynchronization(BugCheckParameter1) >= 0 )
    {
      KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v27);
      EtwpQueryProcessOtherInfo(BugCheckParameter1, &v20);
      EtwpQueryProcessCommandLine(BugCheckParameter1, P);
      KiUnstackDetachProcess((__int64)v27, 0LL);
      ExReleaseRundownProtection((PEX_RUNDOWN_REF)(BugCheckParameter1 + 1112));
      v8 = v20;
    }
    v12 = LODWORD(PackageSize[0]) + LODWORD(PackageSize[1]) + *(unsigned __int16 *)v9 + LOWORD(P[0]) + 100;
    v13 = v12;
    if ( v22 )
      *v22 = v12;
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
      *((_QWORD *)Address + 6) = MmGetSessionCreateTime();
      *((_DWORD *)Address + 14) = PsGetProcessSessionId(BugCheckParameter1);
      *((_DWORD *)Address + 15) = MEMORY[0xFFFFF780000002C4];
      *((_DWORD *)Address + 16) = v8;
      *((_DWORD *)Address + 17) = HIDWORD(v20);
      if ( (unsigned int)v5 >= v12 )
      {
        *((_DWORD *)Address + 18) = 96;
        memmove(Address + 96, Src, 0LL);
        *((_DWORD *)Address + 19) = 96;
        v14 = (unsigned __int16 *)v23;
        memmove(Address + 96, v23[1], *(unsigned __int16 *)v23);
        v15 = &Address[*v14 + 98];
        *((_DWORD *)Address + 20) = (_DWORD)v15 - (_DWORD)Address;
        memmove(v15, &PackageSize[2], PackageSize[0]);
        v16 = &v15[PackageSize[0]];
        *((_DWORD *)Address + 21) = (_DWORD)v16 - (_DWORD)Address;
        memmove(v16, &PackageSize[34], PackageSize[1]);
        v17 = &v16[PackageSize[1]];
        *((_DWORD *)Address + 22) = (_DWORD)v17 - (_DWORD)Address;
        memmove(v17, P[1], LOWORD(P[0]));
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
