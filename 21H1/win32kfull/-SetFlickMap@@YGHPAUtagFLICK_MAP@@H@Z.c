/*
 * XREFs of ?SetFlickMap@@YGHPAUtagFLICK_MAP@@H@Z @ 0x16F93D
 * Callers:
 *     _WritePointerDeviceSettingsFull@12 @ 0xF3990 (_WritePointerDeviceSettingsFull@12.c)
 * Callees:
 *     ?OpenDeviceCfgKey@@YGJKPAGKPAPAXH@Z @ 0x9CFD8 (-OpenDeviceCfgKey@@YGJKPAGKPAPAXH@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?WritePointerDeviceCfgSetting@@YGJPAXPBGIPAEI@Z @ 0x16FA59 (-WritePointerDeviceCfgSetting@@YGJPAXPBGIPAEI@Z.c)
 */

BOOL __fastcall SetFlickMap(int a1, int a2)
{
  NTSTATUS v3; // ebx
  const GUID *const *v4; // esi
  unsigned int *v5; // edi
  unsigned int v6; // eax
  const GUID *v7; // esi
  unsigned int *v8; // edi
  void **v10; // [esp+0h] [ebp-70h]
  unsigned __int8 *v11; // [esp+0h] [ebp-70h]
  int v12; // [esp+4h] [ebp-6Ch]
  unsigned int v13; // [esp+4h] [ebp-6Ch]
  _DWORD *v15; // [esp+10h] [ebp-60h]
  _DWORD *v16; // [esp+14h] [ebp-5Ch]
  struct _UNICODE_STRING GuidString; // [esp+18h] [ebp-58h] BYREF
  HANDLE Handle; // [esp+20h] [ebp-50h] BYREF
  unsigned int v19; // [esp+24h] [ebp-4Ch]
  _DWORD v20[16]; // [esp+2Ch] [ebp-44h] BYREF

  Handle = 0;
  *(_DWORD *)&GuidString.Length = 0;
  GuidString.Buffer = 0;
  v3 = OpenDeviceCfgKey(0x7Cu, (ACCESS_MASK)&loc_20006, (unsigned __int16 *)&Handle, 0, v10, v12);
  if ( v3 >= 0 )
  {
    v20[0] = a1;
    v20[8] = a1 + 64;
    v20[2] = a1 + 16;
    v20[10] = a1 + 80;
    v20[4] = a1 + 32;
    v20[12] = a1 + 96;
    v20[6] = a1 + 48;
    v20[14] = a1 + 112;
    v4 = (const GUID *const *)v20;
    v5 = dword_26637C;
    v16 = v20;
    v6 = 0;
    v15 = dword_26637C;
    v19 = 0;
    do
    {
      if ( v3 < 0 )
        break;
      if ( a2 )
      {
        v3 = RtlStringFromGUID(*v4, &GuidString);
        if ( v3 >= 0 )
        {
          v3 = WritePointerDeviceCfgSetting(1u, GuidString.Buffer, GuidString.MaximumLength, v11, v13);
          RtlFreeUnicodeString(&GuidString);
          GuidString.Buffer = 0;
        }
        v6 = v19;
      }
      v7 = *v4;
      v6 += 20;
      v19 = v6;
      *v5 = v7->Data1;
      v7 = (const GUID *)((char *)v7 + 4);
      v8 = v5 + 1;
      *v8 = v7->Data1;
      v7 = (const GUID *)((char *)v7 + 4);
      *++v8 = v7->Data1;
      v8[1] = *(_DWORD *)&v7->Data2;
      v4 = (const GUID *const *)(v16 + 2);
      v5 = v15 + 5;
      v16 += 2;
      v15 += 5;
    }
    while ( v6 < 0xA0 );
    ZwClose(Handle);
    if ( v3 >= 0 )
      gFlickMapMonitor = 1;
  }
  return v3 >= 0;
}
