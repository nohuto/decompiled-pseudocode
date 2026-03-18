/*
 * XREFs of DpiMiracastQueryMiracastSupportForFDO @ 0x1C01EEF98
 * Callers:
 *     DxgkMiracastQueryMiracastSupportInternal @ 0x1C01EECBC (DxgkMiracastQueryMiracastSupportInternal.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0AUTO_PNPPOWER_LOCK@@QEAA@PEAU_COMMON_PNP_CONTEXT@@_N11@Z @ 0x1C0021D08 (--0AUTO_PNPPOWER_LOCK@@QEAA@PEAU_COMMON_PNP_CONTEXT@@_N11@Z.c)
 *     ?Acquire@AUTO_PNPPOWER_LOCK@@QEAAXXZ @ 0x1C0021D38 (-Acquire@AUTO_PNPPOWER_LOCK@@QEAAXXZ.c)
 *     ?Acquire@AUTO_REMOVE_LOCK@@QEAAJXZ @ 0x1C0021DA4 (-Acquire@AUTO_REMOVE_LOCK@@QEAAJXZ.c)
 *     ?Release@AUTO_PNPPOWER_LOCK@@QEAAXXZ @ 0x1C0023598 (-Release@AUTO_PNPPOWER_LOCK@@QEAAXXZ.c)
 *     ?Release@AUTO_REMOVE_LOCK@@QEAAXXZ @ 0x1C00235F0 (-Release@AUTO_REMOVE_LOCK@@QEAAXXZ.c)
 */

__int64 __fastcall DpiMiracastQueryMiracastSupportForFDO(struct _IO_REMOVE_LOCK *a1, __int64 a2)
{
  unsigned int v2; // ebx
  struct _LIST_ENTRY *Blink; // rax
  struct _LIST_ENTRY *v6; // rcx
  char v7; // bp
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *v9; // rcx
  char v11; // cl
  struct _IO_REMOVE_LOCK *v12; // [rsp+50h] [rbp-28h] BYREF
  char v13; // [rsp+58h] [rbp-20h]
  _BYTE v14[16]; // [rsp+60h] [rbp-18h] BYREF

  v2 = 0;
  v12 = a1;
  *(_DWORD *)a2 = 0;
  v13 = 0;
  AUTO_PNPPOWER_LOCK::AUTO_PNPPOWER_LOCK((AUTO_PNPPOWER_LOCK *)v14, (struct _COMMON_PNP_CONTEXT *)a1);
  if ( AUTO_REMOVE_LOCK::Acquire(&v12) < 0 )
  {
    v2 = -1073741637;
  }
  else
  {
    AUTO_PNPPOWER_LOCK::Acquire((AUTO_PNPPOWER_LOCK *)v14);
    Blink = a1[121].Common.RemoveEvent.Header.WaitListHead.Blink;
    if ( Blink )
    {
      v6 = Blink[174].Blink;
      if ( v6 )
      {
        v7 = BYTE2(v6[18].Flink);
        Flink = Blink[175].Flink;
        if ( Flink )
        {
          v9 = Flink + 33;
        }
        else
        {
          WdLogSingleEntry1(2LL, 1348LL);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"The selected adapter is display only adapter",
            1348LL,
            0LL,
            0LL,
            0LL,
            0LL);
          Blink = a1[121].Common.RemoveEvent.Header.WaitListHead.Blink;
          v9 = 0LL;
        }
        if ( SHIDWORD(Blink[168].Flink) >= 2000 )
        {
          if ( v7 )
            *(_BYTE *)a2 = 1;
          if ( a1[94].Common.RemoveEvent.Header.LockNV >= 2u && v9 && LOWORD(v9->Flink) && v7 )
            *(_BYTE *)(a2 + 1) = 1;
        }
        if ( LODWORD(a1[100].Common.RemoveEvent.Header.WaitListHead.Blink) != -1
          && LOWORD(a1[151].Common.RemoveEvent.Header.WaitListHead.Flink) )
        {
          v11 = BYTE4(a1[100].Common.RemoveEvent.Header.WaitListHead.Flink) & 1;
          *(_BYTE *)(a2 + 2) = 1;
          *(_BYTE *)(a2 + 3) = v11;
        }
      }
      else
      {
        WdLogSingleEntry1(2LL, 1325LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"The selected adapter is render-only",
          1325LL,
          0LL,
          0LL,
          0LL,
          0LL);
        v2 = -1073741811;
      }
    }
  }
  AUTO_PNPPOWER_LOCK::Release((AUTO_PNPPOWER_LOCK *)v14);
  AUTO_REMOVE_LOCK::Release((PVOID *)&v12);
  return v2;
}
