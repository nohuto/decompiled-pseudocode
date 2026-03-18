/*
 * XREFs of _UpdateWindowPositionsForDpiBoundaryChange@4 @ 0x9B526
 * Callers:
 *     _UpdateMonitorForWindowAndChildren@16 @ 0x2A86E (_UpdateMonitorForWindowAndChildren@16.c)
 * Callees:
 *     _OffsetChildren@20 @ 0x2AECC (_OffsetChildren@20.c)
 *     _OffsetWindow@16 @ 0x2AF60 (_OffsetWindow@16.c)
 *     _IsChildWindowDpiBoundary@4 @ 0x38846 (_IsChildWindowDpiBoundary@4.c)
 *     @HMValidateHandleNoSecure@8 @ 0x3C46E (@HMValidateHandleNoSecure@8.c)
 *     _LogicalToPhysicalInPlaceRectWithSubpixel@12 @ 0x9B5AE (_LogicalToPhysicalInPlaceRectWithSubpixel@12.c)
 *     _PhysicalToLogicalInPlaceRectWithSubpixel@12 @ 0x9B600 (_PhysicalToLogicalInPlaceRectWithSubpixel@12.c)
 */

void __thiscall UpdateWindowPositionsForDpiBoundaryChange(_DWORD *this)
{
  _DWORD *v2; // eax
  _DWORD *v3; // esi
  int v4; // ecx
  int *v5; // esi
  int v6; // esi
  int v7; // eax
  int v8; // ecx
  int v9; // edi
  int v10; // ecx
  int v11; // [esp+Ch] [ebp-14h] BYREF
  int v12; // [esp+10h] [ebp-10h]
  int v13; // [esp+14h] [ebp-Ch]
  int v14; // [esp+18h] [ebp-8h]
  _DWORD *v15; // [esp+1Ch] [ebp-4h]

  while ( this )
  {
    v2 = (_DWORD *)HMValidateHandleNoSecure(this[1], 1);
    v3 = v2;
    v15 = v2;
    if ( v2 && (this[4] || IsChildWindowDpiBoundary(v2)) )
    {
      v4 = v3[14];
      v5 = (int *)(*(_DWORD *)(v4 + 20) + 68);
      v11 = *v5++;
      v12 = *v5++;
      v13 = *v5;
      v14 = v5[1];
      LogicalToPhysicalInPlaceRectWithSubpixel(v4, &v11, 0);
      v6 = (int)v15;
      PhysicalToLogicalInPlaceRectWithSubpixel(v15, &v11, 0);
      v7 = *(_DWORD *)(v6 + 20);
      v8 = v11 + this[2] - *(_DWORD *)(v7 + 52);
      v9 = v12 + this[3] - *(_DWORD *)(v7 + 56);
      v15 = (_DWORD *)v8;
      if ( v8 || v9 )
      {
        OffsetWindow(v6, v8, v9, v8);
        OffsetChildren(v6, (int)v15, v9, 0, v10);
      }
    }
    this = (_DWORD *)*this;
  }
}
