/*
 * XREFs of ?CalculateDetectedInteractions@CInteractionProcessor@@QEAAJPEAUIInteractionContextWrapper@@PEAUInteractionAxisGroup@@PEAH12PEAV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@2@Z @ 0x180229E4C
 * Callers:
 *     ?CalculateDetectedInteractions@CInteraction@@UEAAJPEAUIInteractionContextWrapper@@PEAUInteractionAxisGroup@@PEAH12PEAV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@2@Z @ 0x1801C73C0 (-CalculateDetectedInteractions@CInteraction@@UEAAJPEAUIInteractionContextWrapper@@PEAUInteractio.c)
 *     ?CalculateDetectedInteractions@CInteractionRoot@@UEAAJPEAUIInteractionContextWrapper@@PEAUInteractionAxisGroup@@PEAH12PEAV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@2@Z @ 0x1802321E0 (-CalculateDetectedInteractions@CInteractionRoot@@UEAAJPEAUIInteractionContextWrapper@@PEAUIntera.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800466E8 (--2@YAPEAX_K@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@UDwmMousewheelInteractionConfigurationPrimitive@@$0A@@@QEAAJPEFBUDwmMousewheelInteractionConfigurationPrimitive@@I@Z @ 0x1800ABE94 (-AddMultipleAndSet@-$DynArray@UDwmMousewheelInteractionConfigurationPrimitive@@$0A@@@QEAAJPEFBUD.c)
 *     ?AddMultipleAndSet@?$DynArray@UDwmPenInteractionConfigurationPrimitive@@$0A@@@QEAAJPEFBUDwmPenInteractionConfigurationPrimitive@@I@Z @ 0x1800AC12C (-AddMultipleAndSet@-$DynArray@UDwmPenInteractionConfigurationPrimitive@@$0A@@@QEAAJPEFBUDwmPenIn.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800AC2C0 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     _anonymous_namespace_::GetTemporaryConfigWithMask @ 0x1800C5B64 (_anonymous_namespace_--GetTemporaryConfigWithMask.c)
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800E3ABC (memset_0.c)
 *     ??$CalculateDetectedInteractions@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@CInteractionProcessor@@QEAAJPEAV?$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@PEAUIInteractionContextWrapper@@PEAUInteractionAxisGroup@@PEAH23@Z @ 0x180227770 (--$CalculateDetectedInteractions@UDwmTouchInteractionConfigurationPrimitive@@U-$TMILFlagsEnum@W4.c)
 *     ??_GInteractionConfigurationGroup@@QEAAPEAXI@Z @ 0x180229CDC (--_GInteractionConfigurationGroup@@QEAAPEAXI@Z.c)
 *     ?AllowPenGestureDetection@CInteractionProcessor@@AEBA_NXZ @ 0x180229D98 (-AllowPenGestureDetection@CInteractionProcessor@@AEBA_NXZ.c)
 */

