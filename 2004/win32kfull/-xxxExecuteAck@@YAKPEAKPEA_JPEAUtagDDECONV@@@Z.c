/*
 * XREFs of ?xxxExecuteAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C021C9F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00B1838 (WPP_RECORDER_SF_.c)
 *     ?Createpxs@@YAPEAUtagXSTATE@@P6AKPEAKPEA_JPEAUtagDDECONV@@@ZPEAX4PEAUtagINTDDEINFO@@K@Z @ 0x1C021B5F8 (-Createpxs@@YAPEAUtagXSTATE@@P6AKPEAKPEA_JPEAUtagDDECONV@@@ZPEAX4PEAUtagINTDDEINFO@@K@Z.c)
 *     ?PopState@@YAXPEAUtagDDECONV@@@Z @ 0x1C021B8E4 (-PopState@@YAXPEAUtagDDECONV@@@Z.c)
 *     ?xxxCopyDdeIn@@YAKPEAXPEAKPEAPEAXPEAPEAUtagINTDDEINFO@@@Z @ 0x1C021C69C (-xxxCopyDdeIn@@YAKPEAXPEAKPEAPEAXPEAPEAUtagINTDDEINFO@@@Z.c)
 *     ?xxxUnexpectedServerPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C021D400 (-xxxUnexpectedServerPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 */

int __fastcall xxxExecuteAck(unsigned int *a1, void **a2, struct tagDDECONV *a3)
{
  bool v4; // zf
  void **v5; // r14
  __int64 v8; // r15
  int v9; // edi
  __int64 v10; // rax
  struct tagINTDDEINFO *v11; // rsi
  struct tagXSTATE *v12; // rax
  unsigned int v13; // [rsp+60h] [rbp+8h] BYREF
  struct tagINTDDEINFO *v14; // [rsp+78h] [rbp+20h] BYREF

  v14 = 0LL;
  v4 = *a1 == 996;
  v5 = a2;
  v13 = 6145;
  if ( !v4 )
    return xxxUnexpectedServerPost(a1, (__int64 *)a2, a3);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_((_DWORD)a1, (_DWORD)a2, 14, 49, (__int64)&WPP_f1cc8f74ab813689ed40e0048036585e_Traceguids);
  }
  v8 = *((_QWORD *)a3 + 7);
  v9 = xxxCopyDdeIn(*v5, &v13, 0LL, &v14);
  v10 = _HMPheFromObject(a3);
  v11 = v14;
  if ( (*(_BYTE *)(v10 + 25) & 1) == 0 && *((_QWORD *)a3 + 7) == v8 )
    goto LABEL_9;
  v9 = 3;
  if ( v14 )
  {
    Win32FreePool(v14);
LABEL_9:
    if ( v9 == 2 )
    {
      *((_QWORD *)v11 + 1) = *(_QWORD *)(*((_QWORD *)a3 + 7) + 40LL);
      *((_QWORD *)v11 + 3) = 0LL;
      *((_DWORD *)v11 + 10) = 0;
      *a1 |= 0x80000000;
      v12 = Createpxs(0LL, 0LL, 0LL, v11, 0x201u);
      if ( v12 )
      {
        *((_QWORD *)v12 + 2) = *(_QWORD *)(*((_QWORD *)a3 + 6) + 16LL);
        v12 = *(struct tagXSTATE **)v12;
      }
      *v5 = v12;
      if ( v12 )
        PopState(a3);
      else
        return 3;
    }
  }
  return v9;
}
