/*
 * XREFs of NtQueryFullAttributesFile @ 0x1406B2070
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentSilo @ 0x140211160 (PsGetCurrentSilo.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     memset @ 0x140411300 (memset.c)
 *     FsRtlpCleanupEcps @ 0x1405FD2E0 (FsRtlpCleanupEcps.c)
 *     ObOpenObjectByNameEx @ 0x14060CAF0 (ObOpenObjectByNameEx.c)
 *     ObCloseHandle @ 0x140627D70 (ObCloseHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x140777E40 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __cdecl NtQueryFullAttributesFile(
        POBJECT_ATTRIBUTES ObjectAttributes,
        PFILE_NETWORK_OPEN_INFORMATION FileInformation)
{
  char PreviousMode; // di
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
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v5 = (__int64)FileInformation;
    if ( ((unsigned __int8)FileInformation & 7) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)FileInformation >= 0x7FFFFFFF0000LL )
      v5 = 0x7FFFFFFF0000LL;
    *(_BYTE *)v5 = *(_BYTE *)v5;
    *(_BYTE *)(v5 + 55) = *(_BYTE *)(v5 + 55);
  }
  memset(v10, 0, sizeof(v10));
  v11 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  LODWORD(v10[0]) = 14680072;
  WORD3(v10[4]) = 7;
  DWORD2(v10[5]) = 1;
  LODWORD(v10[4]) = 2113536;
  BYTE9(v10[8]) = 1;
  BYTE11(v10[8]) = 1;
  *(_QWORD *)&v10[9] = v15;
  *(_QWORD *)&v10[3] = ObjectAttributes;
  DWORD2(v10[9]) = 32;
  if ( PreviousMode )
    *((_QWORD *)&v10[6] + 1) = &v11;
  else
    *((_QWORD *)&v10[6] + 1) = FileInformation;
  memset(&v10[10], 0, 40);
  LOWORD(v10[10]) = 40;
  *(_QWORD *)&v10[12] = PsGetCurrentSilo();
  CurrentThread = KeGetCurrentThread();
  ++CurrentThread->OtherOperationCount;
  __incgsdword(0x2EE4u);
  v7 = ObOpenObjectByNameEx(
         (__int64)ObjectAttributes,
         (__int64)IoFileObjectType,
         PreviousMode,
         0LL,
         0x80u,
         (__int64)v10,
         *(__int64 *)&v10[12],
         Handle);
  if ( *((_QWORD *)&v10[10] + 1) && FsRtlpCleanupEcps(*((struct _ECP_LIST **)&v10[10] + 1)) )
    *((_QWORD *)&v10[10] + 1) = 0LL;
  if ( LODWORD(v10[2]) == -1096154543 )
  {
    result = v10[1];
    if ( SLODWORD(v10[1]) >= 0 )
    {
      if ( PreviousMode )
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
      ObCloseHandle(Handle[0], PreviousMode);
      return -1073741788;
    }
    return v7;
  }
  return result;
}
