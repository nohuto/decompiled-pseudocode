/*
 * XREFs of ?AllocQEntryEx@@YGPAUtagQMSG@@PAUtagMLIST@@PAU1@_N@Z @ 0x6D81C
 * Callers:
 *     ?xxxScanSysQueue@@YG?AW4_SCANSYSQUEUERESULT@@PAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIKKPAPAUtagQMSG@@@Z @ 0x38D60 (-xxxScanSysQueue@@YG-AW4_SCANSYSQUEUERESULT@@PAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIKKPAPAUta.c)
 *     _AllocQEntry@4 @ 0xEFE7A (_AllocQEntry@4.c)
 *     ?PostEventMessageEx@@YGHPAUtagTHREADINFO@@PAUtagQ@@KPAUtagWND@@IIJPAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0xF0F76 (-PostEventMessageEx@@YGHPAUtagTHREADINFO@@PAUtagQ@@KPAUtagWND@@IIJPAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 * Callees:
 *     _WPP_RECORDER_SF_qqdd@36 @ 0x6D8C8 (_WPP_RECORDER_SF_qqdd@36.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 */

struct tagQMSG *__userpurge AllocQEntryEx@<eax>(
        _DWORD *a1@<edx>,
        _DWORD *a2@<ecx>,
        struct tagMLIST *a3,
        struct tagQMSG *a4,
        bool a5)
{
  _DWORD *v6; // edi
  _DWORD *v7; // eax
  _DWORD *v8; // eax
  int v9; // eax
  int v11; // ecx
  int v12; // [esp-1Ch] [ebp-28h]
  int v13; // [esp-18h] [ebp-24h]
  int v14; // [esp-14h] [ebp-20h]

  v6 = a1;
  if ( a2[2] >= _gUserPostMessageLimit )
  {
    v11 = 1816;
LABEL_16:
    UserSetLastError(v11);
    return 0;
  }
  if ( a1 )
    goto LABEL_5;
  v7 = (_DWORD *)Win32AllocateFromPagedLookasideList(_QEntryLookaside);
  v6 = v7;
  if ( !v7 )
  {
    v11 = 8;
    goto LABEL_16;
  }
  memset(v7, 0, 0x78u);
LABEL_5:
  v6[16] |= 4 * (a2[3] == 2) + 4;
  v8 = (_DWORD *)a2[1];
  if ( v8 )
  {
    if ( !(_BYTE)a3 )
    {
      *v8 = v6;
      v6[1] = a2[1];
      a2[1] = v6;
      goto LABEL_8;
    }
    *(_DWORD *)(*a2 + 4) = v6;
    *v6 = *a2;
  }
  else
  {
    a2[1] = v6;
  }
  *a2 = v6;
LABEL_8:
  v9 = a2[2] + 1;
  a2[2] = v9;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqdd(v12, v13, v14, (char)v6, (char)a2, a2[3], v9);
  return (struct tagQMSG *)v6;
}
