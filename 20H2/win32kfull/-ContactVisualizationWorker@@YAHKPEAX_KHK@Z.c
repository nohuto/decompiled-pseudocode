/*
 * XREFs of ?ContactVisualizationWorker@@YAHKPEAX_KHK@Z @ 0x1C01D9BC4
 * Callers:
 *     EditionContactVisualization @ 0x1C01DA8F0 (EditionContactVisualization.c)
 * Callees:
 *     IsCurrentDesktopComposed @ 0x1C0013E30 (IsCurrentDesktopComposed.c)
 *     ?DeferPointerCursorOperation@@YAXPEBUtagPOINTER_INFO@@AEBUtagPOINTERCURSORDATA@@@Z @ 0x1C01D9FC4 (-DeferPointerCursorOperation@@YAXPEBUtagPOINTER_INFO@@AEBUtagPOINTERCURSORDATA@@@Z.c)
 *     ?GetWindowBarrelVisualizationSetting@Feedback@@YAHAEBUtagPOINTER_INFO@@H@Z @ 0x1C01DA160 (-GetWindowBarrelVisualizationSetting@Feedback@@YAHAEBUtagPOINTER_INFO@@H@Z.c)
 *     ?GetWindowVisualizationSetting@Feedback@@YAHAEBUtagPOINTER_INFO@@HHHPEAH@Z @ 0x1C01DA220 (-GetWindowVisualizationSetting@Feedback@@YAHAEBUtagPOINTER_INFO@@HHHPEAH@Z.c)
 *     ?PointerEventIntToDigitizerContactInfo@Feedback@@YAXPEBUtagPOINTEREVENTINT@@HHHPEAUtagDIGITIZER_CONTACT_INFO@@@Z @ 0x1C01DA3C4 (-PointerEventIntToDigitizerContactInfo@Feedback@@YAXPEBUtagPOINTEREVENTINT@@HHHPEAUtagDIGITIZER_.c)
 *     ?SwitchMouseCursors@@YAXK_N@Z @ 0x1C01DA68C (-SwitchMouseCursors@@YAXK_N@Z.c)
 *     FeedbackGetWindowSetting @ 0x1C01DA970 (FeedbackGetWindowSetting.c)
 *     _GetPointerDeviceType @ 0x1C01EEF68 (_GetPointerDeviceType.c)
 *     DwmAsyncSendTouchContacts @ 0x1C0274C30 (DwmAsyncSendTouchContacts.c)
 */

