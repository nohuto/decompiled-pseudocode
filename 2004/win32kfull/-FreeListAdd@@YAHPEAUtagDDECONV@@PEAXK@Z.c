/*
 * XREFs of ?FreeListAdd@@YAHPEAUtagDDECONV@@PEAXK@Z @ 0x1C021B6D4
 * Callers:
 *     ?xxxAdviseAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C021BDD0 (-xxxAdviseAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxAdviseDataAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C021C190 (-xxxAdviseDataAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxPokeAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C021CE00 (-xxxPokeAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxRequestAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C021CF70 (-xxxRequestAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C0026844 (WPP_RECORDER_SF_qq.c)
 */

__int64 __fastcall FreeListAdd(PETHREAD **a1, void *a2, int a3)
{
  __int64 result; // rax
  __int64 v7; // rbx
  char ThreadId; // al
  int v9; // edx
  int v10; // ecx

  result = Win32AllocPool(24LL, 828666709LL);
  v7 = result;
  if ( result )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      ThreadId = (unsigned __int8)PsGetThreadId(*a1[2]);
      LOBYTE(v9) = 4;
      WPP_RECORDER_SF_qq(v10, v9, 14, 52, (__int64)&WPP_f1cc8f74ab813689ed40e0048036585e_Traceguids, (char)a2, ThreadId);
    }
    *(_QWORD *)(v7 + 8) = a2;
    *(_DWORD *)(v7 + 16) = a3;
    *(_QWORD *)v7 = a1[9];
    result = 1LL;
    a1[9] = (PETHREAD *)v7;
  }
  return result;
}
