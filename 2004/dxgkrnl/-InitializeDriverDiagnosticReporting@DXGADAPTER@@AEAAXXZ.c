/*
 * XREFs of ?InitializeDriverDiagnosticReporting@DXGADAPTER@@AEAAXXZ @ 0x1C017CD1C
 * Callers:
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C017B218 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?UpdateDiagnosticReporting@DXGADAPTER@@QEAAJPEAU_ADAPTER_UPDATE_DIAGNOSTIC_REPORTING@1@@Z @ 0x1C0210118 (-UpdateDiagnosticReporting@DXGADAPTER@@QEAAJPEAU_ADAPTER_UPDATE_DIAGNOSTIC_REPORTING@1@@Z.c)
 */

void __fastcall DXGADAPTER::InitializeDriverDiagnosticReporting(DXGADAPTER *this, __int64 a2)
{
  struct DXGGLOBAL *Global; // rax
  unsigned int v4; // ebx
  _DWORD *v5; // rdi
  __int128 v6; // [rsp+20h] [rbp-10h] BYREF

  Global = DXGGLOBAL::GetGlobal((__int64)this, a2);
  *((_QWORD *)this + 548) = 0LL;
  *((_QWORD *)this + 549) = -1LL;
  v4 = 0;
  v5 = (_DWORD *)((char *)Global + 304372);
  v6 = 0LL;
  do
  {
    DWORD1(v6) = *v5;
    if ( DWORD1(v6) )
    {
      if ( v4 )
      {
        LODWORD(v6) = v6 | 2;
        DWORD2(v6) |= 0xFFFFFFFE;
      }
      else
      {
        LODWORD(v6) = v6 | 1;
        DWORD2(v6) |= 0xFFFFFFFC;
      }
      HIDWORD(v6) = v4;
      DXGADAPTER::UpdateDiagnosticReporting(this, (struct DXGADAPTER::_ADAPTER_UPDATE_DIAGNOSTIC_REPORTING *)&v6);
    }
    ++v4;
    ++v5;
  }
  while ( v4 < 2 );
}
