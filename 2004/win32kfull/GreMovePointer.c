/*
 * XREFs of GreMovePointer @ 0x1C002B390
 * Callers:
 *     GreStretchBltInternal @ 0x1C0019A20 (GreStretchBltInternal.c)
 *     ?xxxMoveEventAbsolute@@YA?AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHHPEAU_MousePacketPerf@@@Z @ 0x1C0039F7C (-xxxMoveEventAbsolute@@YA-AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHHP.c)
 *     ?zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z @ 0x1C003B470 (-zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z.c)
 *     GreHidePointer @ 0x1C004A8C0 (GreHidePointer.c)
 *     ApplyGatheredDeviceInfoSummaryInformation @ 0x1C0124AD0 (ApplyGatheredDeviceInfoSummaryInformation.c)
 *     HideMouseTrails @ 0x1C01D4E30 (HideMouseTrails.c)
 *     ?RenderCursor@@YAXAEBUtagPOINTERCURSORDATA@@@Z @ 0x1C01DB1E8 (-RenderCursor@@YAXAEBUtagPOINTERCURSORDATA@@@Z.c)
 * Callees:
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C002D44C (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ??0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C002D58C (--0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z.c)
 *     ?vMovePointer@@YAXPEAUHDEV__@@HHJ@Z @ 0x1C002EFAC (-vMovePointer@@YAXPEAUHDEV__@@HHJ@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 */

void __fastcall GreMovePointer(HDEV a1, int a2, int a3, int a4)
{
  int v6; // ebx
  __int64 ThreadWin32Thread; // rax
  int v8; // r14d
  __int64 v9; // rdi
  int v10; // edx
  int v11; // r8d
  __int64 v12; // r10
  int v13; // r9d
  __int64 v14; // r12
  HDEV v15; // rax
  int v16; // r9d
  __int64 **v17; // rcx
  __int64 *v18; // rsi
  __int64 v19; // rbx
  int v20; // r9d
  int v21; // r8d
  int v22; // edx
  bool v23; // zf
  __int64 v24; // [rsp+20h] [rbp-10h]
  _BYTE v25[8]; // [rsp+28h] [rbp-8h] BYREF
  HDEV v26; // [rsp+70h] [rbp+40h] BYREF
  int v27; // [rsp+78h] [rbp+48h] BYREF
  int v28; // [rsp+80h] [rbp+50h] BYREF
  int v29; // [rsp+88h] [rbp+58h]

  v28 = a3;
  v27 = a2;
  v26 = a1;
  v6 = 0;
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  LOBYTE(v8) = 0;
  v9 = ThreadWin32Thread;
  if ( ThreadWin32Thread )
  {
    v8 = -(*(_DWORD *)(ThreadWin32Thread + 328) & 1);
    *(_DWORD *)(ThreadWin32Thread + 328) &= ~1u;
  }
  SEMOBJSHARED::SEMOBJSHARED((SEMOBJSHARED *)v25, ghsemDynamicModeChange);
  if ( !PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v26) )
  {
    GreAcquireSemaphore(ghsemGreLock);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemGreLock", ghsemGreLock, 2LL);
  }
  GreAcquireSemaphore(*((_QWORD *)v26 + 8));
  EtwTraceGreLockAcquireSemaphoreExclusive(L"po.hsemPointer()", *((_QWORD *)v26 + 8), 4LL);
  DrvUniformSpaceToPixelSpacePoint(&v27, &v28);
  v10 = v27;
  v11 = v28;
  dword_1C033C888 = v27;
  dword_1C033C88C = v28;
  gCachedMovePointerState = a1;
  dword_1C033C890 = a4;
  if ( gulCachedPointerRefs )
  {
    v14 = 0LL;
    v24 = 1LL;
    v13 = 1;
    v12 = 1LL;
    bCachedMovePointerRefs = 1;
    if ( HIDWORD(WPP_MAIN_CB.Dpc.ProcessorHistory) )
    {
      v6 = 1;
      v14 = 1LL;
    }
  }
  else
  {
    v12 = 0LL;
    v13 = 0;
    v24 = 0LL;
    v14 = 0LL;
  }
  v15 = v26;
  if ( ((_DWORD)v26[10] & 0x20000) != 0 )
  {
    v17 = (__int64 **)*((_QWORD *)v26 + 225);
    v18 = *v17;
    v29 = *((_DWORD *)v17 + 4);
    while ( 1 )
    {
      v19 = v18[6];
      if ( v10 < *((_DWORD *)v18 + 7)
        || v10 >= *((_DWORD *)v18 + 9)
        || v11 < *((_DWORD *)v18 + 8)
        || v11 >= *((_DWORD *)v18 + 10) )
      {
        if ( v12 && (*(_DWORD *)(v19 + 2128) & 0x2000) == 0 )
          goto LABEL_38;
        GreAcquireSemaphore(*(_QWORD *)(v19 + 64));
        EtwTraceGreLockAcquireSemaphoreExclusive(L"poThis.hsemPointer()", *(_QWORD *)(v19 + 64), 4LL);
        v20 = a4;
        v21 = -1;
        v22 = -1;
      }
      else
      {
        if ( v12 && (*(_DWORD *)(v19 + 2128) & 0x2000) == 0 && !v14 )
          goto LABEL_38;
        GreAcquireSemaphore(*(_QWORD *)(v19 + 64));
        EtwTraceGreLockAcquireSemaphoreExclusive(L"poThis.hsemPointer()", *(_QWORD *)(v19 + 64), 4LL);
        v20 = a4 | 4;
        if ( !v14 )
          v20 = a4;
        v21 = v28 - *((_DWORD *)v18 + 8);
        v22 = v27 - *((_DWORD *)v18 + 7);
      }
      vMovePointer((HDEV)v18[6], v22, v21, v20);
      EtwTraceGreLockReleaseSemaphore(L"poThis.hsemPointer()", *(_QWORD *)(v19 + 64));
      GreReleaseSemaphoreInternal(*(_QWORD *)(v19 + 64));
      v12 = v24;
      v10 = v27;
      v11 = v28;
LABEL_38:
      v23 = v29-- == 1;
      v18 = (__int64 *)*v18;
      if ( v23 )
        goto LABEL_12;
    }
  }
  if ( !v13 || ((_DWORD)v26[532] & 0x2000) != 0 || v6 )
  {
    v16 = a4 | 4;
    if ( !v6 )
      v16 = a4;
    vMovePointer(a1, v27, v28, v16);
    v11 = v28;
    v10 = v27;
LABEL_12:
    v15 = v26;
  }
  *((_DWORD *)v15 + 18) = v10;
  *((_DWORD *)v26 + 19) = v11;
  EtwTraceGreLockReleaseSemaphore(L"po.hsemPointer()", *((_QWORD *)v26 + 8));
  GreReleaseSemaphoreInternal(*((_QWORD *)v26 + 8));
  if ( !PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v26) )
  {
    EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
    GreReleaseSemaphoreInternal(ghsemGreLock);
  }
  if ( v9 )
    *(_DWORD *)(v9 + 328) ^= (*(_DWORD *)(v9 + 328) ^ (unsigned __int8)v8) & 1;
  SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)v25);
}
