/*
 * XREFs of ?RequestSyncCallout@DXGDISPLAYCALLOUTQUEUE@@QEAAJPEAUDISPLAY_CALLOUT_ENTRY@@_K@Z @ 0x1C0266F98
 * Callers:
 *     DxgkRequestSyncDisplaySwitchCallout @ 0x1C0267DE4 (DxgkRequestSyncDisplaySwitchCallout.c)
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000CF20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000D070 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000DBC4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ??_GDISPLAY_CALLOUT_ENTRY@@QEAAPEAXI@Z @ 0x1C00445C8 (--_GDISPLAY_CALLOUT_ENTRY@@QEAAPEAXI@Z.c)
 *     DpiGdiSyncDisplayCallout @ 0x1C02C1D5C (DpiGdiSyncDisplayCallout.c)
 */

__int64 __fastcall DXGDISPLAYCALLOUTQUEUE::RequestSyncCallout(DXGDISPLAYCALLOUTQUEUE *this, char *P, __int64 a3)
{
  __int64 v6; // rdx
  char **v7; // rax
  char *v8; // rbx
  int v9; // eax
  __int64 v10; // rsi
  char **v11; // rdx
  char *v12; // rcx
  char *v13; // rax
  __int64 v14; // rax
  __int64 v15; // rdx
  _BYTE v17[24]; // [rsp+20h] [rbp-18h] BYREF

  P[20] = 1;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v17, this, 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v17);
  v7 = (char **)*((_QWORD *)this + 6);
  v8 = (char *)this + 40;
  if ( *v7 != v8 )
    goto LABEL_15;
  *(_QWORD *)P = v8;
  *((_QWORD *)P + 1) = v7;
  *v7 = P;
  *((_QWORD *)v8 + 1) = P;
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v17, v6);
  v9 = DpiGdiSyncDisplayCallout(a3);
  v10 = v9;
  if ( v9 >= 0 )
  {
    LODWORD(v10) = *((_DWORD *)P + 14);
    goto LABEL_12;
  }
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v17);
  v13 = *(char **)v8;
  if ( *(char **)v8 != v8 )
  {
    while ( 1 )
    {
      v12 = *(char **)v13;
      if ( v13 == P )
        break;
      v13 = *(char **)v13;
      if ( v12 == v8 )
        goto LABEL_11;
    }
    if ( *((char **)v12 + 1) == v13 )
    {
      v11 = (char **)*((_QWORD *)v13 + 1);
      if ( *v11 == v13 )
      {
        *v11 = v12;
        *((_QWORD *)v12 + 1) = v11;
        goto LABEL_11;
      }
    }
LABEL_15:
    __fastfail(3u);
  }
LABEL_11:
  v14 = WdLogNewEntry5_WdError(v12, v11);
  *(_QWORD *)(v14 + 24) = v10;
  WdLogEvent5_WdError(v14);
LABEL_12:
  DISPLAY_CALLOUT_ENTRY::`scalar deleting destructor'((DISPLAY_CALLOUT_ENTRY *)P);
  if ( v17[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v17, v15);
  return (unsigned int)v10;
}
