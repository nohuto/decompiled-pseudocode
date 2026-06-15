/*
 * XREFs of ?FilterInstantiate2@@YAJPEBGKPEAPEAX@Z @ 0x18012E170
 * Callers:
 *     s_midiOpenPort @ 0x1800E2D70 (s_midiOpenPort.c)
 * Callees:
 *     WPP_SF_SD @ 0x18012E21C (WPP_SF_SD.c)
 */

__int64 __fastcall FilterInstantiate2(const unsigned __int16 *a1, __int64 a2, void **a3)
{
  int v4; // edi
  HANDLE FileW; // rax
  signed int LastError; // eax
  int v7; // edx
  int v8; // r8d
  unsigned int v9; // ebx

  v4 = (int)a1;
  FileW = CreateFileW(a1, 0xC0000000, 0, 0LL, 3u, 0x40800080u, 0LL);
  if ( FileW == (HANDLE)-1LL )
  {
    LastError = GetLastError();
    v9 = LastError;
    if ( LastError > 0 )
      v9 = (unsigned __int16)LastError | 0x80070000;
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_SD(*((_QWORD *)WPP_GLOBAL_Control + 2), v7, v8, v4, v9);
    }
    return v9;
  }
  else
  {
    *a3 = FileW;
    return 0LL;
  }
}
