/*
 * XREFs of ?at@?$map@W4GazeProperty@@GU?$less@W4GazeProperty@@@std@@V?$allocator@U?$pair@$$CBW4GazeProperty@@G@std@@@3@@std@@QEAAAEAGAEBW4GazeProperty@@@Z @ 0x18012A4F0
 * Callers:
 *     ?CreateReportForProperty@GazeHidParser@@QEAAJW4GazeProperty@@PEAPEADPEAK@Z @ 0x180129A44 (-CreateReportForProperty@GazeHidParser@@QEAAJW4GazeProperty@@PEAPEADPEAK@Z.c)
 *     ?GetCalibratedRegion@GazeHidParser@@QEAAJPEADKPEAUtagRECT@@@Z @ 0x180129D54 (-GetCalibratedRegion@GazeHidParser@@QEAAJPEADKPEAUtagRECT@@@Z.c)
 *     ?GetPropertyValue@GazeHidParser@@QEAAJW4GazeProperty@@PEADKW4_HIDP_REPORT_TYPE@@PEAXK@Z @ 0x180129ECC (-GetPropertyValue@GazeHidParser@@QEAAJW4GazeProperty@@PEADKW4_HIDP_REPORT_TYPE@@PEAXK@Z.c)
 *     ?SetPropertyValue@GazeHidParser@@QEAAJW4GazeProperty@@PEAXKPEADK@Z @ 0x18012A428 (-SetPropertyValue@GazeHidParser@@QEAAJW4GazeProperty@@PEAXKPEADK@Z.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall std::map<enum GazeProperty,unsigned short>::at(__int64 **a1, int *a2)
{
  __int64 *v2; // r8
  __int64 *v3; // rcx
  __int64 *v4; // rax
  int v5; // edx

  v2 = *a1;
  v3 = v2;
  v4 = (__int64 *)v2[1];
  if ( *((_BYTE *)v4 + 25) )
    goto LABEL_10;
  v5 = *a2;
  do
  {
    if ( *((_DWORD *)v4 + 7) >= v5 )
    {
      v3 = v4;
      v4 = (__int64 *)*v4;
    }
    else
    {
      v4 = (__int64 *)v4[2];
    }
  }
  while ( !*((_BYTE *)v4 + 25) );
  if ( v3 == v2 || v5 < *((_DWORD *)v3 + 7) )
  {
LABEL_10:
    std::_Xout_of_range("invalid map<K, T> key");
    __debugbreak();
    JUMPOUT(0x18012A545LL);
  }
  return v3 + 4;
}
