/*
 * XREFs of ?PostRawKeyboardInputToSinks@@YGXKPAXPAU_KEYBOARD_INPUT_DATA@@IGH@Z @ 0x16DCFA
 * Callers:
 *     ?HandleRawInput@@YG?AW4RAW_INPUT_PROCESSING_RESULT@@PAXPAU_KEYBOARD_INPUT_DATA@@PBURAW_INPUT_SUPPLEMENTAL_INFO@@@Z @ 0xB1E22 (-HandleRawInput@@YG-AW4RAW_INPUT_PROCESSING_RESULT@@PAXPAU_KEYBOARD_INPUT_DATA@@PBURAW_INPUT_SUP.c)
 * Callees:
 *     _PostInputMessage@60 @ 0x467D0 (_PostInputMessage@60.c)
 *     _AllocateHidData@20 @ 0x14415B (_AllocateHidData@20.c)
 *     _FreeHidData@4 @ 0x144291 (_FreeHidData@4.c)
 *     ?FillRawKeyboardInput@@YGXPAUtagHIDDATA@@PAU_KEYBOARD_INPUT_DATA@@IG@Z @ 0x16DB6A (-FillRawKeyboardInput@@YGXPAUtagHIDDATA@@PAU_KEYBOARD_INPUT_DATA@@IG@Z.c)
 */

void __userpurge PostRawKeyboardInputToSinks(
        struct tagINPUT_MESSAGE_SOURCE *a1@<edx>,
        unsigned int a2@<ecx>,
        unsigned int a3,
        struct tagHIDDATA *a4,
        struct _KEYBOARD_INPUT_DATA *a5,
        unsigned int a6,
        unsigned __int16 a7,
        int a8)
{
  int v8; // eax
  int v9; // eax
  char *v10; // ebx
  char *i; // edi
  _DWORD *v12; // edx
  int v13; // eax
  int v14; // esi
  int v15; // ecx
  unsigned int *HidData; // eax
  unsigned int *v17; // ebx
  _DWORD *v18; // edx
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // esi
  int v25; // ecx
  int v26; // ecx
  int v27; // esi
  int v28; // ecx
  int v29; // esi
  int v30; // ecx
  _DWORD *v31; // esi
  int v32; // esi
  int j; // ecx
  int v34; // esi
  int k; // ecx
  int v36; // esi
  int m; // ecx
  unsigned int v38; // [esp+0h] [ebp-3Ch]
  unsigned __int16 v39; // [esp+4h] [ebp-38h]
  int v40; // [esp+Ch] [ebp-30h] BYREF
  int v41; // [esp+10h] [ebp-2Ch]
  _DWORD *v42; // [esp+14h] [ebp-28h]
  unsigned int v43; // [esp+18h] [ebp-24h]
  int v44; // [esp+1Ch] [ebp-20h]
  int v45; // [esp+20h] [ebp-1Ch]
  char *v46; // [esp+24h] [ebp-18h]
  struct tagINPUT_MESSAGE_SOURCE *v47; // [esp+28h] [ebp-14h]
  int v48; // [esp+2Ch] [ebp-10h]
  int v49; // [esp+30h] [ebp-Ch]
  int v50; // [esp+34h] [ebp-8h]
  int v51; // [esp+38h] [ebp-4h]

  v47 = a1;
  v43 = a2;
  v51 = 0;
  v40 = 0;
  v41 = 0;
  if ( _gpqForeground )
  {
    v8 = *(_DWORD *)(_gpqForeground + 64);
    if ( v8 )
      v9 = *(_DWORD *)(v8 + 8);
    else
      v9 = *(_DWORD *)(_gpqForeground + 52);
    v51 = *(_DWORD *)(v9 + 232);
    v40 = *(_DWORD *)(_gpqForeground + 316);
    v41 = *(_DWORD *)(_gpqForeground + 320);
  }
  v10 = (char *)&RawInputManagerObject::gHidRequestTable[4];
  v46 = (char *)&RawInputManagerObject::gHidRequestTable[4];
  for ( i = (char *)RawInputManagerObject::gHidRequestTable[4]; i != v10; i = *(char **)i )
  {
    if ( (i[52] & 0x40) != 0 )
    {
      v12 = (_DWORD *)*((_DWORD *)i + 9);
      if ( v12 )
      {
        v13 = v12[5];
        if ( *(char *)(v13 + 12) >= 0 && *(char *)(v13 + 11) >= 0 && v12[3] == _grpdeskRitInput )
        {
          v14 = v51;
          if ( !v51
            || (unsigned __int8)CheckAccess(*(_DWORD *)(v12[2] + 232) + 496, &v40)
            || (v15 = *(_DWORD *)(*((_DWORD *)i + 9) + 8), *(int *)(*(_DWORD *)(v15 + 232) + 8) < 0) )
          {
            if ( *(_DWORD *)(*(_DWORD *)(*((_DWORD *)i + 9) + 8) + 232) != v14 && (i[52] >= 0 || !a6) )
            {
              HidData = AllocateHidData((int)v47, 1, 0x10u, 1, *((_DWORD *)i + 9));
              v17 = HidData;
              if ( !HidData )
                return;
              FillRawKeyboardInput(a3, (int)HidData, a4, a5, v38, v39);
              v45 = *((_DWORD *)i + 9);
              v44 = *(_DWORD *)(v45 + 8);
              v18 = *(_DWORD **)(v44 + 236);
              v42 = v18;
              v19 = v18[16];
              if ( v19 )
                v20 = *(_DWORD *)(v19 + 8);
              else
                v20 = 0;
              if ( v20 )
                v48 = v20 + 216;
              else
                v48 = gObjDummyLock;
              v21 = v18[12];
              if ( v21 )
                v49 = v21 + 216;
              else
                v49 = gObjDummyLock;
              v22 = v18[13];
              if ( v22 )
                v23 = v22 + 216;
              else
                v23 = gObjDummyLock;
              v24 = gpsiLock;
              v25 = 3;
              v50 = v23;
              while ( v25 )
              {
                v24 += 4;
                --v25;
              }
              v26 = 3;
              v27 = v45 + 28;
              while ( v26 )
              {
                v27 += 4;
                --v26;
              }
              v28 = 3;
              v29 = v44 + 216;
              while ( v28 )
              {
                v29 += 4;
                --v28;
              }
              v30 = 3;
              v31 = v18;
              while ( v30 )
              {
                ++v31;
                --v30;
              }
              v32 = v50;
              for ( j = 3; j; --j )
                v32 += 4;
              v34 = v49;
              for ( k = 3; k; --k )
                v34 += 4;
              v36 = v48;
              for ( m = 3; m; --m )
                v36 += 4;
              if ( !PostInputMessage(
                      (int)v42,
                      *((_DWORD *)i + 9),
                      (struct tagQMSG *)0xFF,
                      (struct tagWND *)1,
                      *v17,
                      v43,
                      0,
                      0,
                      *(_DWORD *)(a3 + 8),
                      0,
                      0,
                      v47,
                      0,
                      0,
                      0) )
                FreeHidData((int)v17);
              v10 = v46;
            }
          }
          else
          {
            EtwTraceUIPIInputError(v15, 0, _gpqForeground, v40, v41, 5);
          }
        }
      }
    }
  }
}
