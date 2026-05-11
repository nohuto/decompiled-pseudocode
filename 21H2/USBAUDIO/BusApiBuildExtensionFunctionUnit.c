/*
 * XREFs of BusApiBuildExtensionFunctionUnit @ 0x1C002B890
 * Callers:
 *     USBParseExtensionUnit @ 0x1C0030D70 (USBParseExtensionUnit.c)
 * Callees:
 *     BusApiBuildFunctionUnit @ 0x1C002B504 (BusApiBuildFunctionUnit.c)
 */

__int64 __fastcall BusApiBuildExtensionFunctionUnit(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        unsigned int a5,
        int *a6,
        const WCHAR *a7,
        int a8,
        int a9)
{
  __int64 result; // rax
  __int64 v10; // rdx
  _QWORD v11[3]; // [rsp+50h] [rbp-18h] BYREF

  v11[0] = 0LL;
  result = BusApiBuildFunctionUnit(a1, a2, 7, a3, a4, a5, a6, a7, 0, v11);
  if ( (int)result >= 0 )
  {
    v10 = v11[0];
    if ( v11[0] )
    {
      *(_DWORD *)(v11[0] + 64LL) = a8;
      *(_DWORD *)(v10 + 68) = a9;
    }
  }
  return result;
}
