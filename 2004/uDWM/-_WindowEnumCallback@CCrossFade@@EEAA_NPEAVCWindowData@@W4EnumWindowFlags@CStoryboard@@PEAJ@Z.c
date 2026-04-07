/*
 * XREFs of ?_WindowEnumCallback@CCrossFade@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800B43E0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800039DC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z @ 0x180009F24 (-SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x18000A944 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017894 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x1800289B0 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?IsWindowTrackedAndCloakChanged@CWindowPropertyTracker@@QEAA_NPEAUHWND__@@_N@Z @ 0x180038BCC (-IsWindowTrackedAndCloakChanged@CWindowPropertyTracker@@QEAA_NPEAUHWND__@@_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800560C0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CCrossFade::_WindowEnumCallback(__int64 a1, __int64 a2, __int64 a3, int *a4)
{
  int v4; // edi
  char v8; // si
  int v9; // ebx
  float v10; // xmm7_4
  struct tagRECT v11; // xmm6
  struct tagPOINT *v12; // rcx
  struct tagRECT *v13; // rcx
  char result; // al
  int v15; // eax
  __int64 v16; // r8
  int v17; // eax
  struct tagRECT v18; // [rsp+30h] [rbp-48h] BYREF
  CBaseObject *v19; // [rsp+98h] [rbp+20h] BYREF

  v4 = 0;
  v19 = 0LL;
  if ( (a3 & 1) == 0 )
    goto LABEL_17;
  v8 = 0;
  v9 = *(_DWORD *)(a2 + 616) & 0xFFF;
  if ( v9 != 18 )
  {
    switch ( *(_DWORD *)(a2 + 616) & 0xFFF )
    {
      case 19:
        goto LABEL_20;
      case 61:
        LOBYTE(a3) = 1;
        v15 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, CBaseObject **))(*(_QWORD *)a1 + 144LL))(
                a1,
                a2,
                a3,
                &v19);
        v4 = v15;
        if ( v15 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v15, 0x6AAu);
          goto LABEL_15;
        }
LABEL_9:
        if ( *(_DWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1) == 75 )
        {
          if ( ((v9 - 62) & 0xFFFFFFFD) != 0 )
          {
LABEL_11:
            v10 = FLOAT_1_0;
LABEL_12:
            if ( !v19 )
              goto LABEL_17;
            v12 = (struct tagPOINT *)*((_QWORD *)v19 + 5);
            v18 = *(struct tagRECT *)((char *)v19 + 88);
            v11 = v18;
            CAnimatedTransitionVisual::SetBeginRect(v12, &v18);
            v13 = (struct tagRECT *)*((_QWORD *)v19 + 5);
            v13[54] = v11;
            CVisual::SetDirtyFlags((CVisual *)&v13->right, 4096);
            CAnimatedTransitionVisual::SetBeginAlpha(*((CAnimatedTransitionVisual **)v19 + 5), v10);
            if ( *((_DWORD *)v19 + 17) != 2 )
              *((_DWORD *)v19 + 17) = 1;
            goto LABEL_15;
          }
        }
        else if ( !v8 )
        {
          goto LABEL_11;
        }
        v10 = 0.0;
        goto LABEL_12;
      case 62:
        goto LABEL_20;
      case 63:
        goto LABEL_21;
      case 64:
LABEL_20:
        v8 = 1;
        goto LABEL_21;
    }
    if ( (*(_DWORD *)(a2 + 616) & 0xFFF) != 0x41 )
      goto LABEL_9;
  }
LABEL_21:
  if ( !CWindowPropertyTracker::IsWindowTrackedAndCloakChanged(
          (CWindowPropertyTracker *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 30) + 48LL),
          *(HWND *)(a2 + 40),
          v8 ^ 1) )
    goto LABEL_9;
  LOBYTE(v16) = v8;
  v17 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, CBaseObject **))(*(_QWORD *)a1 + 144LL))(
          a1,
          a2,
          v16,
          &v19);
  v4 = v17;
  if ( v17 >= 0 )
    goto LABEL_9;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v17, 0x6A2u);
LABEL_15:
  if ( v19 )
    CBaseObject::Release(v19);
LABEL_17:
  result = 1;
  *a4 = v4;
  return result;
}
