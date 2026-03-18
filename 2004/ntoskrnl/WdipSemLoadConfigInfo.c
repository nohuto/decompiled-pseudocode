/*
 * XREFs of WdipSemLoadConfigInfo @ 0x14079A7C4
 * Callers:
 *     WdipSemCleanStart @ 0x14079A5D8 (WdipSemCleanStart.c)
 * Callees:
 *     ZwClose @ 0x1403F37A0 (ZwClose.c)
 *     WdipSemQueryValueFromRegistry @ 0x14079B7E0 (WdipSemQueryValueFromRegistry.c)
 *     WdipSemOpenRegistryKey @ 0x14079B8F0 (WdipSemOpenRegistryKey.c)
 *     WdipSemDeleteValueFromRegistry @ 0x14079BE10 (WdipSemDeleteValueFromRegistry.c)
 */

__int64 WdipSemLoadConfigInfo()
{
  int v0; // ebx
  int v1; // eax
  int v3; // [rsp+50h] [rbp+18h] BYREF
  __int64 v4; // [rsp+58h] [rbp+20h] BYREF
  int v5; // [rsp+60h] [rbp+28h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp+30h]

  Handle = 0LL;
  LODWORD(v4) = 0;
  v3 = 0;
  v5 = 0;
  v0 = WdipSemOpenRegistryKey(L"\\REGISTRY\\MACHINE\\SYSTEM\\CURRENTCONTROLSET\\Control\\WDI\\Config");
  if ( v0 >= 0 )
  {
    if ( (int)WdipSemQueryValueFromRegistry(Handle, &v3, (__int64)&v4) < 0 || v3 )
    {
      v0 = WdipSemQueryValueFromRegistry(Handle, &v5, (__int64)&v4);
      if ( v0 < 0 )
      {
        v0 = 0;
        v1 = 600;
      }
      else
      {
        if ( !v5 )
        {
          WdipSemTimeoutEnabled = 0;
          v1 = 600;
          goto LABEL_8;
        }
        v1 = 60 * v5;
      }
      WdipSemTimeoutEnabled = 1;
LABEL_8:
      WdipSemTimeoutValue = v1;
      WdipSemDeleteValueFromRegistry(Handle);
      goto LABEL_9;
    }
    v0 = -1073741823;
  }
LABEL_9:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v0;
}
