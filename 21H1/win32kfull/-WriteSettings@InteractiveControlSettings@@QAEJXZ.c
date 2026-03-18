/*
 * XREFs of ?WriteSettings@InteractiveControlSettings@@QAEJXZ @ 0x1B15A7
 * Callers:
 *     ?SetExternalParameters@InteractiveControlManager@@QAEJPAUtagINTERACTIVECTRL_PARAMETERS@@H@Z @ 0x1AEA0E (-SetExternalParameters@InteractiveControlManager@@QAEJPAUtagINTERACTIVECTRL_PARAMETERS@@H@Z.c)
 * Callees:
 *     ?_OpenDeviceKey@InteractiveControlSettings@@IAEJKHPAPAX@Z @ 0xD7654 (-_OpenDeviceKey@InteractiveControlSettings@@IAEJKHPAPAX@Z.c)
 */

NTSTATUS __thiscall InteractiveControlSettings::WriteSettings(InteractiveControlSettings *this)
{
  unsigned int v1; // esi
  NTSTATUS v2; // eax
  HANDLE v3; // edi
  NTSTATUS v4; // ebx
  InteractiveControlSettings *v5; // edx
  struct _UNICODE_STRING DestinationString; // [esp+10h] [ebp-10h] BYREF
  InteractiveControlSettings *v8; // [esp+18h] [ebp-8h]
  HANDLE KeyHandle; // [esp+1Ch] [ebp-4h] BYREF

  v8 = this;
  v1 = 0;
  *(_DWORD *)&DestinationString.Length = 0;
  DestinationString.Buffer = 0;
  KeyHandle = 0;
  v2 = InteractiveControlSettings::_OpenDeviceKey(this, (ACCESS_MASK)&loc_20006, (int)this, &KeyHandle);
  v3 = KeyHandle;
  v4 = v2;
  if ( v2 >= 0 )
  {
    while ( 1 )
    {
      if ( *(const struct InteractiveControlSettings::RegistryValue *const *)((char *)&InteractiveControlSettings::m_Value
                                                                            + v1 * 4) )
      {
        RtlInitUnicodeString(&DestinationString, *(PCWSTR *)((char *)&InteractiveControlSettings::m_Value + v1 * 4));
        v5 = v8;
        if ( *((_DWORD *)v8 + 2 * dword_24D304[v1]) != *((_DWORD *)v8 + 2 * dword_24D304[v1] + 1) )
          goto LABEL_6;
        KeyHandle = 0;
        if ( ZwQueryValueKey(v3, &DestinationString, KeyValuePartialInformation, 0, 0, (PULONG)&KeyHandle) != -1073741772 )
          break;
      }
LABEL_8:
      v1 += 3;
      if ( v1 >= 87 )
        goto LABEL_9;
    }
    v5 = v8;
LABEL_6:
    v4 = ZwSetValueKey(v3, &DestinationString, 0, 4u, (char *)v5 + 8 * dword_24D304[v1], 4u);
    if ( v4 < 0 )
      _DbgPrintEx(
        0x4Du,
        1u,
        "Failed to write %S value\n",
        *(const wchar_t **)((char *)&InteractiveControlSettings::m_Value + v1 * 4));
    goto LABEL_8;
  }
LABEL_9:
  if ( v3 )
    ZwClose(v3);
  return v4;
}
