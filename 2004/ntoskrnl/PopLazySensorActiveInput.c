/*
 * XREFs of PopLazySensorActiveInput @ 0x1408F1DC4
 * Callers:
 *     PopSessionWinlogonNotification @ 0x1405CF974 (PopSessionWinlogonNotification.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     MmGetSessionById @ 0x1402BE830 (MmGetSessionById.c)
 *     MmDetachSession @ 0x1402DCA80 (MmDetachSession.c)
 *     MmAttachSession @ 0x1402DCB20 (MmAttachSession.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     PopConsoleSessionActiveInput @ 0x140760684 (PopConsoleSessionActiveInput.c)
 */

__int64 __fastcall PopLazySensorActiveInput(unsigned int a1)
{
  int v1; // ebx
  __int64 result; // rax
  struct _DMA_ADAPTER *v4; // rdi
  __int64 v5; // [rsp+20h] [rbp-48h] BYREF
  _OWORD v6[3]; // [rsp+28h] [rbp-40h] BYREF

  BYTE2(qword_140C20390) = 1;
  v1 = 0;
  HIDWORD(qword_140C20390) = 10;
  memset(v6, 0, sizeof(v6));
  v5 = 0LL;
  result = MmGetSessionById(a1);
  v4 = (struct _DMA_ADAPTER *)result;
  if ( result )
  {
    if ( (int)MmAttachSession((_KPROCESS *)result, (__int64)v6) >= 0 )
    {
      PopConsoleSessionActiveInput(
        a1,
        (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24,
        (int *)&v5);
      MmDetachSession((__int64)v4, (__int64)v6);
      v1 = v5;
    }
    HalPutDmaAdapter(v4);
    result = HIDWORD(v5);
    HIDWORD(PopLazyContext) = HIDWORD(v5);
    LOWORD(qword_140C20390) = 257;
    DWORD2(PopLazyContext) = v1;
  }
  return result;
}
