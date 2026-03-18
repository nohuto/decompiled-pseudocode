/*
 * XREFs of ?SetQueuedPresentLimit@BLTQUEUE@@QEAAXI@Z @ 0x1C02FE678
 * Callers:
 *     ?SetQueuedPresentLimit@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@I@Z @ 0x1C0213E44 (-SetQueuedPresentLimit@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@I@Z.c)
 * Callees:
 *     ?Get@?$CCachedData@VBLTENTRY@@$02@@QEAAPEAVBLTENTRY@@K@Z @ 0x1C005DECC (-Get@-$CCachedData@VBLTENTRY@@$02@@QEAAPEAVBLTENTRY@@K@Z.c)
 *     ?Flush@BLTQUEUE@@QEAAXXZ @ 0x1C0161960 (-Flush@BLTQUEUE@@QEAAXXZ.c)
 *     ?InsertQueueTail@BLTQUEUE@@AEAAXPEAU_LIST_ENTRY@@PEAVBLTENTRY@@@Z @ 0x1C02FC6B4 (-InsertQueueTail@BLTQUEUE@@AEAAXPEAU_LIST_ENTRY@@PEAVBLTENTRY@@@Z.c)
 */

void __fastcall BLTQUEUE::SetQueuedPresentLimit(BLTQUEUE *this, unsigned int a2)
{
  struct BLTENTRY *v4; // rdi
  struct BLTENTRY *v5; // rbp
  __int64 v6; // rdi
  __int64 v7; // rsi

  BLTQUEUE::Flush(this);
  v4 = (BLTQUEUE *)((char *)this + 952);
  *((_QWORD *)this + 30) = (char *)this + 232;
  *((_QWORD *)this + 29) = (char *)this + 232;
  v5 = CCachedData<BLTENTRY,3>::Get((__int64)this + 952, a2);
  if ( v5 )
  {
    if ( a2 )
    {
      v6 = a2;
      do
      {
        BLTQUEUE::InsertQueueTail(this, (struct _LIST_ENTRY *)((char *)this + 232), v5);
        v5 = (struct BLTENTRY *)((char *)v5 + 576);
        --v6;
      }
      while ( v6 );
    }
  }
  else
  {
    v7 = 3LL;
    do
    {
      BLTQUEUE::InsertQueueTail(this, (struct _LIST_ENTRY *)((char *)this + 232), v4);
      v4 = (struct BLTENTRY *)((char *)v4 + 576);
      --v7;
    }
    while ( v7 );
  }
}
