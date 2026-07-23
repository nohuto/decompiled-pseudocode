/*
 * XREFs of DbgkCopyProcessDebugPort @ 0x14069744C
 * Callers:
 *     PspInsertProcess @ 0x1406971A0 (PspInsertProcess.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     KeReleaseGuardedMutex @ 0x140253C70 (KeReleaseGuardedMutex.c)
 *     VslpEnterIumSecureMode @ 0x1402840D0 (VslpEnterIumSecureMode.c)
 *     ExAcquireFastMutex @ 0x140354DD0 (ExAcquireFastMutex.c)
 *     ObfReferenceObject @ 0x140355F80 (ObfReferenceObject.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 *     PsTestProtectedProcessIncompatibility @ 0x140697008 (PsTestProtectedProcessIncompatibility.c)
 *     DbgkpMarkProcessPeb @ 0x140884C8C (DbgkpMarkProcessPeb.c)
 */

__int64 __fastcall DbgkCopyProcessDebugPort(_QWORD *BugCheckParameter1, __int64 a2, char *a3, bool *a4)
{
  char *v5; // rbx
  __int64 v8; // rbx
  bool v9; // zf
  __int64 v11; // rcx
  char *v12; // r14
  NTSTATUS v13; // edi
  __int64 v14; // rax
  __int16 v15; // cx
  __int64 v16; // rdi
  char v17; // di
  char *v18; // rbx
  _QWORD v19[14]; // [rsp+20h] [rbp-B8h] BYREF

  BugCheckParameter1[175] = 0LL;
  v5 = a3;
  if ( a3 )
  {
    ObfReferenceObject(a3);
  }
  else
  {
    v8 = *(_QWORD *)(a2 + 1400);
    v9 = v8 == 0;
    if ( !v8 )
    {
LABEL_3:
      *a4 = !v9;
      return 0LL;
    }
    ExAcquireFastMutex(&DbgkpProcessDebugPortMutex);
    v5 = *(char **)(a2 + 1400);
    if ( v5 )
    {
      if ( (*(_DWORD *)(a2 + 1124) & 2) != 0 )
        v5 = 0LL;
      else
        ObfReferenceObject(*(PVOID *)(a2 + 1400));
    }
    KeReleaseGuardedMutex(&DbgkpProcessDebugPortMutex);
  }
  v12 = v5;
  v9 = v5 == 0LL;
  if ( !v5 )
    goto LABEL_3;
  LOBYTE(v11) = KeGetCurrentThread()->PreviousMode;
  if ( PsTestProtectedProcessIncompatibility(v11, a2, (__int64)BugCheckParameter1) )
  {
    v13 = -1073740014;
  }
  else if ( (*((_DWORD *)v5 + 24) & 4) == 0
         || (v14 = BugCheckParameter1[176]) != 0 && ((v15 = *(_WORD *)(v14 + 8), v15 == 332) || v15 == 452) )
  {
    v16 = BugCheckParameter1[124];
    if ( (v16 & 1) == 0
      || (memset(v19, 0, 0x68uLL),
          v19[1] = v16,
          v19[2] = 1LL,
          v13 = VslpEnterIumSecureMode(2u, 12, 0, (__int64)v19),
          v13 >= 0) )
    {
      v17 = 0;
      ExAcquireFastMutex((PFAST_MUTEX)(v5 + 24));
      if ( (*((_DWORD *)v5 + 24) & 1) != 0 )
        v17 = 1;
      else
        BugCheckParameter1[175] = v5;
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v5 + 24));
      if ( v17 )
        HalPutDmaAdapter((PADAPTER_OBJECT)v5);
      v18 = 0LL;
      if ( !v17 )
        v18 = v12;
      v9 = v18 == 0LL;
      if ( v18 )
      {
        DbgkpMarkProcessPeb((ULONG_PTR)BugCheckParameter1);
        v9 = v18 == 0LL;
      }
      goto LABEL_3;
    }
  }
  else
  {
    v13 = -1073741637;
  }
  HalPutDmaAdapter((PADAPTER_OBJECT)v5);
  return (unsigned int)v13;
}
