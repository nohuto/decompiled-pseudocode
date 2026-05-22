/*
 * XREFs of ?CheckForFlick@FlickRecognizer@@AEAAXPEBVGestureSession@@@Z @ 0x1801837E0
 * Callers:
 *     ?Add@FlickRecognizer@@UEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z @ 0x180183590 (-Add@FlickRecognizer@@UEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z.c)
 * Callees:
 *     ?FindFirstRelevantFlickData@FlickRecognizer@@AEAAHXZ @ 0x180183914 (-FindFirstRelevantFlickData@FlickRecognizer@@AEAAHXZ.c)
 */

void __fastcall FlickRecognizer::CheckForFlick(FlickRecognizer *this, const struct GestureSession *a2)
{
  char v2; // di
  __int64 v5; // rax
  int v6; // r8d
  int v7; // r9d
  int v8; // ecx
  int v9; // r9d
  int v10; // ecx
  int v11; // edx
  int v12; // eax
  unsigned int v13; // r8d
  __int64 v14; // [rsp+30h] [rbp-18h]

  v2 = *((_BYTE *)this + 138);
  if ( (v2 & 1) == 0 )
  {
    v5 = 3LL * (int)FlickRecognizer::FindFirstRelevantFlickData(this);
    v14 = *(_QWORD *)((char *)this + 12 * *((unsigned __int8 *)this + 137) + 16);
    v6 = *((_DWORD *)this + 3 * *((unsigned __int8 *)this + 137) + 6) - *((_DWORD *)this + v5 + 6);
    v7 = v14 - *(_QWORD *)((char *)this + 4 * v5 + 16);
    v8 = HIDWORD(v14) - HIDWORD(*(_QWORD *)((char *)this + 4 * v5 + 16));
    if ( v6 > 0 )
    {
      *((_DWORD *)this + 37) = 1000 * v7 / v6;
      v9 = 1000 * v7 / v6;
      *((_DWORD *)this + 38) = 1000 * v8 / v6;
      v10 = 1000 * v8 / v6;
      if ( (*((_BYTE *)a2 + 198) & 2) != 0 )
        v11 = *((_DWORD *)a2 + 60);
      else
        LOBYTE(v11) = 0;
      v12 = (unsigned __int8)v11 & (unsigned __int8)*((_DWORD *)a2 + 3) & 0x30;
      if ( v12 == 16 )
      {
        *((_DWORD *)this + 38) = 0;
        v10 = 0;
      }
      else if ( v12 == 32 )
      {
        *((_DWORD *)this + 37) = 0;
        v9 = 0;
      }
      if ( (v2 & 2) != 0 )
      {
        v13 = *((unsigned __int16 *)this + 78);
        if ( abs32(v9) >= v13 || abs32(v10) >= v13 )
          *((_BYTE *)this + 138) = v2 | 4;
      }
    }
  }
}
