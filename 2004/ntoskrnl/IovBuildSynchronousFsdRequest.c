/*
 * XREFs of IovBuildSynchronousFsdRequest @ 0x1409C1C10
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     XdvIoBuildSynchronousFsdRequest @ 0x14059C740 (XdvIoBuildSynchronousFsdRequest.c)
 *     VfSetIoBuildRequest @ 0x1409CE6C8 (VfSetIoBuildRequest.c)
 */

__int64 __fastcall IovBuildSynchronousFsdRequest(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 retaddr; // [rsp+68h] [rbp+0h]

  v7 = XdvIoBuildSynchronousFsdRequest(
         a1,
         a2,
         a3,
         a4,
         a5,
         a6,
         a7,
         retaddr,
         (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))IopBuildSynchronousFsdRequest);
  v8 = v7;
  if ( v7 )
    VfSetIoBuildRequest(v7);
  return v8;
}
