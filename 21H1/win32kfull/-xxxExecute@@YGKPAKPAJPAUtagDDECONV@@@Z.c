/*
 * XREFs of ?xxxExecute@@YGKPAKPAJPAUtagDDECONV@@@Z @ 0x17F55E
 * Callers:
 *     ?xxxUnexpectedClientPost@@YGKPAKPAJPAUtagDDECONV@@@Z @ 0x17FDC3 (-xxxUnexpectedClientPost@@YGKPAKPAJPAUtagDDECONV@@@Z.c)
 * Callees:
 *     _WPP_RECORDER_SF_@20 @ 0x1B668 (_WPP_RECORDER_SF_@20.c)
 *     _WPP_RECORDER_SF_q@24 @ 0x1B74E (_WPP_RECORDER_SF_q@24.c)
 *     ?AnticipatePost@@YGPAXPAUtagDDECONV@@P6GKPAKPAJ0@ZPAX4PAUtagINTDDEINFO@@K@Z @ 0x17E911 (-AnticipatePost@@YGPAXPAUtagDDECONV@@P6GKPAKPAJ0@ZPAX4PAUtagINTDDEINFO@@K@Z.c)
 *     ?xxxCopyDdeIn@@YGKPAXPAKPAPAXPAPAUtagINTDDEINFO@@@Z @ 0x17F478 (-xxxCopyDdeIn@@YGKPAXPAKPAPAXPAPAUtagINTDDEINFO@@@Z.c)
 */

unsigned int __userpurge xxxExecute@<eax>(
        _DWORD *a1@<edx>,
        _DWORD *a2@<ecx>,
        unsigned int *a3,
        int *a4,
        struct tagDDECONV *a5)
{
  int v6; // edi
  int v7; // eax
  void *v8; // ebx
  void *v9; // eax
  int v10; // edx
  int v11; // ecx
  struct tagDDECONV *v13; // [esp-10h] [ebp-30h]
  void *v14; // [esp-4h] [ebp-24h]
  void **v15; // [esp+0h] [ebp-20h]
  struct tagINTDDEINFO *v16; // [esp+0h] [ebp-20h]
  struct tagINTDDEINFO **v17; // [esp+4h] [ebp-1Ch]
  unsigned int v18; // [esp+4h] [ebp-1Ch]
  struct tagDDECONV *v21; // [esp+14h] [ebp-Ch] BYREF
  void *v22; // [esp+18h] [ebp-8h] BYREF
  void *v23; // [esp+1Ch] [ebp-4h] BYREF

  v22 = 0;
  v21 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(14, 46, &WPP_f1cc8f74ab813689ed40e0048036585e_Traceguids);
  v23 = (void *)2048;
  if ( (*(_BYTE *)(*(_DWORD *)(a3[5] + 20) + 10) & 8) == 0 && (*(_BYTE *)(*(_DWORD *)(a3[6] + 20) + 10) & 8) == 0 )
    v23 = (void *)67584;
  v6 = xxxCopyDdeIn(&v23, *a1, &v21, (unsigned int *)&v22, v15, v17);
  v7 = _HMPheFromObject(a3);
  v8 = v22;
  if ( (*(_BYTE *)(v7 + 13) & 1) != 0 )
  {
    v6 = 3;
    if ( !v22 )
      return v6;
    Win32FreePool(v22);
  }
  if ( v6 == 2 )
  {
    v14 = v23;
    v13 = v21;
    *a2 |= 0x80000000;
    v9 = AnticipatePost(a3[4], v13, 0, v8, v14, v16, v18);
    v11 = (int)a1;
    *a1 = v9;
    if ( v9 )
    {
      *(_DWORD *)(*(_DWORD *)(a3[5] + 8) + 264) |= 0x20u;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v10) = 4;
        WPP_RECORDER_SF_q(
          (int)a1,
          v10,
          2u,
          47,
          (int)&WPP_f1cc8f74ab813689ed40e0048036585e_Traceguids,
          *(_DWORD *)(a3[5] + 8));
      }
      *(_DWORD *)(*(_DWORD *)(a3[6] + 8) + 264) |= 0x20u;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v10) = 4;
        WPP_RECORDER_SF_q(
          v11,
          v10,
          2u,
          48,
          (int)&WPP_f1cc8f74ab813689ed40e0048036585e_Traceguids,
          *(_DWORD *)(a3[6] + 8));
      }
    }
    else
    {
      return 3;
    }
  }
  return v6;
}
