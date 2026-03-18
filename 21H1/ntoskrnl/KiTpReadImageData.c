/*
 * XREFs of KiTpReadImageData @ 0x1408B8A4C
 * Callers:
 *     KiTpSetupCompletion @ 0x1408B8B30 (KiTpSetupCompletion.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x14025E290 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402A88C0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 */

__int64 __fastcall KiTpReadImageData(_KPROCESS *a1, char a2, const void *a3, _DWORD *a4, unsigned int Size)
{
  unsigned __int64 v9; // r8
  __int64 v10; // r8
  _DWORD *v11; // r9
  _OWORD v13[3]; // [rsp+30h] [rbp-58h] BYREF

  memset(v13, 0, sizeof(v13));
  if ( a1 )
    KiStackAttachProcess(a1, 0LL, (__int64)v13, a4);
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
    KiUnstackDetachProcess((__int64)v13, 0LL, v10, v11);
  return 0LL;
}
