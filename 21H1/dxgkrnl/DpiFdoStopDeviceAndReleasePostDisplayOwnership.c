/*
 * XREFs of DpiFdoStopDeviceAndReleasePostDisplayOwnership @ 0x1C02C7D58
 * Callers:
 *     DpiFdoStartAdapter @ 0x1C0171310 (DpiFdoStartAdapter.c)
 *     DpiFdoStopAdapter @ 0x1C02C7554 (DpiFdoStopAdapter.c)
 * Callees:
 *     memset @ 0x1C0026840 (memset.c)
 *     DpiDxgkDdiStopDeviceAndReleasePostDisplayOwnership @ 0x1C02D4400 (DpiDxgkDdiStopDeviceAndReleasePostDisplayOwnership.c)
 */

__int64 __fastcall DpiFdoStopDeviceAndReleasePostDisplayOwnership(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // rbx
  char v3; // al
  __int64 v4; // rsi
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 64);
  LODWORD(v2) = -1073741637;
  v3 = *(_BYTE *)(v1 + 3904);
  v4 = *(_QWORD *)(v1 + 40);
  if ( (v3 & 4) == 0 )
    goto LABEL_11;
  *(_BYTE *)(v1 + 3904) = v3 & 0xFB;
  if ( *(_DWORD *)(v4 + 136) < 0x3003u || !*(_QWORD *)(v4 + 736) )
    goto LABEL_11;
  HIDWORD(xmmword_1C00AFCD8) = 0;
  v5 = DpiDxgkDdiStopDeviceAndReleasePostDisplayOwnership(
         v4,
         *(_QWORD *)(v1 + 48),
         (unsigned int)dword_1C00AFD6C,
         &xmmword_1C00AFCC8);
  v2 = v5;
  if ( v5 >= 0 )
  {
    if ( (_DWORD)xmmword_1C00AFCC8 )
    {
      if ( !*(_BYTE *)(v1 + 1154) )
        dword_1C00AFDB4 = 2;
    }
    else
    {
      v9 = WdLogNewEntry5_WdEvent(v7, v6);
      *(_QWORD *)(v9 + 24) = v4;
      WdLogEvent5_WdEvent(v9);
      dword_1C00AFDB4 = 0;
      DWORD2(xmmword_1C00AFCD8) = -3;
    }
  }
  else
  {
    v8 = WdLogNewEntry5_WdError(v7, v6);
    *(_QWORD *)(v8 + 24) = v2;
    WdLogEvent5_WdError(v8);
  }
  if ( (int)v2 < 0 )
  {
LABEL_11:
    xmmword_1C00AFCD8 = 0LL;
    DWORD2(xmmword_1C00AFCD8) = -1;
    xmmword_1C00AFCC8 = 0LL;
    memset(&xmmword_1C00AFCE8, 0, 0x80uLL);
    if ( !*(_BYTE *)(v1 + 1154) )
      dword_1C00AFDB4 = 0;
  }
  result = (unsigned int)v2;
  dword_1C00AFD68 = 2;
  return result;
}
