/*
 * XREFs of __SetDisplayMapping@8 @ 0x159C18
 * Callers:
 *     _NtUserSetDisplayMapping@8 @ 0x16938E (_NtUserSetDisplayMapping@8.c)
 * Callees:
 *     ?RtlStringCchCopyW@@YGJPAGIPBG@Z @ 0x48774 (-RtlStringCchCopyW@@YGJPAGIPBG@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 */

int __fastcall _SetDisplayMapping(int a1, int a2)
{
  int v2; // edi
  int v5; // ebx
  unsigned int v7; // [esp+0h] [ebp-3A8h]
  const unsigned __int16 *v8; // [esp+4h] [ebp-3A4h]
  struct _UNICODE_STRING DestinationString; // [esp+Ch] [ebp-39Ch] BYREF
  int v10; // [esp+14h] [ebp-394h]
  _DWORD v11[210]; // [esp+18h] [ebp-390h] BYREF
  WCHAR SourceString[34]; // [esp+360h] [ebp-48h] BYREF

  v2 = 0;
  v10 = a1;
  memset(&v11[1], 0, 0x344u);
  v5 = *(_DWORD *)(a1 + 8);
  *(_DWORD *)&DestinationString.Length = 0;
  DestinationString.Buffer = 0;
  RIMEndAllActiveContacts(*(_DWORD *)(*(_DWORD *)(v5 + 16) + 260), v10, 0);
  v11[0] = 840;
  if ( DrvGetHdevName(*(_DWORD *)(a2 + 124), SourceString) )
  {
    RtlInitUnicodeString(&DestinationString, SourceString);
    if ( (int)DrvEnumDisplayDevices(&DestinationString, 0, 0, v11, 1, 0) >= 0
      && RtlStringCchCopyW(128, (char *)(v5 + 1148), (unsigned __int16 *)&v11[82], v7, v8) >= 0 )
    {
      RIMFindMonitorForDigitizer(v5, v10, 1, 0);
      return 1;
    }
  }
  return v2;
}
