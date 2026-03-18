/*
 * XREFs of ?xxxPoke@@YGKPAKPAJPAUtagDDECONV@@@Z @ 0x17F882
 * Callers:
 *     ?xxxUnexpectedClientPost@@YGKPAKPAJPAUtagDDECONV@@@Z @ 0x17FDC3 (-xxxUnexpectedClientPost@@YGKPAKPAJPAUtagDDECONV@@@Z.c)
 * Callees:
 *     _WPP_RECORDER_SF_@20 @ 0x1B668 (_WPP_RECORDER_SF_@20.c)
 *     ?AddPublicObject@@YGHIPAXK@Z @ 0x17E876 (-AddPublicObject@@YGHIPAXK@Z.c)
 *     ?AnticipatePost@@YGPAXPAUtagDDECONV@@P6GKPAKPAJ0@ZPAX4PAUtagINTDDEINFO@@K@Z @ 0x17E911 (-AnticipatePost@@YGPAXPAUtagDDECONV@@P6GKPAKPAJ0@ZPAX4PAUtagINTDDEINFO@@K@Z.c)
 *     ?GiveObject@@YGHIPAXK@Z @ 0x17EA64 (-GiveObject@@YGHIPAXK@Z.c)
 *     ?xxxCopyDdeIn@@YGKPAXPAKPAPAXPAPAUtagINTDDEINFO@@@Z @ 0x17F478 (-xxxCopyDdeIn@@YGKPAXPAKPAPAXPAPAUtagINTDDEINFO@@@Z.c)
 */

int __userpurge xxxPoke@<eax>(int *a1@<edx>, _DWORD *a2@<ecx>, unsigned int *a3, int *a4, struct tagDDECONV *a5)
{
  int v6; // ecx
  int v7; // edi
  int v8; // eax
  _DWORD *v9; // esi
  _DWORD *v10; // ecx
  bool v12; // zf
  int v13; // eax
  void *v14; // eax
  void *v15; // eax
  void **v16; // [esp+0h] [ebp-20h]
  void *v17; // [esp+0h] [ebp-20h]
  struct tagINTDDEINFO *v18; // [esp+0h] [ebp-20h]
  struct tagINTDDEINFO **v19; // [esp+4h] [ebp-1Ch]
  unsigned int v20; // [esp+4h] [ebp-1Ch]
  unsigned int v21; // [esp+4h] [ebp-1Ch]
  struct tagDDECONV *v24; // [esp+14h] [ebp-Ch] BYREF
  void *v25; // [esp+18h] [ebp-8h] BYREF
  int v26; // [esp+1Ch] [ebp-4h] BYREF

  v25 = 0;
  v24 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(14, 42, &WPP_f1cc8f74ab813689ed40e0048036585e_Traceguids);
  v6 = *a1;
  v26 = 131;
  v7 = xxxCopyDdeIn(&v26, v6, &v24, (unsigned int *)&v25, v16, v19);
  v8 = _HMPheFromObject(a3);
  v9 = v25;
  if ( (*(_BYTE *)(v8 + 13) & 1) != 0 )
  {
    v7 = 3;
    if ( !v25 )
      return v7;
    Win32FreePool(v25);
  }
  if ( v7 == 2 )
  {
    if ( (v9[9] & 0x2000) != 0 )
    {
      v10 = (_DWORD *)gpPublicObjectList;
      if ( gpPublicObjectList )
      {
        do
        {
          if ( v10[1] == v9[6] )
            break;
          v10 = (_DWORD *)*v10;
        }
        while ( v10 );
        if ( v10 )
        {
          Win32FreePool(v9);
          return 3;
        }
      }
      v12 = GiveObject(
              v9[6],
              *((unsigned __int16 *)v9 + 19),
              *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a3[6] + 8) + 232) + 32),
              v17,
              v20) == 0;
      v13 = v26;
      if ( !v12 )
        v13 = v26 | 0x4000;
      v14 = (void *)(v13 | 0x400);
    }
    else
    {
      v12 = AddPublicObject(
              v9[6],
              *((unsigned __int16 *)v9 + 19),
              *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a3[5] + 8) + 232) + 32),
              v17,
              v20) == 0;
      v14 = (void *)v26;
      if ( !v12 )
        v14 = (void *)(v26 | 0x2000);
    }
    *a2 |= 0x80000000;
    v15 = AnticipatePost(a3[4], v24, 0, v9, v14, v18, v21);
    *a1 = (int)v15;
    if ( !v15 )
      return 3;
  }
  return v7;
}
