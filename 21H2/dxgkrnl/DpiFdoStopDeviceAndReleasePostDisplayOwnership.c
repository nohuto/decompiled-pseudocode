/*
 * XREFs of DpiFdoStopDeviceAndReleasePostDisplayOwnership @ 0x1C038BB74
 * Callers:
 *     DpiFdoStartAdapter @ 0x1C01FB06C (DpiFdoStartAdapter.c)
 *     DpiFdoStopAdapter @ 0x1C038B430 (DpiFdoStopAdapter.c)
 * Callees:
 *     memset @ 0x1C002CFC0 (memset.c)
 *     DpiDxgkDdiStopDeviceAndReleasePostDisplayOwnership @ 0x1C0397338 (DpiDxgkDdiStopDeviceAndReleasePostDisplayOwnership.c)
 */

__int64 __fastcall DpiFdoStopDeviceAndReleasePostDisplayOwnership(__int64 a1)
{
  __int64 v1; // rbx
  unsigned int v2; // esi
  char v3; // al
  __int64 v4; // rdi
  int v5; // eax
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 64);
  v2 = -1073741637;
  v3 = *(_BYTE *)(v1 + 3904);
  v4 = *(_QWORD *)(v1 + 40);
  if ( (v3 & 4) == 0 || (*(_BYTE *)(v1 + 3904) = v3 & 0xFB, *(_DWORD *)(v4 + 136) < 0x3003u) || !*(_QWORD *)(v4 + 736) )
  {
LABEL_6:
    xmmword_1C0130760 = 0LL;
    DWORD2(xmmword_1C0130760) = -1;
    xmmword_1C0130750 = 0LL;
    memset(&xmmword_1C0130770, 0, 0x80uLL);
    if ( !*(_BYTE *)(v1 + 1154) )
    {
LABEL_7:
      dword_1C013083C = 0;
      goto LABEL_8;
    }
    goto LABEL_8;
  }
  HIDWORD(xmmword_1C0130760) = 0;
  v5 = DpiDxgkDdiStopDeviceAndReleasePostDisplayOwnership(
         v4,
         *(_QWORD *)(v1 + 48),
         (unsigned int)dword_1C01307F4,
         &xmmword_1C0130750);
  v2 = v5;
  if ( v5 < 0 )
  {
    WdLogSingleEntry1(2LL, v5);
    goto LABEL_6;
  }
  if ( !(_DWORD)xmmword_1C0130750 )
  {
    WdLogSingleEntry1(4LL, v4);
    DWORD2(xmmword_1C0130760) = -3;
    goto LABEL_7;
  }
  if ( !*(_BYTE *)(v1 + 1154) )
    dword_1C013083C = 2;
LABEL_8:
  result = v2;
  dword_1C01307F0 = 2;
  return result;
}
