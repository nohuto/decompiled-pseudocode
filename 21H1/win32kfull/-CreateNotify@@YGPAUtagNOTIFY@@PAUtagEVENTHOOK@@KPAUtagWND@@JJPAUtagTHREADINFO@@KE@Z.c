/*
 * XREFs of ?CreateNotify@@YGPAUtagNOTIFY@@PAUtagEVENTHOOK@@KPAUtagWND@@JJPAUtagTHREADINFO@@KE@Z @ 0x9D858
 * Callers:
 *     ?CreateAndPostTSFNotify@@YGXKPAUtagWND@@JJPAUtagTHREADINFO@@1K@Z @ 0x12096 (-CreateAndPostTSFNotify@@YGXKPAUtagWND@@JJPAUtagTHREADINFO@@1K@Z.c)
 *     _xxxWindowEvent@20 @ 0x426C2 (_xxxWindowEvent@20.c)
 *     ?xxxDoLocalTSFWork@@YGXKPAUtagWND@@JJKKPAUtagTHREADINFO@@K@Z @ 0x15572D (-xxxDoLocalTSFWork@@YGXKPAUtagWND@@JJKKPAUtagTHREADINFO@@K@Z.c)
 * Callees:
 *     <none>
 */

struct tagNOTIFY *__userpurge CreateNotify@<eax>(
        unsigned int a1@<edx>,
        int a2@<ecx>,
        struct tagEVENTHOOK *a3,
        unsigned int a4,
        struct tagWND *a5,
        PETHREAD *a6,
        int a7,
        struct tagTHREADINFO *a8,
        unsigned int a9,
        unsigned __int8 a10)
{
  _DWORD *v11; // esi
  int v12; // eax
  HANDLE ThreadId; // eax
  int v14; // eax
  _DWORD *v15; // ecx

  if ( dword_273860 )
  {
    v11 = (_DWORD *)Win32AllocPool(48, 2037281621);
    if ( !v11 )
      return 0;
  }
  else
  {
    dword_273860 = 1;
    v11 = &unk_274AF8;
  }
  v11[2] = 0;
  if ( !(_BYTE)a8 )
    HMAssignmentLock(a2, a1);
  if ( a3 )
    v12 = *(_DWORD *)a3;
  else
    v12 = 0;
  v11[5] = v12;
  v11[4] = a1;
  v11[6] = a4;
  v11[7] = a5;
  ThreadId = PsGetThreadId(*a6);
  v11[10] = 0;
  v11[8] = ThreadId;
  v11[9] = a7;
  v11[3] = (unsigned __int8)a8;
  if ( (_BYTE)a8 )
    v14 = 0;
  else
    v14 = ~(unsigned __int8)(*(_DWORD *)(a2 + 24) >> 1) & 4;
  v11[11] = 0;
  v11[10] = v14;
  v11[1] = v11;
  *v11 = v11;
  if ( !(_BYTE)a8
    && (*(_BYTE *)(a2 + 24) & 8) != 0
    && a1 >= 0x80000002
    && a1 <= 0x80000005
    && *(_DWORD *)(a2 + 8) != _gptiCurrent )
  {
    v11[10] |= 4u;
  }
  v15 = (_DWORD *)_gPendingNotifiesList[1];
  if ( *v15 != _gPendingNotifiesList[0] )
    __fastfail(3u);
  *v11 = _gPendingNotifiesList[0];
  v11[1] = v15;
  *v15 = v11;
  _gPendingNotifiesList[1] = v11;
  return (struct tagNOTIFY *)v11;
}
