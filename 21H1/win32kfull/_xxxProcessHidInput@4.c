/*
 * XREFs of _xxxProcessHidInput@4 @ 0x144ADA
 * Callers:
 *     _ProcessHidRawInput@4 @ 0x14434F (_ProcessHidRawInput@4.c)
 * Callees:
 *     ??0ReEnterLeaveCrit@@QAE@XZ @ 0x6FC2E (--0ReEnterLeaveCrit@@QAE@XZ.c)
 *     ?HidIsRequestedByThisProcess@@YGPAUtagPROCESS_HID_REQUEST@@PAUDEVICEINFO@@PAUtagPROCESS_HID_TABLE@@@Z @ 0x143C12 (-HidIsRequestedByThisProcess@@YGPAUtagPROCESS_HID_REQUEST@@PAUDEVICEINFO@@PAUtagPROCESS_HID_TABL.c)
 *     ?PostHidInput@@YGHPAUDEVICEINFO@@PAUtagQ@@PAUtagWND@@I@Z @ 0x143C5D (-PostHidInput@@YGHPAUDEVICEINFO@@PAUtagQ@@PAUtagWND@@I@Z.c)
 *     _IsCSWakeablePointerDevice@4 @ 0x1591BE (_IsCSWakeablePointerDevice@4.c)
 */

