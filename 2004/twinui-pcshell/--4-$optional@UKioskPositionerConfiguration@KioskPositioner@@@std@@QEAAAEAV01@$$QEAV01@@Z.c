/*
 * XREFs of ??4?$optional@UKioskPositionerConfiguration@KioskPositioner@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800B60B0
 * Callers:
 *     ?RuntimeClassInitialize@KioskPositioner@@QEAAJXZ @ 0x1803DD4F4 (-RuntimeClassInitialize@KioskPositioner@@QEAAJXZ.c)
 * Callees:
 *     ??4?$unique_ptr@VPrimaryAppProxyBase@@U?$default_delete@VPrimaryAppProxyBase@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800B611C (--4-$unique_ptr@VPrimaryAppProxyBase@@U-$default_delete@VPrimaryAppProxyBase@@@std@@@std@@QEAAAE.c)
 *     ??R?$default_delete@VPrimaryAppProxyBase@@@std@@QEBAXPEAVPrimaryAppProxyBase@@@Z @ 0x1803DAA90 (--R-$default_delete@VPrimaryAppProxyBase@@@std@@QEBAXPEAVPrimaryAppProxyBase@@@Z.c)
 */

__int64 __fastcall std::optional<KioskPositioner::KioskPositionerConfiguration>::operator=(__int64 a1, __int64 *a2)
{
  char v3; // al
  __int64 v5; // rax

  v3 = *(_BYTE *)(a1 + 16);
  if ( *((_BYTE *)a2 + 16) )
  {
    if ( v3 )
    {
      std::unique_ptr<PrimaryAppProxyBase>::operator=();
      *(_BYTE *)(a1 + 8) = *((_BYTE *)a2 + 8);
    }
    else
    {
      v5 = *a2;
      *a2 = 0LL;
      *(_QWORD *)a1 = v5;
      *(_BYTE *)(a1 + 8) = *((_BYTE *)a2 + 8);
      *(_BYTE *)(a1 + 16) = 1;
    }
  }
  else if ( v3 )
  {
    if ( *(_QWORD *)a1 )
      std::default_delete<PrimaryAppProxyBase>::operator()();
    *(_BYTE *)(a1 + 16) = 0;
  }
  return a1;
}
