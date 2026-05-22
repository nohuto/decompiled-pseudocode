/*
 * XREFs of ?FindFirstRelevantFlickData@FlickRecognizer@@AEAAHXZ @ 0x180183914
 * Callers:
 *     ?CheckForFlick@FlickRecognizer@@AEAAXPEBVGestureSession@@@Z @ 0x1801837E0 (-CheckForFlick@FlickRecognizer@@AEAAXPEBVGestureSession@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FlickRecognizer::FindFirstRelevantFlickData(FlickRecognizer *this)
{
  unsigned int v2; // r9d
  unsigned int v3; // r11d
  __int64 v4; // rdx
  int v5; // r10d
  unsigned int v6; // eax
  __int64 v7; // rcx
  __int64 v8; // rax

  v2 = *((unsigned __int8 *)this + 136);
  v3 = *((unsigned __int16 *)this + 80);
  v4 = *((unsigned __int8 *)this + 136);
  v5 = *((_DWORD *)this + 3 * *((unsigned __int8 *)this + 137) + 6);
  while ( v5 - *((_DWORD *)this + 3 * v4 + 6) > v3 )
  {
    v6 = v2 + 1;
    v2 = 0;
    v7 = v4 + 1;
    if ( v4 != 9 )
      v2 = v6;
    v8 = v4;
    v4 = 0LL;
    if ( v8 != 9 )
      v4 = v7;
  }
  return v2;
}
