/*
 * XREFs of ?Initialize@DXGKEYEDMUTEX@@QEAAJI@Z @ 0x1C028C46C
 * Callers:
 *     ?CreateKeyedMutex@DXGGLOBAL@@QEAAJ_KU_D3DKMT_CREATEKEYEDMUTEX2_FLAGS@@IPEAPEAVDXGKEYEDMUTEX@@@Z @ 0x1C028B5E4 (-CreateKeyedMutex@DXGGLOBAL@@QEAAJ_KU_D3DKMT_CREATEKEYEDMUTEX2_FLAGS@@IPEAPEAVDXGKEYEDMUTEX@@@Z.c)
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000CF20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000D070 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C000DB94 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?AllocHandle@DXGGLOBAL@@QEAAIPEAXW4_HMGRENTRY_TYPE@@I@Z @ 0x1C003D9C0 (-AllocHandle@DXGGLOBAL@@QEAAIPEAXW4_HMGRENTRY_TYPE@@I@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0119460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DXGKEYEDMUTEX::Initialize(DXGKEYEDMUTEX *this, __int64 a2)
{
  int v3; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rax
  __int64 v9; // rdx
  _QWORD *v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rdx
  _BYTE v15[8]; // [rsp+20h] [rbp-18h] BYREF
  char v16; // [rsp+28h] [rbp-10h]

  if ( (_DWORD)a2 )
  {
    *((_DWORD *)this + 8) = a2;
    *((_BYTE *)this + 168) = 1;
    return 0LL;
  }
  if ( (*((_DWORD *)this + 41) & 1) != 0 )
    return 0LL;
  DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v15, a2);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v15);
  v3 = DXGGLOBAL::AllocHandle(*((_QWORD *)this + 2), (__int64)this, 9u);
  *((_DWORD *)this + 8) = v3;
  if ( v3 )
  {
    v11 = (_QWORD *)WdLogNewEntry5_WdEvent(v5, v4);
    v11[3] = this;
    v12 = *((unsigned int *)this + 8);
    v11[4] = v12;
    v11[5] = DXGPROCESS::GetCurrent(v12, v13);
    WdLogEvent5_WdEvent(v11);
    if ( v16 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v15, v14);
    return 0LL;
  }
  v8 = WdLogNewEntry5_WdLowResource(v5, v4, v6, v7);
  *(_QWORD *)(v8 + 24) = this;
  *(_QWORD *)(v8 + 32) = -1073741801LL;
  WdLogEvent5_WdLowResource(v8);
  if ( v16 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v15, v9);
  return 3221225495LL;
}
