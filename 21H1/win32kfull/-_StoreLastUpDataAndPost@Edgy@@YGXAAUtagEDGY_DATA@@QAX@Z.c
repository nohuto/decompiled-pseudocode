/*
 * XREFs of ?_StoreLastUpDataAndPost@Edgy@@YGXAAUtagEDGY_DATA@@QAX@Z @ 0x16EFD9
 * Callers:
 *     ?_OnEnterIdle@Edgy@@YGXAAUtagEDGY_DATA@@ABUtagARC_DATA@1@@Z @ 0x16ECEB (-_OnEnterIdle@Edgy@@YGXAAUtagEDGY_DATA@@ABUtagARC_DATA@1@@Z.c)
 * Callees:
 *     __GetPointerDeviceType@4 @ 0x159BF4 (__GetPointerDeviceType@4.c)
 *     ?_HitTestEdgyRegion@Edgy@@YG?AUtagHIT_TEST_RESULT@1@ABUtagEDGY_DATA@@PAXUtagPOINT@@W4tagPOINTER_DEVICE_TYPE@@H@Z @ 0x16E9D7 (-_HitTestEdgyRegion@Edgy@@YG-AUtagHIT_TEST_RESULT@1@ABUtagEDGY_DATA@@PAXUtagPOINT@@W4tagPOINTER_.c)
 *     ?_IsLegacyDevice@Edgy@@YGHPAX@Z @ 0x16EC06 (-_IsLegacyDevice@Edgy@@YGHPAX@Z.c)
 *     ?_PostEdgyInertia@Edgy@@YGXPAUHWND__@@W4tagEDGY_LOCATION@@K@Z @ 0x16EE40 (-_PostEdgyInertia@Edgy@@YGXPAUHWND__@@W4tagEDGY_LOCATION@@K@Z.c)
 */

void __fastcall Edgy::_StoreLastUpDataAndPost(_DWORD *a1, int a2)
{
  _DWORD *v2; // esi
  unsigned int v3; // eax
  const struct tagPOINTER_INFO *PointerInfo; // eax
  const struct tagPOINTER_INFO *v5; // ebx
  BOOL IsLegacyDevice; // edi
  int PointerDeviceType; // eax
  int *v8; // eax
  int v9; // esi
  _DWORD *v10; // ecx
  _DWORD v11[5]; // [esp+10h] [ebp-30h] BYREF
  int v12; // [esp+24h] [ebp-1Ch]
  int v13; // [esp+28h] [ebp-18h]
  int v14; // [esp+2Ch] [ebp-14h]
  int v15; // [esp+30h] [ebp-10h]
  unsigned int v16; // [esp+34h] [ebp-Ch]
  _DWORD *v17; // [esp+38h] [ebp-8h]
  unsigned int v18; // [esp+3Ch] [ebp-4h]

  v2 = a1;
  v15 = a2;
  v17 = a1;
  if ( a1[3] != 2 )
  {
    v3 = 0;
    v16 = *(_DWORD *)(a2 + 28);
    v18 = 0;
    if ( v16 )
    {
      while ( 1 )
      {
        PointerInfo = CTouchProcessor::GetPointerInfo(_gpTouchProcessor, (const struct CPointerInputFrame *)a2, v3);
        v5 = PointerInfo;
        if ( PointerInfo )
        {
          if ( (*((_DWORD *)PointerInfo + 3) & 0x40000) != 0 )
          {
            IsLegacyDevice = Edgy::_IsLegacyDevice(*((void **)PointerInfo + 4));
            if ( !IsLegacyDevice || *(_DWORD *)v5 == 3 )
            {
              PointerDeviceType = _GetPointerDeviceType(*((void **)v5 + 4));
              v8 = Edgy::_HitTestEdgyRegion(
                     v2,
                     *((_DWORD *)v5 + 4),
                     v11,
                     PointerDeviceType,
                     IsLegacyDevice,
                     *((_DWORD *)v5 + 8),
                     *((_DWORD *)v5 + 9));
              v12 = *v8;
              v13 = v8[1];
              v14 = v8[2];
              v9 = v12;
              if ( v12 )
              {
                v10 = v17;
                v17[52] = *((_DWORD *)v5 + 4);
                v10[53] = *((_DWORD *)v5 + 14);
                v10[55] = *((_DWORD *)v5 + 8);
                v10[56] = *((_DWORD *)v5 + 9);
                if ( v14 == 1 )
                  Edgy::_PostEdgyInertia(*(_DWORD *)(v9 + 4), 1u, v10[54]);
                return;
              }
              v2 = v17;
            }
          }
        }
        v3 = v18 + 1;
        v18 = v3;
        if ( v3 >= v16 )
          return;
        a2 = v15;
      }
    }
  }
}
