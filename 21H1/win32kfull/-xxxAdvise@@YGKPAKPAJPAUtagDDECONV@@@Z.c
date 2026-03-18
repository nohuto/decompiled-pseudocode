/*
 * XREFs of ?xxxAdvise@@YGKPAKPAJPAUtagDDECONV@@@Z @ 0x17ED57
 * Callers:
 *     ?xxxUnexpectedClientPost@@YGKPAKPAJPAUtagDDECONV@@@Z @ 0x17FDC3 (-xxxUnexpectedClientPost@@YGKPAKPAJPAUtagDDECONV@@@Z.c)
 * Callees:
 *     _WPP_RECORDER_SF_@20 @ 0x1B668 (_WPP_RECORDER_SF_@20.c)
 *     ?AnticipatePost@@YGPAXPAUtagDDECONV@@P6GKPAKPAJ0@ZPAX4PAUtagINTDDEINFO@@K@Z @ 0x17E911 (-AnticipatePost@@YGPAXPAUtagDDECONV@@P6GKPAKPAJ0@ZPAX4PAUtagINTDDEINFO@@K@Z.c)
 *     ?xxxCopyDdeIn@@YGKPAXPAKPAPAXPAPAUtagINTDDEINFO@@@Z @ 0x17F478 (-xxxCopyDdeIn@@YGKPAXPAKPAPAXPAPAUtagINTDDEINFO@@@Z.c)
 */

unsigned int __userpurge xxxAdvise@<eax>(
        _DWORD *a1@<edx>,
        _DWORD *a2@<ecx>,
        unsigned int *a3,
        int *a4,
        struct tagDDECONV *a5)
{
  unsigned int v6; // esi
  void *v7; // eax
  void *v9; // [esp-8h] [ebp-20h]
  void *v10; // [esp-4h] [ebp-1Ch]
  void **v11; // [esp+0h] [ebp-18h]
  struct tagINTDDEINFO *v12; // [esp+0h] [ebp-18h]
  struct tagINTDDEINFO **v13; // [esp+4h] [ebp-14h]
  unsigned int v14; // [esp+4h] [ebp-14h]
  struct tagDDECONV *v16; // [esp+Ch] [ebp-Ch] BYREF
  void *v17; // [esp+10h] [ebp-8h]
  void *v18; // [esp+14h] [ebp-4h] BYREF

  v18 = 0;
  v16 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(14, 25, &WPP_f1cc8f74ab813689ed40e0048036585e_Traceguids);
  v17 = (void *)129;
  v6 = xxxCopyDdeIn(&v16, (unsigned int *)&v18, v11, v13);
  if ( (*(_BYTE *)(_HMPheFromObject(a3) + 13) & 1) != 0 )
  {
    v6 = 3;
    if ( !v18 )
      return v6;
    Win32FreePool(v18);
  }
  if ( v6 == 2 )
  {
    v10 = v17;
    v9 = v18;
    *a2 |= 0x80000000;
    v7 = AnticipatePost(a3[4], v16, 0, v9, v10, v12, v14);
    *a1 = v7;
    if ( !v7 )
      return 3;
  }
  return v6;
}
