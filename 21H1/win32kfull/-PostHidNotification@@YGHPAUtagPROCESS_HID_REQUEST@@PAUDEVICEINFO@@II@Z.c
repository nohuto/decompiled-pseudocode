/*
 * XREFs of ?PostHidNotification@@YGHPAUtagPROCESS_HID_REQUEST@@PAUDEVICEINFO@@II@Z @ 0xC3A22
 * Callers:
 *     _PostDeviceNotification@20 @ 0xC9CA6 (_PostDeviceNotification@20.c)
 * Callees:
 *     _PostInputMessage@60 @ 0x467D0 (_PostInputMessage@60.c)
 *     _AdjustPwndPtiPqForDelegation@24 @ 0x47910 (_AdjustPwndPtiPqForDelegation@24.c)
 */

BOOL __userpurge PostHidNotification@<eax>(
        _DWORD *a1@<edx>,
        int a2@<ecx>,
        struct tagPROCESS_HID_REQUEST *a3,
        struct DEVICEINFO *a4,
        unsigned int a5,
        unsigned int a6)
{
  int v6; // eax
  int v7; // ecx
  int v8; // eax
  int v9; // edi
  int v10; // eax
  int v11; // eax
  int v12; // ebx
  int v13; // eax
  int v14; // edx
  int v15; // esi
  int i; // ecx
  int v17; // esi
  int j; // ecx
  int v19; // esi
  int k; // ecx
  int v21; // ecx
  int v22; // esi
  int v23; // ecx
  int v24; // esi
  int v25; // ecx
  int v26; // esi
  int v27; // esi
  int m; // ecx
  unsigned int v29; // eax
  int v31; // [esp+Ch] [ebp-14h] BYREF
  int v32; // [esp+10h] [ebp-10h] BYREF
  int v33; // [esp+14h] [ebp-Ch] BYREF
  int v34; // [esp+18h] [ebp-8h] BYREF
  _DWORD *v35; // [esp+1Ch] [ebp-4h]

  v6 = *(_DWORD *)(a2 + 20);
  v35 = a1;
  if ( !v6 )
    return 1;
  if ( (*(_BYTE *)(a2 + 12) & 4) == 0 )
    return 1;
  v7 = *(_DWORD *)(v6 + 20);
  v32 = v6;
  if ( *(char *)(v7 + 12) < 0 )
    return 1;
  if ( *(char *)(v7 + 11) < 0 )
    return 1;
  v8 = *(_DWORD *)(v6 + 8);
  v34 = 0;
  v31 = v8;
  v33 = *(_DWORD *)(v8 + 236);
  if ( !AdjustPwndPtiPqForDelegation(&v33, &v32, &v31, 254, 0, &v34) )
    return 1;
  v9 = v33;
  v10 = *(_DWORD *)(v33 + 64);
  if ( v10 )
    v10 = *(_DWORD *)(v10 + 8);
  if ( v10 )
    v33 = v10 + 216;
  else
    v33 = gObjDummyLock;
  v11 = *(_DWORD *)(v9 + 48);
  v12 = gObjDummyLock;
  if ( v11 )
    v12 = v11 + 216;
  v13 = *(_DWORD *)(v9 + 52);
  v14 = gObjDummyLock;
  if ( v13 )
    v14 = v13 + 216;
  v15 = gpsiLock;
  for ( i = 3; i; --i )
    v15 += 4;
  v17 = v32 + 28;
  for ( j = 3; j; --j )
    v17 += 4;
  v19 = v31 + 216;
  for ( k = 3; k; --k )
    v19 += 4;
  v21 = 3;
  v22 = v9;
  while ( v21 )
  {
    v22 += 4;
    --v21;
  }
  v23 = 3;
  v24 = v14;
  while ( v23 )
  {
    v24 += 4;
    --v23;
  }
  v25 = 3;
  v26 = v12;
  while ( v25 )
  {
    v26 += 4;
    --v25;
  }
  v27 = v33;
  for ( m = 3; m; --m )
    v27 += 4;
  v29 = v35 ? *v35 : 0;
  return PostInputMessage(v9, v32, (struct tagQMSG *)0xFE, a4, v29, 0, 0, 0, 0, 0, 0, 0, 0, v34, v31) != 0;
}
