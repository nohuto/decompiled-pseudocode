/*
 * XREFs of ?xxxSendBSMtoDesktop@@YGHPAUtagWND@@IIJPAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z @ 0x7F518
 * Callers:
 *     _xxxSendMessageBSM@24 @ 0x7F422 (_xxxSendMessageBSM@24.c)
 * Callees:
 *     _CanForceForeground@4 @ 0x1B040 (_CanForceForeground@4.c)
 *     _FreeHwndList@4 @ 0x2D2D0 (_FreeHwndList@4.c)
 *     _BuildHwndList@12 @ 0x2D340 (_BuildHwndList@12.c)
 *     @HMValidateHandleNoSecure@8 @ 0x3C46E (@HMValidateHandleNoSecure@8.c)
 *     _xxxSendTransformableMessageTimeout@36 @ 0x402E0 (_xxxSendTransformableMessageTimeout@36.c)
 *     _xxxSendNotifyMessage@20 @ 0x4823C (_xxxSendNotifyMessage@20.c)
 *     __PostTransformableMessageIL@24 @ 0x7F87A (__PostTransformableMessageIL@24.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     ?QueueNotifyTransformableMessage@@YGXPAUtagWND@@IIJHH@Z @ 0x8136E (-QueueNotifyTransformableMessage@@YGXPAUtagWND@@IIJHH@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

int __userpurge xxxSendBSMtoDesktop@<eax>(
        unsigned int a1@<edx>,
        int a2@<ecx>,
        struct tagWND *HighLimit,
        unsigned int a4,
        unsigned int a5,
        size_t MaxCount,
        struct tagBROADCASTSYSTEMMSGPARAMS *a7,
        int a8)
{
  unsigned int v8; // ebx
  int v10; // ecx
  _DWORD *v11; // edi
  unsigned int *i; // eax
  unsigned int v13; // eax
  int v14; // eax
  int v15; // esi
  int v16; // ecx
  int v17; // edx
  __int16 v18; // cx
  int v19; // ecx
  unsigned int v20; // eax
  int v21; // ecx
  BOOL v22; // edx
  struct tagDDECONV *v23; // edi
  int *v24; // edx
  int v25; // ecx
  int v26; // eax
  int v27; // eax
  int v29; // eax
  PETHREAD *v30; // eax
  bool v31; // zf
  void *v32; // ecx
  void *v33; // eax
  int v34; // [esp+0h] [ebp-88h]
  int v35; // [esp+4h] [ebp-84h]
  int v36; // [esp+10h] [ebp-78h] BYREF
  int v37; // [esp+14h] [ebp-74h]
  int v38; // [esp+18h] [ebp-70h]
  unsigned int v39; // [esp+1Ch] [ebp-6Ch]
  int v40; // [esp+20h] [ebp-68h]
  int v41; // [esp+24h] [ebp-64h] BYREF
  int v42; // [esp+28h] [ebp-60h]
  int v43; // [esp+2Ch] [ebp-5Ch] BYREF
  int v44; // [esp+30h] [ebp-58h]
  struct tagBWL *v45; // [esp+34h] [ebp-54h]
  unsigned int *v46; // [esp+38h] [ebp-50h]
  int v47; // [esp+3Ch] [ebp-4Ch]
  int v48; // [esp+40h] [ebp-48h]
  int v49; // [esp+44h] [ebp-44h]
  int v50; // [esp+48h] [ebp-40h]
  int v51; // [esp+4Ch] [ebp-3Ch] BYREF
  int v52; // [esp+50h] [ebp-38h]
  int v53; // [esp+54h] [ebp-34h] BYREF
  int v54; // [esp+58h] [ebp-30h]
  void *Handle; // [esp+5Ch] [ebp-2Ch] BYREF
  int v56; // [esp+60h] [ebp-28h]
  HANDLE InputBuffer; // [esp+64h] [ebp-24h] BYREF
  unsigned int v58; // [esp+68h] [ebp-20h]
  unsigned int v59; // [esp+6Ch] [ebp-1Ch]
  int v60[5]; // [esp+70h] [ebp-18h] BYREF

  v47 = 0;
  v50 = 0;
  v59 = a4;
  v8 = a1;
  v39 = a1;
  v36 = 0;
  v56 = 1;
  v58 = a5;
  v37 = 0;
  v38 = 0;
  v54 = _gptiCurrent;
  if ( a1 < 0x400 || a1 >= 0xC000 )
  {
    v10 = 0;
    v49 = 0;
  }
  else
  {
    v10 = 1;
    v49 = 1;
  }
  memset(v60, 0, sizeof(v60));
  if ( v10 )
    UserSetLastError(87);
  if ( a2 )
  {
    if ( !MaxCount && (v8 == 21 || v8 == 26 || v8 == 29 || v8 == 295 || v8 == 794) )
      MaxCount = 1;
    v45 = (struct tagBWL *)BuildHwndList(*(_DWORD *)(a2 + 60), 2, 0);
    if ( v45 )
    {
      v11 = (_DWORD *)v58;
      if ( (*(_DWORD *)(v58 + 4) & 0x90) == 0x80
        && *(_DWORD *)(a2 + 12) == _grpdeskRitInput
        && ((*(_BYTE *)(v54 + 264) & 8) != 0 || CanForceForeground(*(_DWORD **)(v54 + 232))) )
      {
        CInputGlobals::ClearPtiLastWoken(_gpInputGlobals);
      }
      if ( v8 != 537
        || HighLimit != (struct tagWND *)32772 && HighLimit != (struct tagWND *)0x8000
        || *(_DWORD *)(v59 + 4) != 2 )
      {
        goto LABEL_17;
      }
      if ( (*(_DWORD *)(v59 + 12) & 0x40000000) == 0 )
      {
        qmemcpy(v60, (const void *)v59, sizeof(v60));
        v11 = (_DWORD *)v58;
        v60[3] |= 0x40000000u;
        if ( (*(_DWORD *)(v58 + 4) & 0x400) == 0 )
        {
          v51 = 0;
          v52 = 0;
          GetProcessLuid(0, &v51);
          if ( v51 == _luidSystem[0] && v52 == _luidSystem[1] )
            v50 = 1;
        }
LABEL_17:
        for ( i = (unsigned int *)((char *)v45 + 16); ; i = v46 + 1 )
        {
          v46 = i;
          v13 = *i;
          if ( v13 == 1 )
          {
LABEL_45:
            FreeHwndList(v45);
            return v56;
          }
          v48 = 0;
          v14 = HMValidateHandleNoSecure(v13, 1);
          v15 = v14;
          if ( v14 )
          {
            v16 = v11[1];
            if ( (v16 & 2) == 0 || *(_DWORD *)(*(_DWORD *)(v14 + 8) + 236) != *(_DWORD *)(v54 + 236) )
            {
              if ( (v16 & 0x400) == 0
                || (v44 = 0, v43 = 0, (int)GetProcessLuid(**(_DWORD **)(v14 + 8), &v43) >= 0)
                && v11[5] == v43
                && v11[6] == v44 )
              {
                if ( v50 == 1 )
                {
                  v41 = 0;
                  v42 = 0;
                  if ( (int)GetProcessLuid(**(_DWORD **)(v15 + 8), &v41) < 0 )
                    continue;
                  if ( _luidSystem[0] != v41 || _luidSystem[1] != v42 )
                    v48 = 1;
                }
                v17 = *(_DWORD *)(v15 + 20);
                if ( (*(_WORD *)(v17 + 30) & 0x3FFF) != 0x29C )
                {
                  v18 = **(_WORD **)(*(_DWORD *)(v15 + 76) + 4);
                  if ( *(_WORD *)(_gpsi + 508) != v18
                    && gaOleMainThreadWndClass != v18
                    && (!v49 || (*(_BYTE *)(v17 + 13) & 2) == 0) )
                  {
                    break;
                  }
                }
              }
            }
          }
LABEL_44:
          ;
        }
        v36 = *(_DWORD *)(v54 + 228);
        *(_DWORD *)(v54 + 228) = &v36;
        v37 = v15;
        HMLockObject(v15);
        v20 = v11[1];
        if ( (v20 & 0x10) != 0 )
        {
          _PostTransformableMessageIL(v15, v8, HighLimit, v59, MaxCount, v19);
          goto LABEL_43;
        }
        if ( (v20 & 0x100) != 0 )
        {
          xxxSendNotifyMessage(v15, v8, HighLimit, v59, MaxCount);
          goto LABEL_43;
        }
        if ( (v20 & 0x20000000) != 0 )
        {
          QueueNotifyTransformableMessage(HighLimit, v59, MaxCount, 1, v34, v35);
          goto LABEL_43;
        }
        v53 = 0;
        InputBuffer = 0;
        v21 = v20 & 8;
        v40 = v21;
        v52 = v20 & 0x20;
        v22 = v8 == 536 && HighLimit == (struct tagWND *)4;
        Handle = (void *)v22;
        if ( (v20 & 8) != 0 )
          v23 = (struct tagDDECONV *)(v22 ? 2000 : 5000);
        else
          v23 = 0;
        if ( v22 )
        {
          InputBuffer = PsGetThreadProcessId(**(PETHREAD **)(v15 + 8));
          ZwPowerInformation(TraceApplicationPowerMessage, &InputBuffer, 4u, 0, 0);
          v20 = *(_DWORD *)(v58 + 4);
          v21 = v40;
        }
        v24 = v60;
        v25 = v21 != 0 ? 2 : 0;
        v26 = (v20 >> 3) & 8;
        if ( !v48 )
          v24 = (int *)v59;
        v8 = v39;
        v27 = xxxSendTransformableMessageTimeout(
                v15,
                v39,
                (unsigned int)HighLimit,
                (int)v24,
                v26 | v25,
                v23,
                &v53,
                MaxCount,
                1);
        v11 = (_DWORD *)v58;
        if ( v27 )
        {
          if ( (*(_BYTE *)(v58 + 4) & 1) == 0 )
          {
LABEL_40:
            if ( Handle )
            {
              v30 = *(PETHREAD **)(v15 + 8);
              InputBuffer = 0;
              InputBuffer = PsGetThreadProcessId(*v30);
              ZwPowerInformation(TraceApplicationPowerMessageEnd, &InputBuffer, 4u, 0, 0);
            }
            if ( !v56 )
            {
              v31 = (v11[1] & 0x200) == 0;
              v11[4] = *(_DWORD *)v15;
              if ( !v31 )
              {
                v32 = *(void **)(v15 + 12);
                v33 = 0;
                Handle = 0;
                if ( v32 )
                {
                  ObOpenObjectByPointer(v32, 0, 0, (ACCESS_MASK)&loc_1F0002 + 1, 0, 1, &Handle);
                  v33 = Handle;
                }
                v11[3] = v33;
              }
              v47 = 1;
            }
LABEL_43:
            ThreadUnlock1();
            if ( v47 )
              goto LABEL_45;
            goto LABEL_44;
          }
          v29 = 0;
          if ( v8 == 17 )
            v31 = v53 == 0;
          else
            v31 = v53 == 1112363332;
          LOBYTE(v29) = !v31;
        }
        else
        {
          v29 = v52;
        }
        v56 = v29;
        goto LABEL_40;
      }
    }
  }
  return 0;
}
