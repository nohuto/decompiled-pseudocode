/*
 * XREFs of _DWP_GetIcon@8 @ 0xA9716
 * Callers:
 *     _xxxRealDefWindowProc@16 @ 0x3D3F2 (_xxxRealDefWindowProc@16.c)
 * Callees:
 *     @HMValidateHandleNoRip@8 @ 0x16F4A (@HMValidateHandleNoRip@8.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 */

int __fastcall DWP_GetIcon(int a1, unsigned int a2)
{
  int v2; // esi
  int v3; // esi
  int v5; // eax

  if ( a2 > 2 )
  {
    UserSetLastError((struct _NT_TIB *)0x57);
    return 0;
  }
  else
  {
    v2 = *(_DWORD *)(a1 + 20);
    if ( a2 == 1 )
      return *(_DWORD *)(v2 + 172);
    v3 = *(_DWORD *)(v2 + 168);
    if ( !a2 && v3 )
    {
      v5 = HMValidateHandleNoRip(v3, 3);
      if ( v5 )
        return (*(_BYTE *)(v5 + 44) & 0x80) == 0 ? v3 : 0;
    }
    return v3;
  }
}
