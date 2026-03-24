/*
 * XREFs of BgpTxtCreateRegion @ 0x1409F30D4
 * Callers:
 *     ResFwConfigureDisplayStringResources @ 0x1409F16A8 (ResFwConfigureDisplayStringResources.c)
 *     AnFwConfigureProgressResources @ 0x1409F1744 (AnFwConfigureProgressResources.c)
 *     BgpDisplayCharacterGetContext @ 0x1409F4A4C (BgpDisplayCharacterGetContext.c)
 * Callees:
 *     BgpGetResolution @ 0x1402D3BC0 (BgpGetResolution.c)
 *     BgpFwFreeMemory @ 0x14039BD60 (BgpFwFreeMemory.c)
 *     BgpFwAllocateMemory @ 0x14039C584 (BgpFwAllocateMemory.c)
 *     BgpFoGetTextMetrics @ 0x14039C78C (BgpFoGetTextMetrics.c)
 *     BgpGxFillRectangle @ 0x14039C9C0 (BgpGxFillRectangle.c)
 *     memset @ 0x140414200 (memset.c)
 *     BgpGxRectangleDestroy @ 0x1409F2290 (BgpGxRectangleDestroy.c)
 *     BgpGxRectangleCreate @ 0x1409F32C0 (BgpGxRectangleCreate.c)
 *     BgpFoGetFontHandle @ 0x1409F334C (BgpFoGetFontHandle.c)
 */

__int64 __fastcall BgpTxtCreateRegion(_DWORD *a1, _DWORD *a2, _OWORD *a3, __int64 *a4, char a5)
{
  __int64 v7; // r15
  __int64 v8; // r14
  int FontHandle; // ebx
  void *Memory; // rax
  __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // r8
  _DWORD *v14; // r9
  _OWORD *v15; // rax
  unsigned int *v16; // r12
  int v17; // eax
  int v18; // eax
  bool v19; // zf
  int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // [rsp+20h] [rbp-40h] BYREF
  __int64 v24; // [rsp+28h] [rbp-38h] BYREF
  __int64 v25; // [rsp+30h] [rbp-30h]
  __int64 v26; // [rsp+38h] [rbp-28h]
  int v27[6]; // [rsp+48h] [rbp-18h] BYREF
  __int64 v28; // [rsp+A0h] [rbp+40h] BYREF
  _OWORD *v29; // [rsp+B0h] [rbp+50h]
  __int64 *v30; // [rsp+B8h] [rbp+58h]

  v30 = a4;
  v29 = a3;
  v25 = 0LL;
  v28 = 0LL;
  v7 = 0LL;
  *a4 = 0LL;
  v8 = 0LL;
  v23 = 0LL;
  FontHandle = 0;
  v24 = 0LL;
  if ( a1 )
  {
    if ( a2 )
    {
      v26 = *(_QWORD *)BgpGetResolution(v27);
      if ( *a1 <= (unsigned int)v26 && a1[1] <= HIDWORD(v26) )
      {
        Memory = (void *)BgpFwAllocateMemory(0x48uLL);
        v11 = (__int64)Memory;
        if ( !Memory )
        {
          FontHandle = -1073741801;
          goto LABEL_23;
        }
        memset(Memory, 0, 0x48uLL);
        v15 = v29;
        if ( v29 )
        {
          v16 = (unsigned int *)(v11 + 40);
          *(_OWORD *)(v11 + 40) = *v29;
          *(_QWORD *)(v11 + 56) = *((_QWORD *)v15 + 2);
        }
        else
        {
          FontHandle = BgpFoGetFontHandle(0LL);
          if ( FontHandle < 0 )
            goto LABEL_34;
          *(_DWORD *)(v11 + 44) = -1;
          v16 = (unsigned int *)(v11 + 40);
          *(_DWORD *)(v11 + 40) = 0;
          v22 = v25;
          *(_DWORD *)(v11 + 60) = 0;
          *(_QWORD *)(v11 + 48) = v22;
          *(_DWORD *)(v11 + 56) = 18;
        }
        if ( (a5 & 1) != 0 )
          goto LABEL_14;
        FontHandle = BgpFoGetTextMetrics((__int64)v16, (__int64)&v28);
        if ( FontHandle >= 0 )
        {
          if ( a2[1] < HIDWORD(v28) )
            a2[1] = HIDWORD(v28);
          if ( *a2 < (unsigned int)v28 )
            *a2 = v28;
LABEL_14:
          if ( *a2 + *a1 > (unsigned int)v26 || (unsigned int)(a1[1] + a2[1]) > HIDWORD(v26) )
          {
            FontHandle = -1073741811;
            goto LABEL_22;
          }
          if ( (a5 & 2) == 0 )
          {
            v21 = BgpGxRectangleCreate(a2, 32LL, &v23);
            v7 = v23;
            FontHandle = v21;
            if ( v21 < 0 )
              goto LABEL_30;
            BgpGxFillRectangle(v23, *v16);
          }
          if ( (a5 & 9) == 0 )
            goto LABEL_20;
          v17 = BgpGxRectangleCreate(a2, 32LL, &v24);
          v8 = v24;
          FontHandle = v17;
          if ( v17 >= 0 )
          {
            *(_QWORD *)(v11 + 32) = v24;
LABEL_20:
            *(_QWORD *)v11 = *(_QWORD *)a1;
            *(_QWORD *)(v11 + 8) = *(_QWORD *)a2;
            v18 = a2[2];
            *(_DWORD *)(v11 + 68) = 0;
            v19 = (a5 & 4) == 0;
            *(_DWORD *)(v11 + 16) = v18;
            *(_QWORD *)(v11 + 24) = v7;
            *(_DWORD *)(v11 + 64) = 1;
            if ( !v19 )
              *(_DWORD *)(v11 + 64) = 5;
LABEL_22:
            if ( FontHandle >= 0 )
            {
LABEL_23:
              *v30 = v11;
              return (unsigned int)FontHandle;
            }
          }
LABEL_30:
          if ( v7 )
            BgpGxRectangleDestroy(v7, v12, v13, v14);
          if ( v8 )
            BgpGxRectangleDestroy(v8, v12, v13, v14);
        }
LABEL_34:
        BgpFwFreeMemory(v11, v12, v13, v14);
        goto LABEL_23;
      }
    }
  }
  return 3221225485LL;
}
