/*
 * XREFs of EtwQueryProcessTelemetryInfo @ 0x140620A44
 * Callers:
 *     NtQueryInformationProcess @ 0x140661E20 (NtQueryInformationProcess.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140205370 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14024F890 (KiStackAttachProcess.c)
 *     PsGetProcessSessionId @ 0x14026C600 (PsGetProcessSessionId.c)
 *     PsGetProcessStartKey @ 0x14026D6B0 (PsGetProcessStartKey.c)
 *     ExReleaseRundownProtection_0 @ 0x140298F30 (ExReleaseRundownProtection_0.c)
 *     ObFastDereferenceObject @ 0x140299050 (ObFastDereferenceObject.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     memmove @ 0x140409FC0 (memmove.c)
 *     memset @ 0x14040A280 (memset.c)
 *     PsAcquireProcessExitSynchronization @ 0x1406209F0 (PsAcquireProcessExitSynchronization.c)
 *     MmGetSessionCreateTime @ 0x140620A18 (MmGetSessionCreateTime.c)
 *     SeQueryUserSidToken @ 0x1406259FC (SeQueryUserSidToken.c)
 *     EtwpQueryProcessCommandLine @ 0x14065F0CC (EtwpQueryProcessCommandLine.c)
 *     EtwpQueryProcessOtherInfo @ 0x14065F268 (EtwpQueryProcessOtherInfo.c)
 *     EtwpQueryTokenPackageInfo @ 0x14065F5C0 (EtwpQueryTokenPackageInfo.c)
 *     PsReferencePrimaryToken @ 0x1406676A0 (PsReferencePrimaryToken.c)
 *     ProbeForWrite @ 0x1406929C0 (ProbeForWrite.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
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
  unsigned int v12; // edi
  unsigned int v13; // r13d
  __int64 v14; // rcx
  __int64 v15; // rbx
  char *v16; // rdi
  unsigned __int16 *v17; // rbx
  char *v18; // rbx
  char *v19; // rbx
  char *v20; // rbx
  unsigned int Size; // [rsp+24h] [rbp-2B4h] BYREF
  int Size_4; // [rsp+28h] [rbp-2B0h]
  int v25; // [rsp+2Ch] [rbp-2ACh]
  __int64 v26; // [rsp+30h] [rbp-2A8h] BYREF
  PVOID P[2]; // [rsp+38h] [rbp-2A0h] BYREF
  unsigned int *v28; // [rsp+48h] [rbp-290h]
  const void **v29; // [rsp+50h] [rbp-288h]
  struct _DMA_ADAPTER *v30; // [rsp+58h] [rbp-280h]
  __int64 v31; // [rsp+60h] [rbp-278h]
  size_t PackageSize[52]; // [rsp+70h] [rbp-268h] BYREF
  _OWORD v33[3]; // [rsp+210h] [rbp-C8h] BYREF
  _BYTE Src[80]; // [rsp+240h] [rbp-98h] BYREF

  v5 = (unsigned int)Length;
  v31 = BugCheckParameter1;
  v28 = a5;
  memset(v33, 0, sizeof(v33));
  memset(PackageSize, 0, 0x198uLL);
  memset(Src, 0, 0x44uLL);
  Size = 0;
  *(_OWORD *)P = 0LL;
  v8 = 0;
  v26 = 0LL;
  v9 = &EmptyUnicodeString;
  if ( *(_QWORD *)(BugCheckParameter1 + 1472) )
    v9 = *(__int64 **)(BugCheckParameter1 + 1472);
  v29 = (const void **)v9;
  v10 = (struct _DMA_ADAPTER *)PsReferencePrimaryToken((PEPROCESS)BugCheckParameter1);
  v30 = v10;
  v25 = 0;
  EtwpQueryTokenPackageInfo(v10, PackageSize);
  v11 = SeQueryUserSidToken(v10, Src, 68LL, &Size);
  if ( v11 >= 0 )
  {
    if ( (int)PsAcquireProcessExitSynchronization((struct _EX_RUNDOWN_REF *)BugCheckParameter1) >= 0 )
    {
      KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0LL, (__int64)v33);
      EtwpQueryProcessOtherInfo(BugCheckParameter1, &v26);
      EtwpQueryProcessCommandLine(BugCheckParameter1, P);
      KiUnstackDetachProcess((__int64)v33, 0LL);
      ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(BugCheckParameter1 + 1112));
      v8 = v26;
    }
    v12 = Size + 100 + LODWORD(PackageSize[0]) + LODWORD(PackageSize[1]) + *(unsigned __int16 *)v9 + LOWORD(P[0]);
    v13 = v12;
    if ( v28 )
      *v28 = v12;
    if ( a4 )
      ProbeForWrite(Address, v5, 4u);
    if ( v12 >= (unsigned int)v5 )
      v13 = v5;
    memset(Address, 0, v13);
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
      *((_QWORD *)Address + 6) = MmGetSessionCreateTime(v14);
      *((_DWORD *)Address + 14) = PsGetProcessSessionId(BugCheckParameter1);
      *((_DWORD *)Address + 15) = MEMORY[0xFFFFF780000002C4];
      *((_DWORD *)Address + 16) = v8;
      *((_DWORD *)Address + 17) = HIDWORD(v26);
      if ( (unsigned int)v5 >= v12 )
      {
        *((_DWORD *)Address + 18) = 96;
        v15 = Size;
        memmove(Address + 96, Src, Size);
        v16 = &Address[v15 + 96];
        *((_DWORD *)Address + 19) = v15 + 96;
        v17 = (unsigned __int16 *)v29;
        memmove(v16, v29[1], *(unsigned __int16 *)v29);
        v18 = &v16[*v17 + 2];
        *((_DWORD *)Address + 20) = (_DWORD)v18 - (_DWORD)Address;
        memmove(v18, &PackageSize[2], PackageSize[0]);
        v19 = &v18[PackageSize[0]];
        *((_DWORD *)Address + 21) = (_DWORD)v19 - (_DWORD)Address;
        memmove(v19, &PackageSize[34], PackageSize[1]);
        v20 = &v19[PackageSize[1]];
        *((_DWORD *)Address + 22) = (_DWORD)v20 - (_DWORD)Address;
        memmove(v20, P[1], LOWORD(P[0]));
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
