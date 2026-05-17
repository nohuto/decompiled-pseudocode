/*
 * XREFs of _RtlCheckSandboxedToken@8 @ 0x4B335B50
 * Callers:
 *     <none>
 * Callees:
 *     _ZwQueryInformationToken@20 @ 0x4B2F2B90 (_ZwQueryInformationToken@20.c)
 */

int __stdcall RtlCheckSandboxedToken(int a1, _BYTE *a2)
{
  int result; // eax
  _BYTE v3[4]; // [esp+4h] [ebp-8h] BYREF
  int v4; // [esp+8h] [ebp-4h] BYREF

  *a2 = 0;
  result = ZwQueryInformationToken(a1, 47, (int)&v4, 4, (int)v3);
  if ( result >= 0 )
  {
    if ( v4 )
      *a2 = 1;
  }
  return result;
}
