/*
 * XREFs of ?xxxMouseActivate@@YGHPAUtagTHREADINFO@@PAUtagWND@@PBUtagQMSG@@H@Z @ 0x7007A
 * Callers:
 *     ?xxxScanSysQueue@@YG?AW4_SCANSYSQUEUERESULT@@PAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIKKPAPAUtagQMSG@@@Z @ 0x38D60 (-xxxScanSysQueue@@YG-AW4_SCANSYSQUEUERESULT@@PAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIKKPAPAUta.c)
 * Callees:
 *     ?xxxActivateWindowWithOptions@@YG_NPAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@@Z @ 0x1A2C8 (-xxxActivateWindowWithOptions@@YG_NPAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStr.c)
 *     __GetTopLevelWindow@4 @ 0x313A0 (__GetTopLevelWindow@4.c)
 *     __GetDesktopWindow@4 @ 0x381A0 (__GetDesktopWindow@4.c)
 *     _xxxSendMessage@16 @ 0x402B0 (_xxxSendMessage@16.c)
 *     _xxxSendTransformableMessageTimeout@36 @ 0x402E0 (_xxxSendTransformableMessageTimeout@36.c)
 *     ?IsIndependentInputWindow@@YGHPBUtagWND@@@Z @ 0x70058 (-IsIndependentInputWindow@@YGHPBUtagWND@@@Z.c)
 *     ?PostEventMessageEx@@YGHPAUtagTHREADINFO@@PAUtagQ@@KPAUtagWND@@IIJPAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0xF0F76 (-PostEventMessageEx@@YGHPAUtagTHREADINFO@@PAUtagQ@@KPAUtagWND@@IIJPAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 *     ?GetCompositionInputWindowUIOwner@@YGPAUtagWND@@PBU1@@Z @ 0x14163B (-GetCompositionInputWindowUIOwner@@YGPAUtagWND@@PBU1@@Z.c)
 *     ?CheckOnTop@@YGHPAUtagTHREADINFO@@PAUtagWND@@I@Z @ 0x14CE05 (-CheckOnTop@@YGHPAUtagTHREADINFO@@PAUtagWND@@I@Z.c)
 *     _xxxActiveWindowTracking@12 @ 0x14ECA1 (_xxxActiveWindowTracking@12.c)
 */

