/*
 * XREFs of SepCreateClientSecurityEx @ 0x140620580
 * Callers:
 *     SeCreateClientSecurityFromSubjectContextEx @ 0x140595690 (SeCreateClientSecurityFromSubjectContextEx.c)
 *     SeCreateClientSecurity @ 0x140620190 (SeCreateClientSecurity.c)
 *     SeCreateClientSecurityEx @ 0x140620380 (SeCreateClientSecurityEx.c)
 *     SeCreateClientSecurityFromSubjectContext @ 0x1406DE3D0 (SeCreateClientSecurityFromSubjectContext.c)
 * Callees:
 *     PsIsHostSilo @ 0x14020DC00 (PsIsHostSilo.c)
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140227380 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetCurrentServerSilo @ 0x14023F0F0 (PsGetCurrentServerSilo.c)
 *     SepGetAnonymousToken @ 0x1402E17A8 (SepGetAnonymousToken.c)
 *     ObInsertObjectEx @ 0x140601DC0 (ObInsertObjectEx.c)
 *     PsReferencePrimaryToken @ 0x14067EEB0 (PsReferencePrimaryToken.c)
 *     SeCopyClientToken @ 0x1406BA08C (SeCopyClientToken.c)
 *     SeQueryServerSiloToken @ 0x1406D1C50 (SeQueryServerSiloToken.c)
 *     SepCopyClientTokenAndSetSilo @ 0x14091F008 (SepCopyClientTokenAndSetSilo.c)
 *     SeGetTokenControlInformation @ 0x140925314 (SeGetTokenControlInformation.c)
 */

__int64 __fastcall SepCreateClientSecurityEx(
        __int64 a1,
        __int64 a2,
        char a3,
        int a4,
        char a5,
        unsigned int a6,
        char a7,
        struct _KTHREAD *a8,
        unsigned __int8 a9,
        __int64 a10,
        __int64 a11)
{
  char v12; // dl
  PADAPTER_OBJECT v14; // rbp
  unsigned int v15; // eax
  __int64 v16; // rbx
  char v17; // al
  __int64 result; // rax
  bool v19; // al
  int v20; // r8d
  struct _KTHREAD *CurrentThread; // rcx
  struct _KPROCESS *Process; // rcx
  struct _DMA_ADAPTER *v23; // rax
  struct _DMA_ADAPTER *v24; // r14
  __int64 v25; // rcx
  int AnonymousToken; // ebp
  _DMA_OPERATIONS *DmaOperations; // r14
  int v28; // r8d
  __int64 CurrentServerSilo; // rax
  struct _DMA_ADAPTER *v30; // [rsp+40h] [rbp-28h] BYREF
  __int64 v31[4]; // [rsp+48h] [rbp-20h] BYREF
  PADAPTER_OBJECT DmaAdapter; // [rsp+78h] [rbp+10h] BYREF

  v12 = 0;
  v30 = 0LL;
  DmaAdapter = 0LL;
  v14 = (PADAPTER_OBJECT)a1;
  if ( *(_BYTE *)(a2 + 8) >= 2u )
    return 3221225485LL;
  v15 = *(_DWORD *)(a2 + 4);
  if ( v15 > 3 )
    return 3221225637LL;
  if ( a4 == 2 )
  {
    if ( (int)v15 > (int)a6 )
    {
      if ( !a7 )
        return 3221225637LL;
      v12 = 1;
    }
    if ( a6 > 1 && (!a3 || a6 == 3) )
    {
      v19 = a5 || *(_BYTE *)(a2 + 9);
      v16 = a11;
      *(_BYTE *)(a11 + 25) = v19;
      if ( !v12 )
        goto LABEL_5;
LABEL_28:
      if ( (*(_DWORD *)(a1 + 200) & 0x4000) == 0 )
      {
        if ( a8 )
        {
          CurrentThread = KeGetCurrentThread();
          if ( a8 == CurrentThread )
            Process = CurrentThread->ApcState.Process;
          else
            Process = a8->Process;
          v23 = (struct _DMA_ADAPTER *)PsReferencePrimaryToken(Process);
          v24 = v23;
          if ( ((__int64)v23[12].DmaOperations & 0x4000) != 0 )
            v25 = (__int64)v23;
          else
            v25 = 0LL;
          AnonymousToken = SepGetAnonymousToken(v25, &DmaAdapter);
          HalPutDmaAdapter(v24);
LABEL_35:
          if ( AnonymousToken < 0 )
            return (unsigned int)AnonymousToken;
          v14 = DmaAdapter;
          result = ObInsertObjectEx(DmaAdapter, 0LL, 0, 0, 0, 0LL, 0LL);
          if ( (int)result >= 0 )
          {
            *(_QWORD *)v16 = 12LL;
            *(_BYTE *)(v16 + 8) = 0;
            v17 = *(_BYTE *)(a2 + 9);
            *(_BYTE *)(v16 + 24) = 0;
            goto LABEL_9;
          }
          return result;
        }
        a1 = 0LL;
      }
      AnonymousToken = SepGetAnonymousToken(a1, &DmaAdapter);
      goto LABEL_35;
    }
    if ( a7 )
    {
      v16 = a11;
      goto LABEL_28;
    }
    return 3221225637LL;
  }
  v16 = a11;
  *(_BYTE *)(a11 + 25) = *(_BYTE *)(a2 + 9);
LABEL_5:
  if ( *(_BYTE *)(a2 + 8) )
  {
    *(_BYTE *)(v16 + 24) = 1;
    if ( a3 )
      SeGetTokenControlInformation(a1, v16 + 28);
LABEL_8:
    *(_DWORD *)v16 = 12;
    *(_DWORD *)(v16 + 4) = *(_DWORD *)(a2 + 4);
    *(_BYTE *)(v16 + 8) = *(_BYTE *)(a2 + 8);
    v17 = *(_BYTE *)(a2 + 9);
LABEL_9:
    *(_QWORD *)(v16 + 16) = v14;
    *(_BYTE *)(v16 + 9) = v17;
    result = 0LL;
    *(_BYTE *)(v16 + 26) = a3;
    return result;
  }
  *(_BYTE *)(v16 + 24) = 0;
  if ( PsIsCurrentThreadInServerSilo() )
  {
    DmaOperations = v14[1].DmaOperations;
    v31[0] = 0LL;
    if ( (int)SeQueryServerSiloToken(v14, v31) >= 0 && PsIsHostSilo(v31[0]) && DmaOperations == (_DMA_OPERATIONS *)999 )
    {
      CurrentServerSilo = PsGetCurrentServerSilo();
      result = SepCopyClientTokenAndSetSilo(v14, *(unsigned int *)(a2 + 4), CurrentServerSilo, &v30);
    }
    else
    {
      result = SeCopyClientToken((_DWORD)v14, *(_DWORD *)(a2 + 4), v28, 0, 0LL, (__int64)&v30);
    }
  }
  else
  {
    result = SeCopyClientToken((_DWORD)v14, *(_DWORD *)(a2 + 4), v20, a9, a10, (__int64)&v30);
  }
  v14 = v30;
  if ( (int)result >= 0 )
    goto LABEL_8;
  return result;
}