_BOOL8 __fastcall ContactVisualizationWorker(unsigned int a1, char *a2, __int64 a3, int a4, unsigned int a5)
{
  __int64 v5; // rbx
  int v6; // edi
  char *v7; // rsi
  __int64 v8; // r13
  __int64 v9; // r15
  int v10; // r14d
  unsigned int v11; // r12d
  __int64 v12; // rdi
  const struct tagPOINTEREVENTINT *ContactVisualizationPointerEventInt; // rax
  char *v14; // rbx
  int v15; // r8d
  unsigned int v16; // ecx
  int v17; // eax
  int v18; // eax
  int v19; // r12d
  __int64 v20; // rcx
  __int64 v21; // rax
  bool v22; // r14
  int v23; // esi
  __int64 v24; // rcx
  __int64 v25; // rax
  unsigned int v26; // ecx
  __int64 v27; // rdx
  __int64 v28; // r14
  BOOL v29; // esi
  _BOOL8 v30; // rdx
  Feedback *v31; // rbx
  int v32; // eax
  __int64 i; // rsi
  int v34; // r14d
  void *v35; // rax
  struct tagDIGITIZER_CONTACT_INFO *v37; // [rsp+28h] [rbp-50h]
  unsigned int v38; // [rsp+30h] [rbp-48h]
  int v39; // [rsp+34h] [rbp-44h] BYREF
  int v40; // [rsp+38h] [rbp-40h] BYREF
  int v41; // [rsp+3Ch] [rbp-3Ch]
  int v42; // [rsp+40h] [rbp-38h]
  Feedback *v43; // [rsp+48h] [rbp-30h]
  _DWORD v44[4]; // [rsp+50h] [rbp-28h] BYREF
  _DWORD v45[6]; // [rsp+60h] [rbp-18h] BYREF
  int v46; // [rsp+C0h] [rbp+48h] BYREF
  char *v47; // [rsp+C8h] [rbp+50h]
  __int64 v48; // [rsp+D0h] [rbp+58h]
  int v49; // [rsp+D8h] [rbp+60h]

  v49 = a4;
  v48 = a3;
  v47 = a2;
  v5 = a1;
  v6 = 0;
  v42 = 0;
  v7 = a2;
  v8 = 0LL;
  v9 = a1;
  v10 = *(_DWORD *)UPDWORDPointer(8216LL);
  v41 = v10;
  if ( (unsigned int)IsCurrentDesktopComposed() )
    v8 = Win32AllocPool(40 * v5, 1987081045LL);
  v11 = 0;
  v38 = 0;
  if ( (_DWORD)v5 )
  {
    v12 = v48;
    do
    {
      v40 = 0;
      ContactVisualizationPointerEventInt = CTouchProcessor::GetContactVisualizationPointerEventInt(
                                              gpTouchProcessor,
                                              v7,
                                              &v40);
      v43 = ContactVisualizationPointerEventInt;
      if ( ContactVisualizationPointerEventInt )
      {
        v14 = (char *)ContactVisualizationPointerEventInt + 8;
        if ( (unsigned int)(*((_DWORD *)ContactVisualizationPointerEventInt + 2) - 2) <= 1
          && !(unsigned int)GetWorkspaceId(*((_QWORD *)ContactVisualizationPointerEventInt + 3)) )
        {
          if ( *(_DWORD *)v14 == 3 && (unsigned int)GetPointerDeviceType(*((_QWORD *)v14 + 2)) == 1 )
          {
            v16 = *((_DWORD *)v14 + 3);
            Feedback::gfIntegratedPenActive = (v16 >> 1) & 1;
            if ( !Feedback::gfUsingPenCursors || gCursorSuppressionState == 2 || (v16 & 0x10001) != 0 )
            {
              SwitchMouseCursors(3u, 0);
              v16 = *((_DWORD *)v14 + 3);
            }
            v44[1] = *((_DWORD *)v14 + 8);
            v17 = *((_DWORD *)v14 + 9);
            v44[0] = v16;
            v44[2] = v17;
            DeferPointerCursorOperation((const struct tagPOINTER_INFO *)v14, (const struct tagPOINTERCURSORDATA *)v44);
          }
          else if ( !Feedback::gfIntegratedPenActive )
          {
            v18 = *((_DWORD *)v14 + 3);
            if ( (v18 & 0x2000) != 0 )
            {
              v46 = 0;
              v19 = 0;
              v45[0] = v18;
              v45[1] = *((_DWORD *)v14 + 8);
              v45[2] = *((_DWORD *)v14 + 9);
              if ( (unsigned int)(*(_DWORD *)v14 - 2) <= 1 )
              {
                v20 = *((_QWORD *)v14 + 3);
                if ( v20 )
                {
                  v21 = ValidateHwnd(v20);
                  if ( v21 )
                  {
                    if ( (unsigned int)FeedbackGetWindowSetting(v21, 13LL, 1LL, &v46) )
                      v19 = v46;
                  }
                }
              }
              if ( (*((_DWORD *)v14 + 3) & 0x10001) != 0 )
              {
                v22 = 0;
                v23 = v19;
                if ( *(_DWORD *)v14 == 3 && (unsigned int)GetPointerDeviceType(*((_QWORD *)v14 + 2)) == 2 )
                  v23 = 1;
                if ( v23 )
                {
                  v26 = 4;
                }
                else
                {
                  if ( *(_DWORD *)v14 == 2
                    && (v24 = *((_QWORD *)v14 + 3)) != 0
                    && (v25 = ValidateHwnd(v24)) != 0
                    && (unsigned int)FeedbackGetWindowSetting(v25, 12LL, 1LL, &v46)
                    && v46
                    || !(unsigned int)IsCurrentDesktopComposed() )
                  {
                    v22 = 1;
                  }
                  v26 = *(_DWORD *)v14;
                }
                SwitchMouseCursors(v26, v22);
                v7 = v47;
                v10 = v41;
              }
              if ( !v19 )
                DeferPointerCursorOperation(
                  (const struct tagPOINTER_INFO *)v14,
                  (const struct tagPOINTERCURSORDATA *)v45);
              v11 = v38;
            }
          }
          if ( a5 != 3 )
          {
            v39 = 0;
            if ( *(_DWORD *)v14 != 2
              || (unsigned int)Feedback::GetWindowVisualizationSetting(
                                 (Feedback *)v14,
                                 (const struct tagPOINTER_INFO *)(v10 == 0),
                                 a5 == 2,
                                 v10 == 2,
                                 (__int64)&v39,
                                 (int *)v37)
              || v39 )
            {
              if ( v8 )
              {
                v27 = 5LL * v11++;
                v28 = v8 + 8 * v27;
                v38 = v11;
                v29 = 1;
                if ( *(_DWORD *)v14 == 3 )
                  v29 = Feedback::GetWindowBarrelVisualizationSetting(
                          (Feedback *)v14,
                          (const struct tagPOINTER_INFO *)(v40 != 0),
                          v15) != 0;
                v30 = v49 && a5 == 2;
                v31 = v43;
                Feedback::PointerEventIntToDigitizerContactInfo(
                  v43,
                  (const struct tagPOINTEREVENTINT *)v30,
                  v29,
                  v39,
                  v28,
                  v37);
                v32 = *((_DWORD *)v31 + 5);
                if ( (v32 & 0x10000) != 0 )
                {
                  EtwTraceContactVisualizationDown();
                }
                else if ( (v32 & 0x40000) != 0 )
                {
                  EtwTraceContactVisualizationUp();
                }
                v7 = v47;
              }
            }
          }
        }
      }
      v10 = v41;
      v7 += v12;
      v47 = v7;
      --v9;
    }
    while ( v9 );
    v6 = v42;
  }
  if ( v8 )
  {
    for ( i = 0LL; (unsigned int)i < v11; i = (unsigned int)(v34 + i) )
    {
      v34 = v11 - i;
      if ( v11 - (unsigned int)i > 0xB )
        v34 = 11;
      v35 = (void *)ReferenceDwmApiPort(5 * i);
      v6 = DwmAsyncSendTouchContacts(v35);
      if ( v6 < 0 )
        break;
    }
    Win32FreePool(v8);
  }
  return v6 >= 0;
}
