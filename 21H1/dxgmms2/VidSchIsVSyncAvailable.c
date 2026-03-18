/*
 * XREFs of VidSchIsVSyncAvailable @ 0x1C00D2F90
 * Callers:
 *     VidSchiSetFlipDevice @ 0x1C0002924 (VidSchiSetFlipDevice.c)
 *     VidSchCreatePeriodicFrameNotification @ 0x1C0033CE0 (VidSchCreatePeriodicFrameNotification.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall VidSchIsVSyncAvailable(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rsi
  __int64 v5; // rax
  struct _ERESOURCE *v7; // rdi
  int v8; // eax
  unsigned __int8 v9; // bl

  v3 = (unsigned int)a2;
  if ( !a1 )
  {
    v5 = WdLogNewEntry5_WdAssertion(0LL, a2, a3);
LABEL_3:
    WdLogEvent5_WdAssertion(v5);
    return 0;
  }
  if ( (unsigned int)a2 >= *(_DWORD *)(a1 + 40) )
  {
    v5 = WdLogNewEntry5_WdAssertion(a1, a2, a3);
    *(_QWORD *)(v5 + 24) = v3;
    goto LABEL_3;
  }
  v7 = (struct _ERESOURCE *)(a1 + 1072);
  ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 1072), 1u);
  v8 = *(_DWORD *)(a1 + 2128);
  v9 = _bittest(&v8, v3);
  ExReleaseResourceLite(v7);
  return v9;
}
