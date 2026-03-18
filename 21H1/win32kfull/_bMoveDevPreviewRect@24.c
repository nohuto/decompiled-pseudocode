/*
 * XREFs of _bMoveDevPreviewRect@24 @ 0x1E3ABE
 * Callers:
 *     _xxxDrawDragRectEx@16 @ 0x176775 (_xxxDrawDragRectEx@16.c)
 *     _bSetDevPreviewRect@24 @ 0x1E3D0B (_bSetDevPreviewRect@24.c)
 * Callees:
 *     ?GreUpdateSpriteInternal@@YGHPAUHDEV__@@PAUHWND__@@PAXPAUHDC__@@PAUtagPOINT@@PAUtagSIZE@@34KPAU_BLENDFUNCTION@@KPAUtagRECT@@PAUtagMINIWINDOWINFO@@HH@Z @ 0x603A0 (-GreUpdateSpriteInternal@@YGHPAUHDEV__@@PAUHWND__@@PAXPAUHDC__@@PAUtagPOINT@@PAUtagSIZE@@34KPAU_.c)
 *     ?vUnlock@SEMOBJ@@QAEXXZ @ 0x98AE4 (-vUnlock@SEMOBJ@@QAEXXZ.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _DwmAsyncSendWindowArrangingData@24 @ 0x1D282F (_DwmAsyncSendWindowArrangingData@24.c)
 *     ?bSetPreviewRectContent@@YGHPAU_SPRITESTATE@@PBU_RECTL@@@Z @ 0x1DCEF2 (-bSetPreviewRectContent@@YGHPAU_SPRITESTATE@@PBU_RECTL@@@Z.c)
 */

BOOL __fastcall bMoveDevPreviewRect(HDEV a1, _DWORD *a2, char a3, int a4, int a5, int a6)
{
  BOOL v6; // ebx
  int v7; // esi
  _DWORD *v8; // esi
  int v9; // edx
  int v10; // eax
  int v11; // edi
  void *v12; // eax
  int v13; // edx
  HDEV v14; // esi
  int updated; // eax
  _DWORD *v16; // edi
  _DWORD *v17; // esi
  int v19; // [esp-10h] [ebp-A0h]
  int *v20; // [esp-Ch] [ebp-9Ch]
  int v21; // [esp-8h] [ebp-98h]
  int v22; // [esp-4h] [ebp-94h]
  int v23; // [esp+0h] [ebp-90h]
  int v24; // [esp+4h] [ebp-8Ch]
  _DWORD *v26; // [esp+10h] [ebp-80h] BYREF
  int v27; // [esp+14h] [ebp-7Ch]
  HDEV v28; // [esp+18h] [ebp-78h]
  struct HDC__ v29; // [esp+1Ch] [ebp-74h] BYREF
  int v30; // [esp+20h] [ebp-70h]
  int unused; // [esp+24h] [ebp-6Ch]
  _DWORD *v32; // [esp+28h] [ebp-68h]
  int v33; // [esp+2Ch] [ebp-64h]
  char v34[4]; // [esp+30h] [ebp-60h] BYREF
  int v35; // [esp+34h] [ebp-5Ch] BYREF
  _DWORD Parameter[15]; // [esp+38h] [ebp-58h] BYREF
  BOOL v37; // [esp+74h] [ebp-1Ch]
  int v38; // [esp+7Ch] [ebp-14h] BYREF
  int v39; // [esp+80h] [ebp-10h]
  int v40; // [esp+84h] [ebp-Ch]
  int v41; // [esp+88h] [ebp-8h]
  struct tagRECT *v42; // [esp+98h] [ebp+8h]

  v42 = (struct tagRECT *)(a3 & 1);
  v6 = 0;
  v27 = a4;
  v28 = a1;
  v7 = _ghsemDynamicModeChange;
  v38 = 0;
  v26 = a1;
  v29.unused = 0;
  v39 = 0;
  v30 = 0;
  v33 = _ghsemDynamicModeChange;
  v40 = 0;
  v41 = 0;
  GreAcquireSemaphoreSharedInternal(_ghsemDynamicModeChange);
  EtwTraceGreLockAcquireSemaphoreShared(L"hsem", _ghsemDynamicModeChange);
  v35 = _ghsemGreLock;
  GreAcquireSemaphore(_ghsemGreLock);
  SPRITELOCK::SPRITELOCK((SPRITELOCK *)v34, (struct PDEVOBJ *)&v26);
  if ( v26[198] )
  {
    v8 = a2;
    v9 = v26[202] - v26[200];
    v32 = v26 + 200;
    v10 = v26[203] - v26[201];
    v29.unused = a2[2] - *a2;
    unused = v29.unused;
    v11 = a2[3] - a2[1];
    v30 = v11;
    if ( v26[191] )
    {
      if ( v9 || v10 )
      {
        v22 = a6;
        v21 = a5;
        v20 = a2;
        v19 = v27;
        v12 = (void *)UserReferenceDwmApiPort();
        v13 = 1;
      }
      else
      {
        v22 = a6;
        v21 = a5;
        v20 = a2;
        v19 = v27;
        v12 = (void *)UserReferenceDwmApiPort();
        v13 = 0;
      }
      v6 = DwmAsyncSendWindowArrangingData(v12, v13, v19, v20, v21, v22) >= 0;
      goto LABEL_16;
    }
    if ( unused == v9 && v11 == v10 )
    {
      v38 = *a2;
      v39 = a2[1];
      v40 = a2[2];
      v41 = a2[3];
      v14 = (HDEV)v26[198];
      if ( GreStackExpansionRequired(0x2000) )
      {
        Parameter[0] = v28;
        Parameter[4] = &v38;
        Parameter[5] = &v29;
        Parameter[13] = v42;
        Parameter[1] = 0;
        Parameter[2] = v14;
        Parameter[3] = 0;
        memset(&Parameter[6], 0, 28);
        Parameter[14] = 0;
        v37 = 0;
        if ( KeExpandKernelStackAndCalloutEx(GreUpdateSpriteCallout, Parameter, 0x2000u, 1u, 0) < 0 )
        {
LABEL_18:
          v7 = v33;
          goto LABEL_19;
        }
        v6 = v37;
        v8 = a2;
LABEL_16:
        if ( v6 )
        {
          v16 = v32;
          *v32 = *v8;
          v17 = v8 + 1;
          *++v16 = *v17++;
          *++v16 = *v17;
          v16[1] = v17[1];
        }
        goto LABEL_18;
      }
      updated = GreUpdateSpriteInternal(0, v28, v14, 0, &v38, &v29, 0, 0, 0, 0, 0, 0, 0, v42, 0, v23, v24);
      v8 = a2;
    }
    else
    {
      updated = bSetPreviewRectContent((int)(v26 + 16), a2);
    }
    v6 = updated;
    goto LABEL_16;
  }
LABEL_19:
  SPRITELOCK::~SPRITELOCK((SPRITELOCK *)v34);
  SEMOBJ::vUnlock((SEMOBJ *)&v35);
  EtwTraceGreLockReleaseSemaphore(L"hsem", v7);
  GreReleaseSemaphoreInternal(v7);
  return v6;
}