int __stdcall xxxProcessHidInput(int a1)
{
  int v1; // edi
  int result; // eax
  int DLT; // eax
  int v4; // ecx
  int v5; // eax
  struct tagPROCESS_HID_REQUEST *v6; // eax
  int v7; // edi
  _DWORD *v8; // ebx
  int v9; // ecx
  _DWORD *v10; // ebx
  struct tagPROCESS_HID_REQUEST *v11; // eax
  int v12; // ecx
  void (__stdcall *v13)(int); // ecx
  int v14; // edi
  int v15; // edx
  int v16; // eax
  int v17; // eax
  int v18; // ecx
  int v19; // eax
  bool v20; // zf
  int v21; // ecx
  int v22; // ecx
  int v23; // ebx
  unsigned int v24; // edx
  unsigned int v25; // edi
  unsigned __int64 v26; // kr00_8
  struct tagWND *v27; // [esp+0h] [ebp-20h]
  unsigned int v28; // [esp+4h] [ebp-1Ch]
  int v29; // [esp+Ch] [ebp-14h]
  int v30; // [esp+10h] [ebp-10h]
  int v31; // [esp+14h] [ebp-Ch]
  int v32; // [esp+1Ch] [ebp-4h] BYREF

  v1 = 1;
  v31 = 0;
  v30 = 0;
  v29 = 1;
  result = *_gpsi;
  if ( (*_gpsi & 0x2000) != 0 )
    return result;
  if ( (result & 0x4000) != 0 )
  {
    if ( *(char *)(a1 + 120) >= 0 )
      return result;
    result = IsCSWakeablePointerDevice(a1);
    if ( !result )
      return result;
  }
  if ( *(int *)(a1 + 152) < 0 )
    return result;
  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v32);
  DLT = DLT_RAWINPUT::getDLT();
  GetDomainLockRef(DLT);
  if ( _gpqForeground )
  {
    v4 = *(_DWORD *)(_gpqForeground + 64);
    if ( v4 )
      v5 = *(_DWORD *)(v4 + 8);
    else
      v5 = *(_DWORD *)(_gpqForeground + 52);
    v31 = *(_DWORD *)(v5 + 232);
    v6 = HidIsRequestedByThisProcess(*(_DWORD *)(v31 + 472), a1, 0, v31);
    if ( v6
      && ((v7 = *((_DWORD *)v6 + 5), v8 = (_DWORD *)_gpqForeground, !v7)
       || (v8 = *(_DWORD **)(*(_DWORD *)(v7 + 8) + 236), *(char *)(*(_DWORD *)(v7 + 20) + 12) >= 0))
      && ((*(_BYTE *)(a1 + 104) & 0x20) == 0
       || (*(_BYTE *)(*(_DWORD *)(a1 + 284) + 300) & 0x10) != 0
       || (!(unsigned __int8)IsInputThread()
         ? (v9 = *(_DWORD *)(_gptiCurrent + 232) + 496)
         : (v9 = *(_DWORD *)(a1 + 284) + 816),
           (unsigned __int8)CheckAccess(v9, v8 + 79)))
      && PostHidInput(v8, (_DWORD *)a1, (struct DEVICEINFO *)v7, 0, v27, v28) )
    {
      v1 = 0;
      v30 = 1;
      v29 = 0;
    }
    else
    {
      v1 = 1;
    }
  }
  result = (int)&RawInputManagerObject::gHidRequestTable[4];
  v10 = (_DWORD *)RawInputManagerObject::gHidRequestTable[4];
  while ( v10 != (_DWORD *)result )
  {
    if ( (int)v10[10] <= 0 )
      goto LABEL_53;
    v11 = HidIsRequestedByThisProcess((int)v10, a1, (unsigned __int16)v10, v1);
    if ( !v11 )
      goto LABEL_53;
    v12 = *((_DWORD *)v11 + 3);
    if ( (v12 & 1) == 0 || (v12 & 2) != 0 && !v1 )
      goto LABEL_53;
    v13 = (void (__stdcall *)(int))*((_DWORD *)v11 + 6);
    if ( v13 )
    {
      v13(a1);
      goto LABEL_53;
    }
    v14 = *((_DWORD *)v11 + 5);
    v15 = *(_DWORD *)(v14 + 8);
    if ( *(_DWORD *)(v15 + 232) == v31 )
      goto LABEL_53;
    if ( *(_DWORD *)(v14 + 12) != _grpdeskRitInput )
      goto LABEL_53;
    v16 = *(_DWORD *)(v14 + 20);
    if ( *(char *)(v16 + 12) < 0 || *(char *)(v16 + 11) < 0 )
      goto LABEL_53;
    v17 = *(_DWORD *)(a1 + 280);
    v18 = *(unsigned __int16 *)(v17 + 10);
    v19 = *(unsigned __int16 *)(v17 + 8);
    if ( v19 == 12 )
    {
      v20 = (_WORD)v18 == 1;
      goto LABEL_36;
    }
    if ( (_WORD)v19 == 1 )
    {
      v20 = v18 == 9;
LABEL_36:
      if ( v20 )
        goto LABEL_51;
      goto LABEL_41;
    }
    if ( (unsigned __int16)v19 >= 0xFF00u )
      goto LABEL_51;
LABEL_41:
    if ( _gpqForeground )
    {
      if ( !(unsigned __int8)CheckAccess(*(_DWORD *)(v15 + 236) + 316, _gpqForeground + 316) )
      {
        v21 = *(_DWORD *)(v14 + 8);
        if ( *(int *)(*(_DWORD *)(v21 + 232) + 8) >= 0 )
        {
          EtwTraceUIPIInputError(
            v21,
            0,
            _gpqForeground,
            *(_DWORD *)(_gpqForeground + 316),
            *(_DWORD *)(_gpqForeground + 320),
            5);
          goto LABEL_53;
        }
      }
    }
    if ( (*(_DWORD *)(a1 + 104) & 0x2000) == 0
      || (*(_BYTE *)(*(_DWORD *)(a1 + 284) + 300) & 0x10) != 0
      || (!(unsigned __int8)IsInputThread()
        ? (v22 = *(_DWORD *)(_gptiCurrent + 232) + 496)
        : (v22 = *(_DWORD *)(a1 + 284) + 816),
          (unsigned __int8)CheckAccess(v22, *(_DWORD *)(*(_DWORD *)(v14 + 8) + 236) + 316)) )
    {
LABEL_51:
      result = PostHidInput(
                 *(_DWORD **)(*(_DWORD *)(v14 + 8) + 236),
                 (_DWORD *)a1,
                 (struct DEVICEINFO *)v14,
                 (struct tagQ *)1,
                 v27,
                 v28);
      if ( !result )
        break;
      v30 = 1;
    }
LABEL_53:
    v10 = (_DWORD *)*v10;
    result = (int)&RawInputManagerObject::gHidRequestTable[4];
    v1 = v29;
  }
  if ( v30 && (*(_BYTE *)(a1 + 120) & 0x40) == 0 )
  {
    v23 = MEMORY[0xFFDF0004];
    v24 = MEMORY[0xFFDF0324];
    v25 = MEMORY[0xFFDF0320];
    if ( MEMORY[0xFFDF0324] != MEMORY[0xFFDF0328] )
    {
      do
      {
        _mm_pause();
        v24 = MEMORY[0xFFDF0324];
        v25 = MEMORY[0xFFDF0320];
      }
      while ( MEMORY[0xFFDF0324] != MEMORY[0xFFDF0328] );
      v23 = MEMORY[0xFFDF0004];
    }
    v26 = (((unsigned int)v23 * (unsigned __int64)v25) >> 24) + (((unsigned int)v23 * (unsigned __int64)v24) << 8);
    result = CInputGlobals::UpdateInputGlobals(_gpInputGlobals, v26, HIDWORD(v26), 4, 0, 0, 0);
  }
  if ( !v32 )
    return UserSessionSwitchLeaveCrit();
  return result;
}
