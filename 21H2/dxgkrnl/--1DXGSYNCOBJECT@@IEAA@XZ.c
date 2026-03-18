/*
 * XREFs of ??1DXGSYNCOBJECT@@IEAA@XZ @ 0x1C019A4D4
 * Callers:
 *     ?Destroy@DXGSYNCOBJECT@@QEAAXXZ @ 0x1C019A330 (-Destroy@DXGSYNCOBJECT@@QEAAXXZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DXGSYNCOBJECT::~DXGSYNCOBJECT(DXGSYNCOBJECT *this)
{
  void *v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // rcx

  if ( (unsigned int)(*((_DWORD *)this + 50) - 5) <= 1 )
  {
    v4 = *((_QWORD *)DXGGLOBAL_GetGlobal() + 33);
    if ( (*((_BYTE *)this + 204) & 1) != 0 || (LOBYTE(v3) = 0, (*((_DWORD *)this + 71) & 0x20) != 0) )
      LOBYTE(v3) = 1;
    (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)(v4 + 8) + 936LL))((char *)this + 128, v3);
  }
  v2 = (void *)*((_QWORD *)this + 11);
  if ( v2 )
    ObfDereferenceObject(v2);
  if ( *((_DWORD *)this + 20) )
  {
    WdLogSingleEntry1(1LL, 1584LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_hSyncObjHandle == NULL", 1584LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *((_DWORD *)this + 6) )
  {
    WdLogSingleEntry1(1LL, 1585LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_cReference == 0", 1585LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *((_QWORD *)this + 7) )
  {
    WdLogSingleEntry1(1LL, 452LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NULL == m_OwningThread", 452LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *((_DWORD *)this + 16) )
  {
    WdLogSingleEntry1(1LL, 453LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"0 == m_OwnerAcquireCount", 453LL, 0LL, 0LL, 0LL, 0LL);
  }
  *((_QWORD *)this + 2) = 0LL;
}
