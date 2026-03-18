/*
 * XREFs of KiTpReadImageData @ 0x1408B9D6C
 * Callers:
 *     KiTpSetupCompletion @ 0x1408B9E50 (KiTpSetupCompletion.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140205370 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14024F890 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     memmove @ 0x140409FC0 (memmove.c)
 */

__int64 __fastcall KiTpReadImageData(_KPROCESS *a1, char a2, const void *a3, void *a4, unsigned int Size)
{
  unsigned __int64 v9; // r8
  _OWORD v11[3]; // [rsp+30h] [rbp-58h] BYREF

  memset(v11, 0, sizeof(v11));
  if ( a1 )
    KiStackAttachProcess(a1, 0LL, (__int64)v11);
  if ( a2 )
  {
    if ( Size )
    {
      v9 = (unsigned __int64)a3 + Size;
      if ( v9 > 0x7FFFFFFF0000LL || v9 < (unsigned __int64)a3 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
  }
  memmove(a4, a3, Size);
  if ( a1 )
    KiUnstackDetachProcess((__int64)v11, 0LL);
  return 0LL;
}
