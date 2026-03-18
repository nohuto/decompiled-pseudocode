/*
 * XREFs of ?xxxCopyAckIn@@YGKPAKPAJPAUtagDDECONV@@PAPAUtagINTDDEINFO@@@Z @ 0x17F2E7
 * Callers:
 *     ?xxxAdviseAck@@YGKPAKPAJPAUtagDDECONV@@@Z @ 0x17EE02 (-xxxAdviseAck@@YGKPAKPAJPAUtagDDECONV@@@Z.c)
 *     ?xxxAdviseDataAck@@YGKPAKPAJPAUtagDDECONV@@@Z @ 0x17F0D7 (-xxxAdviseDataAck@@YGKPAKPAJPAUtagDDECONV@@@Z.c)
 *     ?xxxPokeAck@@YGKPAKPAJPAUtagDDECONV@@@Z @ 0x17F9C5 (-xxxPokeAck@@YGKPAKPAJPAUtagDDECONV@@@Z.c)
 *     ?xxxRequestAck@@YGKPAKPAJPAUtagDDECONV@@@Z @ 0x17FAD5 (-xxxRequestAck@@YGKPAKPAJPAUtagDDECONV@@@Z.c)
 *     ?xxxUnadviseAck@@YGKPAKPAJPAUtagDDECONV@@@Z @ 0x17FD40 (-xxxUnadviseAck@@YGKPAKPAJPAUtagDDECONV@@@Z.c)
 * Callees:
 *     ?Createpxs@@YGPAUtagXSTATE@@P6GKPAKPAJPAUtagDDECONV@@@ZPAX4PAUtagINTDDEINFO@@K@Z @ 0x17E967 (-Createpxs@@YGPAUtagXSTATE@@P6GKPAKPAJPAUtagDDECONV@@@ZPAX4PAUtagINTDDEINFO@@K@Z.c)
 *     ?GiveObject@@YGHIPAXK@Z @ 0x17EA64 (-GiveObject@@YGHIPAXK@Z.c)
 *     ?RemovePublicObject@@YGHIPAX@Z @ 0x17EB8B (-RemovePublicObject@@YGHIPAX@Z.c)
 *     ?xxxCopyDdeIn@@YGKPAXPAKPAPAXPAPAUtagINTDDEINFO@@@Z @ 0x17F478 (-xxxCopyDdeIn@@YGKPAXPAKPAPAXPAPAUtagINTDDEINFO@@@Z.c)
 */

unsigned int __userpurge xxxCopyAckIn@<eax>(
        _DWORD *a1@<edx>,
        _DWORD *a2@<ecx>,
        unsigned int *a3,
        unsigned int *a4,
        struct tagDDECONV *a5,
        struct tagINTDDEINFO **a6)
{
  int v7; // esi
  unsigned int v8; // ebx
  unsigned int v9; // edx
  unsigned int v10; // ecx
  unsigned int v11; // eax
  struct tagXSTATE *v12; // eax
  void **v14; // [esp+0h] [ebp-18h]
  void *v15; // [esp+0h] [ebp-18h]
  struct tagINTDDEINFO **v16; // [esp+4h] [ebp-14h]
  unsigned int v17; // [esp+4h] [ebp-14h]
  unsigned int *v20; // [esp+20h] [ebp+8h]
  void *v21; // [esp+24h] [ebp+Ch]

  v7 = 0;
  v20 = (unsigned int *)a3[7];
  v8 = xxxCopyDdeIn(0, a4, v14, v16);
  if ( (*(_BYTE *)(_HMPheFromObject(a3) + 13) & 1) != 0 || (unsigned int *)a3[7] != v20 )
  {
    v8 = 3;
    if ( !*a4 )
      return v8;
    Win32FreePool(*a4);
  }
  if ( v8 == 2 )
  {
    v9 = a3[7];
    v10 = *a4;
    v11 = v9;
    v21 = (void *)*a4;
    if ( (*(_DWORD *)(v9 + 32) & 0x4000) != 0 && *(__int16 *)(v10 + 36) >= 0 )
    {
      GiveObject(
        *(_DWORD *)(*(_DWORD *)(v9 + 28) + 24),
        *(unsigned __int16 *)(*(_DWORD *)(v9 + 28) + 38),
        *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a3[6] + 8) + 232) + 32),
        v15,
        v17);
      v11 = a3[7];
    }
    if ( (*(_DWORD *)(v11 + 32) & 0x2000) != 0 )
    {
      RemovePublicObject(*(unsigned __int16 *)(*(_DWORD *)(v11 + 28) + 38), *(_DWORD *)(*(_DWORD *)(v11 + 28) + 24));
      *(_DWORD *)(a3[7] + 32) &= ~0x2000u;
    }
    v12 = Createpxs(0, 0, 0, v21, (void *)0x1201, (struct tagINTDDEINFO *)v15, v17);
    if ( v12 )
    {
      v7 = *(_DWORD *)v12;
      *((_DWORD *)v12 + 2) = *(_DWORD *)(a3[6] + 8);
    }
    *a1 = v7;
    if ( !v7 )
      return 3;
    *a2 |= 0x80000000;
  }
  return v8;
}
