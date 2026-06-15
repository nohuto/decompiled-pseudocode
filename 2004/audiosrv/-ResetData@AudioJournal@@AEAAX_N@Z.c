/*
 * XREFs of ?ResetData@AudioJournal@@AEAAX_N@Z @ 0x1800F71DC
 * Callers:
 *     ?CheckAndLogTelemetry@AudioJournal@@AEAAXXZ @ 0x180038EA4 (-CheckAndLogTelemetry@AudioJournal@@AEAAXXZ.c)
 *     ?Initialize@AudioJournal@@AEAAJXZ @ 0x1800538C4 (-Initialize@AudioJournal@@AEAAJXZ.c)
 * Callees:
 *     memset_0 @ 0x18006B69C (memset_0.c)
 *     ?WriteStreamInfo@AudioJournal@@AEAAJPEAUStreamInfo@1@@Z @ 0x1800F7314 (-WriteStreamInfo@AudioJournal@@AEAAJPEAUStreamInfo@1@@Z.c)
 *     ?WriteValue@AudioJournal@@AEAAJPEBGKPEAEK@Z @ 0x1800F73C0 (-WriteValue@AudioJournal@@AEAAJPEBGKPEAEK@Z.c)
 */

void __fastcall AudioJournal::ResetData(AudioJournal *this, char a2)
{
  struct AudioJournal::StreamInfo *v2; // rsi
  struct _FILETIME SystemTimeAsFileTime; // [rsp+60h] [rbp+8h] BYREF
  int v6; // [rsp+68h] [rbp+10h] BYREF

  v2 = (AudioJournal *)((char *)this + 232);
  memset_0((char *)this + 232, 0, 0x258uLL);
  memset_0((char *)this + 832, 0, 0x190uLL);
  memset_0((char *)this + 1232, 0, 0xC8uLL);
  *((_DWORD *)this + 344) = 100;
  GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
  *((struct _FILETIME *)this + 28) = SystemTimeAsFileTime;
  if ( a2 )
  {
    v6 = 1;
    AudioJournal::WriteValue(this, L"Version", 4u, (unsigned __int8 *)&v6, 4u);
    AudioJournal::WriteValue(this, L"LastLogTime", 0xBu, (unsigned __int8 *)this + 224, 8u);
    AudioJournal::WriteStreamInfo(this, v2);
    AudioJournal::WriteStreamInfo(this, (AudioJournal *)((char *)this + 832));
    AudioJournal::WriteStreamInfo(this, (AudioJournal *)((char *)this + 1232));
  }
}
