/*
 * XREFs of ?ContactVisualizationWorker@@YGHKPAXKHK@Z @ 0x14834D
 * Callers:
 *     _EditionContactVisualization@20 @ 0x148D65 (_EditionContactVisualization@20.c)
 * Callees:
 *     _IsCurrentDesktopComposed@0 @ 0x7C988 (_IsCurrentDesktopComposed@0.c)
 *     ?DeferPointerCursorOperation@@YGXPBUtagPOINTER_INFO@@ABUtagPOINTERCURSORDATA@@@Z @ 0x1486B3 (-DeferPointerCursorOperation@@YGXPBUtagPOINTER_INFO@@ABUtagPOINTERCURSORDATA@@@Z.c)
 *     ?GetWindowBarrelVisualizationSetting@Feedback@@YGHABUtagPOINTER_INFO@@H@Z @ 0x1487B8 (-GetWindowBarrelVisualizationSetting@Feedback@@YGHABUtagPOINTER_INFO@@H@Z.c)
 *     ?GetWindowVisualizationSetting@Feedback@@YGHABUtagPOINTER_INFO@@HHHPAH@Z @ 0x14883A (-GetWindowVisualizationSetting@Feedback@@YGHABUtagPOINTER_INFO@@HHHPAH@Z.c)
 *     ?PointerEventIntToDigitizerContactInfo@Feedback@@YGXPBUtagPOINTEREVENTINT@@HHHPAUtagDIGITIZER_CONTACT_INFO@@@Z @ 0x148985 (-PointerEventIntToDigitizerContactInfo@Feedback@@YGXPBUtagPOINTEREVENTINT@@HHHPAUtagDIGITIZER_CO.c)
 *     ?SwitchMouseCursors@@YGXK_N@Z @ 0x148BA8 (-SwitchMouseCursors@@YGXK_N@Z.c)
 *     _FeedbackGetWindowSetting@16 @ 0x148DC2 (_FeedbackGetWindowSetting@16.c)
 *     __GetPointerDeviceType@4 @ 0x159BF4 (__GetPointerDeviceType@4.c)
 *     _DwmAsyncSendTouchContacts@16 @ 0x1D275E (_DwmAsyncSendTouchContacts@16.c)
 */

