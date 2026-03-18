/*
 * XREFs of ?StartProcessingBatch@DXGDISPLAYCALLOUTQUEUE@@QEAAEPEAPEAUDISPLAY_CALLOUT_ENTRY@@@Z @ 0x1C026A9D0
 * Callers:
 *     DxgkProcessDisplayCalloutBatch @ 0x1C0296D10 (DxgkProcessDisplayCalloutBatch.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002808 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002BB0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006598 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 */

bool __fastcall DXGDISPLAYCALLOUTQUEUE::StartProcessingBatch(
        DXGDISPLAYCALLOUTQUEUE *this,
        struct DISPLAY_CALLOUT_ENTRY **a2)
{
  char *v4; // r8
  struct DISPLAY_CALLOUT_ENTRY *v5; // rax
  __int64 v6; // rcx
  bool v7; // zf
  bool v8; // bl
  _BYTE v10[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v10, this, 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v10);
  if ( *((_QWORD *)this + 7) || (v4 = (char *)this + 40, *(char **)v4 == v4) )
  {
    *a2 = 0LL;
    v8 = 0;
  }
  else
  {
    *((_QWORD *)this + 7) = KeGetCurrentThread();
    v5 = *(struct DISPLAY_CALLOUT_ENTRY **)v4;
    if ( *(char **)(*(_QWORD *)v4 + 8LL) != v4
      || (v6 = *(_QWORD *)v5, *(struct DISPLAY_CALLOUT_ENTRY **)(*(_QWORD *)v5 + 8LL) != v5) )
    {
      __fastfail(3u);
    }
    *(_QWORD *)v4 = v6;
    *(_QWORD *)(v6 + 8) = v4;
    v7 = *(_QWORD *)v4 == (_QWORD)v4;
    *a2 = v5;
    v8 = !v7;
  }
  if ( v10[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v10, 0LL);
  return v8;
}
