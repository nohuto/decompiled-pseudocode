/*
 * XREFs of VidSchiEnsureVSyncEnabled @ 0x1C007ECA0
 * Callers:
 *     VidSchiSubmitCommandPacketToQueue @ 0x1C0006F50 (VidSchiSubmitCommandPacketToQueue.c)
 *     VidSchSignalSyncObjectsFromGpu @ 0x1C0007440 (VidSchSignalSyncObjectsFromGpu.c)
 *     VidSchiSubmitCommandPacketToHwQueue @ 0x1C003C194 (VidSchiSubmitCommandPacketToHwQueue.c)
 * Callees:
 *     ?IncrementNumberOfQueuedFlipPerSource@@YAXPEAU_VIDSCH_GLOBAL@@I@Z @ 0x1C00139F8 (-IncrementNumberOfQueuedFlipPerSource@@YAXPEAU_VIDSCH_GLOBAL@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016B50 (_guard_dispatch_icall_nop.c)
 *     VidSchIsVSyncEnabled @ 0x1C007B620 (VidSchIsVSyncEnabled.c)
 */

void __fastcall VidSchiEnsureVSyncEnabled(__int64 a1, __int64 a2)
{
  bool v4; // si
  __int64 v5; // r14
  __int64 v6; // rbp
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // r10
  unsigned int v14; // r9d
  bool v15; // zf
  int v16; // eax
  char v17; // cl
  int v18; // eax
  void (__fastcall *v19)(_QWORD); // rax
  void (__fastcall *v20)(_QWORD); // rax

  v4 = *(_QWORD *)(a1 + 96) != 0LL;
  v5 = *(_QWORD *)(a2 + 32);
  v6 = *(unsigned int *)(a1 + 160);
  if ( *(_QWORD *)(a1 + 96) )
  {
    if ( *(_DWORD *)(a1 + 48) == 3 && *(_DWORD *)(*(_QWORD *)(v5 + 8 * v6 + 3104) + 33288LL) != -1 )
    {
      v19 = *(void (__fastcall **)(_QWORD))(v5 + 2960);
      if ( v19 )
        v19(*(_QWORD *)(v5 + 3024));
    }
  }
  if ( (*(_DWORD *)(a1 + 272) & 0x1000000) != 0
    && *(_DWORD *)(*(_QWORD *)(v5 + 8LL * *(unsigned int *)(a1 + 388) + 3104) + 33288LL) != -1 )
  {
    v20 = *(void (__fastcall **)(_QWORD))(v5 + 2960);
    if ( v20 )
      v20(*(_QWORD *)(v5 + 3024));
  }
  if ( *(_DWORD *)(a1 + 48) == 3 && *(_DWORD *)(a1 + 160) != -1 )
  {
    v11 = *(_QWORD *)(a1 + 88);
    if ( v11 )
      v12 = *(_QWORD *)(v11 + 104);
    else
      v12 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 40LL) + 8LL);
    v13 = *(_QWORD *)(v12 + 32);
    if ( (*(_DWORD *)(a1 + 72) & 0x800000) != 0 )
      v14 = ((unsigned __int16)*(_DWORD *)(a1 + 840) | (unsigned __int16)(*(_DWORD *)(a1 + 840) >> 10)) & 0x3FF;
    else
      v14 = (1 << *(_DWORD *)(v13 + 144)) - 1;
    v15 = !_BitScanForward((unsigned int *)&v16, v14);
    v17 = -1;
    if ( !v15 )
      v17 = v16;
    while ( v14 )
    {
      _InterlockedExchangeAdd(
        (volatile signed __int32 *)(*(_QWORD *)(v13 + 8LL * *(unsigned int *)(a1 + 160) + 3104) + 216LL * v17 + 176),
        1u);
      v18 = 1 << v17;
      v17 = -1;
      v14 &= ~v18;
      v15 = !_BitScanForward((unsigned int *)&v18, v14);
      if ( !v15 )
        v17 = v18;
    }
  }
  v7 = *(_DWORD *)(a1 + 72);
  if ( (v7 & 0x1000) != 0 && ((v7 & 0x400) == 0 || (v7 & 0x800) != 0) && (_DWORD)v6 != -1 )
  {
    if ( (v7 & 0x40000) != 0 )
    {
      if ( (v7 & 0x1000000) != 0 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v5 + 728));
        IncrementNumberOfQueuedFlipPerSource((struct _VIDSCH_GLOBAL *)v5, v6);
        _InterlockedIncrement((volatile signed __int32 *)(a2 + 1572));
        _InterlockedIncrement((volatile signed __int32 *)(a2 + 4 * v6 + 1508));
        if ( (*(_DWORD *)(a2 + 48) & 2) != 0 || *(int *)(a1 + 392) >= 4 || *(_BYTE *)(v5 + 148) )
LABEL_46:
          VidSchIsVSyncEnabled(v5, v9, v10);
      }
    }
    else
    {
      _InterlockedIncrement((volatile signed __int32 *)(a2 + 4 * v6 + 1444));
      v8 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 40) + 24LL)
                                 + 8LL * *(unsigned int *)(*(_QWORD *)(a2 + 32) + 4LL))
                     + 8 * v6
                     + 88);
      if ( (*(_DWORD *)(a1 + 72) & 0x80u) == 0 )
        _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v5 + 8 * v6 + 6352) + 8LL));
      _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
      if ( (*(_DWORD *)(a1 + 72) & 4) != 0 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v5 + 728));
        IncrementNumberOfQueuedFlipPerSource((struct _VIDSCH_GLOBAL *)v5, v6);
        _InterlockedIncrement((volatile signed __int32 *)(a2 + 1572));
        _InterlockedIncrement((volatile signed __int32 *)(a2 + 4 * v6 + 1508));
        if ( v4 && ((*(_DWORD *)(a2 + 48) & 2) != 0 || *(int *)(a1 + 392) >= 4 || *(_BYTE *)(v5 + 148)) )
          goto LABEL_46;
      }
    }
  }
}
