/*
 * XREFs of sub_18001A918 @ 0x18001A918
 * Callers:
 *     sub_18001FFCC @ 0x18001FFCC (sub_18001FFCC.c)
 *     sub_1800201E0 @ 0x1800201E0 (sub_1800201E0.c)
 *     PbmGetSoundLevel @ 0x180023720 (PbmGetSoundLevel.c)
 *     PbmIsPlaying @ 0x180023860 (PbmIsPlaying.c)
 * Callees:
 *     <none>
 */

ULONG __fastcall sub_18001A918(TRACEHANDLE LoggerHandle, USHORT a2, const GUID *a3, int a4, const wchar_t *a5)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  const wchar_t *v8; // rax
  int v10; // [rsp+78h] [rbp+20h] BYREF

  v10 = a4;
  if ( a5 )
  {
    v6 = -1LL;
    do
      ++v6;
    while ( a5[v6] );
    v7 = 2 * v6 + 2;
  }
  else
  {
    v7 = 10LL;
  }
  v8 = L"NULL";
  if ( a5 )
    v8 = a5;
  return TraceMessage(LoggerHandle, 0x2Bu, a3, a2, &v10, 4LL, v8, v7, 0LL);
}
