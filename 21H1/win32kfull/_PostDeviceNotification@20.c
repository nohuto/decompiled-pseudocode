/*
 * XREFs of _PostDeviceNotification@20 @ 0xC9CA6
 * Callers:
 *     ?InsertProcRequest@@YGHPAUtagPROCESSINFO@@PBUtagRAWINPUTDEVICE@@PAUtagPROCESS_HID_REQUEST@@KHPAUtagWND@@H@Z @ 0xC9B90 (-InsertProcRequest@@YGHPAUtagPROCESSINFO@@PBUtagRAWINPUTDEVICE@@PAUtagPROCESS_HID_REQUEST@@KHPAU.c)
 *     _EditionDevicePnpNotification@4 @ 0xEAF6A (_EditionDevicePnpNotification@4.c)
 *     _Win32kRIMDevChangeCallback@4 @ 0x1403EC (_Win32kRIMDevChangeCallback@4.c)
 * Callees:
 *     __PostMessage@16 @ 0x6DA60 (__PostMessage@16.c)
 *     ?PostHidNotification@@YGHPAUtagPROCESS_HID_REQUEST@@PAUDEVICEINFO@@II@Z @ 0xC3A22 (-PostHidNotification@@YGHPAUtagPROCESS_HID_REQUEST@@PAUDEVICEINFO@@II@Z.c)
 *     ?InProcessDeviceTypeRequestTable@@YGPAUtagPROCESS_HID_REQUEST@@PAUtagPROCESS_HID_TABLE@@GG@Z @ 0xC9F82 (-InProcessDeviceTypeRequestTable@@YGPAUtagPROCESS_HID_REQUEST@@PAUtagPROCESS_HID_TABLE@@GG@Z.c)
 *     _PostPointerEventMessage@16 @ 0x159285 (_PostPointerEventMessage@16.c)
 *     ?OnDeviceRemoval@Edgy@@YGXPAX@Z @ 0x16E058 (-OnDeviceRemoval@Edgy@@YGXPAX@Z.c)
 */

_DWORD *__fastcall PostDeviceNotification(int a1, int a2, int a3, struct DEVICEINFO *a4, int a5)
{
  struct tagPROCESS_HID_REQUEST *v6; // edi
  _DWORD *result; // eax
  _DWORD *i; // edi
  int v9; // eax
  int v10; // eax
  struct tagPROCESS_HID_REQUEST *v11; // eax
  struct tagPROCESS_HID_REQUEST *v12; // ecx
  Edgy *v13; // [esp+0h] [ebp-1Ch]
  void *v14; // [esp+4h] [ebp-18h]
  _DWORD *v15; // [esp+Ch] [ebp-10h]
  int v16; // [esp+14h] [ebp-8h]
  int v17; // [esp+18h] [ebp-4h]

  v15 = (_DWORD *)RawInputManagerObject::gHidRequestTable[4];
  v6 = (struct tagPROCESS_HID_REQUEST *)a1;
  v16 = 0;
  v17 = 0;
  switch ( *(_BYTE *)(a2 + 24) )
  {
    case 0:
      v17 = 2;
      goto LABEL_4;
    case 1:
      v17 = 6;
LABEL_4:
      v16 = 1;
      break;
    case 2:
      v9 = *(_DWORD *)(a2 + 276);
      a1 = *(unsigned __int16 *)(v9 + 22);
      v16 = a1;
      v17 = *(unsigned __int16 *)(v9 + 20);
      break;
  }
  if ( *(char *)(a2 + 120) < 0 )
  {
    if ( a4 == (struct DEVICEINFO *)2 )
      Edgy::OnDeviceRemoval(v13, v14);
    if ( a5 )
    {
      PostPointerEventMessage(*(_DWORD *)(a2 + 284), 568, a4, 1);
      if ( a4 == (struct DEVICEINFO *)1 )
      {
        v10 = 712;
      }
      else if ( a4 == (struct DEVICEINFO *)2 )
      {
        v10 = 713;
      }
      else
      {
        v10 = 0;
      }
      _PostMessage(-1, v10, a5, 0);
    }
  }
  if ( v6 )
  {
    result = (_DWORD *)v17;
    if ( *((_WORD *)v6 + 5) == (_WORD)v17 )
    {
      result = (_DWORD *)v16;
      if ( *((_WORD *)v6 + 4) == (_WORD)v16 )
        return (_DWORD *)PostHidNotification(
                           (_DWORD *)a2,
                           (int)v6,
                           (struct tagPROCESS_HID_REQUEST *)a1,
                           a4,
                           (unsigned int)v13,
                           (unsigned int)v14);
    }
  }
  else
  {
    for ( i = v15; ; i = (_DWORD *)*i )
    {
      result = &RawInputManagerObject::gHidRequestTable[4];
      if ( i == &RawInputManagerObject::gHidRequestTable[4] )
        break;
      v11 = InProcessDeviceTypeRequestTable(
              (struct tagPROCESS_HID_TABLE *)v17,
              (unsigned __int16)v13,
              (unsigned __int16)v14);
      if ( v11 )
        PostHidNotification((_DWORD *)a2, (int)v11, v12, a4, (unsigned int)v13, (unsigned int)v14);
    }
  }
  return result;
}
