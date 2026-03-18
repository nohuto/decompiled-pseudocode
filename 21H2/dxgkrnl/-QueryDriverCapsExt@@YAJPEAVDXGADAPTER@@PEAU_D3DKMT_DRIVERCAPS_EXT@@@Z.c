/*
 * XREFs of ?QueryDriverCapsExt@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRIVERCAPS_EXT@@@Z @ 0x1C02CFD08
 * Callers:
 *     ?DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C018C4C0 (-DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000964C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000F480 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C000F718 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 */

__int64 __fastcall QueryDriverCapsExt(struct DXGADAPTER *a1, struct _D3DKMT_DRIVERCAPS_EXT *a2)
{
  unsigned int v2; // ebx
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  _QWORD *v8; // rax
  __int64 v9; // rcx
  UINT v10; // ecx
  _BYTE v12[144]; // [rsp+20h] [rbp-A8h] BYREF

  v2 = 0;
  if ( !a1 || !a2 )
    return 3221225485LL;
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v12, a1, 0LL);
  v5 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v12, 0LL);
  if ( v5 >= 0 )
  {
    v9 = *((_QWORD *)a1 + 349);
    if ( v9 )
    {
      a2->Value ^= (a2->Value ^ (*(_DWORD *)(v9 + 24) >> 1)) & 1;
      v10 = a2->Value ^ ((unsigned __int8)a2->Value ^ (unsigned __int8)(*(_DWORD *)(v9 + 24) >> 5)) & 2;
    }
    else
    {
      v10 = a2->Value & 0xFFFFFFFC;
    }
    a2->Value = v10;
  }
  else if ( v5 == -1073741130 )
  {
    v8 = (_QWORD *)WdLogNewEntry5_WdTrace(v7, v6);
    v8[3] = a1;
    v8[4] = *((int *)a1 + 102);
    v8[5] = *((unsigned int *)a1 + 101);
  }
  else
  {
    v2 = v5;
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v12);
  return v2;
}
