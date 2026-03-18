/*
 * XREFs of DxgkTestGetSysMmAdapter @ 0x1C03443E0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000FA80 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000FABC (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000FB18 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

struct DXGPROCESS *__fastcall DxgkTestGetSysMmAdapter(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebp
  struct DXGPROCESS *result; // rax
  __int64 v6; // rbx
  struct DXGPROCESS *v7; // rsi
  __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // rdx
  int v11; // ecx
  __int64 v12; // rdi
  __int64 v13; // rdi
  __int64 v14; // rdx
  int v15; // ecx
  __int64 v16; // rdi
  _BYTE v17[32]; // [rsp+50h] [rbp-28h] BYREF

  v4 = a1;
  result = DXGPROCESS::GetCurrent(a1, a2, a3, a4);
  v6 = 0LL;
  v7 = result;
  if ( !result )
    return result;
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v17, result);
  v8 = (v4 >> 6) & 0xFFFFFF;
  if ( (*((_DWORD *)v7 + 106) & 0x100) != 0 )
  {
    v9 = *((_QWORD *)v7 + 76);
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v9 + 248));
    if ( (unsigned int)v8 < *(_DWORD *)(v9 + 296) )
    {
      v10 = *(_QWORD *)(v9 + 280);
      v11 = *(_DWORD *)(v10 + 16LL * (unsigned int)v8 + 8);
      if ( ((v4 >> 25) & 0x60) == (*(_BYTE *)(v10 + 16LL * (unsigned int)v8 + 8) & 0x60)
        && (v11 & 0x2000) == 0
        && (v11 & 0x1F) != 0 )
      {
        v12 = 2 * v8;
        if ( (v11 & 0x1F) == 1 )
        {
          v13 = *(_QWORD *)(v10 + 8 * v12);
          goto LABEL_10;
        }
        WdLogSingleEntry1(2LL, 267LL);
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
    v13 = 0LL;
LABEL_10:
    ExReleasePushLockSharedEx(v9 + 248, 0LL);
    KeLeaveCriticalRegion();
    goto LABEL_19;
  }
  if ( (unsigned int)v8 < *((_DWORD *)v7 + 74) )
  {
    v14 = *((_QWORD *)v7 + 35);
    v15 = *(_DWORD *)(v14 + 16 * v8 + 8);
    if ( ((v4 >> 25) & 0x60) == (*(_BYTE *)(v14 + 16 * v8 + 8) & 0x60) && (v15 & 0x2000) == 0 && (v15 & 0x1F) != 0 )
    {
      v16 = 2 * v8;
      if ( (v15 & 0x1F) == 1 )
      {
        v13 = *(_QWORD *)(v14 + 8 * v16);
        goto LABEL_19;
      }
      WdLogSingleEntry1(2LL, 267LL);
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
    }
  }
  v13 = 0LL;
LABEL_19:
  if ( v13 )
    v6 = *(_QWORD *)(v13 + 224);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v17);
  return (struct DXGPROCESS *)v6;
}
