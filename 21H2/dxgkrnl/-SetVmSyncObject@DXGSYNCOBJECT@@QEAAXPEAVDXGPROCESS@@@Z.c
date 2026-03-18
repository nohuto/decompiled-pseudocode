/*
 * XREFs of ?SetVmSyncObject@DXGSYNCOBJECT@@QEAAXPEAVDXGPROCESS@@@Z @ 0x1C03412C8
 * Callers:
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C0186C8C (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 */

void __fastcall DXGSYNCOBJECT::SetVmSyncObject(DXGSYNCOBJECT *this, unsigned __int64 a2)
{
  int v2; // ebx
  int v5; // eax
  unsigned int v6; // ecx
  int v7; // eax
  unsigned __int64 v8; // rax
  int v9; // eax

  v2 = 0;
  if ( !a2 || (v5 = 16, (*(_DWORD *)(a2 + 424) & 0x180) == 0) )
    v5 = 0;
  v6 = v5 | *((_DWORD *)this + 71) & 0xFFFFFFEF;
  *((_DWORD *)this + 71) = v6;
  if ( (v6 & 0x10) != 0 )
  {
    v7 = *(_DWORD *)(a2 + 424);
    if ( (v7 & 0x100) != 0 )
      v8 = *(_QWORD *)(a2 + 608);
    else
      v8 = a2 & -(__int64)((v7 & 0x80u) != 0);
    *((_QWORD *)this + 36) = v8;
    if ( !v8 )
    {
      WdLogSingleEntry1(1LL, 5797LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_pVmwpProcess", 5797LL, 0LL, 0LL, 0LL, 0LL);
      v6 = *((_DWORD *)this + 71);
    }
  }
  else
  {
    *((_QWORD *)this + 36) = 0LL;
  }
  if ( a2 )
  {
    if ( (*(_DWORD *)(a2 + 424) & 0x104) == 0x104 )
    {
      v9 = (2 * *((_DWORD *)this + 70)) >> 1;
      if ( v9 == 5 || v9 == 18 )
        v2 = 32;
    }
  }
  *((_DWORD *)this + 71) = v2 | v6 & 0xFFFFFFDF;
}
