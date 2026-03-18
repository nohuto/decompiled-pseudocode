/*
 * XREFs of ?CheckPrimaryContentState@DISPLAYSTATECHECKER@@QEAAJXZ @ 0x1C02B97B4
 * Callers:
 *     DxgkCheckDisplayState @ 0x1C02BBB70 (DxgkCheckDisplayState.c)
 * Callees:
 *     ?GetDisplayAdapterDiagData@DISPLAYSTATECHECKER@@AEAAPEAVDISPLAYDIAGNOSTICADAPTERDATA@@I@Z @ 0x1C004D060 (-GetDisplayAdapterDiagData@DISPLAYSTATECHECKER@@AEAAPEAVDISPLAYDIAGNOSTICADAPTERDATA@@I@Z.c)
 *     ?CheckPrimaryContent@VIDPNSOURCEINFO@@QEAAJXZ @ 0x1C02B960C (-CheckPrimaryContent@VIDPNSOURCEINFO@@QEAAJXZ.c)
 */

__int64 __fastcall DISPLAYSTATECHECKER::CheckPrimaryContentState(DISPLAYSTATECHECKER *this)
{
  unsigned int i; // ebx
  struct DISPLAYDIAGNOSTICADAPTERDATA *DisplayAdapterDiagData; // rax
  __int64 v4; // rdx
  struct DISPLAYDIAGNOSTICADAPTERDATA *v5; // rbp
  unsigned int v6; // edi
  VIDPNSOURCEINFO *v7; // rcx

  for ( i = 0; i < *((_DWORD *)this + 3514); ++i )
  {
    DisplayAdapterDiagData = DISPLAYSTATECHECKER::GetDisplayAdapterDiagData(this, i);
    v5 = DisplayAdapterDiagData;
    if ( DisplayAdapterDiagData )
    {
      v6 = 0;
      if ( *((_DWORD *)DisplayAdapterDiagData + 240) )
      {
        do
        {
          if ( v6 >= 4 )
            v7 = 0LL;
          else
            v7 = (struct DISPLAYDIAGNOSTICADAPTERDATA *)((char *)v5 + 224 * v6 + 64);
          if ( v7 )
            VIDPNSOURCEINFO::CheckPrimaryContent(v7, v4);
          ++v6;
        }
        while ( v6 < *((_DWORD *)v5 + 240) );
      }
    }
  }
  return 0LL;
}
