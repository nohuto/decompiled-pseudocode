/*
 * XREFs of ?SetBitMask@@YGXPAUtagWND@@IH@Z @ 0xE31BA
 * Callers:
 *     ?_StoreGestureConfig@@YGHPAUtagWND@@IPAUtagGESTURECONFIG@@@Z @ 0xE3328 (-_StoreGestureConfig@@YGHPAUtagWND@@IPAUtagGESTURECONFIG@@@Z.c)
 * Callees:
 *     ?GetGCData@@YGPAUtagVWPLGESTUREDATA@@PAUtagWND@@@Z @ 0xE353A (-GetGCData@@YGPAUtagVWPLGESTUREDATA@@PAUtagWND@@@Z.c)
 */

void __userpurge SetBitMask(unsigned int a1@<edx>, struct tagWND *a2, unsigned int a3, int a4)
{
  struct tagVWPLGESTUREDATA *GCData; // eax
  unsigned int v6; // ecx
  char v7; // si
  unsigned int v8; // ecx
  int v9; // edx
  int v10; // eax
  int v11; // eax
  struct tagWND *v12; // [esp+0h] [ebp-4h]

  GCData = GetGCData(v12);
  v6 = a1;
  v7 = a1 & 7;
  v8 = v6 >> 3;
  v9 = *(_DWORD *)GCData;
  v10 = *(unsigned __int8 *)(v8 + *(_DWORD *)GCData);
  if ( a2 )
    v11 = v10 | (1 << v7);
  else
    v11 = v10 & ~(1 << v7);
  *(_BYTE *)(v8 + v9) = v11;
}