__int64 __fastcall CInteractionProcessor::CalculateDetectedInteractions(
        CInteractionProcessor *this,
        __int64 a2,
        __int64 a3,
        unsigned int *a4,
        __int64 a5,
        int *a6,
        __int64 a7,
        _DWORD *a8)
{
  int v12; // esi
  int v13; // eax
  int v14; // eax
  _DWORD *v15; // rax
  _DWORD *v16; // rdi
  __int64 v17; // rcx
  int v18; // ebx
  int v19; // eax
  int v20; // eax
  int v21; // eax
  unsigned int v22; // r9d
  int v23; // eax
  int v24; // r11d
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  unsigned int v28; // r9d
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  unsigned int v32; // r9d
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  unsigned int v36; // r8d
  int v37; // r9d
  int v38; // ebx
  int v39; // r9d
  __int64 v40; // rax
  __int64 v41; // r10
  unsigned int v42; // eax
  unsigned int v43; // edx
  int v44; // eax
  __int64 v45; // rcx
  _DWORD *v47; // [rsp+40h] [rbp-41h] BYREF
  int v48; // [rsp+48h] [rbp-39h] BYREF
  int v49; // [rsp+4Ch] [rbp-35h] BYREF
  __int64 v50; // [rsp+50h] [rbp-31h]
  _DWORD *v51; // [rsp+58h] [rbp-29h]
  int v52; // [rsp+60h] [rbp-21h] BYREF
  int v53; // [rsp+64h] [rbp-1Dh]
  int v54; // [rsp+68h] [rbp-19h]

  *a4 = 0;
  v50 = a7;
  v12 = 0;
  *a6 = 0;
  v51 = a8;
  *a8 = 0;
  v13 = *((_DWORD *)this + 197);
  if ( v13 == 2 )
  {
    v14 = CInteractionProcessor::CalculateDetectedInteractions<DwmTouchInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>(
            (__int64)this,
            (char *)this,
            a2,
            a3,
            a4,
            a5,
            a6);
  }
  else if ( v13 == 3 )
  {
    v14 = CInteractionProcessor::CalculateDetectedInteractions<DwmTouchInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>(
            (__int64)this,
            (char *)this + 160,
            a2,
            a3,
            a4,
            a5,
            a6);
  }
  else if ( v13 == 4 && CInteractionProcessor::AllowPenGestureDetection(this) )
  {
    v14 = CInteractionProcessor::CalculateDetectedInteractions<DwmTouchInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>(
            (__int64)this,
            (char *)this + 320,
            a2,
            a3,
            a4,
            a5,
            a6);
  }
  else
  {
    if ( *((_DWORD *)this + 197) != 6 )
      goto LABEL_11;
    v14 = CInteractionProcessor::CalculateDetectedInteractions<DwmTouchInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>(
            (__int64)this,
            (char *)this + 480,
            a2,
            a3,
            a4,
            a5,
            a6);
  }
  v12 = v14;
  if ( v14 < 0 )
    return (unsigned int)v12;
LABEL_11:
  if ( (*((_BYTE *)this + 1264) & 3) == 0 )
    return (unsigned int)v12;
  v15 = operator new(0x88uLL);
  v16 = v15;
  if ( v15 )
  {
    memset_0(v15, 0, 0x88uLL);
    *((_QWORD *)v16 + 3) = 0LL;
    *((_QWORD *)v16 + 2) = 0LL;
    v16[8] = 0;
    *((_QWORD *)v16 + 7) = 0LL;
    *((_QWORD *)v16 + 5) = 0LL;
    *((_QWORD *)v16 + 6) = 0LL;
    v16[16] = 0;
    *((_QWORD *)v16 + 11) = 0LL;
    *((_QWORD *)v16 + 9) = 0LL;
    *((_QWORD *)v16 + 10) = 0LL;
    v16[24] = 0;
    *((_QWORD *)v16 + 15) = 0LL;
    *((_QWORD *)v16 + 13) = 0LL;
    *((_QWORD *)v16 + 14) = 0LL;
    v16[32] = 0;
  }
  else
  {
    v16 = 0LL;
  }
  v47 = v16;
  if ( !v16 )
    v12 = -2147024882;
  if ( v12 < 0 )
    goto LABEL_50;
  *v16 = *((_DWORD *)this + 162);
  DynArrayImpl<0>::AddMultipleAndSet((__int64)(v47 + 2), 12, *((_DWORD *)this + 170), *((_QWORD *)this + 82));
  DynArrayImpl<0>::AddMultipleAndSet((__int64)(v47 + 10), 12, *((_DWORD *)this + 178), *((_QWORD *)this + 86));
  DynArrayImpl<0>::AddMultipleAndSet((__int64)(v47 + 18), 12, *((_DWORD *)this + 186), *((_QWORD *)this + 90));
  DynArrayImpl<0>::AddMultipleAndSet((__int64)(v47 + 26), 12, *((_DWORD *)this + 194), *((_QWORD *)this + 94));
  anonymous_namespace_::GetTemporaryConfigWithMask((__int64)this + 1308, &v49, &v48);
  v18 = v48;
  v16 = v47;
  if ( !v48 )
    goto LABEL_41;
  if ( !v47[24] )
  {
    v52 = 1;
    v53 = -1;
    v54 = 0;
    v16 = v47;
    v12 = DynArray<DwmPenInteractionConfigurationPrimitive,0>::AddMultipleAndSet((__int64)(v47 + 18), &v52, 1LL);
  }
  if ( v12 >= 0 )
  {
    if ( !v16[32] )
    {
      v52 = 1;
      v53 = -1;
      v54 = 0;
      v19 = DynArray<DwmPenInteractionConfigurationPrimitive,0>::AddMultipleAndSet((__int64)(v16 + 26), &v52, 1LL);
      v16 = v47;
      v12 = v19;
    }
    if ( v12 >= 0 )
    {
      if ( !v16[16] )
      {
        v52 = 1;
        v53 = -1;
        v54 = 0;
        v20 = DynArray<DwmPenInteractionConfigurationPrimitive,0>::AddMultipleAndSet((__int64)(v16 + 10), &v52, 1LL);
        v16 = v47;
        v12 = v20;
      }
      if ( v12 >= 0 )
      {
        if ( !v16[8] )
        {
          v52 = 1;
          v53 = -1;
          v54 = 0;
          v21 = DynArray<DwmMousewheelInteractionConfigurationPrimitive,0>::AddMultipleAndSet(
                  (__int64)(v16 + 2),
                  &v52,
                  1LL);
          v16 = v47;
          v12 = v21;
        }
        if ( v12 >= 0 )
        {
          v22 = 0;
          v23 = v49;
          if ( v16[24] )
          {
            v24 = v49 & v18;
            do
            {
              v25 = *((_QWORD *)v16 + 9);
              v26 = v22++;
              v27 = 3 * v26;
              v17 = v24 | (unsigned int)~v18 & *(_DWORD *)(v25 + 12 * v26 + 8);
              *(_DWORD *)(v25 + 4 * v27 + 8) = v17;
              v16 = v47;
            }
            while ( v22 < v47[24] );
          }
          v28 = 0;
          if ( v16[32] )
          {
            do
            {
              v29 = *((_QWORD *)v16 + 13);
              v30 = v28++;
              v31 = 3 * v30;
              v17 = v23 & v18 | *(_DWORD *)(v29 + 12 * v30 + 8) & (unsigned int)~v18;
              *(_DWORD *)(v29 + 4 * v31 + 8) = v17;
              v16 = v47;
            }
            while ( v28 < v47[32] );
          }
          v32 = 0;
          if ( v16[16] )
          {
            do
            {
              v33 = *((_QWORD *)v16 + 5);
              v34 = v32++;
              v35 = 3 * v34;
              v17 = v23 & v18 | (unsigned int)~v18 & *(_DWORD *)(v33 + 12 * v34 + 8);
              *(_DWORD *)(v33 + 4 * v35 + 8) = v17;
              v16 = v47;
            }
            while ( v32 < v47[16] );
          }
          v36 = 0;
          if ( v16[8] )
          {
            v37 = v18;
            v38 = v23 & v18;
            v39 = ~v37;
            do
            {
              v17 = *((_QWORD *)v16 + 1);
              v40 = v36++;
              *(_DWORD *)(v17 + 12 * v40 + 8) = v38 | v39 & *(_DWORD *)(v17 + 12 * v40 + 8);
              v16 = v47;
            }
            while ( v36 < v47[8] );
          }
LABEL_41:
          v41 = v50;
          v42 = *(_DWORD *)(v50 + 24);
          v43 = v42 + 1;
          if ( v42 + 1 >= v42 )
          {
            if ( v43 <= *(_DWORD *)(v50 + 20) )
            {
              v12 = 0;
              *(_QWORD *)(*(_QWORD *)v50 + 8LL * *(unsigned int *)(v50 + 24)) = v16;
              *(_DWORD *)(v41 + 24) = v43;
LABEL_48:
              ++*v51;
              return (unsigned int)v12;
            }
            v44 = DynArrayImpl<0>::AddMultipleAndSet(v50, 8, 1, &v47);
            v12 = v44;
            if ( v44 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(v45, 0LL, 0, v44, 0xC0u, 0LL);
          }
          else
          {
            v12 = -2147024362;
            MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, -2147024362, 0xB5u, 0LL);
          }
          if ( v12 >= 0 )
            goto LABEL_48;
          v16 = v47;
        }
      }
    }
  }
LABEL_50:
  if ( v16 )
    InteractionConfigurationGroup::`scalar deleting destructor'((InteractionConfigurationGroup *)v16);
  return (unsigned int)v12;
}
