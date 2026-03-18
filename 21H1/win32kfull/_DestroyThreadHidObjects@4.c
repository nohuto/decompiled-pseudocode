/*
 * XREFs of _DestroyThreadHidObjects@4 @ 0xA52E4
 * Callers:
 *     <none>
 * Callees:
 *     _UpdateRawMouseMode@4 @ 0x448A8 (_UpdateRawMouseMode@4.c)
 *     ?SearchProcessHidRequest@@YGPAUtagPROCESS_HID_REQUEST@@PAUtagPROCESSINFO@@GGPAK@Z @ 0xC9DCE (-SearchProcessHidRequest@@YGPAUtagPROCESS_HID_REQUEST@@PAUtagPROCESSINFO@@GGPAK@Z.c)
 *     _FreeHidProcessRequest@12 @ 0xD2AF8 (_FreeHidProcessRequest@12.c)
 *     ?HasRawKeyboardPerThreadRegistration@@YGHPBUtagPROCESSINFO@@@Z @ 0x143BEF (-HasRawKeyboardPerThreadRegistration@@YGHPBUtagPROCESSINFO@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
_DWORD *__stdcall DestroyThreadHidObjects(_DWORD *a1)
{
  _DWORD *v1; // edi
  _DWORD *v2; // esi
  int v3; // eax
  _DWORD *v4; // edx
  int v5; // eax
  int v6; // eax
  _DWORD *v7; // eax
  _DWORD *v8; // ebx
  _DWORD *v9; // eax
  _DWORD *v10; // ebx
  _DWORD *result; // eax
  _DWORD *v12; // ebx
  _DWORD *v13; // ecx
  int v14; // ecx
  _DWORD *v15; // eax
  int v16; // eax
  struct tagPROCESS_HID_REQUEST *v17; // eax
  _DWORD *v18; // ecx
  int v19; // ecx
  _DWORD *v20; // ecx
  int v21; // ecx
  const struct tagPROCESSINFO *v22; // [esp+0h] [ebp-Ch]
  unsigned __int16 v23; // [esp+0h] [ebp-Ch]
  unsigned int *v24; // [esp+4h] [ebp-8h]

  v1 = a1;
  v2 = *(_DWORD **)(a1[58] + 472);
  v3 = v2[9];
  if ( v3 )
  {
    if ( *(_DWORD **)(v3 + 8) == a1 )
    {
      HMAssignmentUnlock(v2 + 9);
      v2[13] &= 0xFFFFFFCF;
      if ( (v2[13] & 0x40) != 0 )
      {
        --_gHidCounters[0];
        v2[13] &= ~0x40u;
      }
    }
  }
  LOBYTE(v4) = 0;
  v5 = v2[8];
  if ( v5 && *(_DWORD **)(v5 + 8) == v1 )
  {
    HMAssignmentUnlock(v2 + 8);
    v2[13] &= 0xFFFFFFFC;
    if ( (v2[13] & 4) != 0 )
    {
      --_gHidCounters[1];
      v2[13] &= ~4u;
    }
    if ( _gpqForeground )
    {
      v16 = *(_DWORD *)(_gpqForeground + 56);
      if ( v16 )
        v15 = *(_DWORD **)(v16 + 8);
      else
        v15 = *(_DWORD **)(_gpqForeground + 48);
      LOBYTE(v4) = 0;
    }
    else
    {
      LOBYTE(v4) = 0;
      v15 = 0;
    }
    if ( v15 == v1 )
    {
      UpdateRawMouseMode(_gpqForeground);
      LOBYTE(v4) = 0;
    }
  }
  v2[11] = 0;
  v2[12] = 0;
  v6 = v1[172];
  if ( (((unsigned int)&loc_1FFFFC + 4) & v6) != 0 )
  {
    v1[172] = v6 & 0xFFDFFFFF;
    if ( !HasRawKeyboardPerThreadRegistration(v22) )
    {
      a1 = v4;
      v17 = SearchProcessHidRequest((struct tagPROCESSINFO *)6, (unsigned __int16)&a1, v23, v24);
      if ( v17 )
      {
        FreeHidProcessRequest(v17, a1, v2);
        v2[13] &= 0xFFFFFFCF;
      }
      LOBYTE(v4) = 0;
    }
  }
  v7 = v2 + 2;
  v8 = (_DWORD *)v2[2];
  while ( v8 != v7 )
  {
    v13 = v8;
    v8 = (_DWORD *)*v8;
    a1 = v13;
    v14 = v13[5];
    if ( v14 && *(_DWORD **)(v14 + 8) == v1 )
    {
      FreeHidProcessRequest(a1, 1, v2);
      LOBYTE(v4) = 1;
      v7 = v2 + 2;
    }
  }
  v9 = v2 + 4;
  v10 = (_DWORD *)v2[4];
  while ( v10 != v9 )
  {
    v18 = v10;
    v10 = (_DWORD *)*v10;
    a1 = v18;
    v19 = v18[5];
    if ( v19 && *(_DWORD **)(v19 + 8) == v1 )
    {
      FreeHidProcessRequest(a1, 2, v2);
      LOBYTE(v4) = 1;
      v9 = v2 + 4;
    }
  }
  result = v2 + 6;
  v12 = (_DWORD *)v2[6];
  while ( v12 != result )
  {
    v20 = v12;
    v12 = (_DWORD *)*v12;
    a1 = v20;
    v21 = v20[5];
    if ( v21 && *(_DWORD **)(v21 + 8) == v1 )
    {
      FreeHidProcessRequest(a1, 3, v2);
      LOBYTE(v4) = 1;
      result = v2 + 6;
    }
  }
  if ( (_BYTE)v4 )
  {
    result = (_DWORD *)v1[58];
    result[116] |= 0x8000000u;
  }
  return result;
}
