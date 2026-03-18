/*
 * XREFs of ?_HitTestEdgyRegion@Edgy@@YG?AUtagHIT_TEST_RESULT@1@ABUtagEDGY_DATA@@PAXUtagPOINT@@W4tagPOINTER_DEVICE_TYPE@@H@Z @ 0x16E9D7
 * Callers:
 *     ?_GetArcData@Edgy@@YG?AUtagARC_DATA@1@AAUtagEDGY_DATA@@QAX@Z @ 0x16E34D (-_GetArcData@Edgy@@YG-AUtagARC_DATA@1@AAUtagEDGY_DATA@@QAX@Z.c)
 *     ?_StoreLastUpDataAndPost@Edgy@@YGXAAUtagEDGY_DATA@@QAX@Z @ 0x16EFD9 (-_StoreLastUpDataAndPost@Edgy@@YGXAAUtagEDGY_DATA@@QAX@Z.c)
 * Callees:
 *     _PtInRect@12 @ 0x26C50 (_PtInRect@12.c)
 *     __GetPointerDeviceRects@12 @ 0xCB44C (__GetPointerDeviceRects@12.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?_GetParamSetForDeviceAndLocation@Edgy@@YGPBUtagEDGY_PARAMS@@ABUtagEDGY_DATA@@W4tagPOINTER_DEVICE_TYPE@@HW4tagEDGY_LOCATION@@@Z @ 0x16E8BE (-_GetParamSetForDeviceAndLocation@Edgy@@YGPBUtagEDGY_PARAMS@@ABUtagEDGY_DATA@@W4tagPOINTER_DEVIC.c)
 *     ?_GetRectForLocation@Edgy@@YG?AUtagRECT@@ABU2@W4tagEDGY_LOCATION@@K@Z @ 0x16E905 (-_GetRectForLocation@Edgy@@YG-AUtagRECT@@ABU2@W4tagEDGY_LOCATION@@K@Z.c)
 */

_DWORD *__fastcall Edgy::_HitTestEdgyRegion(_DWORD *a1, int a2, _DWORD *a3, int a4, int a5, int a6, int a7)
{
  int v8; // edi
  _DWORD *v9; // esi
  unsigned int v10; // eax
  unsigned int v11; // ecx
  int v12; // edi
  int *ParamSetForDeviceAndLocation; // eax
  _DWORD *RectForLocation; // eax
  int *v15; // eax
  int v16; // ecx
  int v18[4]; // [esp+10h] [ebp-54h] BYREF
  _DWORD v19[4]; // [esp+20h] [ebp-44h] BYREF
  int v20; // [esp+30h] [ebp-34h]
  int *v21; // [esp+34h] [ebp-30h]
  _DWORD *v22; // [esp+38h] [ebp-2Ch]
  _DWORD *v23; // [esp+3Ch] [ebp-28h]
  unsigned int v24; // [esp+40h] [ebp-24h]
  int v25; // [esp+44h] [ebp-20h]
  unsigned int v26; // [esp+48h] [ebp-1Ch]
  _DWORD v27[4]; // [esp+4Ch] [ebp-18h] BYREF

  v25 = a2;
  v27[0] = 0;
  v24 = 0;
  *a3 = 0;
  v27[1] = 0;
  a3[1] = 0;
  a3[2] = 0;
  v27[2] = 0;
  v22 = a1;
  v27[3] = 0;
  v8 = v25;
  if ( _GetPointerDeviceRects(v25, v27, 0) )
  {
    v26 = *a1;
    if ( v26 )
    {
      v9 = (_DWORD *)a1[2];
      v10 = 0;
      v11 = v26;
      v23 = v9;
      do
      {
        if ( *v9 == v8 )
        {
          v20 = v9[2];
          v12 = v20;
          ParamSetForDeviceAndLocation = (int *)Edgy::_GetParamSetForDeviceAndLocation((int)v22, a4, a5, v20);
          v21 = ParamSetForDeviceAndLocation;
          if ( ParamSetForDeviceAndLocation )
          {
            RectForLocation = Edgy::_GetRectForLocation(v27, v12, v18, *ParamSetForDeviceAndLocation);
            v19[0] = *RectForLocation;
            v19[1] = RectForLocation[1];
            v19[2] = RectForLocation[2];
            v19[3] = RectForLocation[3];
            if ( PtInRect(v19, a6, a7) )
            {
              v15 = v21;
              *a3 = v23;
              v16 = v20;
              a3[1] = v15;
              a3[2] = v16;
              return a3;
            }
            v9 = v23;
          }
          v8 = v25;
          v11 = v26;
          v10 = v24;
        }
        ++v10;
        v9 += 4;
        v24 = v10;
        v23 = v9;
      }
      while ( v10 < v11 );
    }
  }
  return a3;
}
