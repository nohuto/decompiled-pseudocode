/*
 * XREFs of NtQueryFullAttributesFile @ 0x140616780
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentSilo @ 0x140299370 (PsGetCurrentSilo.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     memset @ 0x14040A280 (memset.c)
 *     ObCloseHandle @ 0x140602510 (ObCloseHandle.c)
 *     FsRtlpCleanupEcps @ 0x140616C40 (FsRtlpCleanupEcps.c)
 *     ObOpenObjectByNameEx @ 0x140694650 (ObOpenObjectByNameEx.c)
 *     ExRaiseDatatypeMisalignment @ 0x140769830 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __cdecl NtQueryFullAttributesFile(
        POBJECT_ATTRIBUTES ObjectAttributes,
        PFILE_NETWORK_OPEN_INFORMATION FileInformation)
{
  unsigned __int8 v4; // di
  __int64 v5; // rcx
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v7; // esi
  NTSTATUS result; // eax
  HANDLE Handle[2]; // [rsp+40h] [rbp-268h] BYREF
  _OWORD v10[14]; // [rsp+50h] [rbp-258h] BYREF
  __int128 v11; // [rsp+130h] [rbp-178h] BYREF
  __int128 v12; // [rsp+140h] [rbp-168h]
  __int128 v13; // [rsp+150h] [rbp-158h]
  __int64 v14; // [rsp+160h] [rbp-148h]
  _BYTE v15[272]; // [rsp+170h] [rbp-138h] BYREF

  memset(v15, 0, sizeof(v15));
  Handle[0] = 0LL;
  v4 = KeGetCurrentThread()->$6A88714AB977AAA8032D9F5E2A96BA31::gap0[10];
  if ( v4 )
  {
    v5 = (__int64)FileInformation;
    if ( ((unsigned __int8)FileInformation & 7) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)FileInformation >= 0x7FFFFFFF0000LL )
      v5 = 0x7FFFFFFF0000LL;
    *(_BYTE *)v5 = *(_BYTE *)v5;
    *(_BYTE *)(v5 + 55) = *(_BYTE *)(v5 + 55);
  }
  memset(v10, 0, 0xD8uLL);
  v11 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  LODWORD(v10[0]) = 14155784;
  WORD3(v10[4]) = 7;
  DWORD2(v10[5]) = 1;
  LODWORD(v10[4]) = 2113536;
  BYTE9(v10[8]) = 1;
  BYTE11(v10[8]) = 1;
  *(_QWORD *)&v10[9] = v15;
  *(_QWORD *)&v10[3] = ObjectAttributes;
  DWORD2(v10[9]) = 32;
  if ( v4 )
    *((_QWORD *)&v10[6] + 1) = &v11;
  else
    *((_QWORD *)&v10[6] + 1) = FileInformation;
  memset(&v10[10], 0, 40);
  LOWORD(v10[10]) = 40;
  *(_QWORD *)&v10[12] = PsGetCurrentSilo();
  CurrentThread = KeGetCurrentThread();
  ++CurrentThread->OtherOperationCount;
  __incgsdword(0x2EE4u);
  v7 = ObOpenObjectByNameEx(ObjectAttributes, IoFileObjectType, v4, 0LL, 128, v10, *(_QWORD *)&v10[12], Handle);
  if ( *((_QWORD *)&v10[10] + 1) && (unsigned __int8)FsRtlpCleanupEcps() )
    *((_QWORD *)&v10[10] + 1) = 0LL;
  if ( LODWORD(v10[2]) == -1096154543 )
  {
    result = v10[1];
    if ( SLODWORD(v10[1]) >= 0 )
    {
      if ( v4 )
      {
        *(_OWORD *)&FileInformation->CreationTime.LowPart = v11;
        *(_OWORD *)&FileInformation->LastWriteTime.LowPart = v12;
        *(_OWORD *)&FileInformation->AllocationSize.LowPart = v13;
        *(_QWORD *)&FileInformation->FileAttributes = v14;
      }
    }
  }
  else
  {
    if ( v7 >= 0 )
    {
      ObCloseHandle(Handle[0], v4);
      return -1073741788;
    }
    return v7;
  }
  return result;
}
