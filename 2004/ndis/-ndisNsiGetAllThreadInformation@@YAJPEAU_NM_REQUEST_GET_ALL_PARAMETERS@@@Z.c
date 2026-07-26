/*
 * XREFs of ?ndisNsiGetAllThreadInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x1C0006F00
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisCmGetThreadSessionId@@YAKPEAU_ETHREAD@@@Z @ 0x1C0013CE8 (-ndisCmGetThreadSessionId@@YAKPEAU_ETHREAD@@@Z.c)
 */

__int64 __fastcall ndisNsiGetAllThreadInformation(struct _NM_REQUEST_GET_ALL_PARAMETERS *a1)
{
  int v1; // eax
  int *v2; // rbx
  struct _KTHREAD *CurrentThread; // rbp
  int *ThreadProperty; // rax
  __int64 v5; // rcx
  int v6; // esi
  PACCESS_TOKEN v7; // rax
  void *v8; // r14
  unsigned int CurrentProcessSessionId; // eax
  unsigned int ThreadSessionId; // edi
  int v11; // eax
  __int64 result; // rax
  NTSTATUS v13; // edi
  int v14; // ecx
  bool v15; // cf
  KIRQL v16; // al
  BOOLEAN EffectiveOnly; // [rsp+50h] [rbp+8h] BYREF
  BOOLEAN CopyOnOpen; // [rsp+58h] [rbp+10h] BYREF
  _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel; // [rsp+60h] [rbp+18h] BYREF
  PVOID TokenInformation; // [rsp+68h] [rbp+20h] BYREF

  v1 = *((_DWORD *)a1 + 8);
  if ( !v1 )
  {
    v2 = (int *)*((_QWORD *)a1 + 5);
    if ( !v2 )
      return 0LL;
    CurrentThread = KeGetCurrentThread();
    ThreadProperty = (int *)PsGetThreadProperty(CurrentThread, 0x6D43644EuLL, 0);
    v6 = 0;
    if ( ThreadProperty )
    {
      *v2 = *ThreadProperty;
      v2[1] = ThreadProperty[1];
      ObfDereferenceObject(ThreadProperty);
    }
    else
    {
      *(_QWORD *)v2 = 0LL;
    }
    if ( *v2 )
      return 0LL;
    CopyOnOpen = 0;
    EffectiveOnly = 0;
    ImpersonationLevel = SecurityAnonymous;
    TokenInformation = 0LL;
    if ( KeGetCurrentIrql() >= 2u )
    {
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v5);
    }
    else
    {
      v7 = PsReferenceImpersonationToken(CurrentThread, &CopyOnOpen, &EffectiveOnly, &ImpersonationLevel);
      v8 = v7;
      if ( v7 )
      {
        v13 = SeQueryInformationToken(v7, TokenSessionId, &TokenInformation);
        PsDereferenceImpersonationToken(v8);
        if ( v13 >= 0 )
        {
          ThreadSessionId = (unsigned int)TokenInformation;
          goto LABEL_10;
        }
      }
      CurrentProcessSessionId = PsGetThreadSessionId(CurrentThread);
    }
    ThreadSessionId = CurrentProcessSessionId;
LABEL_10:
    if ( ThreadSessionId == -1 )
      ThreadSessionId = ndisCmGetThreadSessionId(KeGetCurrentThread());
    if ( ThreadSessionId < dword_1C00E6190 )
    {
      v16 = KeAcquireSpinLockRaiseToDpc(&qword_1C00E4B20);
      if ( ThreadSessionId < dword_1C00E6190 )
        v6 = *((_DWORD *)P + 6 * ThreadSessionId);
      KeReleaseSpinLock(&qword_1C00E4B20, v16);
      if ( !v6 )
        v6 = 1;
      v11 = v6;
    }
    else
    {
      v11 = 1;
    }
    *v2 = v11;
    return 0LL;
  }
  v14 = v1 - 1;
  v15 = v1 == 1;
  result = 3221225485LL;
  if ( v15 || v14 == 1 )
    return 3221225474LL;
  return result;
}
