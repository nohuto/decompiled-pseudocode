/*
 * XREFs of ?xxxRequestAck@@YGKPAKPAJPAUtagDDECONV@@@Z @ 0x17FAD5
 * Callers:
 *     <none>
 * Callees:
 *     _WPP_RECORDER_SF_@20 @ 0x1B668 (_WPP_RECORDER_SF_@20.c)
 *     ?AddPublicObject@@YGHIPAXK@Z @ 0x17E876 (-AddPublicObject@@YGHIPAXK@Z.c)
 *     ?AnticipatePost@@YGPAXPAUtagDDECONV@@P6GKPAKPAJ0@ZPAX4PAUtagINTDDEINFO@@K@Z @ 0x17E911 (-AnticipatePost@@YGPAXPAUtagDDECONV@@P6GKPAKPAJ0@ZPAX4PAUtagINTDDEINFO@@K@Z.c)
 *     ?Createpxs@@YGPAUtagXSTATE@@P6GKPAKPAJPAUtagDDECONV@@@ZPAX4PAUtagINTDDEINFO@@K@Z @ 0x17E967 (-Createpxs@@YGPAUtagXSTATE@@P6GKPAKPAJPAUtagDDECONV@@@ZPAX4PAUtagINTDDEINFO@@K@Z.c)
 *     ?FreeListAdd@@YGHPAUtagDDECONV@@PAXK@Z @ 0x17E9E4 (-FreeListAdd@@YGHPAUtagDDECONV@@PAXK@Z.c)
 *     ?GiveObject@@YGHIPAXK@Z @ 0x17EA64 (-GiveObject@@YGHIPAXK@Z.c)
 *     ?PopState@@YGXPAUtagDDECONV@@@Z @ 0x17EB1A (-PopState@@YGXPAUtagDDECONV@@@Z.c)
 *     ?xxxAdviseData@@YGKPAKPAJPAUtagDDECONV@@@Z @ 0x17EEED (-xxxAdviseData@@YGKPAKPAJPAUtagDDECONV@@@Z.c)
 *     ?xxxCopyAckIn@@YGKPAKPAJPAUtagDDECONV@@PAPAUtagINTDDEINFO@@@Z @ 0x17F2E7 (-xxxCopyAckIn@@YGKPAKPAJPAUtagDDECONV@@PAPAUtagINTDDEINFO@@@Z.c)
 *     ?xxxCopyDdeIn@@YGKPAXPAKPAPAXPAPAUtagINTDDEINFO@@@Z @ 0x17F478 (-xxxCopyDdeIn@@YGKPAXPAKPAPAXPAPAUtagINTDDEINFO@@@Z.c)
 *     ?xxxUnexpectedServerPost@@YGKPAKPAJPAUtagDDECONV@@@Z @ 0x17FE83 (-xxxUnexpectedServerPost@@YGKPAKPAJPAUtagDDECONV@@@Z.c)
 *     _xxxClientGetDDEFlags@8 @ 0x194375 (_xxxClientGetDDEFlags@8.c)
 */

