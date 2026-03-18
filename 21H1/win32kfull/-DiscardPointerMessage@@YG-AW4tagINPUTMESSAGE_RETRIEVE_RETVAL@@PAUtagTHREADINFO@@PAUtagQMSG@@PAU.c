/*
 * XREFs of ?DiscardPointerMessage@@YG?AW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@PAUtagTHREADINFO@@PAUtagQMSG@@PAUtagWND@@PAUtagMSG@@@Z @ 0x15ACBC
 * Callers:
 *     ?xxxDiscardPointerWindowFrameMessages@@YGHPAUtagTHREADINFO@@K@Z @ 0x15B280 (-xxxDiscardPointerWindowFrameMessages@@YGHPAUtagTHREADINFO@@K@Z.c)
 * Callees:
 *     _DelQEntry@12 @ 0x6D770 (_DelQEntry@12.c)
 *     ?RetrieveMessage@Pointer@InputTraceLogging@@SGXPBUtagQMSG@@_NW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@@Z @ 0x14DA70 (-RetrieveMessage@Pointer@InputTraceLogging@@SGXPBUtagQMSG@@_NW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@.c)
 *     _xxxRetrievePointerInputMessage@60 @ 0x15A7AB (_xxxRetrievePointerInputMessage@60.c)
 */

char *__fastcall DiscardPointerMessage(int a1, _DWORD *a2, int a3, _DWORD *a4)
{
  int v5; // edi
  unsigned int v6; // eax
  char *v7; // ebx
  _DWORD *v8; // eax
  int v10; // [esp+Ch] [ebp-20h] BYREF
  int v11; // [esp+10h] [ebp-1Ch]
  int v12; // [esp+14h] [ebp-18h] BYREF
  int v13; // [esp+18h] [ebp-14h] BYREF
  int v14; // [esp+1Ch] [ebp-10h] BYREF
  int v15; // [esp+20h] [ebp-Ch] BYREF
  unsigned int v16; // [esp+24h] [ebp-8h] BYREF
  _DWORD *v17; // [esp+28h] [ebp-4h] BYREF

  v5 = a1;
  v11 = a1;
  v17 = 0;
  v6 = a2[3];
  v16 = 0;
  v15 = 0;
  v14 = 0;
  v13 = 0;
  v12 = 1;
  v7 = (char *)xxxRetrievePointerInputMessage(
                 a1,
                 a3,
                 v6,
                 v6,
                 0,
                 1,
                 (struct tagQMSG *)&v12,
                 a2,
                 &v17,
                 &v16,
                 &v15,
                 &v14,
                 (struct tagWND *)&v13,
                 &v10,
                 0);
  InputTraceLogging::Pointer::RetrieveMessage((int)a2, 1u, v7);
  if ( a4 && v7 == (char *)1 )
  {
    memset(a4, 0, 0x1Cu);
    v8 = v17;
    if ( v17 )
      v8 = (_DWORD *)*v17;
    v5 = v11;
    *a4 = v8;
    a4[1] = v16;
    a4[2] = v15;
    a4[3] = v14;
    a4[4] = a2[6];
    a4[5] = a2[7];
    a4[6] = a2[8];
  }
  if ( v7 != (char *)2 )
    DelQEntry((_DWORD *)(*(_DWORD *)(v5 + 236) + 12), a2, 1);
  return v7;
}
