/*
 * XREFs of _GreCreateDIBitmapComp@44 @ 0x226A90
 * Callers:
 *     _NtGdiCreateDIBitmapInternal@44 @ 0x74B78 (_NtGdiCreateDIBitmapInternal@44.c)
 *     _GreStretchDIBitsInternal@64 @ 0x75662 (_GreStretchDIBitsInternal@64.c)
 * Callees:
 *     ??0DYNAMICMODECHANGESHARELOCK@@QAE@XZ @ 0x213BE (--0DYNAMICMODECHANGESHARELOCK@@QAE@XZ.c)
 *     _GreCreateCompatibleBitmapInternal@24 @ 0x21480 (_GreCreateCompatibleBitmapInternal@24.c)
 *     _GreSetDIBitsInternal@40 @ 0x226CEF (_GreSetDIBitsInternal@40.c)
 */

int __fastcall GreCreateDIBitmapComp(
        HDC a1,
        int a2,
        int a3,
        char a4,
        int a5,
        _DWORD *a6,
        unsigned int a7,
        int a8,
        int a9,
        int a10,
        int a11)
{
  unsigned int v11; // ebx
  HDC v12; // eax
  _DWORD *v13; // edi
  int v14; // eax
  int result; // eax
  int v16; // esi
  int v17; // ecx

  v11 = a7;
  v12 = a1;
  if ( a7 > 2 )
    goto LABEL_6;
  v13 = a6;
  if ( a6 && *a6 >= 0x28u )
  {
    v14 = a6[4];
    if ( v14 == 4 || v14 == 5 )
    {
LABEL_6:
      EngSetLastError(0x57u);
      return 0;
    }
    v12 = a1;
  }
  v16 = a3;
  if ( a3 < 0 )
    v16 = -a3;
  result = GreCreateCompatibleBitmapInternal(v12, a2, v16, 0, 0, 0);
  a7 = result;
  if ( !result )
    return 0;
  if ( (a4 & 4) != 0 && a5 && v13 )
  {
    if ( GreSetDIBitsInternal(v17, v16, a5, v13, v11, a9, a8, a11) )
      return a7;
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)((char *)&a5 + 3));
    GreDeleteObject(a7);
    EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", _ghsemDynamicModeChange);
    GreReleaseSemaphoreInternal(_ghsemDynamicModeChange);
    return 0;
  }
  return result;
}
