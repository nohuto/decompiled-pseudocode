/*
 * XREFs of ?SetCustomFlick@@YGHPAUtagCUSTOM_FLICK@@@Z @ 0x16F840
 * Callers:
 *     _WritePointerDeviceSettingsFull@12 @ 0xF3990 (_WritePointerDeviceSettingsFull@12.c)
 * Callees:
 *     ?OpenDeviceCfgKey@@YGJKPAGKPAPAXH@Z @ 0x9CFD8 (-OpenDeviceCfgKey@@YGJKPAGKPAPAXH@Z.c)
 *     ?GetCustomFlickPath@@YGHABU_GUID@@PAU_UNICODE_STRING@@@Z @ 0x16F7C3 (-GetCustomFlickPath@@YGHABU_GUID@@PAU_UNICODE_STRING@@@Z.c)
 */

BOOL __thiscall SetCustomFlick(int this)
{
  NTSTATUS v2; // esi
  NTSTATUS v3; // eax
  HANDLE v4; // edi
  void **v6; // [esp+0h] [ebp-20h]
  int v7; // [esp+4h] [ebp-1Ch]
  struct _UNICODE_STRING v8; // [esp+Ch] [ebp-14h] BYREF
  struct _UNICODE_STRING DestinationString; // [esp+14h] [ebp-Ch] BYREF
  HANDLE KeyHandle; // [esp+1Ch] [ebp-4h] BYREF

  *(_DWORD *)&v8.Length = 0;
  v8.Buffer = 0;
  v2 = -1073741595;
  *(_DWORD *)&DestinationString.Length = 0;
  DestinationString.Buffer = 0;
  KeyHandle = 0;
  if ( GetCustomFlickPath((const GUID *)this, &v8) )
  {
    v8.Buffer[v8.Length >> 1] = 0;
    v3 = OpenDeviceCfgKey(v8.MaximumLength, (ACCESS_MASK)&loc_20006, (unsigned __int16 *)&KeyHandle, 1u, v6, v7);
    v4 = KeyHandle;
    v2 = v3;
    if ( v3 >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, L"ModifierKeys");
      v2 = ZwSetValueKey(v4, &DestinationString, 0, 4u, (PVOID)(this + 16), 4u);
      if ( v2 >= 0 )
      {
        RtlInitUnicodeString(&DestinationString, L"KeyCode");
        v2 = ZwSetValueKey(v4, &DestinationString, 0, 4u, (PVOID)(this + 20), 4u);
        if ( v2 >= 0 )
        {
          RtlInitUnicodeString(&DestinationString, L"FriendlyName");
          v2 = ZwSetValueKey(v4, &DestinationString, 0, 1u, (PVOID)(this + 28), *(_DWORD *)(this + 24));
        }
      }
    }
    if ( v4 )
      ZwClose(v4);
    Win32FreePool(v8.Buffer);
  }
  return v2 >= 0;
}
