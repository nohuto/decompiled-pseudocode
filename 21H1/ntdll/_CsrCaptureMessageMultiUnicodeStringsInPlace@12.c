/*
 * XREFs of _CsrCaptureMessageMultiUnicodeStringsInPlace@12 @ 0x4B33E740
 * Callers:
 *     <none>
 * Callees:
 *     _NtWow64CsrAllocateCaptureBuffer@8 @ 0x4B2F4720 (_NtWow64CsrAllocateCaptureBuffer@8.c)
 *     _CsrCaptureMessageUnicodeStringInPlace@8 @ 0x4B33E7D5 (_CsrCaptureMessageUnicodeStringInPlace@8.c)
 */

int __stdcall CsrCaptureMessageMultiUnicodeStringsInPlace(int *a1, int a2, int a3)
{
  int v3; // esi
  int v4; // edi
  int v5; // ecx
  int v6; // edx
  int v7; // eax
  int CaptureBuffer; // eax
  int v9; // ebx
  int v10; // eax

  if ( !a1 )
    return -1073741811;
  v4 = *a1;
  v3 = 0;
  if ( !*a1 )
  {
    v5 = 0;
    v6 = 0;
    if ( a2 )
    {
      do
      {
        v7 = *(_DWORD *)(a3 + 4 * v5);
        if ( v7 )
          v6 += *(unsigned __int16 *)(v7 + 2);
        ++v5;
      }
      while ( v5 != a2 );
    }
    CaptureBuffer = NtWow64CsrAllocateCaptureBuffer(a2, v6);
    v4 = CaptureBuffer;
    if ( !CaptureBuffer )
      return -1073741801;
    *a1 = CaptureBuffer;
  }
  v9 = 0;
  if ( a2 )
  {
    v10 = a3;
    do
    {
      if ( *(_DWORD *)(v10 + 4 * v9) )
      {
        CsrCaptureMessageUnicodeStringInPlace(v4);
        v10 = a3;
      }
      ++v9;
    }
    while ( v9 != a2 );
  }
  return v3;
}
