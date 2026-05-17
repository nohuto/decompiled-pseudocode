/*
 * XREFs of _RtlStringCbCopyExW@24 @ 0x4B2A763E
 * Callers:
 *     _RtlFormatMessageEx@40 @ 0x4B2E0E20 (_RtlFormatMessageEx@40.c)
 * Callees:
 *     RtlStringCopyWorkerW @ 0x4B2A7692 (RtlStringCopyWorkerW.c)
 *     RtlStringExValidateDestW @ 0x4B2A77EE (RtlStringExValidateDestW.c)
 */

int __thiscall RtlStringCbCopyExW(_WORD *this, int a2, _DWORD *a3, int a4, int a5)
{
  int v6; // edx
  int v7; // ecx
  int v9; // [esp+4h] [ebp-4h] BYREF

  v6 = RtlStringExValidateDestW(this, 0);
  if ( v6 < 0 )
  {
    *this = 0;
  }
  else
  {
    v9 = 0;
    v6 = RtlStringCopyWorkerW(&v9, L"%s", v7);
    if ( v6 >= 0 || v6 == -2147483643 )
    {
      if ( a3 )
        *a3 = &this[v9];
    }
  }
  return v6;
}
