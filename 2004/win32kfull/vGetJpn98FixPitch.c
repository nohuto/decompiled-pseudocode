/*
 * XREFs of vGetJpn98FixPitch @ 0x1C000A6B0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGreRegKey@@YAJPEAPEAXKPEBG@Z @ 0x1C000A4D8 (-GetGreRegKey@@YAJPEAPEAXKPEBG@Z.c)
 *     bQueryFntCacheReg @ 0x1C000A5CC (bQueryFntCacheReg.c)
 */

int vGetJpn98FixPitch()
{
  int v0; // ebx
  int result; // eax
  int v2; // [rsp+30h] [rbp+8h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp+10h] BYREF

  v0 = 0;
  Handle = 0LL;
  v2 = 0;
  result = GetGreRegKey(
             &Handle,
             0x80000000,
             L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Gre_Initialize");
  if ( result >= 0 )
  {
    if ( (unsigned int)bQueryFntCacheReg(Handle, L"Jpn98FixPitch", &v2) )
    {
      LOBYTE(v0) = v2 != 0;
      gbJpn98FixPitch = v0;
    }
    return ZwClose(Handle);
  }
  return result;
}
