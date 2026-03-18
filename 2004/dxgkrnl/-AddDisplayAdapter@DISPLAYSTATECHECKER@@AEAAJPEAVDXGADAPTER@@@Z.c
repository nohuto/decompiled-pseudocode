/*
 * XREFs of ?AddDisplayAdapter@DISPLAYSTATECHECKER@@AEAAJPEAVDXGADAPTER@@@Z @ 0x1C02B9088
 * Callers:
 *     ?CollectDisplayAdaptersCallback@DISPLAYSTATECHECKER@@CAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C02BA030 (-CollectDisplayAdaptersCallback@DISPLAYSTATECHECKER@@CAJPEAVDXGADAPTER@@PEAX@Z.c)
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00072C8 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C00073A8 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0009A9C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     ?GetDisplayAdapterDiagData@DISPLAYSTATECHECKER@@AEAAPEAVDISPLAYDIAGNOSTICADAPTERDATA@@I@Z @ 0x1C004D060 (-GetDisplayAdapterDiagData@DISPLAYSTATECHECKER@@AEAAPEAVDISPLAYDIAGNOSTICADAPTERDATA@@I@Z.c)
 *     ?CollectDisplayAdapterDiagData@DISPLAYDIAGNOSTICADAPTERDATA@@QEAAJPEAVDXGADAPTER@@@Z @ 0x1C02B9F30 (-CollectDisplayAdapterDiagData@DISPLAYDIAGNOSTICADAPTERDATA@@QEAAJPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DISPLAYSTATECHECKER::AddDisplayAdapter(DISPLAYSTATECHECKER *this, struct DXGADAPTER *a2)
{
  __int64 v4; // rdx
  struct DISPLAYDIAGNOSTICADAPTERDATA *DisplayAdapterDiagData; // rax
  int v6; // r8d
  __int128 v7; // xmm0
  int v8; // ecx
  _BYTE v10[144]; // [rsp+20h] [rbp-A8h] BYREF

  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v10, a2, 0LL);
  if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v10, 0LL) >= 0 )
  {
    DisplayAdapterDiagData = DISPLAYSTATECHECKER::GetDisplayAdapterDiagData(this, *((unsigned int *)this + 3514));
    if ( DisplayAdapterDiagData )
    {
      v6 = *(_DWORD *)this;
      v7 = *(_OWORD *)((char *)this + 20);
      v8 = *(_DWORD *)this;
      *(_QWORD *)DisplayAdapterDiagData = a2;
      *((_BYTE *)DisplayAdapterDiagData + 21) = BYTE1(v8) & 1;
      *((_DWORD *)DisplayAdapterDiagData + 6) = (unsigned __int8)v6;
      *(_OWORD *)((char *)DisplayAdapterDiagData + 28) = v7;
      DISPLAYDIAGNOSTICADAPTERDATA::CollectDisplayAdapterDiagData(DisplayAdapterDiagData, a2);
      ++*((_DWORD *)this + 3514);
    }
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v10, v4);
  return 0LL;
}
