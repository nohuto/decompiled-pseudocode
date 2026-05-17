/*
 * XREFs of _RtlWow64IsWowGuestMachineSupported@8 @ 0x4B33A250
 * Callers:
 *     <none>
 * Callees:
 *     _ZwQuerySystemInformationEx@24 @ 0x4B2F3F90 (_ZwQuerySystemInformationEx@24.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     __alloca_probe_16 @ 0x4B2F6500 (__alloca_probe_16.c)
 */

int __stdcall RtlWow64IsWowGuestMachineSupported(unsigned __int16 a1, char *a2)
{
  char v2; // bl
  int SystemInformation; // eax
  int v4; // edx
  void *v5; // esp
  int v6; // ecx
  int v7; // esi
  int v8; // eax
  _DWORD v10[3]; // [esp+0h] [ebp-1Ch] BYREF
  int v11; // [esp+Ch] [ebp-10h]
  int v12; // [esp+10h] [ebp-Ch] BYREF
  int v13; // [esp+14h] [ebp-8h] BYREF

  v2 = 0;
  v12 = 0;
  SystemInformation = ZwQuerySystemInformationEx(181, (int)&v12, 4, 0, 0, (int)&v13);
  v4 = SystemInformation;
  if ( SystemInformation == -1073741789 )
  {
    v5 = alloca(v13);
    v4 = ZwQuerySystemInformationEx(181, (int)&v12, 4, (int)v10, v13, (int)&v13);
    if ( v4 >= 0 )
    {
      v6 = v10[0];
      v7 = 0;
      if ( LOWORD(v10[0]) )
      {
        v11 = a1;
        v2 = 0;
        v8 = LOWORD(v10[0]);
        while ( v8 != v11 || (v6 & 0x60000) != 0x20000 )
        {
          v6 = v10[++v7];
          v8 = (unsigned __int16)v6;
          if ( !(_WORD)v6 )
            goto LABEL_12;
        }
        v2 = 1;
      }
LABEL_12:
      *a2 = v2;
    }
  }
  else if ( SystemInformation >= 0 )
  {
    return -1073741823;
  }
  return v4;
}
