/*
 * XREFs of ?QueryDriverCapsExt@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRIVERCAPS_EXT@@@Z @ 0x1C02221E4
 * Callers:
 *     ?DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C01248A0 (-DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00072C8 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C00073A8 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0009A9C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1C0126C58 (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 */

__int64 __fastcall QueryDriverCapsExt(struct DXGADAPTER *this, struct _D3DKMT_DRIVERCAPS_EXT *a2)
{
  unsigned int v2; // ebx
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  _QWORD *v10; // rax
  __int64 v11; // rcx
  unsigned int v12; // edi
  __int64 v13; // rax
  unsigned int v15; // [rsp+20h] [rbp-99h] BYREF
  struct _DXGKARG_QUERYADAPTERINFO v16; // [rsp+28h] [rbp-91h] BYREF
  _BYTE v17[144]; // [rsp+60h] [rbp-59h] BYREF

  v2 = 0;
  if ( !this || !a2 )
    return 3221225485LL;
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v17, this, 0LL);
  v5 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v17, 0LL);
  if ( v5 >= 0 )
  {
    *(_QWORD *)&v16.Type = 16LL;
    v16.pOutputData = &v15;
    *(_QWORD *)&v16.InputDataSize = 0LL;
    *(_QWORD *)&v16.Flags.0 = 0LL;
    HIDWORD(v16.hKmdProcessHandle) = 0;
    v15 = 0;
    v16.pInputData = 0LL;
    v16.OutputDataSize = 4;
    v12 = DXGADAPTER::DdiQueryAdapterInfo(this, &v16, v8);
    if ( v12 )
    {
      v13 = WdLogNewEntry5_WdAssertion(v11, v6);
      *(_QWORD *)(v13 + 24) = 2429LL;
      WdLogEvent5_WdAssertion(v13);
    }
    v2 = v12;
    a2->Value ^= (a2->Value ^ (v15 >> 1)) & 1;
  }
  else if ( v5 == -1073741130 )
  {
    v10 = (_QWORD *)WdLogNewEntry5_WdTrace(v7, v6, v8, v9);
    v10[3] = this;
    v10[4] = *((int *)this + 80);
    v10[5] = *((unsigned int *)this + 79);
  }
  else
  {
    v2 = v5;
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v17, v6);
  return v2;
}
