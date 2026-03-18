/*
 * XREFs of ?SetVmSyncObject@DXGSYNCOBJECT@@QEAAXPEAVDXGPROCESS@@@Z @ 0x1C0291B24
 * Callers:
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C01142B4 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGSYNCOBJECT::SetVmSyncObject(DXGSYNCOBJECT *this, unsigned __int64 a2)
{
  char v4; // si
  bool v5; // al
  char v6; // al
  unsigned __int64 v7; // rax
  __int64 v8; // rax

  v4 = 1;
  v5 = a2 && (*(_BYTE *)(a2 + 347) & 0x30) != 0;
  *((_BYTE *)this + 279) = v5;
  if ( v5 )
  {
    v6 = *(_BYTE *)(a2 + 347);
    if ( (v6 & 0x20) != 0 )
      v7 = *(_QWORD *)(a2 + 496);
    else
      v7 = a2 & -(__int64)((v6 & 0x10) != 0);
    *((_QWORD *)this + 36) = v7;
    if ( !v7 )
    {
      v8 = WdLogNewEntry5_WdAssertion(this, a2);
      *(_QWORD *)(v8 + 24) = 5729LL;
      WdLogEvent5_WdAssertion(v8);
    }
  }
  else
  {
    *((_QWORD *)this + 36) = 0LL;
  }
  if ( !a2
    || (*(_BYTE *)(a2 + 347) & 0x20) == 0
    || !*(_BYTE *)(a2 + 346) && (!g_OSTestSigningEnabled || !(_BYTE)KdDebuggerEnabled) )
  {
    v4 = 0;
  }
  *((_BYTE *)this + 280) = v4;
}