int __userpurge xxxMouseActivate@<eax>(
        int *a1@<edx>,
        int a2@<ecx>,
        struct tagTHREADINFO *a3,
        struct tagWND *a4,
        const struct tagQMSG *a5,
        int a6)
{
  struct tagTHREADINFO *v6; // esi
  int v8; // eax
  int v9; // edx
  int v10; // eax
  int v11; // edx
  int active; // ebx
  struct tagWND *CompositionInputWindowUIOwner; // eax
  unsigned int *TopLevelWindow; // eax
  int *v16; // esi
  _BYTE *v17; // ecx
  BOOL v18; // edx
  int v19; // edi
  int v20; // eax
  int v21; // edx
  int v22; // ecx
  int v23; // edx
  int v24; // ecx
  int *v25; // eax
  bool v26; // zf
  unsigned __int16 v27; // si
  _DWORD *v28; // ecx
  unsigned int v29; // edx
  bool v30; // zf
  const struct tagWND *v31; // [esp+0h] [ebp-40h]
  int v32; // [esp+0h] [ebp-40h]
  struct tagINPUT_MESSAGE_SOURCE *v33; // [esp+4h] [ebp-3Ch]
  int v34; // [esp+10h] [ebp-30h] BYREF
  int *v35; // [esp+14h] [ebp-2Ch]
  int v36; // [esp+18h] [ebp-28h]
  int *v37; // [esp+1Ch] [ebp-24h]
  int v38; // [esp+20h] [ebp-20h]
  int v39; // [esp+24h] [ebp-1Ch]
  int v40; // [esp+28h] [ebp-18h]
  int v41; // [esp+2Ch] [ebp-14h]
  int v42; // [esp+30h] [ebp-10h]
  _DWORD *v43; // [esp+34h] [ebp-Ch]
  int v44; // [esp+38h] [ebp-8h]
  int v45; // [esp+3Ch] [ebp-4h]
  struct tagTHREADINFO *v46; // [esp+48h] [ebp+8h]

  v36 = 0;
  v6 = (struct tagTHREADINFO *)*((_DWORD *)a3 + 3);
  v45 = a2;
  v39 = *((_DWORD *)a3 + 4);
  v40 = *((_DWORD *)a3 + 7);
  v8 = *((_DWORD *)a3 + 16);
  v41 = *((_DWORD *)a3 + 8);
  v9 = v8;
  v44 = v8 << 6 >> 31;
  v10 = *(_DWORD *)(a2 + 236);
  v11 = v9 << 9 >> 31;
  v37 = a1;
  v26 = *(_DWORD *)(v10 + 56) == 0;
  v46 = v6;
  v42 = v11;
  if ( !v26 )
    return 0;
  active = 0;
  v38 = 0;
  if ( !v11 )
  {
    if ( IsIndependentInputWindow(a1) )
    {
      if ( v6 == (struct tagTHREADINFO *)513
        || v6 == (struct tagTHREADINFO *)516
        || v6 == (struct tagTHREADINFO *)519
        || v6 == (struct tagTHREADINFO *)523 )
      {
        CompositionInputWindowUIOwner = GetCompositionInputWindowUIOwner(v31);
        if ( CompositionInputWindowUIOwner )
        {
          TopLevelWindow = (unsigned int *)_GetTopLevelWindow((int)CompositionInputWindowUIOwner);
          PostEventMessageEx((struct tagTHREADINFO *)6, 0, 0, 0, *TopLevelWindow, 0, v32, v33);
        }
      }
      return 0;
    }
    a2 = v45;
  }
  v16 = a1;
  v34 = *(_DWORD *)(a2 + 228);
  *(_DWORD *)(a2 + 228) = &v34;
  v35 = a1;
  if ( a1 )
    HMLockObject(a1);
  v17 = (_BYTE *)a1[5];
  v18 = (v17[13] & 2) == 0 || (v17[16] & 4) == 0;
  v43 = (_DWORD *)v18;
  if ( v46 == (struct tagTHREADINFO *)513
    || v46 == (struct tagTHREADINFO *)516
    || v46 == (struct tagTHREADINFO *)519
    || v46 == (struct tagTHREADINFO *)523 )
  {
    if ( (v17[23] & 0xC0) == 0x40 )
    {
      v19 = v45;
      do
      {
        v16 = (int *)v16[14];
        if ( v18 )
        {
          ThreadUnlock1();
          v34 = *(_DWORD *)(v19 + 228);
          *(_DWORD *)(v19 + 228) = &v34;
          v35 = v16;
          if ( v16 )
            HMLockObject(v16);
          v20 = v16[5];
          v21 = *(_DWORD *)(v20 + 68);
          v22 = *(_DWORD *)(v20 + 72);
          _InterlockedIncrement(&glSendMessage);
          xxxSendTransformableMessageTimeout(
            (int)v16,
            0x210u,
            (unsigned int)v46 | v39,
            (unsigned __int16)(v40 - v21) | ((unsigned __int16)(v41 - v22) << 16),
            0,
            0,
            0,
            1u,
            0);
          v18 = (BOOL)v43;
        }
      }
      while ( (*(_BYTE *)(v16[5] + 23) & 0xC0) == 0x40 );
      active = v38;
      a1 = v37;
    }
    if ( !v18 )
    {
      ThreadUnlock1();
      v35 = v16;
      v34 = *(_DWORD *)(v45 + 228);
      *(_DWORD *)(v45 + 228) = &v34;
      HMLockObject(v16);
    }
  }
  v23 = 0;
  v24 = *(_DWORD *)(v45 + 236);
  v43 = (_DWORD *)v24;
  v25 = *(int **)(v24 + 64);
  if ( v44 )
    v26 = v25 == v16;
  else
    v26 = v25 == a1;
  if ( v42 || ((unsigned __int8)_gpdwCPUserPreferencesMask & 1) == 0 || v46 != (struct tagTHREADINFO *)512 )
  {
    LOBYTE(v23) = !v26;
    if ( !v23 && (*(_DWORD *)(v24 + 284) & 0x8000) == 0 || v16 == (int *)_GetDesktopWindow(v16) )
    {
LABEL_71:
      active = 0;
      if ( ((unsigned __int8)_gpdwCPUserPreferencesMask & 1) != 0
        && CheckOnTop(v46, v31, (unsigned int)v33)
        && a4 == (struct tagWND *)1
        && (*(_BYTE *)(v16[2] + 264) & 8) != 0 )
      {
        v30 = (*(_BYTE *)(v16[5] + 16) & 8) == 0;
LABEL_68:
        v27 = (unsigned __int16)a4;
        if ( v30 )
          active = 1;
        goto LABEL_57;
      }
LABEL_56:
      v27 = (unsigned __int16)a4;
      goto LABEL_57;
    }
    if ( v46 != (struct tagTHREADINFO *)513
      && v46 != (struct tagTHREADINFO *)516
      && v46 != (struct tagTHREADINFO *)519
      && v46 != (struct tagTHREADINFO *)523 )
    {
      goto LABEL_56;
    }
    if ( v42 )
    {
      v28 = v43;
      active = (v44 != 0) + 3;
    }
    else
    {
      if ( v44 )
      {
        v28 = v43;
        active = 2;
LABEL_50:
        if ( (v16 != (int *)v28[16] || (v28[71] & 0x8000) != 0)
          && !xxxActivateWindowWithOptions(v16, 3, 49, v28[20] != 0)
          || (*(_BYTE *)(v16[5] + 23) & 8) != 0
          || active == 2 )
        {
          active = 1;
          goto LABEL_56;
        }
        goto LABEL_71;
      }
      if ( v16 )
        v29 = *v16;
      else
        v29 = 0;
      active = xxxSendMessage(a1, v29, (unsigned __int16)a4 | ((unsigned __int16)v46 << 16));
      v28 = *(_DWORD **)(v45 + 236);
    }
    if ( active < 0 )
      goto LABEL_56;
    if ( active > 2 )
    {
      if ( active != 3 )
      {
        v30 = active == 4;
        goto LABEL_68;
      }
      active = 0;
      goto LABEL_56;
    }
    goto LABEL_50;
  }
  v27 = (unsigned __int16)a4;
  active = xxxActiveWindowTracking(a1, 512, a4);
LABEL_57:
  if ( !*(_DWORD *)(*(_DWORD *)(v45 + 236) + 56) )
    xxxSendMessage(a1, *a1, v27 | ((unsigned __int16)v46 << 16));
  ThreadUnlock1();
  return active;
}