BOOL __userpurge ContactVisualizationWorker@<eax>(
        char *a1@<edx>,
        int a2@<ecx>,
        unsigned int a3,
        void *a4,
        unsigned int a5,
        int a6,
        unsigned int a7)
{
  int v7; // ebx
  int v9; // esi
  unsigned int v10; // edi
  char *v11; // eax
  const struct tagPOINTEREVENTINT *ContactVisualizationPointerEventInt; // eax
  int *v13; // esi
  int v14; // eax
  unsigned int v15; // ecx
  int v16; // eax
  int v17; // ecx
  int v18; // eax
  int v19; // ecx
  int v20; // edi
  int v21; // ecx
  int v22; // eax
  BOOL v23; // edi
  bool v24; // zf
  const struct tagPOINTEREVENTINT *v25; // esi
  int v26; // eax
  unsigned int v27; // ecx
  unsigned int v28; // edi
  int v30; // [esp-8h] [ebp-60h]
  const struct tagPOINTER_INFO *v31; // [esp+0h] [ebp-58h]
  const struct tagPOINTERCURSORDATA *v32; // [esp+4h] [ebp-54h]
  struct tagDIGITIZER_CONTACT_INFO *v33; // [esp+8h] [ebp-50h]
  int v34; // [esp+14h] [ebp-44h]
  unsigned int v35; // [esp+18h] [ebp-40h]
  int v36; // [esp+1Ch] [ebp-3Ch]
  int v37; // [esp+20h] [ebp-38h] BYREF
  struct tagPOINTEREVENTINT *v38; // [esp+24h] [ebp-34h] BYREF
  char *v39; // [esp+28h] [ebp-30h]
  int v40; // [esp+2Ch] [ebp-2Ch]
  int v41; // [esp+30h] [ebp-28h]
  unsigned int v42; // [esp+34h] [ebp-24h] BYREF
  int v43; // [esp+38h] [ebp-20h]
  const struct tagPOINTEREVENTINT *v44; // [esp+3Ch] [ebp-1Ch]
  unsigned int v45; // [esp+40h] [ebp-18h]
  int v46; // [esp+44h] [ebp-14h]
  int v47; // [esp+48h] [ebp-10h]
  int v48; // [esp+4Ch] [ebp-Ch]
  int v49; // [esp+50h] [ebp-8h]
  int v50; // [esp+54h] [ebp-4h]

  v7 = 0;
  v39 = a1;
  v9 = 0;
  v40 = a2;
  v36 = 0;
  v43 = *(_DWORD *)UPDWORDPointer(8216);
  if ( IsCurrentDesktopComposed() )
  {
    v9 = Win32AllocPool(40 * a2, 1987081045);
    v36 = v9;
  }
  v10 = 0;
  v35 = 0;
  if ( v40 )
  {
    v11 = v39;
    v41 = v9;
    while ( 1 )
    {
      v42 = 0;
      ContactVisualizationPointerEventInt = CTouchProcessor::GetContactVisualizationPointerEventInt(
                                              _gpTouchProcessor,
                                              v11,
                                              (int *)&v42);
      v44 = ContactVisualizationPointerEventInt;
      if ( ContactVisualizationPointerEventInt )
      {
        v13 = (int *)((char *)ContactVisualizationPointerEventInt + 8);
        v14 = *((_DWORD *)ContactVisualizationPointerEventInt + 2);
        if ( (v14 == 2 || v14 == 3) && !GetWorkspaceId(v13[4]) )
          break;
      }
LABEL_50:
      v11 = &v39[a3];
      v24 = v40-- == 1;
      v10 = v35;
      v39 += a3;
      if ( v24 )
      {
        v9 = v36;
        goto LABEL_52;
      }
    }
    if ( *v13 == 3 && _GetPointerDeviceType(v13[4]) == 1 )
    {
      v15 = v13[3];
      Feedback::gfIntegratedPenActive = (v15 >> 1) & 1;
      if ( !Feedback::gfUsingPenCursors || gCursorSuppressionState == 2 || (v15 & 0x10001) != 0 )
      {
        SwitchMouseCursors((unsigned int)v31, (bool)v32);
        v15 = v13[3];
      }
      v46 = v13[6];
      v16 = v13[7];
      v45 = v15;
      v47 = v16;
    }
    else
    {
      if ( Feedback::gfIntegratedPenActive || (v13[3] & 0x2000) == 0 )
        goto LABEL_39;
      v48 = v13[3];
      v17 = 0;
      v49 = v13[6];
      v50 = v13[7];
      v18 = *v13;
      v37 = 0;
      v34 = 0;
      if ( v18 == 2 || v18 == 3 )
      {
        v19 = v13[5];
        if ( v19 && ValidateHwnd(v19) && FeedbackGetWindowSetting(1, &v37) )
        {
          v17 = v37;
          v34 = v37;
        }
        else
        {
          v17 = 0;
        }
      }
      if ( (v13[3] & 0x10001) != 0 )
      {
        v20 = v17;
        if ( *v13 == 3 && _GetPointerDeviceType(v13[4]) == 2 )
          v20 = 1;
        if ( !v20
          && (*v13 != 2 || (v21 = v13[5]) == 0 || !ValidateHwnd(v21) || !FeedbackGetWindowSetting(1, &v37) || !v37) )
        {
          IsCurrentDesktopComposed();
        }
        SwitchMouseCursors((unsigned int)v31, (bool)v32);
        v10 = v35;
      }
      if ( v34 )
        goto LABEL_39;
    }
    DeferPointerCursorOperation(v31, v32);
LABEL_39:
    if ( a5 != 3 )
    {
      v38 = 0;
      if ( *v13 != 2
        || Feedback::GetWindowVisualizationSetting(
             (Feedback *)(a5 == 2),
             (const struct tagPOINTER_INFO *)(v43 == 2),
             (int)&v38,
             (int)v31,
             (int)v32,
             (int *)v33)
        || v38 )
      {
        if ( v36 )
        {
          v35 = v10 + 1;
          v22 = v41;
          v37 = v41;
          v23 = 1;
          v24 = *v13 == 3;
          v41 += 40;
          if ( v24 )
          {
            v23 = Feedback::GetWindowBarrelVisualizationSetting(v31, v32, (int)v33) != 0;
            v22 = v37;
          }
          v25 = v44;
          Feedback::PointerEventIntToDigitizerContactInfo((Feedback *)v23, v38, v22, (int)v31, (int)v32, v33);
          v26 = *((_DWORD *)v25 + 5);
          if ( (v26 & 0x10000) != 0 )
          {
            EtwTraceContactVisualizationDown();
          }
          else if ( (v26 & 0x40000) != 0 )
          {
            EtwTraceContactVisualizationUp();
          }
        }
      }
    }
    goto LABEL_50;
  }
LABEL_52:
  if ( v9 )
  {
    v27 = 0;
    v42 = 0;
    if ( v10 )
    {
      do
      {
        v28 = v10 - v27;
        if ( v28 > 5 )
          v28 = 5;
        v30 = gdwRitInputDesktopId;
        ReferenceDwmApiPort();
        v7 = DwmAsyncSendTouchContacts(v30, v28);
        if ( v7 < 0 )
          break;
        v27 = v28 + v42;
        v10 = v35;
        v42 = v27;
      }
      while ( v27 < v35 );
      v9 = v36;
    }
    Win32FreePool(v9);
  }
  return v7 >= 0;
}
