/*
 * XREFs of ?DxgkpEscapeStopAdapters@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C02BB050
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000964C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000F480 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C000F718 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C000F7D4 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ?IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ @ 0x1C000F8B8 (-IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     DxgkInvalidateDeviceState @ 0x1C00600E0 (DxgkInvalidateDeviceState.c)
 */

__int64 __fastcall DxgkpEscapeStopAdapters(PVOID *this, _BYTE *a2)
{
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int v7; // ebx
  _QWORD *v8; // rax
  PVOID v9; // rsi
  _BYTE v11[144]; // [rsp+20h] [rbp-B8h] BYREF

  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v11, (struct DXGADAPTER *const)this, 0LL);
  v4 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v11, 0LL);
  v7 = 0;
  if ( v4 >= 0 )
  {
    v9 = this[27];
    if ( v9 )
    {
      ObfReferenceObject(this[27]);
      COREADAPTERACCESS::Release((COREADAPTERACCESS *)v11);
      if ( !DXGADAPTER::IsBddFallbackDriver((DXGADAPTER *)this)
        && (*((_DWORD *)this + 109) & 0x10) == 0
        && ((_DWORD)this[333] & 8) == 0 )
      {
        a2[1] = 1;
        DxgkInvalidateDeviceState((__int64)this[27]);
      }
      ObfDereferenceObject(v9);
    }
    else
    {
      v7 = -1073741823;
    }
  }
  else if ( v4 == -1073741130 )
  {
    v8 = (_QWORD *)WdLogNewEntry5_WdTrace(v6, v5);
    v8[3] = this;
    v8[4] = *((int *)this + 102);
    v8[5] = *((unsigned int *)this + 101);
  }
  else
  {
    v7 = v4;
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v11);
  return v7;
}
