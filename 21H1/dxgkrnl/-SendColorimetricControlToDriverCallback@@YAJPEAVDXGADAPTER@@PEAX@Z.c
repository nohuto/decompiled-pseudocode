/*
 * XREFs of ?SendColorimetricControlToDriverCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C0292EF0
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0009B60 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000E1E8 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C000E2C8 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     ?DdiControlModeBehavior@DXGADAPTER@@QEAAJPEAU_DXGKARG_CONTROLMODEBEHAVIOR@@@Z @ 0x1C0186E4C (-DdiControlModeBehavior@DXGADAPTER@@QEAAJPEAU_DXGKARG_CONTROLMODEBEHAVIOR@@@Z.c)
 */

__int64 __fastcall SendColorimetricControlToDriverCallback(struct DXGADAPTER *this, _DWORD *a2)
{
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int v9; // edi
  _QWORD *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  struct _DXGKARG_CONTROLMODEBEHAVIOR v15; // [rsp+20h] [rbp-B8h] BYREF
  _BYTE v16[144]; // [rsp+30h] [rbp-A8h] BYREF

  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v16, this, 0LL);
  v4 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v16, 0LL);
  v9 = 0;
  if ( v4 >= 0 )
  {
    if ( *((int *)this + 643) >= 2400 )
    {
      *(_QWORD *)&v15.Request.0 = 0LL;
      v15.NotSatisfied.Value = 0;
      v15.Request.Value = a2[5] != 0 ? 2 : 0;
      if ( (int)DXGADAPTER::DdiControlModeBehavior(this, &v15, v7) >= 0 )
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v11, v5, v12, v13) + 24) = this;
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
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v16, v5);
  return v9;
}
