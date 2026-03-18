/*
 * XREFs of ?_InertiaRegionIntersectsTopEdge@Edgy@@YGHPBUINERTIA_INFO_INTERNAL@@PBUtagRECT@@@Z @ 0x16EAC6
 * Callers:
 *     ?ProcessInertia@Edgy@@YGXPBUINERTIA_INFO_INTERNAL@@@Z @ 0x16E090 (-ProcessInertia@Edgy@@YGXPBUINERTIA_INFO_INTERNAL@@@Z.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _GetInertiaRegionInVirtualizedScreen@8 @ 0x17CAF0 (_GetInertiaRegionInVirtualizedScreen@8.c)
 */

int __fastcall Edgy::_InertiaRegionIntersectsTopEdge(int a1, int *a2)
{
  int v3; // esi
  int v4; // ebx
  int v5; // edx
  int v6; // eax
  int v7; // edi
  int v8; // ecx
  int v10; // [esp+10h] [ebp-38h]
  int v11; // [esp+14h] [ebp-34h]
  int v12; // [esp+18h] [ebp-30h]
  int v13; // [esp+1Ch] [ebp-2Ch]
  int v14; // [esp+20h] [ebp-28h]
  _DWORD v15[8]; // [esp+24h] [ebp-24h] BYREF

  v3 = 0;
  if ( GetInertiaRegionInVirtualizedScreen(a1, v15) )
  {
    v4 = 0;
    v12 = a2[1];
    v5 = 0;
    v6 = 0;
    v14 = 0;
    v13 = 0;
    v11 = *a2;
    v10 = a2[2];
    while ( 1 )
    {
      if ( v15[2 * v6 + 1] > v12 )
      {
        v7 = 1;
        v14 = 1;
      }
      else
      {
        v7 = v14;
        v4 = 1;
      }
      v8 = v15[2 * v6];
      if ( v8 > v11 )
        v13 = 1;
      if ( v8 < v10 )
        v5 = 1;
      if ( v4 && v7 && v13 && v5 )
        break;
      if ( (unsigned int)++v6 >= 4 )
        return v3;
    }
    return 1;
  }
  return v3;
}
