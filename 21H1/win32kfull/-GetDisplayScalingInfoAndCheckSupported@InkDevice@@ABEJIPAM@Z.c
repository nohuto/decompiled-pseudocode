/*
 * XREFs of ?GetDisplayScalingInfoAndCheckSupported@InkDevice@@ABEJIPAM@Z @ 0x1B0714
 * Callers:
 *     ?DoSuperWetInkStart@InkDevice@@AAEJPBUIFC_SUPERWET_INK_START_DATA@@@Z @ 0x1B04AA (-DoSuperWetInkStart@InkDevice@@AAEJPBUIFC_SUPERWET_INK_START_DATA@@@Z.c)
 * Callees:
 *     @HMValidateHandleNoSecure@8 @ 0x3C46E (@HMValidateHandleNoSecure@8.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByVal@$03@@@Z @ 0x14061B (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IP.c)
 *     ?GetPointerInfoByPointerId@Pointer@@YGJIPAPBUtagPOINTER_INFO@@@Z @ 0x1A15D9 (-GetPointerInfoByPointerId@Pointer@@YGJIPAPBUtagPOINTER_INFO@@@Z.c)
 */

int __thiscall InkDevice::GetDisplayScalingInfoAndCheckSupported(InkDevice *this, unsigned int a2, float *a3)
{
  float *v3; // ebx
  __int16 v5; // cx
  int PointerInfoByPointerId; // eax
  _DWORD *v7; // ecx
  int v8; // esi
  int *v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  unsigned int v13; // edx
  int v14; // eax
  double v15; // st7
  float v17; // [esp+Ch] [ebp-14h]
  float v18; // [esp+Ch] [ebp-14h]
  int v19; // [esp+10h] [ebp-10h] BYREF
  int v20; // [esp+14h] [ebp-Ch] BYREF
  int v21; // [esp+18h] [ebp-8h] BYREF
  int v22; // [esp+1Ch] [ebp-4h] BYREF

  v3 = a3;
  a3 = 0;
  v5 = a2;
  *v3 = 1.0;
  PointerInfoByPointerId = Pointer::GetPointerInfoByPointerId(v5, &a3);
  v8 = PointerInfoByPointerId;
  if ( PointerInfoByPointerId >= 0 )
  {
    v10 = HMValidateHandleNoSecure(*((_DWORD *)a3 + 4), 19);
    if ( !v10 )
    {
      v8 = -1073741823;
      if ( (unsigned int)CallbackContext <= 2 )
        return v8;
      v22 = -1073741823;
      v9 = &v22;
      goto LABEL_4;
    }
    v11 = *(_DWORD *)(v10 + 284);
    v7 = *(_DWORD **)(v11 + 8);
    if ( v7[447] != 1 )
    {
      v8 = -1073741637;
      if ( (unsigned int)CallbackContext <= 2 )
        return v8;
      v21 = -1073741637;
      v9 = &v21;
      goto LABEL_4;
    }
    v12 = *(_DWORD *)(v11 + 212);
    if ( v12 == 1 || v12 == 3 )
    {
      v13 = v7[451];
      v14 = v7[452];
    }
    else
    {
      v13 = v7[452];
      v14 = v7[451];
    }
    if ( *((_DWORD *)this + 19) != v13 )
    {
      v8 = -1073741637;
      if ( (unsigned int)CallbackContext <= 2 )
        return v8;
      v20 = -1073741637;
      v9 = &v20;
      goto LABEL_4;
    }
    if ( *((_DWORD *)this + 20) == v14 )
    {
      v17 = (float)(v7[457] - v7[455]);
      v15 = v17;
      v18 = (float)v13;
      *v3 = v15 / v18;
      return v8;
    }
    v8 = -1073741637;
    if ( (unsigned int)CallbackContext > 2 )
    {
      v19 = -1073741637;
      v9 = &v19;
      goto LABEL_4;
    }
  }
  else if ( (unsigned int)CallbackContext > 2 )
  {
    a2 = PointerInfoByPointerId;
    v9 = (int *)&a2;
LABEL_4:
    _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
      (int)&CallbackContext,
      byte_2558E4,
      (int)v7,
      (int)v7,
      (int)v9);
  }
  return v8;
}
