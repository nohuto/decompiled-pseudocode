/*
 * XREFs of GreSetDIBitsInternal @ 0x1C01174DC
 * Callers:
 *     GreCreateDIBitmapComp @ 0x1C01173D8 (GreCreateDIBitmapComp.c)
 *     GreSetDIBits @ 0x1C02C1020 (GreSetDIBits.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0076414 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     GreSetDIBitsToDeviceInternal @ 0x1C0076650 (GreSetDIBitsToDeviceInternal.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C0079EB0 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall GreSetDIBitsInternal(
        HDC a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        void *a5,
        unsigned int *a6,
        unsigned int a7,
        unsigned int a8,
        unsigned int a9,
        __int64 a10)
{
  unsigned int v11; // r15d
  __int64 v12; // r12
  int v15; // ebp
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rbx
  HDC CompatibleDC; // rdi
  HDC v20; // r13
  int v21; // r15d
  __int64 v22; // r14
  _QWORD v24[9]; // [rsp+80h] [rbp-48h] BYREF
  unsigned int v26; // [rsp+E8h] [rbp+20h]
  unsigned int v27; // [rsp+F8h] [rbp+30h]

  v26 = a4;
  v11 = 0;
  v12 = 0LL;
  if ( a6 && (*a6 < 0x28 || a6[4] - 4 > 1) )
  {
    v15 = a6[2];
    v27 = a6[1];
    if ( v15 < 0 )
      v15 = -v15;
    GreAcquireSemaphoreSharedInternal(ghsemDynamicModeChange, a2, a3, a4);
    EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
    LOBYTE(v16) = 5;
    v17 = HmgShareLockCheck(a2, v16);
    v18 = v17;
    if ( v17 && (*(_DWORD *)(v17 + 112) & 0x4000000) != 0 )
    {
      if ( *(_DWORD *)(v17 + 168) )
        CompatibleDC = *(HDC *)(v17 + 160);
      else
        CompatibleDC = 0LL;
      v20 = CompatibleDC;
      EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
      GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
      if ( CompatibleDC || (CompatibleDC = (HDC)GreCreateCompatibleDC(a1)) != 0LL )
      {
        v21 = 1;
        if ( !a1 )
          goto LABEL_18;
        DCOBJ::DCOBJ((DCOBJ *)v24, a1);
        if ( v24[0] )
        {
          v12 = GreSelectPalette(CompatibleDC, *(_QWORD *)(v24[0] + 80LL), 1LL);
        }
        else
        {
          EngSetLastError(6u);
          v21 = 0;
        }
        if ( v24[0] )
          XDCOBJ::vUnlockFast((XDCOBJ *)v24);
        if ( !v21 )
        {
          v11 = 0;
        }
        else
        {
LABEL_18:
          v11 = 0;
          v22 = GreSelectBitmap(CompatibleDC, a2);
          if ( v22 )
          {
            v11 = GreSetDIBitsToDeviceInternal(CompatibleDC, 0LL, 0, v27, v15, 0, 0, 0, v26, a5, a6, a7, a8, a9, 0, a10);
            if ( v12 )
              GreSelectPalette(CompatibleDC, v12, 1LL);
            GreSelectBitmap(CompatibleDC, v22);
          }
        }
        if ( !v20 )
          bDeleteDCInternal(CompatibleDC, 1LL, 0LL);
      }
    }
    else
    {
      EngSetLastError(6u);
      EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
      GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
    }
    if ( v18 )
      DEC_SHARE_REF_CNT(v18);
  }
  else
  {
    EngSetLastError(0x57u);
  }
  return v11;
}
