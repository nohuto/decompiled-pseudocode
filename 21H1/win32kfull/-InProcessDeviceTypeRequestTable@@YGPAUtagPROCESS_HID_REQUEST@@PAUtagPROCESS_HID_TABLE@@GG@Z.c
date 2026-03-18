/*
 * XREFs of ?InProcessDeviceTypeRequestTable@@YGPAUtagPROCESS_HID_REQUEST@@PAUtagPROCESS_HID_TABLE@@GG@Z @ 0xC9F82
 * Callers:
 *     _PostDeviceNotification@20 @ 0xC9CA6 (_PostDeviceNotification@20.c)
 *     ?AdjustLegacyDeviceFlags@@YGXPAUtagPROCESSINFO@@@Z @ 0xC9E3A (-AdjustLegacyDeviceFlags@@YGXPAUtagPROCESSINFO@@@Z.c)
 *     ?HidIsRequestedByThisProcess@@YGPAUtagPROCESS_HID_REQUEST@@PAUDEVICEINFO@@PAUtagPROCESS_HID_TABLE@@@Z @ 0x143C12 (-HidIsRequestedByThisProcess@@YGPAUtagPROCESS_HID_REQUEST@@PAUDEVICEINFO@@PAUtagPROCESS_HID_TABL.c)
 * Callees:
 *     ?SearchProcessHidRequestExclusion@@YGPAUtagPROCESS_HID_REQUEST@@PAUtagPROCESS_HID_TABLE@@GG@Z @ 0xC9E1A (-SearchProcessHidRequestExclusion@@YGPAUtagPROCESS_HID_REQUEST@@PAUtagPROCESS_HID_TABLE@@GG@Z.c)
 *     ?SearchProcessHidRequestInclusion@@YGPAUtagPROCESS_HID_REQUEST@@PAUtagPROCESS_HID_TABLE@@GG@Z @ 0xC9FE6 (-SearchProcessHidRequestInclusion@@YGPAUtagPROCESS_HID_REQUEST@@PAUtagPROCESS_HID_TABLE@@GG@Z.c)
 *     ?SearchProcessHidRequestUsagePage@@YGPAUtagPROCESS_HID_REQUEST@@PAUtagPROCESS_HID_TABLE@@G@Z @ 0xEBB92 (-SearchProcessHidRequestUsagePage@@YGPAUtagPROCESS_HID_REQUEST@@PAUtagPROCESS_HID_TABLE@@G@Z.c)
 */

struct tagPROCESS_HID_REQUEST *__userpurge InProcessDeviceTypeRequestTable@<eax>(
        int a1@<ecx>,
        struct tagPROCESS_HID_TABLE *a2,
        unsigned __int16 a3,
        unsigned __int16 a4)
{
  struct tagPROCESS_HID_REQUEST *v5; // eax
  struct tagPROCESS_HID_REQUEST *v6; // esi
  __int16 v7; // dx
  int v9; // edi
  int v10; // eax
  struct tagPROCESS_HID_REQUEST **v11; // ecx
  int v12; // eax
  int v13; // eax
  int v14; // ecx
  struct tagPROCESS_HID_REQUEST **v15; // ebx
  int v16; // ecx
  struct tagPROCESS_HID_REQUEST *v17; // eax
  int v18; // edi
  int v19; // ecx
  struct tagPROCESS_HID_REQUEST **v20; // edx
  struct tagPROCESS_HID_REQUEST *v21; // ecx
  unsigned __int16 v22; // [esp+0h] [ebp-8h]
  struct tagPROCESS_HID_TABLE *v23; // [esp+0h] [ebp-8h]
  unsigned __int16 v24; // [esp+0h] [ebp-8h]
  unsigned __int16 v25; // [esp+4h] [ebp-4h]
  unsigned __int16 v26; // [esp+4h] [ebp-4h]
  unsigned __int16 v27; // [esp+4h] [ebp-4h]

  v5 = SearchProcessHidRequestInclusion(a2, v22, v25);
  v6 = v5;
  if ( v5 )
  {
    v9 = a1 + 8;
    if ( *(struct tagPROCESS_HID_REQUEST **)v9 != v5 )
    {
      v10 = *(_DWORD *)v5;
      if ( *(struct tagPROCESS_HID_REQUEST **)(*(_DWORD *)v6 + 4) != v6 )
        goto LABEL_10;
      v11 = (struct tagPROCESS_HID_REQUEST **)*((_DWORD *)v6 + 1);
      if ( *v11 != v6 )
        goto LABEL_10;
      *v11 = (struct tagPROCESS_HID_REQUEST *)v10;
      *(_DWORD *)(v10 + 4) = v11;
      v12 = *(_DWORD *)v9;
      if ( *(_DWORD *)(*(_DWORD *)v9 + 4) != v9 )
        goto LABEL_10;
      *(_DWORD *)v6 = v12;
      *((_DWORD *)v6 + 1) = v9;
      *(_DWORD *)(v12 + 4) = v6;
      *(_DWORD *)v9 = v6;
    }
  }
  else
  {
    v6 = SearchProcessHidRequestUsagePage(v23, v26);
    if ( !v6 )
      return 0;
    v13 = a1 + 16;
    if ( *(struct tagPROCESS_HID_REQUEST **)(a1 + 16) != v6 )
    {
      v14 = *(_DWORD *)v6;
      if ( *(struct tagPROCESS_HID_REQUEST **)(*(_DWORD *)v6 + 4) != v6 )
        goto LABEL_10;
      v15 = (struct tagPROCESS_HID_REQUEST **)*((_DWORD *)v6 + 1);
      if ( *v15 != v6 )
        goto LABEL_10;
      *v15 = (struct tagPROCESS_HID_REQUEST *)v14;
      *(_DWORD *)(v14 + 4) = v15;
      v16 = *(_DWORD *)v13;
      if ( *(_DWORD *)(*(_DWORD *)v13 + 4) != v13 )
        goto LABEL_10;
      *(_DWORD *)v6 = v16;
      *((_DWORD *)v6 + 1) = v13;
      *(_DWORD *)(v16 + 4) = v6;
      *(_DWORD *)v13 = v6;
    }
    v17 = SearchProcessHidRequestExclusion(v7, a1, a2, v24, v27);
    if ( v17 )
    {
      v18 = a1 + 24;
      if ( *(struct tagPROCESS_HID_REQUEST **)v18 == v17 )
        return 0;
      v19 = *(_DWORD *)v17;
      if ( *(struct tagPROCESS_HID_REQUEST **)(*(_DWORD *)v17 + 4) == v17 )
      {
        v20 = (struct tagPROCESS_HID_REQUEST **)*((_DWORD *)v17 + 1);
        if ( *v20 == v17 )
        {
          *v20 = (struct tagPROCESS_HID_REQUEST *)v19;
          *(_DWORD *)(v19 + 4) = v20;
          v21 = *(struct tagPROCESS_HID_REQUEST **)v18;
          if ( *(_DWORD *)(*(_DWORD *)v18 + 4) == v18 )
          {
            *(_DWORD *)v17 = v21;
            *((_DWORD *)v17 + 1) = v18;
            *((_DWORD *)v21 + 1) = v17;
            *(_DWORD *)v18 = v17;
            return 0;
          }
        }
      }
LABEL_10:
      __fastfail(3u);
    }
  }
  return v6;
}
