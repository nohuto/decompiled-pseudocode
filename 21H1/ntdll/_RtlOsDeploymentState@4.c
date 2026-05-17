/*
 * XREFs of _RtlOsDeploymentState@4 @ 0x4B369A30
 * Callers:
 *     <none>
 * Callees:
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _ZwOpenKey@12 @ 0x4B2F2A80 (_ZwOpenKey@12.c)
 *     _ZwQueryValueKey@24 @ 0x4B2F2AD0 (_ZwQueryValueKey@24.c)
 *     _RtlInitUnicodeString@8 @ 0x4B2F5020 (_RtlInitUnicodeString@8.c)
 *     __SEH_prolog4_GS @ 0x4B307B20 (__SEH_prolog4_GS.c)
 *     _RtlOsDeploymentState@4 @ 0x4B369A30 (_RtlOsDeploymentState@4.c)
 */

int __stdcall RtlOsDeploymentState(int a1)
{
  int v1; // esi
  UNICODE_STRING v3; // [esp+10h] [ebp-64h] BYREF
  UNICODE_STRING DestinationString; // [esp+18h] [ebp-5Ch] BYREF
  _BYTE v5[4]; // [esp+20h] [ebp-54h] BYREF
  _DWORD v6[6]; // [esp+24h] [ebp-50h] BYREF
  int v7; // [esp+3Ch] [ebp-38h]
  HANDLE Handle; // [esp+40h] [ebp-34h] BYREF
  _BYTE v9[4]; // [esp+44h] [ebp-30h] BYREF
  int v10; // [esp+48h] [ebp-2Ch]
  int v11; // [esp+4Ch] [ebp-28h]
  int v12; // [esp+50h] [ebp-24h]
  CPPEH_RECORD ms_exc; // [esp+5Ch] [ebp-18h]

  Handle = 0;
  v1 = 1;
  v7 = 1;
  ms_exc.registration.TryLevel = 0;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\Setup");
  v6[0] = 24;
  v6[1] = 0;
  v6[3] = 576;
  v6[2] = &DestinationString;
  v6[4] = 0;
  v6[5] = 0;
  if ( ZwOpenKey((int)&Handle, 131097, (int)v6) >= 0 )
  {
    RtlInitUnicodeString(&v3, L"Compact");
    if ( ZwQueryValueKey((int)Handle, (int)&v3, 2, (int)v9, 20, (int)v5) >= 0 && v10 == 4 && v11 == 4 && v12 )
    {
      v1 = 2;
      v7 = 2;
    }
  }
  ms_exc.registration.TryLevel = -2;
  if ( Handle )
    NtClose(Handle);
  return v1;
}
