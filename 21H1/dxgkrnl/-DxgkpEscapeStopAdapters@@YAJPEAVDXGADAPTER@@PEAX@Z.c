/*
 * XREFs of ?DxgkpEscapeStopAdapters@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C0208880
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0009B60 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ @ 0x1C0009F98 (-IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000E1E8 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C000E2C8 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ?IsComputeOnlyAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C000F1E8 (-IsComputeOnlyAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C0011F0C (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     DxgkInvalidateDeviceState @ 0x1C0050968 (DxgkInvalidateDeviceState.c)
 */

__int64 __fastcall DxgkpEscapeStopAdapters(PVOID *this, _BYTE *a2)
{
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int v9; // ebx
  _QWORD *v10; // rax
  PVOID v11; // rsi
  DXGADAPTER *v12; // rcx
  _BYTE v14[144]; // [rsp+20h] [rbp-B8h] BYREF

  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v14, (struct DXGADAPTER *const)this, 0LL);
  v4 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v14, 0LL);
  v9 = 0;
  if ( v4 >= 0 )
  {
    v11 = this[27];
    if ( v11 )
    {
      ObfReferenceObject(this[27]);
      COREADAPTERACCESS::Release((COREADAPTERACCESS *)v14);
      if ( !DXGADAPTER::IsBddFallbackDriver((DXGADAPTER *)this)
        && (*((_DWORD *)this + 87) & 0x10) == 0
        && !DXGADAPTER::IsComputeOnlyAdapter(v12) )
      {
        a2[1] = 1;
        DxgkInvalidateDeviceState((__int64)this[27]);
      }
      ObfDereferenceObject(v11);
    }
    else
    {
      v9 = -1073741823;
    }
  }
  else if ( v4 == -1073741130 )
  {
    v10 = (_QWORD *)WdLogNewEntry5_WdTrace(v6, v5, v7, v8);
    v10[3] = this;
    v10[4] = *((int *)this + 80);
    v10[5] = *((unsigned int *)this + 79);
  }
  else
  {
    v9 = v4;
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v14, v5);
  return v9;
}
