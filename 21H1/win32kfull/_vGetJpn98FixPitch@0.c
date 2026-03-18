/*
 * XREFs of _vGetJpn98FixPitch@0 @ 0xDF832
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGreRegKey@@YGJPAPAXKPBG@Z @ 0xDF7D8 (-GetGreRegKey@@YGJPAPAXKPBG@Z.c)
 *     bQueryFntCacheReg @ 0xDF8D6 (bQueryFntCacheReg.c)
 */

int __stdcall vGetJpn98FixPitch()
{
  int result; // eax
  int v1; // [esp+0h] [ebp-8h] BYREF
  HANDLE Handle; // [esp+4h] [ebp-4h] BYREF

  result = GetGreRegKey(
             0x80000000,
             &Handle,
             L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Gre_Initialize",
             0,
             0);
  if ( result >= 0 )
  {
    if ( bQueryFntCacheReg(Handle, L"Jpn98FixPitch", (int)&v1) )
      gbJpn98FixPitch = v1 != 0;
    return ZwClose(Handle);
  }
  return result;
}
