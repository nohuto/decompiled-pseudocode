/*
 * XREFs of ?xxxDownlevelInput@CPTPProcessor@@SAJGAEBUtagPTP_DOWNLEVELED_INPUT@@@Z @ 0x1C01A53C0
 * Callers:
 *     NtUserDownlevelTouchpad @ 0x1C0132910 (NtUserDownlevelTouchpad.c)
 * Callees:
 *     ?ReferenceFrameFromId@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@G@Z @ 0x1C0198BC0 (-ReferenceFrameFromId@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@G@Z.c)
 *     ?UnreferenceFrameExternal@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@@Z @ 0x1C019CEB0 (-UnreferenceFrameExternal@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@@Z.c)
 *     ?xxxDownlevelInput@CPTPProcessor@@CAJPEBUCPointerInputFrame@@AEBUtagPTP_DOWNLEVELED_INPUT@@@Z @ 0x1C01A4DDC (-xxxDownlevelInput@CPTPProcessor@@CAJPEBUCPointerInputFrame@@AEBUtagPTP_DOWNLEVELED_INPUT@@@Z.c)
 */

__int64 __fastcall CPTPProcessor::xxxDownlevelInput(CTouchProcessor *a1, const struct tagPTP_DOWNLEVELED_INPUT *a2)
{
  struct tagTHREADINFO *v2; // rdi
  __int16 v4; // si
  const struct CPointerInputFrame *v5; // rax
  const struct CPointerInputFrame *v6; // rbx
  unsigned int v7; // edi

  v2 = gptiCurrent;
  v4 = (__int16)a1;
  v5 = CTouchProcessor::ReferenceFrameFromId(a1, (unsigned __int16)a1);
  v6 = v5;
  if ( v5 )
  {
    if ( (*((_DWORD *)v5 + 30) & 0x100) == 0 )
    {
      v7 = -1073741811;
      goto LABEL_6;
    }
    *((_WORD *)v2 + 560) = v4;
    *((_QWORD *)v2 + 141) = *((_QWORD *)v5 + 8);
  }
  else if ( v4 != *((_WORD *)v2 + 560) )
  {
    return (unsigned int)-1073741790;
  }
  v7 = CPTPProcessor::xxxDownlevelInput(v5, a2);
LABEL_6:
  if ( v6 )
    CTouchProcessor::UnreferenceFrameExternal((struct _KTHREAD **)gpTouchProcessor, v6);
  return v7;
}
