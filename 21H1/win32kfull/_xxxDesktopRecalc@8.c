/*
 * XREFs of _xxxDesktopRecalc@8 @ 0xB04BC
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x270DA (xxxSystemParametersInfoWorker.c)
 *     _xxxDesktopsRecalc@8 @ 0xB0468 (_xxxDesktopsRecalc@8.c)
 * Callees:
 *     _FreeHwndList@4 @ 0x2D2D0 (_FreeHwndList@4.c)
 *     _BuildHwndList@12 @ 0x2D340 (_BuildHwndList@12.c)
 *     @HMValidateHandleNoSecure@8 @ 0x3C46E (@HMValidateHandleNoSecure@8.c)
 *     ?PostThreadRecalc@@YGHPAUtagTHREADINFO@@PAUtagMONITORRECTS@@PAUtagWINDOWANDRECT@@HK@Z @ 0xB065A (-PostThreadRecalc@@YGHPAUtagTHREADINFO@@PAUtagMONITORRECTS@@PAUtagWINDOWANDRECT@@HK@Z.c)
 *     ?BehaviorEnabled@ShellWindowManagement@@YG_NPBUtagDESKTOP@@K@Z @ 0xF4E0E (-BehaviorEnabled@ShellWindowManagement@@YG_NPBUtagDESKTOP@@K@Z.c)
 */

struct tagBWL *__fastcall xxxDesktopRecalc(int a1, _DWORD *a2)
{
  int v3; // esi
  int v4; // eax
  bool v5; // al
  struct tagBWL *result; // eax
  _DWORD *v7; // edi
  int v8; // ebx
  _DWORD *v9; // esi
  unsigned int v10; // ecx
  unsigned int *v11; // edi
  struct tagTHREADINFO *v12; // eax
  int v13; // esi
  int v14; // eax
  struct tagMONITORRECTS *v15; // edx
  unsigned int *v16; // eax
  int v17; // edi
  int v18; // esi
  _DWORD *v19; // esi
  ShellWindowManagement *v20; // [esp+0h] [ebp-40h]
  int v21; // [esp+0h] [ebp-40h]
  const struct tagDESKTOP *v22; // [esp+4h] [ebp-3Ch]
  unsigned int v23; // [esp+4h] [ebp-3Ch]
  unsigned int v24; // [esp+8h] [ebp-38h]
  struct tagBWL *v25; // [esp+10h] [ebp-30h]
  int v26; // [esp+14h] [ebp-2Ch]
  int v28; // [esp+1Ch] [ebp-24h]
  int v29; // [esp+20h] [ebp-20h]
  int v30; // [esp+24h] [ebp-1Ch]
  int v31; // [esp+28h] [ebp-18h]
  struct tagTHREADINFO *v32; // [esp+2Ch] [ebp-14h]
  unsigned int *v33; // [esp+30h] [ebp-10h]
  unsigned int *v34; // [esp+34h] [ebp-Ch]
  int v35; // [esp+38h] [ebp-8h]
  struct tagTHREADINFO *v36; // [esp+3Ch] [ebp-4h]

  v28 = 20;
  if ( PsGetCurrentProcess() == _gpepCSRSS )
    v28 = 16404;
  v3 = 0;
  if ( a1 )
  {
    v4 = *(_DWORD *)(a1 + 4);
    if ( v4 )
      v3 = *(_DWORD *)(v4 + 12);
  }
  v5 = ShellWindowManagement::BehaviorEnabled(v20, v22, v24);
  result = (struct tagBWL *)BuildHwndList(*(_DWORD *)(v3 + 60), (v5 << 6) + 2, 0);
  v25 = result;
  if ( result )
  {
    v7 = (_DWORD *)((char *)result + 16);
    v8 = 0;
    v9 = (_DWORD *)((char *)result + 16);
    v33 = (unsigned int *)((char *)result + 16);
    v10 = *((_DWORD *)result + 4);
    if ( v10 != 1 )
    {
      do
      {
        if ( HMValidateHandleNoSecure(v10, 1) )
        {
          ++v8;
          *v7++ = *v9;
        }
        v10 = *++v9;
      }
      while ( *v9 != 1 );
      v11 = v33;
      v30 = v8;
      if ( v8 )
      {
        if ( *a2 )
        {
          v12 = (struct tagTHREADINFO *)Win32AllocPool(20 * v8, 2004054869);
          v32 = v12;
          if ( v12 )
          {
            v13 = 0;
            v26 = 0;
            if ( v8 > 0 )
            {
              do
              {
                if ( *v11 )
                {
                  v14 = HMValidateHandleNoSecure(*v11, 1);
                  v15 = 0;
                  v35 = 0;
                  v29 = *(_DWORD *)(v14 + 8);
                  if ( v13 < v8 )
                  {
                    v36 = v32;
                    v16 = v11;
                    v34 = v11;
                    v17 = v8 - v13;
                    v31 = v8 - v13;
                    do
                    {
                      if ( *v16 )
                      {
                        v18 = HMValidateHandleNoSecure(*v16, 1);
                        v16 = v34;
                        if ( *(_DWORD *)(v18 + 8) == v29 )
                        {
                          *(_DWORD *)v36 = *v34;
                          v19 = (_DWORD *)(*(_DWORD *)(v18 + 20) + 52);
                          *((_DWORD *)v36 + 1) = *v19++;
                          *((_DWORD *)v36 + 2) = *v19++;
                          *((_DWORD *)v36 + 3) = *v19;
                          *((_DWORD *)v36 + 4) = v19[1];
                          *v34 = 0;
                          v15 = (struct tagMONITORRECTS *)(v35 + 1);
                          v17 = v31;
                          ++v35;
                          v36 = (struct tagTHREADINFO *)((char *)v36 + 20);
                        }
                        else
                        {
                          v15 = (struct tagMONITORRECTS *)v35;
                        }
                      }
                      ++v16;
                      --v17;
                      v34 = v16;
                      v31 = v17;
                    }
                    while ( v17 );
                    v8 = v30;
                    v11 = v33;
                    v13 = v26;
                  }
                  PostThreadRecalc(v32, v15, (struct tagWINDOWANDRECT *)v28, v21, v23);
                }
                ++v13;
                ++v11;
                v26 = v13;
                v33 = v11;
              }
              while ( v13 < v8 );
              v12 = v32;
            }
            Win32FreePool(v12);
          }
        }
      }
    }
    return FreeHwndList(v25);
  }
  return result;
}
