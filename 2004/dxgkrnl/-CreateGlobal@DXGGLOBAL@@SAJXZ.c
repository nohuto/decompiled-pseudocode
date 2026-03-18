/*
 * XREFs of ?CreateGlobal@DXGGLOBAL@@SAJXZ @ 0x1C018D07C
 * Callers:
 *     DriverEntry @ 0x1C0306D00 (DriverEntry.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002CEC (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?Initialize@DXGGLOBAL@@QEAAJXZ @ 0x1C018D86C (-Initialize@DXGGLOBAL@@QEAAJXZ.c)
 *     ??0DXGGLOBAL@@AEAA@XZ @ 0x1C018FE44 (--0DXGGLOBAL@@AEAA@XZ.c)
 *     ?DestroyGlobal@DXGGLOBAL@@SAXXZ @ 0x1C0268C94 (-DestroyGlobal@DXGGLOBAL@@SAXXZ.c)
 */

__int64 __fastcall DXGGLOBAL::CreateGlobal(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  DXGGLOBAL *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 result; // rax
  unsigned int v10; // ebx
  __int64 v11; // rax

  if ( DXGGLOBAL::m_pGlobal )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(a1, a2, a3, a4) + 24) = -1073741823LL;
    return 3221225473LL;
  }
  v4 = (DXGGLOBAL *)operator new[](0x4A720uLL, 0x4B677844u, (POOL_TYPE)512);
  if ( v4 )
    v4 = DXGGLOBAL::DXGGLOBAL(v4);
  DXGGLOBAL::m_pGlobal = v4;
  if ( !v4 )
  {
    v11 = WdLogNewEntry5_WdLowResource(v6, v5, v7, v8);
    v10 = -1073741801;
    *(_QWORD *)(v11 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v11);
    return v10;
  }
  result = DXGGLOBAL::Initialize(v4);
  v10 = result;
  if ( (int)result < 0 )
  {
    DXGGLOBAL::DestroyGlobal();
    return v10;
  }
  return result;
}
