/*
 * XREFs of ?ClipContact@@YGXPAUtagWND@@PAUtagTOUCHTARGETINGCONTACT@@HPBUtagRECT@@@Z @ 0x179AD7
 * Callers:
 *     ?xxxWindowHitTestWithTargeting@@YGPAUHWND__@@PAUtagWND@@UtagPOINT@@PAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@W4tagTARGETING_PROPERTY@@@Z @ 0x17B446 (-xxxWindowHitTestWithTargeting@@YGPAUHWND__@@PAUtagWND@@UtagPOINT@@PAUtagPNTRWINDOWHITTTESTARGS@.c)
 *     _xxxTouchTargetWindow@28 @ 0x17C92C (_xxxTouchTargetWindow@28.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _TouchTargetingClipContact@28 @ 0x1B8A8D (_TouchTargetingClipContact@28.c)
 */

void __userpurge ClipContact(
        int a1@<ecx>,
        struct tagWND *a2,
        struct tagTOUCHTARGETINGCONTACT *a3,
        int a4,
        const struct tagRECT *a5)
{
  _DWORD *v5; // esi
  int v6; // eax
  int RegionData; // eax
  int v8; // esi
  int v9; // eax
  int v10; // ebx
  _DWORD *v11; // ecx
  int v12; // ebx
  int v13; // [esp+1Ch] [ebp-14h]
  int v15; // [esp+28h] [ebp-8h]

  v5 = *(_DWORD **)(a1 + 20);
  v6 = v5[27];
  if ( v6 )
  {
    RegionData = GreGetRegionData(v6, 0, 0);
    v8 = RegionData;
    if ( RegionData > 0 )
    {
      v9 = Win32AllocPool(RegionData, 1920103253);
      v10 = v9;
      v13 = v9;
      if ( v9 )
      {
        if ( GreGetRegionData(*(_DWORD *)(*(_DWORD *)(a1 + 20) + 108), v8, v9) )
        {
          v11 = (_DWORD *)(v10 + 32);
          v15 = v10 + 32;
          if ( *(int *)(v10 + 8) > 0 )
          {
            v12 = *(_DWORD *)(v10 + 8);
            do
            {
              TouchTargetingClipContact(a3, *v11, v11[1], v11[2], v11[3]);
              v11 = (_DWORD *)(v15 + 16);
              v15 += 16;
              --v12;
            }
            while ( v12 );
            v10 = v13;
          }
        }
        Win32FreePool(v10);
      }
    }
  }
  else
  {
    TouchTargetingClipContact(a3, v5[13], v5[14], v5[15], v5[16]);
  }
}
