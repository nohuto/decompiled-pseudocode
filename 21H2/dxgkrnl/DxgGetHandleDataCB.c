/*
 * XREFs of DxgGetHandleDataCB @ 0x1C015B530
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C000A924 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000FABC (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000FB18 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x1C0015214 (--0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C017D4D0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C017EAE0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C0195040 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1C019E94C (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 */

__int64 __fastcall DxgGetHandleDataCB(unsigned int *a1)
{
  struct DXGPROCESS *Current; // rsi
  __int64 v3; // rcx
  __int64 v4; // rbx
  unsigned int v5; // ecx
  __int64 v6; // r9
  __int64 v7; // rdx
  int v8; // ecx
  __int64 v9; // rdx
  struct DXGALLOCATION *v10; // rdx
  KIRQL CurrentIrql; // al
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v15; // r9
  struct DXGPROCESS *v16; // rax
  unsigned int v17; // ecx
  __int64 v18; // r9
  __int64 v19; // rdx
  int v20; // ecx
  __int64 v21; // rdx
  struct DXGRESOURCE *v22; // rdx
  KIRQL v23; // al
  __int64 v24; // rdx
  __int64 v25; // r9
  __int64 v26; // rdx
  __int64 v27; // [rsp+50h] [rbp-19h] BYREF
  _BYTE v28[24]; // [rsp+58h] [rbp-11h] BYREF
  _BYTE v29[8]; // [rsp+70h] [rbp+7h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+78h] [rbp+Fh] BYREF

  DXGVALIDATIONPROCESSREATTACH::DXGVALIDATIONPROCESSREATTACH((DXGVALIDATIONPROCESSREATTACH *)v29);
  Current = DXGPROCESS::GetCurrent();
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v28, Current);
  v3 = (int)a1[1];
  v4 = 0LL;
  if ( (_DWORD)v3 == 1 )
  {
    v5 = (*a1 >> 6) & 0xFFFFFF;
    if ( v5 < *((_DWORD *)Current + 74) )
    {
      v6 = *((_QWORD *)Current + 35);
      v7 = v5;
      v8 = *(_DWORD *)(v6 + 16LL * v5 + 8);
      if ( ((*a1 >> 25) & 0x60) == (v8 & 0x60) && (v8 & 0x2000) == 0 && (v8 & 0x1F) != 0 )
      {
        v9 = 2 * v7;
        if ( (v8 & 0x1F) == 5 )
        {
          v10 = *(struct DXGALLOCATION **)(v6 + 8 * v9);
LABEL_10:
          DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v27, v10);
          if ( !v27 )
          {
            WdLogSingleEntry1(3LL, *a1);
LABEL_15:
            DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v27);
            goto LABEL_16;
          }
          CurrentIrql = KeGetCurrentIrql();
          v12 = v27;
          if ( CurrentIrql >= 2u )
          {
            v15 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v27 + 8) + 16LL) + 16LL);
            if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v15 + 216) + 64LL) + 40LL) + 28LL) >= 0x2003u )
            {
              WdLogSingleEntry5(0LL, 275LL, 20LL, v15, 0LL, 0LL);
              v12 = v27;
            }
          }
          if ( !DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(*(_QWORD *)(v12 + 8) + 16LL) + 16LL)) )
          {
LABEL_13:
            if ( (a1[2] & 1) != 0 )
              v4 = *(_QWORD *)(v13 + 32);
            else
              v4 = *(_QWORD *)(*(_QWORD *)(v13 + 48) + 16LL);
            goto LABEL_15;
          }
          if ( !*((_DWORD *)DXGGLOBAL_GetGlobal() + 347) )
          {
            v13 = v27;
            goto LABEL_13;
          }
          WdLogSingleEntry1(1LL, 88LL);
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"WDDM2 driver calls WDDM1.x DDI!",
            88LL,
            0LL,
            0LL,
            0LL,
            0LL);
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v27);
          goto LABEL_41;
        }
        WdLogSingleEntry1(2LL, 267LL);
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
    v10 = 0LL;
    goto LABEL_10;
  }
  if ( (_DWORD)v3 != 2 )
  {
    WdLogSingleEntry1(3LL, v3);
    goto LABEL_16;
  }
  v16 = DXGPROCESS::GetCurrent();
  v17 = (*a1 >> 6) & 0xFFFFFF;
  if ( v17 < *((_DWORD *)v16 + 74) )
  {
    v18 = *((_QWORD *)v16 + 35);
    v19 = v17;
    v20 = *(_DWORD *)(v18 + 16LL * v17 + 8);
    if ( ((*a1 >> 25) & 0x60) == (v20 & 0x60) && (v20 & 0x2000) == 0 && (v20 & 0x1F) != 0 )
    {
      v21 = 2 * v19;
      if ( (v20 & 0x1F) == 4 )
      {
        v22 = *(struct DXGRESOURCE **)(v18 + 8 * v21);
        goto LABEL_34;
      }
      WdLogSingleEntry1(2LL, 267LL);
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
    }
  }
  v22 = 0LL;
LABEL_34:
  DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v27, v22);
  if ( v27 )
  {
    v23 = KeGetCurrentIrql();
    v24 = v27;
    if ( v23 >= 2u )
    {
      v25 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v27 + 8) + 16LL) + 16LL);
      if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v25 + 216) + 64LL) + 40LL) + 28LL) >= 0x2003u )
      {
        WdLogSingleEntry5(0LL, 275LL, 20LL, v25, 0LL, 0LL);
        v24 = v27;
      }
    }
    if ( DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(*(_QWORD *)(v24 + 8) + 16LL) + 16LL)) )
    {
      if ( *((_DWORD *)DXGGLOBAL_GetGlobal() + 347) )
      {
        WdLogSingleEntry1(1LL, 130LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"WDDM2 driver calls WDDM1.x DDI!",
          130LL,
          0LL,
          0LL,
          0LL,
          0LL);
        DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v27);
LABEL_41:
        v4 = 0LL;
        goto LABEL_16;
      }
      v26 = v27;
    }
    if ( (*(_DWORD *)(v26 + 4) & 1) != 0 )
      v4 = *(_QWORD *)(*(_QWORD *)(v26 + 56) + 16LL);
    else
      v4 = *(_QWORD *)(v26 + 56);
  }
  else
  {
    WdLogSingleEntry1(3LL, *a1);
  }
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v27);
LABEL_16:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v28);
  if ( v29[0] )
    KeUnstackDetachProcess(&ApcState);
  return v4;
}
