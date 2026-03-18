/*
 * XREFs of _xxxCallCtfHook@16 @ 0x6D91E
 * Callers:
 *     _xxxCreateWindowEx@68 @ 0x2D67C (_xxxCreateWindowEx@68.c)
 *     ?xxxScanSysQueue@@YG?AW4_SCANSYSQUEUERESULT@@PAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIKKPAPAUtagQMSG@@@Z @ 0x38D60 (-xxxScanSysQueue@@YG-AW4_SCANSYSQUEUERESULT@@PAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIKKPAPAUta.c)
 *     _xxxRealInternalGetMessage@24 @ 0x68850 (_xxxRealInternalGetMessage@24.c)
 *     _xxxDestroyWindow@4 @ 0x7239A (_xxxDestroyWindow@4.c)
 * Callees:
 *     _fnHkINDWORD@24 @ 0x482EE (_fnHkINDWORD@24.c)
 *     ?xxxCallHook@@YGHHIJH@Z @ 0x6A6D0 (-xxxCallHook@@YGHHIJH@Z.c)
 *     _fnHkINLPMSG@28 @ 0x6B870 (_fnHkINLPMSG@28.c)
 *     _fnHkINLPCBTACTIVATESTRUCT@20 @ 0xC55BE (_fnHkINLPCBTACTIVATESTRUCT@20.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _fnHkINLPMOUSEHOOKSTRUCTEX@24 @ 0x192E44 (_fnHkINLPMOUSEHOOKSTRUCTEX@24.c)
 */

int __fastcall xxxCallCtfHook(struct tagHOOK *a1, int a2, int a3, int a4)
{
  int v5; // ebx
  int v6; // edi
  char *v7; // esi
  char *v8; // esi
  char *v11; // esi
  char *v12; // esi
  int v13; // [esp+0h] [ebp-30h]
  int v14; // [esp+4h] [ebp-2Ch]
  int v15; // [esp+10h] [ebp-20h] BYREF
  int v16; // [esp+14h] [ebp-1Ch]
  int v17[5]; // [esp+18h] [ebp-18h] BYREF

  v5 = (unsigned __int16)a2 | ((unsigned __int16)a1 << 16);
  v16 = a2;
  v6 = 0;
  v15 = 0;
  if ( _gpsi
    && *(_DWORD *)(_gpsi + 460)
    && _gptiCurrent != _gptiRit
    && (*(_DWORD *)(_gptiCurrent + 264) & 0x1000000D) == 0
    && *(_DWORD *)(_gptiCurrent + 248) )
  {
    if ( ((*(_DWORD *)(_gptiCurrent + 372) | *(_DWORD *)(**(_DWORD **)(_gptiCurrent + 252) + 8)) & 0x400) == 0 )
      goto LABEL_7;
    v17[0] = (int)PsGetThreadId((PETHREAD)*_gptiCurrent);
    v17[4] = v16;
    v17[3] = a3;
    v17[2] = a4;
    v17[1] = 0;
    if ( !xxxCallHook(a1, 0, (unsigned int *)v17, 9u, v13, v14) )
    {
      a2 = v16;
LABEL_7:
      v7 = (char *)a1 - 2;
      if ( v7 )
      {
        v8 = v7 - 1;
        if ( !v8 )
          return fnHkINLPMSG(v5, a3, a4, 0, *(_DWORD *)(_gpsi + 460), 0, &v15);
        v11 = v8 - 2;
        if ( v11 )
        {
          v12 = v11 - 2;
          if ( !v12 )
            return fnHkINLPMOUSEHOOKSTRUCTEX(a4, 0, *(_DWORD *)(_gpsi + 460), &v15);
          if ( v12 != (char *)3 || a2 == 5 )
            return v6;
        }
        else if ( a2 == 5 )
        {
          return fnHkINLPCBTACTIVATESTRUCT(a4, 0, *(_DWORD *)(_gpsi + 460));
        }
      }
      return fnHkINDWORD(v5, a3, a4, 0, *(_DWORD *)(_gpsi + 460), &v15);
    }
  }
  return 0;
}
