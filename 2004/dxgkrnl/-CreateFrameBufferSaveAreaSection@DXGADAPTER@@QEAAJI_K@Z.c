/*
 * XREFs of ?CreateFrameBufferSaveAreaSection@DXGADAPTER@@QEAAJI_K@Z @ 0x1C020BB40
 * Callers:
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C017B218 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGADAPTER::CreateFrameBufferSaveAreaSection(DXGADAPTER *this, __int64 a2, __int64 a3)
{
  __int64 v4; // rsi
  __int64 v6; // rax
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v13; // [rsp+50h] [rbp+8h] BYREF
  __int64 v14; // [rsp+60h] [rbp+18h] BYREF

  v4 = 360LL * (unsigned int)a2;
  if ( *(_QWORD *)(*((_QWORD *)this + 323) + v4 + 64) )
  {
    v6 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v6 + 24) = 10399LL;
    WdLogEvent5_WdAssertion(v6);
  }
  v13 = 0LL;
  v14 = a3;
  v7 = MmCreateSection(&v13, 0LL, 0LL, &v14, 4, 0x8000000, 0LL, 0LL);
  v10 = v7;
  if ( v7 >= 0 )
  {
    *(_QWORD *)(*((_QWORD *)this + 323) + v4 + 64) = v13;
  }
  else
  {
    v11 = WdLogNewEntry5_WdError(v9, v8);
    *(_QWORD *)(v11 + 24) = v10;
    WdLogEvent5_WdError(v11);
  }
  return (unsigned int)v10;
}
