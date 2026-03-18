/*
 * XREFs of ?PopulatePayloadV1@SuperWetInk@Protocols@@YGJW4INK_FEEDBACK_COMMAND@@PBXIMPAUPayloadV1@12@@Z @ 0x1B0B80
 * Callers:
 *     ?CreateAndSendSuperWetInkPayloadForCommand@InkDevice@@EAEJW4INK_FEEDBACK_COMMAND@@PBXIM@Z @ 0x1B034C (-CreateAndSendSuperWetInkPayloadForCommand@InkDevice@@EAEJW4INK_FEEDBACK_COMMAND@@PBXIM@Z.c)
 * Callees:
 *     _memset @ 0xF92A7 (_memset.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByVal@$03@@@Z @ 0x14061B (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IP.c)
 *     ?PenNibShapeFromInkFeedbackPenNibShape@SuperWetInk@Protocols@@YGJW4INK_FEEDBACK_PEN_NIB_SHAPE@@PAW4PenNibShape@12@@Z @ 0x1B0B37 (-PenNibShapeFromInkFeedbackPenNibShape@SuperWetInk@Protocols@@YGJW4INK_FEEDBACK_PEN_NIB_SHAPE@@P.c)
 *     ?PenTypeFromInkFeedbackPenType@SuperWetInk@Protocols@@YGJW4INK_FEEDBACK_PEN_TYPE@@PAW4PenType@12@@Z @ 0x1B0B55 (-PenTypeFromInkFeedbackPenType@SuperWetInk@Protocols@@YGJW4INK_FEEDBACK_PEN_TYPE@@PAW4PenType@12.c)
 */

int __fastcall Protocols::SuperWetInk::PopulatePayloadV1(int a1, int a2, int a3, float a4, int a5)
{
  int v5; // ebx
  int v6; // eax
  int v7; // ecx
  int v8; // esi
  int v9; // eax
  int v10; // edi
  int v11; // eax
  char v12; // al
  int v13; // eax
  _BYTE v15[72]; // [esp+10h] [ebp-54h] BYREF
  int v16; // [esp+58h] [ebp-Ch]
  int v17; // [esp+5Ch] [ebp-8h]

  v5 = 0;
  v16 = a2;
  v17 = a1;
  memset(v15, 0, sizeof(v15));
  v6 = v17;
  qmemcpy((void *)a5, v15, 0x48u);
  v7 = 0;
  v8 = a5;
  *(_BYTE *)a5 = 1;
  v9 = v6 - 1;
  if ( v9 )
  {
    if ( v9 == 1 )
    {
      if ( a3 == 4 )
      {
        *(_BYTE *)(v8 + 1) = 2;
      }
      else
      {
        v5 = -1073741811;
        if ( (unsigned int)CallbackContext > 2 )
          goto LABEL_11;
      }
    }
    else
    {
      v5 = -1073741811;
      if ( (unsigned int)CallbackContext > 2 )
        goto LABEL_11;
    }
  }
  else if ( a3 == 64 )
  {
    v10 = v16;
    a5 = 0;
    *(_BYTE *)(v8 + 1) = 1;
    v11 = Protocols::SuperWetInk::PenTypeFromInkFeedbackPenType(*(_DWORD *)(v10 + 4), &a5);
    v5 = v11;
    if ( v11 < 0 )
    {
      if ( (unsigned int)CallbackContext <= 2 )
        return v5;
      a5 = v11;
      goto LABEL_12;
    }
    v12 = a5;
    a5 = 0;
    *(_BYTE *)(v8 + 12) = v12;
    *(_BYTE *)(v8 + 13) = *(_BYTE *)(v10 + 8);
    *(_BYTE *)(v8 + 14) = *(_BYTE *)(v10 + 9);
    *(_BYTE *)(v8 + 15) = *(_BYTE *)(v10 + 10);
    *(_BYTE *)(v8 + 16) = *(_BYTE *)(v10 + 11);
    *(float *)(v8 + 17) = *(float *)(v10 + 12) * a4;
    v13 = Protocols::SuperWetInk::PenNibShapeFromInkFeedbackPenNibShape(*(_DWORD *)(v10 + 16), &a5);
    v5 = v13;
    if ( v13 >= 0 )
    {
      *(_BYTE *)(v8 + 21) = a5;
      *(float *)(v8 + 22) = *(float *)(v10 + 20);
      *(float *)(v8 + 26) = *(float *)(v10 + 24);
      *(float *)(v8 + 30) = *(float *)(v10 + 28);
      *(float *)(v8 + 34) = *(float *)(v10 + 32);
      *(float *)(v8 + 38) = *(float *)(v10 + 36);
      *(float *)(v8 + 42) = *(float *)(v10 + 40);
      *(_BYTE *)(v8 + 62) = *(_DWORD *)(v10 + 60) & 1;
      *(_BYTE *)(v8 + 63) = (*(_DWORD *)(v10 + 60) & 4u) >> 2;
      return v5;
    }
    if ( (unsigned int)CallbackContext > 2 )
    {
      a5 = v13;
      goto LABEL_12;
    }
  }
  else
  {
    v5 = -1073741811;
    if ( (unsigned int)CallbackContext > 2 )
    {
LABEL_11:
      a5 = -1073741811;
LABEL_12:
      _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
        (int)&CallbackContext,
        byte_2558E4,
        v7,
        v7,
        (int)&a5);
    }
  }
  return v5;
}
