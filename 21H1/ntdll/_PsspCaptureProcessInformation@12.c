/*
 * XREFs of _PsspCaptureProcessInformation@12 @ 0x4B38727C
 * Callers:
 *     _PssNtCaptureSnapshot@16 @ 0x4B386310 (_PssNtCaptureSnapshot@16.c)
 * Callees:
 *     _ZwQueryInformationProcess@20 @ 0x4B2F2AF0 (_ZwQueryInformationProcess@20.c)
 *     _PsspCaptureHandleTrace@8 @ 0x4B387016 (_PsspCaptureHandleTrace@8.c)
 */

int __fastcall PsspCaptureProcessInformation(int a1, int a2, char a3)
{
  int result; // eax

  *(_DWORD *)(a1 + 12) = 32;
  result = ZwQueryInformationProcess(a2, 0, a1 + 12, 32, 0);
  if ( result >= 0 )
  {
    result = ZwQueryInformationProcess(a2, 4, a1 + 48, 32, 0);
    if ( result >= 0 )
    {
      result = ZwQueryInformationProcess(a2, 18, a1 + 80, 2, 0);
      if ( result >= 0 )
      {
        result = ZwQueryInformationProcess(a2, 3, a1 + 88, 64, 0);
        if ( result >= 0 )
        {
          if ( ZwQueryInformationProcess(a2, 69, a1 + 152, 40, 0) >= 0 )
            *(_DWORD *)(a1 + 4) |= 8u;
          if ( ZwQueryInformationProcess(a2, 34, a1 + 192, 4, 0) < 0 )
            *(_DWORD *)(a1 + 192) = 0;
          if ( ZwQueryInformationProcess(a2, 36, a1 + 196, 4, 0) < 0 )
            *(_DWORD *)(a1 + 196) = 0;
          if ( (a3 & 0x40) != 0 )
            PsspCaptureHandleTrace((_DWORD *)a1, a2);
          *(_WORD *)(a1 + 200) = 0;
          *(_WORD *)(a1 + 202) = 256;
          *(_DWORD *)(a1 + 204) = a1 + 208;
          if ( ZwQueryInformationProcess(a2, 43, a1 + 200, 264, 0) < 0 )
          {
            *(_DWORD *)(a1 + 200) = 0;
            *(_DWORD *)(a1 + 204) = 0;
          }
          return 0;
        }
      }
    }
  }
  return result;
}
