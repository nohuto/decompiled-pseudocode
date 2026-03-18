/*
 * XREFs of ?AdjustLegacyDeviceFlags@@YGXPAUtagPROCESSINFO@@@Z @ 0xC9E3A
 * Callers:
 *     __RegisterRawInputDevices@12 @ 0xC9866 (__RegisterRawInputDevices@12.c)
 * Callees:
 *     _UpdateRawMouseMode@4 @ 0x448A8 (_UpdateRawMouseMode@4.c)
 *     _HasHidTable@4 @ 0x7498A (_HasHidTable@4.c)
 *     ?InProcessDeviceTypeRequestTable@@YGPAUtagPROCESS_HID_REQUEST@@PAUtagPROCESS_HID_TABLE@@GG@Z @ 0xC9F82 (-InProcessDeviceTypeRequestTable@@YGPAUtagPROCESS_HID_REQUEST@@PAUtagPROCESS_HID_TABLE@@GG@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __thiscall AdjustLegacyDeviceFlags(_DWORD *this)
{
  int v1; // esi
  struct tagPROCESS_HID_REQUEST *v2; // eax
  int v3; // ecx
  unsigned int v4; // ecx
  struct tagPROCESS_HID_REQUEST *v5; // eax
  int v6; // edx
  int v7; // ecx
  unsigned int v8; // ecx
  int v9; // edi
  int v10; // edi
  int v11; // ecx
  int v12; // ecx
  int v13; // edi
  int v14; // edi
  int v15; // ecx
  int v16; // ecx
  unsigned __int16 v17; // [esp+0h] [ebp-10h]
  unsigned __int16 v18; // [esp+0h] [ebp-10h]
  unsigned __int16 v19; // [esp+4h] [ebp-Ch]
  unsigned __int16 v20; // [esp+4h] [ebp-Ch]

  v1 = this[118];
  v2 = InProcessDeviceTypeRequestTable((struct tagPROCESS_HID_TABLE *)6, v17, v19);
  v3 = *(_DWORD *)(v1 + 52);
  if ( v2 )
  {
    v11 = v3 | 0x10;
    *(_DWORD *)(v1 + 52) = v11;
    if ( v11 << 25 >> 31 != (int)(*((_DWORD *)v2 + 3) << 31) >> 31 )
    {
      if ( (*((_DWORD *)v2 + 3) & 1) != 0 )
        ++_gHidCounters[0];
      else
        --_gHidCounters[0];
      v15 = *(_DWORD *)(v1 + 52) ^ (*(_DWORD *)(v1 + 52) ^ (*((_DWORD *)v2 + 3) << 6)) & 0x40;
      *(_DWORD *)(v1 + 52) = v15;
      *(_DWORD *)(v1 + 52) = v15 ^ ((unsigned __int8)v15 ^ (unsigned __int8)((unsigned __int8)*((_DWORD *)v2 + 3) << 6)) & 0x80;
    }
    HMAssignmentLock(v1 + 36, v2);
  }
  else
  {
    v4 = v3 & 0xFFFFF9CF;
    *(_DWORD *)(v1 + 52) = v4;
    if ( (v4 & 0x40) != 0 )
    {
      --_gHidCounters[0];
      v4 = *(_DWORD *)(v1 + 52);
    }
    *(_DWORD *)(v1 + 52) = v4 & 0xFFFFFF3F;
    HMAssignmentUnlock(v1 + 36);
  }
  v5 = InProcessDeviceTypeRequestTable((struct tagPROCESS_HID_TABLE *)2, v18, v20);
  v7 = *(_DWORD *)(v1 + 52);
  if ( v5 )
  {
    v12 = v7 | 1;
    *(_DWORD *)(v1 + 52) = v12;
    if ( v12 << 29 >> 31 != (int)(*((_DWORD *)v5 + 3) << 31) >> 31 )
    {
      if ( (*((_DWORD *)v5 + 3) & 1) != 0 )
        ++_gHidCounters[1];
      else
        --_gHidCounters[1];
      v16 = *(_DWORD *)(v1 + 52) ^ (*(_DWORD *)(v1 + 52) ^ (4 * *((_DWORD *)v5 + 3))) & 4;
      *(_DWORD *)(v1 + 52) = v16;
      *(_DWORD *)(v1 + 52) = v16 ^ ((unsigned __int8)v16 ^ (unsigned __int8)(4 * *((_DWORD *)v5 + 3))) & 8;
    }
    if ( _gpqForeground )
    {
      v13 = *(_DWORD *)(_gpqForeground + 56);
      v14 = v13 ? *(_DWORD *)(v13 + 8) : *(_DWORD *)(_gpqForeground + 48);
      if ( v14 && HasHidTable(v14) && *(_DWORD *)(*(_DWORD *)(v14 + 232) + 472) == v1 )
        UpdateRawMouseMode(_gpqForeground);
    }
    HMAssignmentLock(v1 + 32, v6);
  }
  else
  {
    v8 = v7 & 0xFFFFFEFC;
    *(_DWORD *)(v1 + 52) = v8;
    if ( (v8 & 4) != 0 )
    {
      --_gHidCounters[1];
      v8 = *(_DWORD *)(v1 + 52);
    }
    *(_DWORD *)(v1 + 52) = v8 & 0xFFFFFFF3;
    if ( _gpqForeground )
    {
      v9 = *(_DWORD *)(_gpqForeground + 56);
      if ( v9 )
        v10 = *(_DWORD *)(v9 + 8);
      else
        v10 = *(_DWORD *)(_gpqForeground + 48);
      if ( v10 && HasHidTable(v10) && *(_DWORD *)(*(_DWORD *)(v10 + 232) + 472) == v1 )
        UpdateRawMouseMode(_gpqForeground);
    }
    HMAssignmentUnlock(v1 + 32);
  }
}
