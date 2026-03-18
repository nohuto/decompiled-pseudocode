/*
 * XREFs of PhysicalToLogicalInPlaceRgnWorker @ 0x1C00436F0
 * Callers:
 *     PhysicalToLogicalInPlaceRgn @ 0x1C00436D8 (PhysicalToLogicalInPlaceRgn.c)
 *     ?CalcVisRgnWorker@@YAHQEAUtagWND@@PEAPEAUHRGN__@@K@Z @ 0x1C00441B0 (-CalcVisRgnWorker@@YAHQEAUtagWND@@PEAPEAUHRGN__@@K@Z.c)
 * Callees:
 *     ?GetTopLevelOrDpiBoundaryWindow@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C00F9C84 (-GetTopLevelOrDpiBoundaryWindow@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     ?TransformRgn@@YAPEAUHRGN__@@PEAU1@PEAUtagXFORM@@@Z @ 0x1C01E3C64 (-TransformRgn@@YAPEAUHRGN__@@PEAU1@PEAUtagXFORM@@@Z.c)
 */

__int64 __fastcall PhysicalToLogicalInPlaceRgnWorker(struct tagWND *a1, HRGN *a2, int a3)
{
  unsigned int v3; // ebx
  struct tagWND *TopLevelOrDpiBoundaryWindow; // rdi
  float *v7; // rax
  float v8; // xmm6_4
  float v9; // xmm2_4
  float v10; // xmm3_4
  HRGN v11; // rax
  float v12[6]; // [rsp+20h] [rbp-38h] BYREF

  v3 = 0;
  TopLevelOrDpiBoundaryWindow = a1;
  if ( a3 )
    TopLevelOrDpiBoundaryWindow = GetTopLevelOrDpiBoundaryWindow(a1);
  if ( (unsigned __int64)*a2 > 2 )
  {
    if ( TopLevelOrDpiBoundaryWindow )
    {
      if ( *((_QWORD *)TopLevelOrDpiBoundaryWindow + 27) )
      {
        if ( (unsigned int)IsWindowDesktopComposed(TopLevelOrDpiBoundaryWindow) )
        {
          v12[1] = 0.0;
          v12[2] = 0.0;
          v7 = (float *)*((_QWORD *)TopLevelOrDpiBoundaryWindow + 27);
          v12[0] = 1.0 / *v7;
          v8 = 1.0 / v7[5];
          v12[3] = v8;
          LODWORD(v9) = COERCE_UNSIGNED_INT(v7[12] / *v7) ^ _xmm;
          v12[4] = v9;
          LODWORD(v10) = COERCE_UNSIGNED_INT(v7[13] / v7[5]) ^ _xmm;
          v12[5] = v10;
          if ( v12[0] != 1.0 || v8 != 1.0 || v9 != 0.0 || v10 != 0.0 )
          {
            v11 = TransformRgn(*a2, (struct tagXFORM *)v12);
            if ( v11 )
            {
              v3 = 1;
              *a2 = v11;
            }
          }
        }
      }
    }
  }
  return v3;
}
