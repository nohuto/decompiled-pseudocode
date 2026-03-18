/*
 * XREFs of ?xxxExecuteAck@@YGKPAKPAJPAUtagDDECONV@@@Z @ 0x17F68D
 * Callers:
 *     <none>
 * Callees:
 *     _WPP_RECORDER_SF_@20 @ 0x1B668 (_WPP_RECORDER_SF_@20.c)
 *     ?Createpxs@@YGPAUtagXSTATE@@P6GKPAKPAJPAUtagDDECONV@@@ZPAX4PAUtagINTDDEINFO@@K@Z @ 0x17E967 (-Createpxs@@YGPAUtagXSTATE@@P6GKPAKPAJPAUtagDDECONV@@@ZPAX4PAUtagINTDDEINFO@@K@Z.c)
 *     ?PopState@@YGXPAUtagDDECONV@@@Z @ 0x17EB1A (-PopState@@YGXPAUtagDDECONV@@@Z.c)
 *     ?xxxCopyDdeIn@@YGKPAXPAKPAPAXPAPAUtagINTDDEINFO@@@Z @ 0x17F478 (-xxxCopyDdeIn@@YGKPAXPAKPAPAXPAPAUtagINTDDEINFO@@@Z.c)
 *     ?xxxUnexpectedServerPost@@YGKPAKPAJPAUtagDDECONV@@@Z @ 0x17FE83 (-xxxUnexpectedServerPost@@YGKPAKPAJPAUtagDDECONV@@@Z.c)
 */

int __userpurge xxxExecuteAck@<eax>(void **a1@<edi>, unsigned int *a2, int *a3, struct tagDDECONV *a4)
{
  int v5; // esi
  int v7; // edi
  struct tagDDECONV *v8; // eax
  _DWORD *v9; // ecx
  struct tagXSTATE *v10; // edx
  void *v11; // [esp-Ch] [ebp-1Ch]
  struct tagINTDDEINFO *v12; // [esp-4h] [ebp-14h]
  int *v13; // [esp+0h] [ebp-10h]
  unsigned int v14; // [esp+0h] [ebp-10h]
  struct tagDDECONV *v15; // [esp+4h] [ebp-Ch]
  int v16; // [esp+8h] [ebp-8h] BYREF
  void *v17; // [esp+Ch] [ebp-4h] BYREF
  unsigned int *v18; // [esp+18h] [ebp+8h]

  v5 = 0;
  v16 = 6145;
  v17 = 0;
  if ( *a2 != 996 )
    return xxxUnexpectedServerPost((unsigned int *)a4, v13, v15);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(14, 49, &WPP_f1cc8f74ab813689ed40e0048036585e_Traceguids);
  v18 = (unsigned int *)*((_DWORD *)a4 + 7);
  v7 = xxxCopyDdeIn(&v16, *a3, 0, (unsigned int *)&v17, a1, (struct tagINTDDEINFO **)v13);
  if ( (*(_BYTE *)(_HMPheFromObject(a4) + 13) & 1) == 0 )
  {
    v8 = a4;
    if ( *((unsigned int **)a4 + 7) == v18 )
      goto LABEL_9;
  }
  v7 = 3;
  if ( v17 )
  {
    Win32FreePool(v17);
    v8 = a4;
LABEL_9:
    if ( v7 == 2 )
    {
      v9 = v17;
      v11 = v17;
      *((_DWORD *)v17 + 1) = *(_DWORD *)(*((_DWORD *)v8 + 7) + 20);
      v9[3] = 0;
      v9[5] = 0;
      *a2 |= 0x80000000;
      v10 = Createpxs(0, 0, 0, v11, (void *)0x201, v12, v14);
      if ( v10 )
      {
        v5 = *(_DWORD *)v10;
        *((_DWORD *)v10 + 2) = *(_DWORD *)(*((_DWORD *)a4 + 6) + 8);
      }
      *a3 = v5;
      if ( v5 )
        PopState(a4);
      else
        return 3;
    }
  }
  return v7;
}
