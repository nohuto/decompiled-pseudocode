/*
 * XREFs of ?InitializeCSAccounting@DXGGLOBAL@@QEAAX_K@Z @ 0x1C02BDE88
 * Callers:
 *     ?AccountingforCSCallBackFn@@YAJPEAU_EX_WNF_SUBSCRIPTION@@PEBU_WNF_STATE_NAME@@KKPEBU_WNF_TYPE_ID@@PEAX@Z @ 0x1C02BDAB0 (-AccountingforCSCallBackFn@@YAJPEAU_EX_WNF_SUBSCRIPTION@@PEBU_WNF_STATE_NAME@@KKPEBU_WNF_TYPE_ID.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002808 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002BB0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006598 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     memset @ 0x1C0027400 (memset.c)
 */

void __fastcall DXGGLOBAL::InitializeCSAccounting(DXGGLOBAL *this, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rax
  __int64 v8; // rdx
  _BYTE v9[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v9, (DXGGLOBAL *)((char *)this + 1984), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v9);
  if ( a2 != *((_QWORD *)this + 253) )
  {
    if ( *((_DWORD *)this + 494) )
    {
      v7 = WdLogNewEntry5_WdWarning(v5, v4, v6);
      *(_QWORD *)(v7 + 24) = *((_QWORD *)this + 253);
      WdLogEvent5_WdWarning(v7);
    }
    *((_QWORD *)this + 253) = a2;
    memset((char *)this + 2136, 0, 0x49C30uLL);
    *((_OWORD *)this + 19017) = 0LL;
    *((_QWORD *)this + 38036) = 0LL;
    *((_BYTE *)this + 304264) = 1;
    *((_DWORD *)this + 494) = 1;
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v9, v8);
  }
  if ( v9[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v9, v4);
}
