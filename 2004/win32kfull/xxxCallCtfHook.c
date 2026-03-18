/*
 * XREFs of xxxCallCtfHook @ 0x1C0091874
 * Callers:
 *     xxxDestroyWindow @ 0x1C008A700 (xxxDestroyWindow.c)
 *     xxxRealInternalGetMessage @ 0x1C00942A0 (xxxRealInternalGetMessage.c)
 *     xxxCreateWindowEx @ 0x1C00A8C10 (xxxCreateWindowEx.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00B4500 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     fnHkINDWORD @ 0x1C0090F64 (fnHkINDWORD.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C0099E30 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     fnHkINLPMSG @ 0x1C009B630 (fnHkINLPMSG.c)
 *     fnHkINLPMOUSEHOOKSTRUCTEX @ 0x1C010DC94 (fnHkINLPMOUSEHOOKSTRUCTEX.c)
 *     fnHkINLPCBTACTIVATESTRUCT @ 0x1C014EE30 (fnHkINLPCBTACTIVATESTRUCT.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 */

__int64 __fastcall xxxCallCtfHook(int a1, int a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rbx
  unsigned int v5; // edi
  int v9; // esi
  int v10; // ebx
  int v11; // ebx
  int v14; // ebx
  int v15; // ebx
  struct _KTHREAD *v16; // rcx
  int v17; // [rsp+40h] [rbp-68h] BYREF
  __int64 v18[3]; // [rsp+48h] [rbp-60h] BYREF
  int v19; // [rsp+60h] [rbp-48h]
  int v20; // [rsp+64h] [rbp-44h]

  v4 = a1;
  v5 = 0;
  v9 = (unsigned __int16)a2 | ((unsigned __int16)a1 << 16);
  v17 = 0;
  if ( gpsi )
  {
    if ( *(_QWORD *)(gpsi + 856LL) )
    {
      if ( gptiCurrent != gptiRit && (*(_DWORD *)(gptiCurrent + 480LL) & 0x1000000D) == 0 )
      {
        if ( *(_QWORD *)(gptiCurrent + 448LL) )
        {
          if ( ((*(_DWORD *)(gptiCurrent + 672LL) | *(_DWORD *)(**(_QWORD **)(gptiCurrent + 456LL) + 16LL)) & 0x400) == 0
            || (v16 = (struct _KTHREAD *)*gptiCurrent,
                v20 = 0,
                v18[0] = (unsigned int)PsGetThreadId(v16),
                v19 = a2,
                v18[2] = a3,
                v18[1] = a4,
                !(unsigned int)xxxCallHook(0, v4, (__int64)v18, 9)) )
          {
            v10 = v4 - 2;
            if ( v10 )
            {
              v11 = v10 - 1;
              if ( !v11 )
                return (unsigned int)fnHkINLPMSG(v9, a3, a4, 0, *(_QWORD *)(gpsi + 856LL), 0, (__int64)&v17);
              v14 = v11 - 2;
              if ( v14 )
              {
                v15 = v14 - 2;
                if ( !v15 )
                  return (unsigned int)fnHkINLPMOUSEHOOKSTRUCTEX(
                                         v9,
                                         a3,
                                         a4,
                                         0,
                                         *(_QWORD *)(gpsi + 856LL),
                                         (__int64)&v17);
                if ( v15 != 3 || a2 == 5 )
                  return v5;
              }
              else if ( a2 == 5 )
              {
                return (unsigned int)fnHkINLPCBTACTIVATESTRUCT(v9, a3, a4, 0, *(_QWORD *)(gpsi + 856LL));
              }
            }
            return (unsigned int)fnHkINDWORD(v9, a3, a4, 0LL, *(_QWORD *)(gpsi + 856LL), &v17);
          }
        }
      }
    }
  }
  return 0LL;
}
