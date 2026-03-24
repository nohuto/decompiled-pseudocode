/*
 * XREFs of VidSchIsVSyncEnabled @ 0x1C007BBA0
 * Callers:
 *     VidSchiSubmitMmIoFlipCommand @ 0x1C0002F90 (VidSchiSubmitMmIoFlipCommand.c)
 *     VidSchiSendToExecutionQueue @ 0x1C0008AF0 (VidSchiSendToExecutionQueue.c)
 *     ?VidSchiSubmitDisablePlanesFlip@@YAJPEAU_VIDSCH_DEVICE@@I@Z @ 0x1C002C210 (-VidSchiSubmitDisablePlanesFlip@@YAJPEAU_VIDSCH_DEVICE@@I@Z.c)
 *     VidSchiRedirectedFlipWaitOnSyncObject @ 0x1C00308E0 (VidSchiRedirectedFlipWaitOnSyncObject.c)
 *     VidSchiEnsureVSyncEnabled @ 0x1C0080630 (VidSchiEnsureVSyncEnabled.c)
 * Callees:
 *     VidSchiSetVSyncSuspended @ 0x1C0002784 (VidSchiSetVSyncSuspended.c)
 *     VidSchiGetVSyncSuspended @ 0x1C0002EF4 (VidSchiGetVSyncSuspended.c)
 *     VidSchiControlVSync @ 0x1C007B390 (VidSchiControlVSync.c)
 */

char __fastcall VidSchIsVSyncEnabled(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  char v8; // si
  int v9; // eax
  char v10; // r14
  __int64 v11; // rcx
  char VSyncSuspended; // r14
  char v13; // al
  char v15; // al
  __int64 v16; // rdx
  unsigned int v17; // r9d
  __int64 v18; // rax
  __int64 v19; // rax

  v3 = (unsigned int)a2;
  if ( !a1 )
  {
    v18 = WdLogNewEntry5_WdAssertion(0LL, a2, a3);
LABEL_26:
    WdLogEvent5_WdAssertion(v18);
    return 0;
  }
  if ( (unsigned int)a2 >= *(_DWORD *)(a1 + 40) )
  {
    v18 = WdLogNewEntry5_WdAssertion(a1, a2, a3);
    *(_QWORD *)(v18 + 24) = v3;
    goto LABEL_26;
  }
  ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 1072), 1u);
  v8 = 0;
  if ( (unsigned int)v3 >= *(_DWORD *)(a1 + 40) )
  {
    v19 = WdLogNewEntry5_WdAssertion(v6, v5, v7);
    *(_QWORD *)(v19 + 24) = v3;
    WdLogEvent5_WdAssertion(v19);
  }
  else
  {
    ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 1072), 1u);
    v9 = *(_DWORD *)(a1 + 2128);
    if ( _bittest(&v9, v3) )
      v10 = 1;
    else
      v10 = 0;
    ExReleaseResourceLite((PERESOURCE)(a1 + 1072));
    if ( v10 )
    {
      VSyncSuspended = VidSchiGetVSyncSuspended(a1, v3);
      if ( VSyncSuspended )
      {
        v15 = *(_BYTE *)(a1 + 2132);
        if ( v15 )
          v16 = *(unsigned int *)(a1 + 4 * v3 + 1808);
        else
          v16 = *(unsigned int *)(a1 + 1808);
        if ( (_DWORD)v16 )
        {
          if ( v15 )
            v17 = v3;
          else
            v17 = -3;
          LOBYTE(v16) = 1;
          VidSchiControlVSync(v11, v16, 65539LL, v17);
        }
        else
        {
          VidSchiSetVSyncSuspended(v11, v3, 0);
        }
      }
      v13 = *(_BYTE *)(a1 + 2132);
      if ( v13 )
        v8 = *(_BYTE *)(v3 + a1 + 1792);
      else
        v8 = *(_BYTE *)(a1 + 1792);
      if ( v8 && !VSyncSuspended )
      {
        if ( v13 )
          _InterlockedExchange((volatile __int32 *)(a1 + 4 * v3 + 2192), 1);
        else
          _InterlockedExchange((volatile __int32 *)(a1 + 2192), 1);
      }
    }
  }
  ExReleaseResourceLite((PERESOURCE)(a1 + 1072));
  return v8;
}
