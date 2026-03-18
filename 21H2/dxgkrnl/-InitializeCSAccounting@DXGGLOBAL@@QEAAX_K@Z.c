/*
 * XREFs of ?InitializeCSAccounting@DXGGLOBAL@@QEAAX_K@Z @ 0x1C02E32B8
 * Callers:
 *     ?AccountingforCSCallBackFn@@YAJPEAU_EX_WNF_SUBSCRIPTION@@PEBU_WNF_STATE_NAME@@KKPEBU_WNF_TYPE_ID@@PEAX@Z @ 0x1C02E2F10 (-AccountingforCSCallBackFn@@YAJPEAU_EX_WNF_SUBSCRIPTION@@PEBU_WNF_STATE_NAME@@KKPEBU_WNF_TYPE_ID.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000C3F8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F574 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F5FC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 */

void __fastcall DXGGLOBAL::InitializeCSAccounting(DXGGLOBAL *this, __int64 a2)
{
  __int64 v4; // rdx
  _BYTE v5[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v5, (DXGGLOBAL *)((char *)this + 2160), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v5);
  v4 = *((_QWORD *)this + 276);
  if ( a2 != v4 )
  {
    if ( *((_DWORD *)this + 538) )
      WdLogSingleEntry1(3LL, v4);
    *((_QWORD *)this + 276) = a2;
    memset((char *)this + 2328, 0, 0x49C30uLL);
    *((_OWORD *)this + 19029) = 0LL;
    *((_QWORD *)this + 38060) = 0LL;
    *((_BYTE *)this + 304456) = 1;
    *((_DWORD *)this + 538) = 1;
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v5);
  }
  if ( v5[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v5);
}
