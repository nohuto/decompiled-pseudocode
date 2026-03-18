/*
 * XREFs of ?ProcessInertia@Edgy@@YGXPBUINERTIA_INFO_INTERNAL@@@Z @ 0x16E090
 * Callers:
 *     _EditionEdgyProcessInertia@4 @ 0x16F0F1 (_EditionEdgyProcessInertia@4.c)
 * Callees:
 *     __GetPointerDeviceRects@12 @ 0xCB44C (__GetPointerDeviceRects@12.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     __GetPointerDeviceType@4 @ 0x159BF4 (__GetPointerDeviceType@4.c)
 *     ?_InertiaRegionIntersectsTopEdge@Edgy@@YGHPBUINERTIA_INFO_INTERNAL@@PBUtagRECT@@@Z @ 0x16EAC6 (-_InertiaRegionIntersectsTopEdge@Edgy@@YGHPBUINERTIA_INFO_INTERNAL@@PBUtagRECT@@@Z.c)
 *     ?_PostEdgyInertia@Edgy@@YGXPAUHWND__@@W4tagEDGY_LOCATION@@K@Z @ 0x16EE40 (-_PostEdgyInertia@Edgy@@YGXPAUHWND__@@W4tagEDGY_LOCATION@@K@Z.c)
 */

void __thiscall Edgy::ProcessInertia(int ecx0)
{
  unsigned int *v1; // ebx
  int v2; // eax
  unsigned int v3; // esi
  int v4; // edi
  int v5; // ebx
  int PointerDeviceType; // eax
  void *v7; // ecx
  Edgy *v8; // [esp+0h] [ebp-30h]
  const struct INERTIA_INFO_INTERNAL *v9; // [esp+4h] [ebp-2Ch]
  const struct tagRECT *v10; // [esp+8h] [ebp-28h]
  int v11; // [esp+10h] [ebp-20h]
  unsigned int *v12; // [esp+14h] [ebp-1Ch]
  _DWORD v13[4]; // [esp+1Ch] [ebp-14h] BYREF

  v1 = *(unsigned int **)(_grpdeskRitInput + 140);
  v12 = v1;
  if ( v1 )
  {
    if ( (*(_BYTE *)(ecx0 + 176) & 8) != 0 && *(float *)(ecx0 + 16) > 0.0 )
    {
      v2 = *(_DWORD *)(ecx0 + 20);
      if ( v2 == 1 || v2 == 2 )
      {
        v3 = 0;
        if ( *v1 )
        {
          v4 = 0;
          v11 = 0;
          do
          {
            v5 = v4 + v1[2];
            if ( *(_DWORD *)(v5 + 8) == 1 )
            {
              PointerDeviceType = _GetPointerDeviceType(*(void **)v5);
              if ( PointerDeviceType == 3 || PointerDeviceType == 1 )
              {
                v7 = *(void **)v5;
                memset(v13, 0, sizeof(v13));
                if ( _GetPointerDeviceRects((int)v7, 0, v13) && Edgy::_InertiaRegionIntersectsTopEdge(v8, v9, v10) )
                {
                  Edgy::_PostEdgyInertia(*(_DWORD *)(v5 + 4), 1, v12[59]);
                  return;
                }
                v4 = v11;
              }
            }
            v1 = v12;
            ++v3;
            v4 += 16;
            v11 = v4;
          }
          while ( v3 < *v12 );
        }
      }
    }
  }
}
