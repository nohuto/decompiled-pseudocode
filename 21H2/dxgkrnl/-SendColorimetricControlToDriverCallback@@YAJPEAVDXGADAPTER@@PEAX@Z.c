/*
 * XREFs of ?SendColorimetricControlToDriverCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C02F2A00
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000964C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000F480 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C000F718 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ?DdiControlModeBehavior@DXGADAPTER@@QEAAJPEAU_DXGKARG_CONTROLMODEBEHAVIOR@@@Z @ 0x1C0218E74 (-DdiControlModeBehavior@DXGADAPTER@@QEAAJPEAU_DXGKARG_CONTROLMODEBEHAVIOR@@@Z.c)
 */

__int64 __fastcall SendColorimetricControlToDriverCallback(struct DXGADAPTER *this, _DWORD *a2)
{
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  unsigned int v8; // edi
  _QWORD *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  struct _DXGKARG_CONTROLMODEBEHAVIOR v13; // [rsp+20h] [rbp-B8h] BYREF
  _BYTE v14[144]; // [rsp+30h] [rbp-A8h] BYREF

  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v14, this, 0LL);
  v4 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v14, 0LL);
  v8 = 0;
  if ( v4 >= 0 )
  {
    if ( *((int *)this + 673) >= 2400 )
    {
      *(_QWORD *)&v13.Request.0 = 0LL;
      v13.NotSatisfied.Value = 0;
      v13.Request.Value = a2[5] != 0 ? 2 : 0;
      if ( (int)DXGADAPTER::DdiControlModeBehavior(this, &v13, v7) >= 0 )
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v11, v10) + 24) = this;
    }
  }
  else if ( v4 == -1073741130 )
  {
    v9 = (_QWORD *)WdLogNewEntry5_WdTrace(v6, v5);
    v9[3] = this;
    v9[4] = *((int *)this + 102);
    v9[5] = *((unsigned int *)this + 101);
  }
  else
  {
    v8 = v4;
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v14);
  return v8;
}
