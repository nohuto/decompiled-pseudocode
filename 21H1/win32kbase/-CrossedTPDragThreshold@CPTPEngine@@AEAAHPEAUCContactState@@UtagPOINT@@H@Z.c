/*
 * XREFs of ?CrossedTPDragThreshold@CPTPEngine@@AEAAHPEAUCContactState@@UtagPOINT@@H@Z @ 0x1C01C5FF4
 * Callers:
 *     ?UpdateTPStateIndicator@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUCContactState@@PEAUPTPEnginePointerNode@@PEAH@Z @ 0x1C01CB9A4 (-UpdateTPStateIndicator@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUCContactState@@PEAUPTPEnginePointerNo.c)
 * Callees:
 *     PtInRect @ 0x1C00A649C (PtInRect.c)
 */

__int64 __fastcall CPTPEngine::CrossedTPDragThreshold(
        CPTPEngine *this,
        struct CContactState *a2,
        struct tagPOINT a3,
        int a4)
{
  int v4; // edi
  int v7; // eax
  unsigned int v8; // r11d
  _DWORD *v9; // rdx
  unsigned int v10; // eax
  __int64 v11; // r9
  bool v12; // r9
  int v13; // edx
  __int64 v14; // rax
  unsigned int v15; // r10d
  unsigned int v16; // edx
  int v17; // r9d
  __int64 v18; // rax

  v4 = *((_DWORD *)this + 55);
  if ( (v4 & 0x10) == 0
    || (*((_DWORD *)this + 959) & 1) != 0
    || (v7 = *((_DWORD *)this + 958), (v7 & 0x2000) != 0)
    || (v7 & 0x1000000) != 0 )
  {
    v8 = 0;
    v12 = 0;
  }
  else
  {
    v8 = 0;
    v9 = (_DWORD *)((char *)this + 1160);
    v10 = 0;
    v11 = 6LL;
    do
    {
      if ( (*v9 & 1) != 0 && (*v9 & 0x800000) == 0 )
        ++v10;
      v9 += 98;
      --v11;
    }
    while ( v11 );
    v12 = v10 <= 1;
  }
  if ( *((_DWORD *)this + 886) && *((_QWORD *)a2 + 8) > *((_QWORD *)this + 456) )
    goto LABEL_21;
  v13 = *(_DWORD *)a2;
  if ( (*(_DWORD *)a2 & 0x200000) == 0 )
    goto LABEL_24;
  if ( (v4 & 0x40) != 0 && (int)HIDWORD(*((_QWORD *)a2 + 1)) >= *((_DWORD *)this + 943) && (v13 & 0x100000) != 0 )
  {
    v14 = 276LL;
    v15 = *((_DWORD *)this + 61) * *((_DWORD *)this + 61);
    v16 = *((_DWORD *)this + 63) * *((_DWORD *)this + 63);
    v17 = *((_DWORD *)this + 64) * *((_DWORD *)this + 64);
    goto LABEL_26;
  }
  if ( !v12 )
    goto LABEL_24;
  if ( (v13 & 0x40000) != 0 )
  {
LABEL_21:
    v14 = 244LL;
    v15 = *((_DWORD *)this + 56) * *((_DWORD *)this + 56);
    v16 = *((_DWORD *)this + 58) * *((_DWORD *)this + 58);
    v17 = *((_DWORD *)this + 59) * *((_DWORD *)this + 59);
    goto LABEL_26;
  }
  if ( (v13 & 0x80000) != 0 )
  {
    v14 = 260LL;
    v15 = *((_DWORD *)this + 95) * *((_DWORD *)this + 95);
    v16 = *((_DWORD *)this + 96) * *((_DWORD *)this + 96);
  }
  else
  {
LABEL_24:
    v16 = *((_DWORD *)this + 41);
    v14 = 228LL;
    v15 = *((_DWORD *)this + 40);
  }
  v17 = v16;
LABEL_26:
  if ( (v4 & 1) != 0 )
  {
    LOBYTE(v8) = !PtInRect((struct CContactState *)((char *)a2 + v14), *(_QWORD *)&a3);
  }
  else
  {
    if ( a4 )
      v18 = *((_QWORD *)a2 + 2);
    else
      v18 = *((_QWORD *)a2 + 1);
    if ( SHIDWORD(v18) < a3.y )
      v16 = v17;
    LOBYTE(v8) = v16 * (__int64)(((int)v18 - a3.x) * ((int)v18 - a3.x))
               + (unsigned __int64)v15 * (HIDWORD(v18) - a3.y) * (HIDWORD(v18) - a3.y) >= v16 * (unsigned __int64)v15;
  }
  return v8;
}