unsigned int __userpurge xxxRequestAck@<eax>(
        int *a1@<edi>,
        struct tagDDECONV *a2@<esi>,
        unsigned int *a3,
        int *a4,
        unsigned int a5)
{
  unsigned int result; // eax
  struct tagDDECONV *v6; // edi
  int v7; // esi
  int v8; // eax
  unsigned __int16 *v9; // ebx
  int v10; // esi
  _DWORD *v11; // ecx
  int v12; // eax
  unsigned int v13; // esi
  unsigned int v14; // esi
  int v15; // eax
  void *v16; // eax
  struct tagXSTATE *v17; // eax
  unsigned int v18; // esi
  void *v21; // [esp-Ch] [ebp-1Ch]
  struct tagINTDDEINFO *v22; // [esp-Ch] [ebp-1Ch]
  struct tagINTDDEINFO *v23; // [esp-Ch] [ebp-1Ch]
  unsigned int v25; // [esp-8h] [ebp-18h]
  unsigned int v26; // [esp-8h] [ebp-18h]
  unsigned int v27; // [esp-8h] [ebp-18h]
  void *v28; // [esp+0h] [ebp-10h] BYREF
  int v29; // [esp+4h] [ebp-Ch]
  unsigned int (__stdcall *v30)(unsigned int *, int *, struct tagDDECONV *); // [esp+8h] [ebp-8h] BYREF
  int DDEFlags; // [esp+Ch] [ebp-4h]

  v28 = 0;
  v30 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(14, 40, &WPP_f1cc8f74ab813689ed40e0048036585e_Traceguids);
  if ( *a3 != 996 )
  {
    if ( *a3 != 997 )
      return xxxUnexpectedServerPost((unsigned int *)a5, a1, a2);
    v6 = (struct tagDDECONV *)a5;
    a5 = 131;
    v7 = *((_DWORD *)v6 + 7);
    DDEFlags = xxxClientGetDDEFlags(*a4);
    if ( (*(_BYTE *)(_HMPheFromObject(v6) + 13) & 1) != 0 || *((_DWORD *)v6 + 7) != v7 )
      return 3;
    if ( (DDEFlags & 0x1000) == 0 )
      return xxxAdviseData(a4, a3, (unsigned int *)v6, a1, a2);
    v29 = xxxCopyDdeIn(&a5, *a4, &v30, (unsigned int *)&v28, (void **)a1, (struct tagINTDDEINFO **)a2);
    v8 = _HMPheFromObject(v6);
    v9 = (unsigned __int16 *)v28;
    if ( (*(_BYTE *)(v8 + 13) & 1) == 0 && *((_DWORD *)v6 + 7) == v7 )
    {
      v10 = v29;
    }
    else
    {
      v10 = 3;
      v29 = 3;
      if ( !v28 )
        return v10;
      Win32FreePool(v28);
    }
    if ( v10 == 2 )
    {
      if ( (v9[18] & 0xA000) == 0 )
        v9[18] |= 0x2000u;
      if ( (DDEFlags & 0x2000) != 0 )
      {
        v11 = (_DWORD *)gpPublicObjectList;
        if ( gpPublicObjectList )
        {
          do
          {
            if ( v11[1] == *((_DWORD *)v9 + 6) )
              break;
            v11 = (_DWORD *)*v11;
          }
          while ( v11 );
          if ( v11 )
          {
            Win32FreePool(v9);
            return 3;
          }
        }
        v12 = GiveObject(
                *((_DWORD *)v9 + 6),
                v9[19],
                *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*((_DWORD *)v6 + 6) + 8) + 232) + 32),
                v21,
                v25);
        v13 = a5;
        if ( v12 )
          v13 = a5 | 0x4000;
        v14 = v13 | 0x400;
      }
      else
      {
        v15 = AddPublicObject(
                *((_DWORD *)v9 + 6),
                v9[19],
                *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*((_DWORD *)v6 + 5) + 8) + 232) + 32),
                v21,
                v25);
        v14 = a5;
        if ( v15 )
          v14 = a5 | 0x2000;
      }
      *a3 |= 0x80000000;
      if ( (DDEFlags & 0x8000) != 0 )
      {
        v16 = AnticipatePost(*((_DWORD *)v6 + 4), 0, v30, v9, (void *)v14, v22, v26);
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_(14, 41, &WPP_f1cc8f74ab813689ed40e0048036585e_Traceguids);
        FreeListAdd((int)v30, (int)v6, (struct tagDDECONV *)(v14 & 0xFFFFFFFE), v22, v26);
        v17 = Createpxs(0, 0, 0, v9, (void *)(v14 | 0x200), v23, v27);
        if ( v17 )
        {
          *((_DWORD *)v17 + 2) = *(_DWORD *)(*((_DWORD *)v6 + 6) + 8);
          v16 = *(void **)v17;
        }
        else
        {
          v16 = 0;
        }
      }
      *a4 = (int)v16;
      if ( v16 )
      {
        PopState(v6);
        return v29;
      }
      else
      {
        return 3;
      }
    }
    return v10;
  }
  v18 = xxxCopyAckIn(
          a4,
          a3,
          (unsigned int *)a5,
          (unsigned int *)&v28,
          (struct tagDDECONV *)a1,
          (struct tagINTDDEINFO **)a2);
  result = (*(_BYTE *)(_HMPheFromObject(a5) + 13) & 1) == 0 ? v18 : 0;
  if ( result != 2 )
    return result;
  PopState((_DWORD *)a5);
  return 2;
}
