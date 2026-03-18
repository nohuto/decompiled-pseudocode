/*
 * XREFs of DxgkQueryProcessOfferInfo @ 0x1C00E15E0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ @ 0x1C0001FDC (-GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ.c)
 *     __security_check_cookie @ 0x1C00243B0 (__security_check_cookie.c)
 *     memmove @ 0x1C0027140 (memmove.c)
 *     ??0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXK@Z @ 0x1C00E17D0 (--0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXK@Z.c)
 *     ?AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z @ 0x1C00E1890 (-AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z.c)
 *     ??1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ @ 0x1C0282BBC (--1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ.c)
 */

__int64 __fastcall DxgkQueryProcessOfferInfo(ULONG64 a1, __int64 a2)
{
  _DWORD *v3; // rax
  size_t v4; // r8
  __int64 v5; // rax
  const void *v7; // rdx
  void *v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // esi
  __int64 v12; // r8
  struct DXGPROCESS *Process; // rax
  __int64 v14; // rbx
  _QWORD *v15; // rcx
  _QWORD *v16; // rcx
  __int64 v17; // rax
  void *v18[2]; // [rsp+28h] [rbp-90h] BYREF
  __int128 v19; // [rsp+38h] [rbp-80h]
  _BYTE v20[80]; // [rsp+50h] [rbp-68h] BYREF

  *(_OWORD *)v18 = 0LL;
  v19 = 0LL;
  v3 = (_DWORD *)a1;
  if ( a1 >= MmUserProbeAddress )
    v3 = (_DWORD *)MmUserProbeAddress;
  v4 = (unsigned int)*v3;
  if ( *v3 >= 0x20u )
  {
    if ( *v3 > 0x20u )
      v4 = 32LL;
    v7 = (const void *)a1;
    if ( a1 >= MmUserProbeAddress )
      v7 = (const void *)MmUserProbeAddress;
    memmove(v18, v7, v4);
    v8 = v18[1];
    DXGPROCESSMUTEXBYHANDLE::DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v20, v18[1], 0x1000u);
    v11 = DXGPROCESSMUTEXBYHANDLE::AcquireInternal((DXGPROCESSMUTEXBYHANDLE *)v20, 0);
    if ( v11 < 0 )
    {
      v17 = WdLogNewEntry5_WdWarning(v10, v9, v12);
      *(_QWORD *)(v17 + 24) = v8;
      WdLogEvent5_WdWarning(v17);
      DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v20);
      return (unsigned int)v11;
    }
    else
    {
      Process = DXGPROCESSMUTEXBYHANDLE::GetProcess((DXGPROCESSMUTEXBYHANDLE *)v20);
      *(_QWORD *)&v19 = *((_QWORD *)Process + 46);
      v14 = *((_QWORD *)Process + 47);
      *((_QWORD *)&v19 + 1) = v14;
      DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v20);
      v15 = (_QWORD *)(a1 + 16);
      if ( a1 + 16 >= MmUserProbeAddress )
        v15 = (_QWORD *)MmUserProbeAddress;
      *v15 = v19;
      v16 = (_QWORD *)(a1 + 24);
      if ( a1 + 24 >= MmUserProbeAddress )
        v16 = (_QWORD *)MmUserProbeAddress;
      *v16 = v14;
      return 0LL;
    }
  }
  else
  {
    v5 = WdLogNewEntry5_WdWarning(MmUserProbeAddress, a2, v4);
    *(_QWORD *)(v5 + 24) = 818LL;
    WdLogEvent5_WdWarning(v5);
    return 3221225485LL;
  }
}
