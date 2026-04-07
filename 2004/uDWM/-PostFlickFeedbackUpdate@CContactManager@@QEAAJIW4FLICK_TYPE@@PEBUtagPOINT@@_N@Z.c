/*
 * XREFs of ?PostFlickFeedbackUpdate@CContactManager@@QEAAJIW4FLICK_TYPE@@PEBUtagPOINT@@_N@Z @ 0x18009FD58
 * Callers:
 *     ??1CFlickVisual@@MEAA@XZ @ 0x1800A5FB8 (--1CFlickVisual@@MEAA@XZ.c)
 *     ?Start@CFlickVisual@@QEAAJPEBUtagPOINT@@W4FLICK_TYPE@@I@Z @ 0x1800A6154 (-Start@CFlickVisual@@QEAAJPEBUtagPOINT@@W4FLICK_TYPE@@I@Z.c)
 *     ?Stop@CFlickVisual@@UEAAXXZ @ 0x1800A65C0 (-Stop@CFlickVisual@@UEAAXXZ.c)
 *     ?UpdateTransition@CFlickVisual@@MEAAJXZ @ 0x1800A6680 (-UpdateTransition@CFlickVisual@@MEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800039DC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18003CB28 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?PostEventMessage@CDesktopManager@@QEAAJI_K_J@Z @ 0x180086E78 (-PostEventMessage@CDesktopManager@@QEAAJI_K_J@Z.c)
 */

__int64 __fastcall CContactManager::PostFlickFeedbackUpdate(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        _QWORD *a4,
        unsigned __int8 a5)
{
  LPARAM v5; // rdi
  __int64 v6; // r10
  unsigned int v7; // edx
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 *v11; // r10
  __int64 v12; // rax
  unsigned int v13; // edx
  __int64 v14; // rcx
  WPARAM v15; // r8
  __int64 v16; // rcx
  __int64 v17; // rax
  int v18; // eax
  __int128 v20; // [rsp+30h] [rbp-28h] BYREF
  __int64 v21; // [rsp+40h] [rbp-18h]

  v5 = a2;
  v6 = 0LL;
  v7 = *(_DWORD *)(a1 + 208);
  if ( v7 )
  {
    v9 = *(_QWORD *)(a1 + 184);
    while ( *(_DWORD *)(v9 + 24 * v6) != (_DWORD)v5 )
    {
      v6 = (unsigned int)(v6 + 1);
      if ( (unsigned int)v6 >= v7 )
        goto LABEL_5;
    }
    if ( (int)v6 >= 0 )
    {
      v14 = 3 * v6;
      *(_QWORD *)(v9 + 8 * v14 + 8) = *a4;
      *(_DWORD *)(*(_QWORD *)(a1 + 184) + 8 * v14 + 4) = a3;
      v15 = a5;
LABEL_15:
      CDesktopManager::PostEventMessage((HANDLE *)CDesktopManager::s_pDesktopManagerInstance, 0x407u, v15, v5);
      return 0LL;
    }
  }
LABEL_5:
  if ( a5 )
  {
    v10 = *a4;
    v11 = (__int64 *)(a1 + 184);
    v21 = 0LL;
    *((_QWORD *)&v20 + 1) = v10;
    v12 = *(unsigned int *)(a1 + 208);
    *(_QWORD *)&v20 = __PAIR64__(a3, v5);
    v13 = v12 + 1;
    if ( (int)v12 + 1 >= (unsigned int)v12 )
    {
      if ( v13 > *(_DWORD *)(a1 + 204) )
      {
        v18 = DynArrayImpl<0>::AddMultipleAndSet(a1 + 184, 0x18u, 1, &v20);
        if ( v18 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v18, 0xC0u);
      }
      else
      {
        v16 = 3 * v12;
        v17 = *v11;
        *(_OWORD *)(v17 + 8 * v16) = v20;
        *(_QWORD *)(v17 + 8 * v16 + 16) = v21;
        *((_DWORD *)v11 + 6) = v13;
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
    }
    v15 = a5;
    goto LABEL_15;
  }
  return 0LL;
}
