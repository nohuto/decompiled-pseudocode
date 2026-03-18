/*
 * XREFs of ?PreventInterMonitorBlts@@YAXPEAUtagCVR@@@Z @ 0x1C01CFD8C
 * Callers:
 *     ?BltValidInit@@YAHPEAUtagSMWP@@@Z @ 0x1C0048180 (-BltValidInit@@YAHPEAUtagSMWP@@@Z.c)
 * Callees:
 *     GetMonitorRect @ 0x1C003AFE8 (GetMonitorRect.c)
 *     IntersectRect @ 0x1C0045758 (IntersectRect.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C00CAD64 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 */

void __fastcall PreventInterMonitorBlts(struct tagCVR *a1)
{
  __int64 v2; // r8
  __int64 v3; // r9
  int v4; // ecx
  int v5; // edx
  __int64 i; // rsi
  __int128 v7; // xmm0
  __int64 v8; // rax
  int v9; // eax
  int v10; // ecx
  __int128 v11; // kr00_16
  unsigned int v12; // r13d
  unsigned int v13; // r15d
  unsigned int v14; // r12d
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rbx
  __int128 v19; // [rsp+38h] [rbp-39h] BYREF
  __int128 v20; // [rsp+48h] [rbp-29h] BYREF
  __int128 v21; // [rsp+58h] [rbp-19h] BYREF
  __int128 v22; // [rsp+68h] [rbp-9h] BYREF
  __int64 v23; // [rsp+78h] [rbp+7h] BYREF
  __int64 v24; // [rsp+80h] [rbp+Fh]
  __int128 v25; // [rsp+88h] [rbp+17h] BYREF

  v21 = 0LL;
  v25 = 0LL;
  v22 = 0LL;
  if ( !IsRectEmptyInl((const struct tagRECT *)((char *)a1 + 56)) )
  {
    v4 = *((_DWORD *)a1 + 18);
    v5 = *((_DWORD *)a1 + 19);
    LODWORD(v23) = *((_DWORD *)a1 + 14) - v4;
    LODWORD(v24) = *((_DWORD *)a1 + 16) - v4;
    HIDWORD(v23) = *((_DWORD *)a1 + 15) - v5;
    HIDWORD(v24) = *((_DWORD *)a1 + 17) - v5;
    for ( i = *(_QWORD *)(gpDispInfo + 104LL); i; i = *(_QWORD *)(i + 56) )
    {
      v7 = *GetMonitorRect(&v20, i, v2, v3);
      v8 = *(_QWORD *)(i + 40);
      v19 = v7;
      if ( (*(_DWORD *)(v8 + 24) & 1) != 0 && (unsigned int)IntersectRect(&v25, (int *)&v23, (int *)&v19) )
      {
        v9 = *((_DWORD *)a1 + 18);
        v10 = *((_DWORD *)a1 + 19);
        v11 = v25;
        v12 = v10 + DWORD1(v25);
        v13 = v25 + v9;
        DWORD1(v21) = v10 + DWORD1(v25);
        v14 = DWORD2(v25) + v9;
        LODWORD(v21) = v25 + v9;
        DWORD2(v21) = DWORD2(v25) + v9;
        HIDWORD(v21) = v10 + HIDWORD(v25);
        IntersectRect(&v22, (int *)&v21, (int *)&v19);
        v17 = v22 - v21;
        if ( (_QWORD)v22 == (_QWORD)v21 )
          v17 = *((_QWORD *)&v22 + 1) - *((_QWORD *)&v21 + 1);
        if ( v17 )
        {
          if ( !*((_QWORD *)a1 + 15) )
            *((_QWORD *)a1 + 15) = CreateEmptyRgn(v16, v15, v2);
          GreSetRectRgn(ghrgnInv2, v13, v12, v14, HIDWORD(v21));
          GreSetRectRgn(ghrgnGDC, (unsigned int)v22, DWORD1(v22), DWORD2(v22), HIDWORD(v22));
          GreCombineRgn(ghrgnInv2, ghrgnInv2, ghrgnGDC, 4LL);
          GreCombineRgn(*((_QWORD *)a1 + 15), *((_QWORD *)a1 + 15), ghrgnInv2, 2LL);
        }
        else
        {
          v18 = v11 - v23;
          if ( (_QWORD)v11 == v23 )
            v18 = *((_QWORD *)&v11 + 1) - v24;
          if ( !v18 )
            return;
        }
      }
    }
  }
}
