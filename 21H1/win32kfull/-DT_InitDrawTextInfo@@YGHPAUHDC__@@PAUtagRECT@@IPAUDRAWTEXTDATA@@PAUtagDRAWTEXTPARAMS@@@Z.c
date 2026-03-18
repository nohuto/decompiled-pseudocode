/*
 * XREFs of ?DT_InitDrawTextInfo@@YGHPAUHDC__@@PAUtagRECT@@IPAUDRAWTEXTDATA@@PAUtagDRAWTEXTPARAMS@@@Z @ 0x1B7EEA
 * Callers:
 *     _DrawTextExWorker@28 @ 0x1B8194 (_DrawTextExWorker@28.c)
 * Callees:
 *     _W32GetCurrentThreadDpiAwarenessContext@0 @ 0x68610 (_W32GetCurrentThreadDpiAwarenessContext@0.c)
 *     _GreGetTextCharsetInfo@12 @ 0x83EE0 (_GreGetTextCharsetInfo@12.c)
 *     _GreGetTextMetricsW@8 @ 0x84442 (_GreGetTextMetricsW@8.c)
 *     _GetProcessDpiServerInfo@0 @ 0x91B9E (_GetProcessDpiServerInfo@0.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     _IsSysFontAndDefaultMode@4 @ 0x1B847A (_IsSysFontAndDefaultMode@4.c)
 */

int __userpurge DT_InitDrawTextInfo@<eax>(
        LONG *a1@<edx>,
        HDC a2@<ecx>,
        HDC a3,
        struct tagRECT *a4,
        unsigned int a5,
        struct DRAWTEXTDATA *a6,
        struct tagDRAWTEXTPARAMS *a7)
{
  int v8; // ecx
  int result; // eax
  bool v10; // zf
  int v11; // edi
  LONG v12; // esi
  _DWORD *ProcessDpiServerInfo; // eax
  LONG v14; // eax
  LONG v15; // eax
  LONG *v16; // esi
  LONG v17; // eax
  LONG v18; // eax
  int v19; // [esp+Ch] [ebp-A4h]
  __int64 v20; // [esp+10h] [ebp-A0h]
  int v21; // [esp+18h] [ebp-98h] BYREF
  int v22; // [esp+1Ch] [ebp-94h]
  int v23; // [esp+20h] [ebp-90h] BYREF
  int v24; // [esp+24h] [ebp-8Ch]
  LONG *v25; // [esp+28h] [ebp-88h]
  _DWORD v26[15]; // [esp+2Ch] [ebp-84h] BYREF
  _BYTE v27[72]; // [esp+68h] [ebp-48h] BYREF

  v25 = a1;
  v8 = 0;
  v23 = 0;
  v24 = 0;
  v21 = 0;
  v22 = 0;
  if ( a5 )
  {
    v8 = *(_DWORD *)(a5 + 8);
    LODWORD(v20) = *(_DWORD *)(a5 + 12);
  }
  else
  {
    LODWORD(v20) = 0;
  }
  HIDWORD(v20) = v8;
  result = GreGetDCPoint(a2, 1, &v23);
  if ( result )
  {
    GreGetDCPoint(a2, 2, &v21);
    a4[1].top = (((v23 ^ v21) >> 31) & 0xFFFFFFFE) + 1;
    a4[1].right = (((v24 ^ v22) >> 31) & 0xFFFFFFFE) + 1;
    if ( ((unsigned __int16)a3 & 0x1000) != 0 || IsSysFontAndDefaultMode(a2) )
    {
      if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 0 )
        ProcessDpiServerInfo = (_DWORD *)GetProcessDpiServerInfo();
      else
        ProcessDpiServerInfo = (_DWORD *)Get96DpiServerInfo();
      v11 = ProcessDpiServerInfo[13];
      v12 = ProcessDpiServerInfo[16];
      v19 = ProcessDpiServerInfo[7];
      GreGetTextCharsetInfo(*(HDC *)(_gpDispInfo + 28), 0, v19);
    }
    else
    {
      memset(v27, 0, 0x44u);
      v10 = GreGetTextMetricsW(a2, (struct RFONTOBJ *)v27) == 0;
      qmemcpy(v26, v27, sizeof(v26));
      v11 = v26[5];
      v19 = v26[0];
      if ( v10 )
        v12 = 0;
      else
        v12 = v26[8];
    }
    v14 = v19 * a4[1].right;
    a4[3].left = v12;
    a4[1].bottom = v14;
    a4[1].left = 8 * v11;
    if ( _gptiCurrent == _gptiRit )
      v15 = 0;
    else
      v15 = *(_DWORD *)(PsGetCurrentProcessWin32Process() + 412) & 4;
    a4[3].top = v15;
    if ( !v15 )
      a4[2].bottom = (LONG)UserTextOutWInternal;
    v16 = v25;
    a4->left = *v25;
    a4->top = *++v16;
    a4->right = *++v16;
    a4->bottom = v16[1];
    if ( v20 )
    {
      a4->left += HIDWORD(v20) * a4[1].top;
      v17 = v20 * a4[1].top;
      a4[2].right = v17;
      a4->right -= v17;
    }
    else
    {
      a4[2].right = 0;
    }
    v18 = a4[1].top * (a4->right - a4->left);
    a4[2].top = 0;
    a4[2].left = v18;
    return 1;
  }
  return result;
}
