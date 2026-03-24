/*
 * XREFs of DpiFdoInitializeConnectionChangePackage @ 0x1C0021114
 * Callers:
 *     DpiFdoHandleDisplayDetectControl @ 0x1C0020478 (DpiFdoHandleDisplayDetectControl.c)
 *     DpIndicateChildStatus @ 0x1C0050BC0 (DpIndicateChildStatus.c)
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x1C0021214 (ExAllocateFromNPagedLookasideList.c)
 *     memset @ 0x1C0028F00 (memset.c)
 */

_DWORD *__fastcall DpiFdoInitializeConnectionChangePackage(
        __int64 a1,
        int a2,
        char a3,
        int a4,
        char a5,
        char a6,
        char a7,
        char a8)
{
  _DWORD *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  _DWORD *v17; // rbx
  signed __int64 v18; // rax
  unsigned int v19; // edi
  _DWORD *result; // rax
  __int64 v21; // rax

  v12 = ExAllocateFromNPagedLookasideList(&Lookaside);
  v17 = v12;
  if ( v12 )
  {
    memset(v12, 0, 0x80uLL);
    v17[4] = 1953656900;
    v17[5] = 13;
    *((_OWORD *)v17 + 3) = *(_OWORD *)a1;
    *((_OWORD *)v17 + 4) = *(_OWORD *)(a1 + 16);
    *((_OWORD *)v17 + 5) = *(_OWORD *)(a1 + 32);
    *((_OWORD *)v17 + 6) = *(_OWORD *)(a1 + 48);
    *((_QWORD *)v17 + 14) = *(_QWORD *)(a1 + 64);
    v18 = _InterlockedExchangeAdd64(&qword_1C00B3000, 1uLL);
    v17[9] = a4;
    *((_QWORD *)v17 + 3) = v18 + 1;
    v19 = v17[8] & 0xF0000000 | a2 & 0xFFFFFF | ((a3 & 0xF) << 24);
    *((_BYTE *)v17 + 124) = a5;
    *((_BYTE *)v17 + 125) = a6;
    *((_BYTE *)v17 + 127) = a8;
    *((_BYTE *)v17 + 126) = a7;
    result = v17;
    v17[8] = v19;
    *((_BYTE *)v17 + 120) = HIBYTE(a2);
  }
  else
  {
    v21 = WdLogNewEntry5_WdLowResource(v14, v13, v15, v16);
    *(_QWORD *)(v21 + 24) = -1073741670LL;
    WdLogEvent5_WdLowResource(v21);
    return 0LL;
  }
  return result;
}
