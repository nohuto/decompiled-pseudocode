/*
 * XREFs of ?DxgkCddNotifyGdiRendering@@YAJPEAXI@Z @ 0x1C02DB980
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000FABC (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000FB18 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C017D4D0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C017EAE0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 */

__int64 __fastcall DxgkCddNotifyGdiRendering(struct DXGPROCESS *a1, unsigned int a2)
{
  __int64 v2; // rdi
  __int64 v4; // rax
  __int64 v5; // r9
  int v6; // edx
  struct _EX_RUNDOWN_REF *v7; // rdx
  unsigned int v8; // ebx
  ULONG_PTR Count; // rcx
  _BYTE v11[40]; // [rsp+50h] [rbp-28h] BYREF
  struct _EX_RUNDOWN_REF *v12; // [rsp+80h] [rbp+8h] BYREF

  v2 = a2;
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v11, a1);
  v4 = ((unsigned int)v2 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v4 >= *((_DWORD *)a1 + 74) )
    goto LABEL_7;
  v5 = *((_QWORD *)a1 + 35);
  v6 = *(_DWORD *)(v5 + 16 * v4 + 8);
  if ( (((unsigned int)v2 >> 25) & 0x60) != (*(_BYTE *)(v5 + 16 * v4 + 8) & 0x60)
    || (v6 & 0x2000) != 0
    || (v6 & 0x1F) == 0 )
  {
    goto LABEL_7;
  }
  if ( (v6 & 0x1F) != 5 )
  {
    WdLogSingleEntry1(2LL, 267LL);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
LABEL_7:
    v7 = 0LL;
    goto LABEL_8;
  }
  v7 = *(struct _EX_RUNDOWN_REF **)(v5 + 16LL * (unsigned int)v4);
LABEL_8:
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v12, v7);
  if ( v12 )
  {
    Count = v12[6].Count;
    if ( Count )
      *(_DWORD *)(Count + 4) &= ~0x400u;
    v8 = 0;
  }
  else
  {
    v8 = -1073741811;
    WdLogSingleEntry2(3LL, v2, -1073741811LL);
  }
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v12);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v11);
  return v8;
}
