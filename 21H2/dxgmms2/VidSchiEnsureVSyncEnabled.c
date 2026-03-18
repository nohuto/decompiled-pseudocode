/*
 * XREFs of VidSchiEnsureVSyncEnabled @ 0x1C00972B0
 * Callers:
 *     VidSchSignalSyncObjectsFromGpu @ 0x1C0005C90 (VidSchSignalSyncObjectsFromGpu.c)
 *     VidSchiSubmitCommandPacketToQueue @ 0x1C0006900 (VidSchiSubmitCommandPacketToQueue.c)
 *     VidSchiSubmitCommandPacketToHwQueue @ 0x1C001F79E (VidSchiSubmitCommandPacketToHwQueue.c)
 * Callees:
 *     ?IncrementNumberOfQueuedFlipPerSource@@YAXPEAU_VIDSCH_GLOBAL@@I@Z @ 0x1C00178F0 (-IncrementNumberOfQueuedFlipPerSource@@YAXPEAU_VIDSCH_GLOBAL@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 *     VidSchIsVSyncEnabled @ 0x1C00A3970 (VidSchIsVSyncEnabled.c)
 */

void __fastcall VidSchiEnsureVSyncEnabled(__int64 a1, __int64 a2)
{
  unsigned int *v4; // r14
  _DWORD *v5; // r15
  __int64 v6; // r13
  __int64 v7; // rbp
  unsigned int v8; // r12d
  char v9; // r9
  int v10; // eax
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // r11
  unsigned int v16; // r10d
  bool v17; // zf
  int v18; // eax
  char v19; // cl
  int v20; // eax
  __int64 v21; // r8
  char v22; // r9
  __int64 v23; // r8
  unsigned int v24; // r10d
  void (__fastcall *v25)(_QWORD, _QWORD); // rax
  void (__fastcall *v26)(_QWORD); // rax
  char v27; // [rsp+60h] [rbp+8h]

  v4 = (unsigned int *)(a1 + 160);
  v5 = (_DWORD *)(a1 + 160);
  if ( !*(_QWORD *)(a1 + 96) )
  {
    v6 = *(_QWORD *)(a2 + 32);
    v7 = a2 + 32;
    v8 = *v4;
    v9 = 0;
LABEL_3:
    v27 = v9;
    goto LABEL_4;
  }
  v7 = a2 + 32;
  v23 = *(_QWORD *)(a2 + 32);
  v9 = 1;
  v6 = v23;
  v8 = *v4;
  v27 = 1;
  if ( *(_DWORD *)(a1 + 48) == 3 )
  {
    v7 = a2 + 32;
    v27 = 1;
    v24 = *(_DWORD *)(*(_QWORD *)(v23 + 8LL * *v4 + 3200) + 44232LL);
    if ( v24 != -1 )
    {
      v25 = *(void (__fastcall **)(_QWORD, _QWORD))(v23 + 3056);
      v7 = a2 + 32;
      v27 = 1;
      if ( v25 )
      {
        v25(*(_QWORD *)(v23 + 3120), v24);
        v9 = 1;
        v7 = a2 + 32;
        goto LABEL_3;
      }
    }
  }
LABEL_4:
  if ( (*(_DWORD *)(a1 + 272) & 0x1000000) != 0
    && *(_DWORD *)(*(_QWORD *)(v6 + 8LL * *(unsigned int *)(a1 + 388) + 3200) + 44232LL) != -1 )
  {
    v26 = *(void (__fastcall **)(_QWORD))(v6 + 3056);
    if ( v26 )
    {
      v26(*(_QWORD *)(v6 + 3120));
      v9 = v27;
    }
  }
  if ( *(_DWORD *)(a1 + 48) == 3 && *v5 != -1 )
  {
    v13 = *(_QWORD *)(a1 + 88);
    if ( v13 )
      v14 = *(_QWORD *)(v13 + 104);
    else
      v14 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 40LL) + 8LL);
    v15 = *(_QWORD *)(v14 + 32);
    if ( (*(_DWORD *)(a1 + 72) & 0x800000) != 0 )
      v16 = ((unsigned __int16)*(_DWORD *)(a1 + 872) | (unsigned __int16)(*(_DWORD *)(a1 + 872) >> 10)) & 0x3FF;
    else
      v16 = (1 << *(_DWORD *)(v15 + 152)) - 1;
    v17 = !_BitScanForward((unsigned int *)&v18, v16);
    v19 = -1;
    if ( !v17 )
      v19 = v18;
    while ( v16 )
    {
      _InterlockedExchangeAdd(
        (volatile signed __int32 *)(*(_QWORD *)(v15 + 8LL * (unsigned int)*v5 + 3200) + 280LL * v19 + 184),
        1u);
      v20 = 1 << v19;
      v19 = -1;
      v16 &= ~v20;
      v17 = !_BitScanForward((unsigned int *)&v20, v16);
      if ( !v17 )
        v19 = v20;
    }
  }
  v10 = *(_DWORD *)(a1 + 72);
  if ( (v10 & 0x1000) == 0 || (v10 & 0x400) != 0 && (v10 & 0x800) == 0 || v8 == -1 )
    return;
  if ( (v10 & 0x40000) != 0 )
  {
    if ( (v10 & 0x1000000) == 0 )
      return;
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 736));
    IncrementNumberOfQueuedFlipPerSource((struct _VIDSCH_GLOBAL *)v6, v8);
    _InterlockedIncrement((volatile signed __int32 *)(a2 + 1572));
    _InterlockedIncrement((volatile signed __int32 *)(a2 + 4LL * v8 + 1508));
    goto LABEL_34;
  }
  _InterlockedIncrement((volatile signed __int32 *)(a2 + 4LL * v8 + 1444));
  v11 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 40) + 32LL) + 8LL * *(unsigned int *)(*(_QWORD *)v7 + 4LL))
                  + 8LL * v8
                  + 88);
  if ( (*(_DWORD *)(a1 + 72) & 0x80u) == 0 )
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v6 + 8LL * v8 + 6456) + 8LL));
  _InterlockedIncrement((volatile signed __int32 *)(v11 + 8));
  v12 = *(_DWORD *)(a1 + 72);
  if ( (v12 & 4) != 0 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 736));
    IncrementNumberOfQueuedFlipPerSource((struct _VIDSCH_GLOBAL *)v6, v8);
    _InterlockedIncrement((volatile signed __int32 *)(a2 + 1572));
    _InterlockedIncrement((volatile signed __int32 *)(a2 + 4 * v21 + 1508));
    if ( !v22 )
      return;
LABEL_34:
    if ( (*(_DWORD *)(a2 + 48) & 2) != 0 || *(int *)(a1 + 392) >= 4 || *(_BYTE *)(v6 + 156) )
      goto LABEL_37;
    return;
  }
  if ( v9 && !*(_DWORD *)(a1 + 48) && (v12 & 0x4000) != 0 && (*(_DWORD *)(a2 + 48) & 2) != 0 )
LABEL_37:
    VidSchIsVSyncEnabled((struct _VIDSCH_GLOBAL *)v6);
}
