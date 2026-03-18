/*
 * XREFs of ?xxxCreateDisconnectDesktop@@YGHPAUHWINSTA__@@PAUtagWINDOWSTATION@@@Z @ 0xE9654
 * Callers:
 *     _xxxCreateDesktopEx@24 @ 0x7E854 (_xxxCreateDesktopEx@24.c)
 * Callees:
 *     _xxxCreateDesktopEx@24 @ 0x7E854 (_xxxCreateDesktopEx@24.c)
 *     __CloseDesktop@8 @ 0x812A8 (__CloseDesktop@8.c)
 *     ?SetDisconnectDesktopSecurity@@YGJPAUHDESK__@@@Z @ 0xE9776 (-SetDisconnectDesktopSecurity@@YGJPAUHDESK__@@@Z.c)
 */

int __fastcall xxxCreateDisconnectDesktop(int a1, void *a2)
{
  int EmptyRgnPublic; // esi
  NTSTATUS v4; // eax
  NTSTATUS v5; // edi
  HDESK v7; // [esp+0h] [ebp-38h]
  _DWORD v8[6]; // [esp+Ch] [ebp-2Ch] BYREF
  struct _UNICODE_STRING DestinationString; // [esp+24h] [ebp-14h] BYREF
  PVOID v10; // [esp+2Ch] [ebp-Ch]
  PVOID Object; // [esp+30h] [ebp-8h] BYREF
  HANDLE Handle; // [esp+34h] [ebp-4h] BYREF

  v10 = a2;
  *(_DWORD *)&DestinationString.Length = 0;
  DestinationString.Buffer = 0;
  Handle = 0;
  EmptyRgnPublic = CreateEmptyRgnPublic();
  if ( EmptyRgnPublic )
  {
    RtlInitUnicodeString(&DestinationString, L"Disconnect");
    v8[0] = 24;
    v8[2] = &DestinationString;
    v8[1] = a1;
    v8[3] = 192;
    v8[4] = 0;
    v8[5] = 0;
    if ( xxxCreateDesktopEx((int)v8, 0, 0x2000000, 0, &Handle, 1) < 0 )
    {
      GreDeleteObject(EmptyRgnPublic);
    }
    else if ( SetDisconnectDesktopSecurity(v7) < 0
           || (Object = 0,
               v4 = ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)ExDesktopObjectType, 1, &Object, 0),
               gspdeskDisconnect = Object,
               v4 < 0) )
    {
      GreDeleteObject(EmptyRgnPublic);
      _CloseDesktop(Handle, 1);
      gspdeskDisconnect = 0;
    }
    else
    {
      *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*((_DWORD *)Object + 1) + 12) + 20) + 108) = EmptyRgnPublic;
      KeAttachProcess((PRKPROCESS)_gpepCSRSS);
      v5 = ObOpenObjectByPointer(gspdeskDisconnect, 0x200u, 0, (ACCESS_MASK)&loc_1F0002 + 1, 0, 0, &ghDisconnectDesk);
      if ( v5 >= 0 )
        v5 = ObOpenObjectByPointer(v10, 0, 0, (ACCESS_MASK)&loc_1F0002 + 1, 0, 0, &ghDisconnectWinSta);
      KeDetachProcess();
      if ( v5 >= 0 )
        return 1;
      GreDeleteObject(EmptyRgnPublic);
      *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*((_DWORD *)gspdeskDisconnect + 1) + 12) + 20) + 108) = 0;
      if ( ghDisconnectDesk )
      {
        ObCloseHandle(ghDisconnectDesk, 0);
        ghDisconnectDesk = 0;
      }
      _CloseDesktop(Handle, 1);
    }
  }
  return 0;
}
