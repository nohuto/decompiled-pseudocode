/*
 * XREFs of ?GetMouseCoordinateRelative@CMouseProcessor@@AEAAXJJPEAUtagPOINT@@PEAU_SUBPIXELS@@_K2W4GetMouseCoordinateOptions@@@Z @ 0x1C000FFD4
 * Callers:
 *     ?GetMouseCoord@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEAUtagPOINT@@PEAU_SUBPIXELS@@@Z @ 0x1C00100E4 (-GetMouseCoord@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEAUtagPOINT@@PEAU_SUBPIXELS@@@Z.c)
 * Callees:
 *     ?GetUnionRect@Mouse@InputConfig@@SA?AUtagRECT@@XZ @ 0x1C0010360 (-GetUnionRect@Mouse@InputConfig@@SA-AUtagRECT@@XZ.c)
 *     ?ApplyAccelerationToDelta@CMouseProcessor@@AEAAXJJUtagPOINT@@_NPEAU_SUBPIXELS@@PEAJ3@Z @ 0x1C00103B8 (-ApplyAccelerationToDelta@CMouseProcessor@@AEAAXJJUtagPOINT@@_NPEAU_SUBPIXELS@@PEAJ3@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CMouseProcessor::GetMouseCoordinateRelative(
        CMouseProcessor *a1,
        int a2,
        int a3,
        struct tagPOINT *a4,
        struct _SUBPIXELS *a5,
        int a6,
        __int64 a7,
        char a8)
{
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 result; // rax
  __m128i *UnionRect; // rax
  char v15; // r10
  __int64 v16; // r9
  __m128i v17; // xmm0
  unsigned __int64 v18; // rdx
  struct tagRECT v19; // [rsp+40h] [rbp-10h] BYREF
  unsigned int v20; // [rsp+78h] [rbp+28h] BYREF
  unsigned int v21; // [rsp+80h] [rbp+30h] BYREF

  v21 = a3;
  v20 = a2;
  CMouseProcessor::ApplyAccelerationToDelta(a1, a2, a3, *a4, (a8 & 2) != 0, a5, (int *)&v20, (int *)&v21);
  switch ( *((_DWORD *)a1 + 698) )
  {
    case 1:
      goto LABEL_2;
    case 2:
      a4->x -= v21;
      result = v20;
      goto LABEL_3;
    case 3:
      a4->x -= v20;
      result = v21;
      break;
    case 4:
      a4->x += v21;
      result = v20;
      break;
    default:
      MicrosoftTelemetryAssertTriggeredNoArgsKM((unsigned int)(*((_DWORD *)a1 + 698) - 3), v10, v11, v12);
LABEL_2:
      a4->x += v20;
      result = v21;
LABEL_3:
      a4->y += result;
      goto LABEL_4;
  }
  a4->y -= result;
LABEL_4:
  if ( (a8 & 4) == 0 )
  {
    UnionRect = (__m128i *)InputConfig::Mouse::GetUnionRect(&v19);
    v15 = gptInd;
    v16 = 3LL * (unsigned int)gptInd;
    v17 = _mm_srli_si128(*UnionRect, 8);
    v18 = HIDWORD(UnionRect->m128i_i64[0]);
    *((_DWORD *)&gaptMouse + 2 * v16) = LOWORD(a4->x) | ((unsigned __int16)(v17.m128i_i16[0]
                                                                          - UnionRect->m128i_i64[0]
                                                                          - 1) << 16);
    LODWORD(UnionRect) = a6;
    *((_DWORD *)&gaptMouse + 2 * v16 + 1) = LOWORD(a4->y) | ((v17.m128i_i32[1] - (_DWORD)v18 - 1) << 16);
    *((_DWORD *)&gaptMouse + 2 * v16 + 2) = (_DWORD)UnionRect;
    *((_QWORD *)&gaptMouse + v16 + 2) = a7;
    result = (v15 + 1) & 0x3F;
    gptInd = (v15 + 1) & 0x3F;
  }
  return result;
}
