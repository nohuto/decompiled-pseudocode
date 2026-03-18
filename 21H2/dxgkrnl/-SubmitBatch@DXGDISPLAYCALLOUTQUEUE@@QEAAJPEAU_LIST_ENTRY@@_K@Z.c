/*
 * XREFs of ?SubmitBatch@DXGDISPLAYCALLOUTQUEUE@@QEAAJPEAU_LIST_ENTRY@@_K@Z @ 0x1C030CE78
 * Callers:
 *     ?EndDisplayCalloutBatch@ADAPTER_DISPLAY@@QEAAJXZ @ 0x1C01F3A94 (-EndDisplayCalloutBatch@ADAPTER_DISPLAY@@QEAAJXZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000C3F8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F574 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F5FC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DpiGdiAsyncDisplayCallout @ 0x1C0387084 (DpiGdiAsyncDisplayCallout.c)
 */

__int64 __fastcall DXGDISPLAYCALLOUTQUEUE::SubmitBatch(struct _LIST_ENTRY **this, struct _LIST_ENTRY *a2, __int64 a3)
{
  struct _LIST_ENTRY *Flink; // r9
  struct _LIST_ENTRY *Blink; // rax
  struct _LIST_ENTRY *v8; // rcx
  struct _LIST_ENTRY *v9; // rdx
  int v10; // eax
  __int64 v11; // rdi
  _BYTE v13[24]; // [rsp+50h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v13, (struct DXGFASTMUTEX *const)this, 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v13);
  Flink = a2->Flink;
  if ( a2->Flink != a2 )
  {
    if ( Flink->Blink != a2
      || (Blink = a2->Blink, Blink->Flink != a2)
      || (Blink->Flink = Flink,
          v8 = (struct _LIST_ENTRY *)(this + 6),
          Flink->Blink = Blink,
          a2->Blink = a2,
          a2->Flink = a2,
          v9 = this[7],
          (struct _LIST_ENTRY **)this[6]->Blink != this + 6)
      || v9->Flink != v8
      || Flink->Flink->Blink != Flink
      || Flink->Blink->Flink != Flink )
    {
      __fastfail(3u);
    }
    v9->Flink = Flink;
    this[7] = Flink->Blink;
    Flink->Blink->Flink = v8;
    Flink->Blink = v9;
  }
  if ( this[6] == (struct _LIST_ENTRY *)(this + 6)
    || this[8]
    || (DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v13), v10 = DpiGdiAsyncDisplayCallout(a3), v11 = v10, v10 >= 0) )
  {
    LODWORD(v11) = 0;
  }
  else
  {
    WdLogSingleEntry1(2LL, v10);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed request an asynchronous Display Callout (Status == 0x%I64x)",
      v11,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( v13[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v13);
  return (unsigned int)v11;
}
