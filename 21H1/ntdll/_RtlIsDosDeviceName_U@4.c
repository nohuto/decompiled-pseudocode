/*
 * XREFs of _RtlIsDosDeviceName_U@4 @ 0x4B2D1BB0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpIsDosDeviceName_Ustr@4 @ 0x4B2C9330 (_RtlpIsDosDeviceName_Ustr@4.c)
 *     _RtlInitUnicodeStringEx@8 @ 0x4B2D1CE0 (_RtlInitUnicodeStringEx@8.c)
 */

int __stdcall RtlIsDosDeviceName_U(int a1)
{
  int v2[2]; // [esp+0h] [ebp-8h] BYREF

  if ( (int)RtlInitUnicodeStringEx(v2, a1) < 0 )
    return 0;
  else
    return RtlpIsDosDeviceName_Ustr(v2);
}
