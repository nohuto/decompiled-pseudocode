/*
 * XREFs of BgpTxtCreateRegion @ 0x1409F40D4
 * Callers:
 *     ResFwConfigureDisplayStringResources @ 0x1409F26A8 (ResFwConfigureDisplayStringResources.c)
 *     AnFwConfigureProgressResources @ 0x1409F2744 (AnFwConfigureProgressResources.c)
 *     BgpDisplayCharacterGetContext @ 0x1409F5A4C (BgpDisplayCharacterGetContext.c)
 * Callees:
 *     BgpGetResolution @ 0x140251E30 (BgpGetResolution.c)
 *     BgpFwFreeMemory @ 0x14039BEB0 (BgpFwFreeMemory.c)
 *     BgpFwAllocateMemory @ 0x14039C6D4 (BgpFwAllocateMemory.c)
 *     BgpFoGetTextMetrics @ 0x14039C8DC (BgpFoGetTextMetrics.c)
 *     BgpGxFillRectangle @ 0x14039CB10 (BgpGxFillRectangle.c)
 *     memset @ 0x140414300 (memset.c)
 *     BgpGxRectangleDestroy @ 0x1409F3290 (BgpGxRectangleDestroy.c)
 *     BgpGxRectangleCreate @ 0x1409F42C0 (BgpGxRectangleCreate.c)
 *     BgpFoGetFontHandle @ 0x1409F434C (BgpFoGetFontHandle.c)
 */

__int64 __fastcall BgpTxtCreateRegion(_DWORD *a1, _DWORD *a2, _OWORD *a3, __int64 *a4, char a5)
{
  __int64 v7; // r15
  __int64 v8; // r14
  int FontHandle; // ebx
  void *Memory; // rax
  __int64 v11; // rdi
  _OWORD *v12; // rax
  unsigned int *v13; // r12
  int v14; // eax
  int v15; // eax
  bool v16; // zf
  int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // [rsp+20h] [rbp-40h] BYREF
  __int64 v21; // [rsp+28h] [rbp-38h] BYREF
  __int64 v22; // [rsp+30h] [rbp-30h]
  __int64 v23; // [rsp+38h] [rbp-28h]
  int v24[6]; // [rsp+48h] [rbp-18h] BYREF
  __int64 v25; // [rsp+A0h] [rbp+40h] BYREF
  _OWORD *v26; // [rsp+B0h] [rbp+50h]
  __int64 *v27; // [rsp+B8h] [rbp+58h]

  v27 = a4;
  v26 = a3;
  v22 = 0LL;
  v25 = 0LL;
  v7 = 0LL;
  *a4 = 0LL;
  v8 = 0LL;
  v20 = 0LL;
  FontHandle = 0;
  v21 = 0LL;
  if ( a1 )
  {
    if ( a2 )
    {
      v23 = *(_QWORD *)BgpGetResolution(v24);
      if ( *a1 <= (unsigned int)v23 && a1[1] <= HIDWORD(v23) )
      {
        Memory = (void *)BgpFwAllocateMemory(0x48uLL);
        v11 = (__int64)Memory;
        if ( !Memory )
        {
          FontHandle = -1073741801;
          goto LABEL_23;
        }
        memset(Memory, 0, 0x48uLL);
        v12 = v26;
        if ( v26 )
        {
          v13 = (unsigned int *)(v11 + 40);
          *(_OWORD *)(v11 + 40) = *v26;
          *(_QWORD *)(v11 + 56) = *((_QWORD *)v12 + 2);
        }
        else
        {
          FontHandle = BgpFoGetFontHandle(0LL);
          if ( FontHandle < 0 )
            goto LABEL_34;
          *(_DWORD *)(v11 + 44) = -1;
          v13 = (unsigned int *)(v11 + 40);
          *(_DWORD *)(v11 + 40) = 0;
          v19 = v22;
          *(_DWORD *)(v11 + 60) = 0;
          *(_QWORD *)(v11 + 48) = v19;
          *(_DWORD *)(v11 + 56) = 18;
        }
        if ( (a5 & 1) != 0 )
          goto LABEL_14;
        FontHandle = BgpFoGetTextMetrics((__int64)v13, (__int64)&v25);
        if ( FontHandle >= 0 )
        {
          if ( a2[1] < HIDWORD(v25) )
            a2[1] = HIDWORD(v25);
          if ( *a2 < (unsigned int)v25 )
            *a2 = v25;
LABEL_14:
          if ( *a2 + *a1 > (unsigned int)v23 || (unsigned int)(a1[1] + a2[1]) > HIDWORD(v23) )
          {
            FontHandle = -1073741811;
            goto LABEL_22;
          }
          if ( (a5 & 2) == 0 )
          {
            v18 = BgpGxRectangleCreate(a2, 32LL, &v20);
            v7 = v20;
            FontHandle = v18;
            if ( v18 < 0 )
              goto LABEL_30;
            BgpGxFillRectangle(v20, *v13);
          }
          if ( (a5 & 9) == 0 )
            goto LABEL_20;
          v14 = BgpGxRectangleCreate(a2, 32LL, &v21);
          v8 = v21;
          FontHandle = v14;
          if ( v14 >= 0 )
          {
            *(_QWORD *)(v11 + 32) = v21;
LABEL_20:
            *(_QWORD *)v11 = *(_QWORD *)a1;
            *(_QWORD *)(v11 + 8) = *(_QWORD *)a2;
            v15 = a2[2];
            *(_DWORD *)(v11 + 68) = 0;
            v16 = (a5 & 4) == 0;
            *(_DWORD *)(v11 + 16) = v15;
            *(_QWORD *)(v11 + 24) = v7;
            *(_DWORD *)(v11 + 64) = 1;
            if ( !v16 )
              *(_DWORD *)(v11 + 64) = 5;
LABEL_22:
            if ( FontHandle >= 0 )
            {
LABEL_23:
              *v27 = v11;
              return (unsigned int)FontHandle;
            }
          }
LABEL_30:
          if ( v7 )
            BgpGxRectangleDestroy(v7);
          if ( v8 )
            BgpGxRectangleDestroy(v8);
        }
LABEL_34:
        BgpFwFreeMemory(v11);
        goto LABEL_23;
      }
    }
  }
  return 3221225485LL;
}
