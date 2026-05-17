/*
 * XREFs of _RtlGetSessionProperties@8 @ 0x4B346440
 * Callers:
 *     <none>
 * Callees:
 *     _RtlGetCurrentServiceSessionId@0 @ 0x4B2C3BF0 (_RtlGetCurrentServiceSessionId@0.c)
 *     _ZwQueryInformationJobObject@20 @ 0x4B2F3E20 (_ZwQueryInformationJobObject@20.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 */

int __stdcall RtlGetSessionProperties(int a1, _DWORD *a2)
{
  int v2; // esi
  _BYTE *SharedData; // ecx
  _BYTE v5[588]; // [esp+10h] [ebp-250h] BYREF

  if ( a1 == -1 || !a2 )
    return -1073741811;
  v2 = 0;
  *a2 = 0;
  if ( RtlGetCurrentServiceSessionId() )
  {
    SharedData = NtCurrentPeb()->SharedData;
  }
  else
  {
    ZwQueryInformationJobObject(0, 39, (int)v5, 584, 0);
    SharedData = v5;
  }
  *a2 = *((_DWORD *)SharedData + 6) == a1;
  return v2;
}
