/*
 * XREFs of ?GetFrameFormat@CCrossProcessBaseEndpoint@@UEAAJPEAPEAUtWAVEFORMATEX@@@Z @ 0x14001A940
 * Callers:
 *     <none>
 * Callees:
 *     memcpy_0 @ 0x14001F43F (memcpy_0.c)
 *     ?AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140059398 (-AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CCrossProcessBaseEndpoint::GetFrameFormat(
        CCrossProcessBaseEndpoint *this,
        struct tWAVEFORMATEX **a2)
{
  __int64 v3; // rbx
  __int64 v4; // rbp
  struct tWAVEFORMATEX *v5; // rax
  struct tWAVEFORMATEX *v6; // rsi
  int v7; // ebx

  if ( !*((_DWORD *)this + 14) )
  {
    v7 = -2005139437;
LABEL_10:
    AudCPTraceLoggingErrorHelper("CCrossProcessBaseEndpoint::GetFrameFormat", 0x1CEu, v7);
    return (unsigned int)v7;
  }
  if ( !a2 )
  {
    v7 = -2147467261;
    goto LABEL_10;
  }
  v3 = *((_QWORD *)this + 10);
  v4 = *(unsigned __int16 *)(v3 + 196);
  v5 = (struct tWAVEFORMATEX *)CoTaskMemAlloc(v4 + 18);
  v6 = v5;
  if ( v5 )
  {
    memcpy_0(v5, (const void *)(v3 + 180), v4 + 18);
    v7 = 0;
  }
  else
  {
    v7 = -2147024882;
  }
  *a2 = v6;
  if ( v7 < 0 )
    goto LABEL_10;
  return (unsigned int)v7;
}
