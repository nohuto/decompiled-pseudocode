/*
 * XREFs of GxpAdjustRectangleToFrameBuffer @ 0x14039C2A4
 * Callers:
 *     GxpWriteFrameBufferPixels @ 0x14039C078 (GxpWriteFrameBufferPixels.c)
 *     GxpReadFrameBufferPixels @ 0x1409F2A40 (GxpReadFrameBufferPixels.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GxpAdjustRectangleToFrameBuffer(
        unsigned int *a1,
        unsigned int *a2,
        __int64 a3,
        unsigned int *a4,
        _QWORD *a5,
        char a6)
{
  __int64 v6; // rax
  unsigned int v8; // r12d
  unsigned int v10; // r14d
  unsigned int v11; // r11d
  int v12; // ecx
  unsigned int v13; // ebx
  unsigned __int64 v14; // xmm0_8
  unsigned int v15; // esi
  unsigned int v16; // r8d
  unsigned int v17; // ecx
  unsigned int v18; // r9d
  unsigned int v19; // r15d
  unsigned int v20; // edx
  __int64 v22; // [rsp+0h] [rbp-28h]
  unsigned __int64 v23; // [rsp+8h] [rbp-20h]
  int v25; // [rsp+78h] [rbp+50h]
  __int64 v26; // [rsp+80h] [rbp+58h]

  v6 = *(_QWORD *)a2;
  v8 = *a1;
  v10 = a1[1];
  v11 = *a1;
  v12 = *(_DWORD *)(a3 + 8);
  v13 = v10;
  v14 = *(_QWORD *)a3;
  v15 = *(_DWORD *)a3;
  v16 = *(_QWORD *)a2;
  v25 = v12;
  v17 = 0;
  v22 = *(_QWORD *)a2;
  v26 = *(_QWORD *)a2;
  v23 = v14;
  if ( v15 < v16 )
    return (unsigned int)-1073741811;
  v18 = *(_DWORD *)(a3 + 4);
  if ( v18 < HIDWORD(v6) )
    return (unsigned int)-1073741811;
  v19 = v14;
  if ( v10 > (unsigned int)v14 - v16 )
  {
    if ( !a6 )
      return (unsigned int)-1073741811;
    v13 = v14 - v16;
  }
  if ( v8 > HIDWORD(v14) - HIDWORD(v6) )
  {
    if ( a6 )
    {
      v11 = HIDWORD(v14) - HIDWORD(v6);
      goto LABEL_5;
    }
    return (unsigned int)-1073741811;
  }
LABEL_5:
  if ( (unsigned __int8)(BYTE2(BgInternal) - 2) <= 1u && (_BYTE)BgInternal )
  {
    if ( v13 < v10 && BYTE2(BgInternal) == 2 )
    {
      v16 = 0;
      LODWORD(v26) = 0;
    }
    else
    {
      v16 = v15 - v13 - v16;
      LODWORD(v26) = v16;
    }
    if ( v11 < v8 && BYTE2(BgInternal) == 2 )
    {
      v20 = 0;
      HIDWORD(v26) = 0;
      goto LABEL_8;
    }
    v20 = v18 - v11 - HIDWORD(v26);
    HIDWORD(v26) = v20;
  }
  else
  {
    v20 = HIDWORD(*(_QWORD *)a2);
  }
  if ( ((BYTE2(BgInternal) - 1) & 0xFD) == 0 && (_BYTE)BgInternal )
  {
    v19 = *(_DWORD *)(a3 + 4);
    v23 = __PAIR64__(v15, v19);
    if ( BYTE2(BgInternal) == 1 )
    {
      if ( v13 >= v10 )
      {
        v20 = v15 - *a2 - v13;
        HIDWORD(v26) = v20;
      }
      else
      {
        v20 = 0;
        HIDWORD(v26) = 0;
      }
      v16 = a2[1];
      LODWORD(v26) = v16;
    }
    else
    {
      if ( v11 >= v8 )
      {
        v16 = v18 - a2[1] - v11;
        LODWORD(v26) = v16;
      }
      else
      {
        v16 = 0;
        LODWORD(v26) = 0;
      }
      v20 = *a2;
      HIDWORD(v26) = *a2;
    }
  }
LABEL_8:
  if ( v19 < v16 || HIDWORD(v23) < v20 )
    return (unsigned int)-1073741811;
  if ( a4 )
  {
    a4[1] = v8;
    *a4 = v10;
  }
  if ( a5 )
    *a5 = v22;
  *(_QWORD *)a3 = v23;
  *(_DWORD *)(a3 + 8) = v25;
  *(_QWORD *)a2 = v26;
  *a1 = v11;
  a1[1] = v13;
  return v17;
}
