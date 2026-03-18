/*
 * XREFs of ?xxxAdviseData@@YGKPAKPAJPAUtagDDECONV@@@Z @ 0x17EEED
 * Callers:
 *     ?xxxRequestAck@@YGKPAKPAJPAUtagDDECONV@@@Z @ 0x17FAD5 (-xxxRequestAck@@YGKPAKPAJPAUtagDDECONV@@@Z.c)
 *     ?xxxUnexpectedServerPost@@YGKPAKPAJPAUtagDDECONV@@@Z @ 0x17FE83 (-xxxUnexpectedServerPost@@YGKPAKPAJPAUtagDDECONV@@@Z.c)
 * Callees:
 *     _WPP_RECORDER_SF_@20 @ 0x1B668 (_WPP_RECORDER_SF_@20.c)
 *     _WPP_RECORDER_SF_D@24 @ 0x147D5C (_WPP_RECORDER_SF_D@24.c)
 *     ?AddPublicObject@@YGHIPAXK@Z @ 0x17E876 (-AddPublicObject@@YGHIPAXK@Z.c)
 *     ?AnticipatePost@@YGPAXPAUtagDDECONV@@P6GKPAKPAJ0@ZPAX4PAUtagINTDDEINFO@@K@Z @ 0x17E911 (-AnticipatePost@@YGPAXPAUtagDDECONV@@P6GKPAKPAJ0@ZPAX4PAUtagINTDDEINFO@@K@Z.c)
 *     ?Createpxs@@YGPAUtagXSTATE@@P6GKPAKPAJPAUtagDDECONV@@@ZPAX4PAUtagINTDDEINFO@@K@Z @ 0x17E967 (-Createpxs@@YGPAUtagXSTATE@@P6GKPAKPAJPAUtagDDECONV@@@ZPAX4PAUtagINTDDEINFO@@K@Z.c)
 *     ?GiveObject@@YGHIPAXK@Z @ 0x17EA64 (-GiveObject@@YGHIPAXK@Z.c)
 *     ?xxxCopyDdeIn@@YGKPAXPAKPAPAXPAPAUtagINTDDEINFO@@@Z @ 0x17F478 (-xxxCopyDdeIn@@YGKPAXPAKPAPAXPAPAUtagINTDDEINFO@@@Z.c)
 *     ?xxxFreeDDEHandle@@YGXPAUtagDDECONV@@PAXK@Z @ 0x17F786 (-xxxFreeDDEHandle@@YGXPAUtagDDECONV@@PAXK@Z.c)
 */

unsigned int __userpurge xxxAdviseData@<eax>(
        _DWORD *a1@<edx>,
        _DWORD *a2@<ecx>,
        unsigned int *a3,
        int *a4,
        struct tagDDECONV *a5)
{
  void *v5; // edi
  int v6; // eax
  int v7; // edx
  int v8; // ecx
  unsigned __int16 *v9; // ebx
  unsigned int result; // eax
  unsigned __int16 v11; // cx
  unsigned __int16 v12; // ax
  _DWORD *v13; // ecx
  int v14; // eax
  int v15; // esi
  int v16; // esi
  int v17; // eax
  struct tagXSTATE *v18; // eax
  void **v19; // [esp+0h] [ebp-24h]
  void *v20; // [esp+0h] [ebp-24h]
  void *v21; // [esp+0h] [ebp-24h]
  struct tagINTDDEINFO *v22; // [esp+0h] [ebp-24h]
  struct tagINTDDEINFO **v23; // [esp+4h] [ebp-20h]
  unsigned int v24; // [esp+4h] [ebp-20h]
  unsigned int v25; // [esp+4h] [ebp-20h]
  unsigned int v26; // [esp+4h] [ebp-20h]
  void *v29; // [esp+14h] [ebp-10h] BYREF
  unsigned int v30; // [esp+18h] [ebp-Ch]
  unsigned int (__stdcall *v31)(unsigned int *, int *, struct tagDDECONV *); // [esp+1Ch] [ebp-8h] BYREF
  int v32; // [esp+20h] [ebp-4h]

  v5 = 0;
  v29 = 0;
  v31 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(14, 29, &WPP_f1cc8f74ab813689ed40e0048036585e_Traceguids);
  v32 = 131;
  v30 = xxxCopyDdeIn(&v31, (unsigned int *)&v29, v19, v23);
  v6 = _HMPheFromObject(a3);
  v9 = (unsigned __int16 *)v29;
  if ( (*(_BYTE *)(v6 + 13) & 1) != 0 )
  {
    result = 3;
    v30 = 3;
    if ( !v29 )
      return result;
    Win32FreePool(v29);
  }
  result = v30;
  if ( v30 == 2 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = 4;
      WPP_RECORDER_SF_D(v8, v7, 0xEu, 30, (int)&WPP_f1cc8f74ab813689ed40e0048036585e_Traceguids, v9[18]);
    }
    v11 = v9[18];
    if ( (v11 & 0xA000) == 0 )
    {
      v12 = v9[18] | 0x2000;
      v9[18] = v12;
      v11 = v12;
    }
    if ( (v11 & 0x2000) != 0 )
    {
      v13 = (_DWORD *)gpPublicObjectList;
      if ( gpPublicObjectList )
      {
        do
        {
          if ( v13[1] == *((_DWORD *)v9 + 6) )
            break;
          v13 = (_DWORD *)*v13;
        }
        while ( v13 );
        if ( v13 )
        {
          Win32FreePool(v9);
          return 3;
        }
      }
      v14 = GiveObject(
              *((_DWORD *)v9 + 6),
              v9[19],
              *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a3[6] + 8) + 232) + 32),
              v20,
              v24);
      v15 = v32;
      if ( v14 )
        v15 = v32 | 0x4000;
      v16 = v15 | 0x400;
    }
    else
    {
      v17 = AddPublicObject(
              *((_DWORD *)v9 + 6),
              v9[19],
              *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a3[5] + 8) + 232) + 32),
              v20,
              v24);
      v16 = v32;
      if ( v17 )
        v16 = v32 | 0x2000;
    }
    *a2 |= 0x80000000;
    if ( (v9[18] & 0x8000u) == 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(14, 31, &WPP_f1cc8f74ab813689ed40e0048036585e_Traceguids);
      xxxFreeDDEHandle((struct tagDDECONV *)(v16 & 0xFFFFFFFE), v21, v25);
      if ( (*(_BYTE *)(_HMPheFromObject(a3) + 13) & 1) == 0 )
      {
        v18 = Createpxs(0, 0, 0, v9, (void *)(v16 | 0x200), v22, v26);
        if ( v18 )
        {
          v5 = *(void **)v18;
          *((_DWORD *)v18 + 2) = *(_DWORD *)(a3[6] + 8);
        }
      }
    }
    else
    {
      v5 = AnticipatePost(a3[4], 0, v31, v9, (void *)v16, (struct tagINTDDEINFO *)v21, v25);
    }
    *a1 = v5;
    if ( !v5 )
      return 3;
    return v30;
  }
  return result;
}
