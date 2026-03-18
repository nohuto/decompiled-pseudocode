/*
 * XREFs of ?MapFrameBufferPointer@DXGADAPTER@@QEAAJI_KPEA_KPEAPEAX@Z @ 0x1C020DF98
 * Callers:
 *     DxgkMapFrameBufferPointerCB @ 0x1C00421B0 (DxgkMapFrameBufferPointerCB.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGADAPTER::MapFrameBufferPointer(
        DXGADAPTER *this,
        __int64 a2,
        __int64 a3,
        unsigned __int64 *a4,
        void **a5)
{
  unsigned __int64 v6; // rbx
  __int64 v7; // rsi
  _QWORD *v8; // rax
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // ebx
  __int64 v13; // r8
  __int64 v14; // rax
  void *v16; // [rsp+50h] [rbp+8h] BYREF
  __int64 v17; // [rsp+60h] [rbp+18h] BYREF
  unsigned __int64 v18; // [rsp+68h] [rbp+20h] BYREF

  v17 = a3;
  v6 = *a4;
  v7 = (unsigned int)a2;
  if ( (unsigned int)a2 >= *((_DWORD *)this + 70) )
  {
    v8 = (_QWORD *)WdLogNewEntry5_WdError(this, a2);
    v8[3] = v7;
LABEL_11:
    WdLogEvent5_WdError(v8);
    return 3221225485LL;
  }
  if ( (a3 & 0xFFF) != 0 )
  {
    v8 = (_QWORD *)WdLogNewEntry5_WdError(this, a2);
    v8[3] = v17;
    goto LABEL_11;
  }
  v9 = *((_QWORD *)this + 323) + 360LL * (unsigned int)a2;
  if ( v6 + a3 > *(_QWORD *)(v9 + 56) || v6 + a3 < v6 )
  {
    v8 = (_QWORD *)WdLogNewEntry5_WdError(this, a2);
    v8[3] = v17;
    v8[4] = v6;
    v8[5] = *(_QWORD *)(v9 + 56);
    goto LABEL_11;
  }
  v16 = 0LL;
  v18 = v6;
  v12 = MmMapViewInSystemSpaceEx(*(_QWORD *)(v9 + 64), &v16, &v17, &v18, 0LL);
  if ( v12 >= 0 )
  {
    *a5 = v16;
    *a4 -= v18;
    return 0LL;
  }
  else
  {
    v14 = WdLogNewEntry5_WdWarning(v11, v10, v13);
    *(_QWORD *)(v14 + 24) = v17;
    WdLogEvent5_WdWarning(v14);
    return (unsigned int)v12;
  }
}
