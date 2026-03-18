/*
 * XREFs of ?ReadSettings@InteractiveControlSettings@@QAEJXZ @ 0xD7548
 * Callers:
 *     _RawInputThread@4 @ 0xD57F4 (_RawInputThread@4.c)
 *     ??0InteractiveControlSettings@@QAE@XZ @ 0xD657A (--0InteractiveControlSettings@@QAE@XZ.c)
 *     ?GetExternalParameters@InteractiveControlManager@@QAEJPAUtagINTERACTIVECTRL_PARAMETERS@@@Z @ 0x1ADE87 (-GetExternalParameters@InteractiveControlManager@@QAEJPAUtagINTERACTIVECTRL_PARAMETERS@@@Z.c)
 * Callees:
 *     ?_OpenDeviceKey@InteractiveControlSettings@@IAEJKHPAPAX@Z @ 0xD7654 (-_OpenDeviceKey@InteractiveControlSettings@@IAEJKHPAPAX@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

int __thiscall InteractiveControlSettings::ReadSettings(InteractiveControlSettings *this)
{
  unsigned int v1; // esi
  int v3; // edi
  unsigned int i; // edi
  int v5; // eax
  int v6; // eax
  int v7; // ecx
  int v8; // eax
  int v9; // eax
  int v11; // ecx
  int v12; // eax
  const WCHAR *v13; // [esp-4h] [ebp-3Ch]
  int v14; // [esp-4h] [ebp-3Ch]
  HANDLE KeyHandle; // [esp+Ch] [ebp-2Ch] BYREF
  ULONG ResultLength; // [esp+10h] [ebp-28h] BYREF
  int v17; // [esp+14h] [ebp-24h]
  struct _UNICODE_STRING DestinationString; // [esp+18h] [ebp-20h] BYREF
  _BYTE KeyValueInformation[4]; // [esp+20h] [ebp-18h] BYREF
  int v20; // [esp+24h] [ebp-14h]
  int v21; // [esp+28h] [ebp-10h]
  int v22; // [esp+2Ch] [ebp-Ch]

  v1 = 0;
  *(_DWORD *)&DestinationString.Length = 0;
  DestinationString.Buffer = 0;
  ResultLength = 0;
  KeyHandle = 0;
  v3 = InteractiveControlSettings::_OpenDeviceKey(this, 0x20019u, (int)this, &KeyHandle);
  v17 = v3;
  if ( v3 < 0 )
  {
    do
    {
      *((_DWORD *)this + 2 * dword_24D304[v1]) = dword_24D308[v1];
      v11 = dword_24D304[v1];
      v12 = dword_24D308[v1];
      v1 += 3;
      *((_DWORD *)this + 2 * v11 + 1) = v12;
    }
    while ( v1 < 87 );
  }
  else
  {
    for ( i = 0; i < 87; i += 3 )
    {
      if ( *(const struct InteractiveControlSettings::RegistryValue *const *)((char *)&InteractiveControlSettings::m_Value
                                                                            + i * 4) )
      {
        v13 = *(const WCHAR **)((char *)&InteractiveControlSettings::m_Value + i * 4);
        ResultLength = 0;
        RtlInitUnicodeString(&DestinationString, v13);
        if ( ZwQueryValueKey(
               KeyHandle,
               &DestinationString,
               KeyValuePartialInformation,
               KeyValueInformation,
               0x14u,
               &ResultLength) < 0
          || v20 != 4
          || (v5 = v22, v21 != 4) )
        {
          v5 = dword_24D308[i];
        }
        *((_DWORD *)this + 2 * dword_24D304[i]) = v5;
        *((_DWORD *)this + 2 * dword_24D304[i] + 1) = dword_24D308[i];
      }
    }
    v3 = v17;
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  v6 = *((_DWORD *)this + 12);
  if ( v6 <= 2 )
  {
    v9 = 8 * v6;
  }
  else
  {
    v7 = *((_DWORD *)this + 12) << 8;
    if ( (unsigned int)(v6 - 3) > 7 )
    {
      v8 = v7 - 1536;
      v14 = 4;
    }
    else
    {
      v8 = v7 - 512;
      v14 = 8;
    }
    v9 = v8 / v14;
  }
  *((_DWORD *)this + 14) = v9;
  return v3;
}
