/*
 * XREFs of _LdrQueryOptionalDelayLoadedAPI@16 @ 0x4B32F5D0
 * Callers:
 *     <none>
 * Callees:
 *     _LdrResolveDelayLoadedAPI@24 @ 0x4B2CCA20 (_LdrResolveDelayLoadedAPI@24.c)
 *     _LdrpFindDelayloadedMethod@12 @ 0x4B32F6A6 (_LdrpFindDelayloadedMethod@12.c)
 *     _LdrpFindDelayloadedMethodInDescriptor@12 @ 0x4B32F710 (_LdrpFindDelayloadedMethodInDescriptor@12.c)
 *     _LdrpGetDelayloadDescriptor@8 @ 0x4B32F7C7 (_LdrpGetDelayloadDescriptor@8.c)
 */

int __thiscall LdrQueryOptionalDelayLoadedAPI(_BYTE *this, _BYTE *a2, int a3, int a4, int a5)
{
  int v6; // ecx
  unsigned __int8 v7; // al
  int v8; // eax
  char *DelayloadedMethodInDescriptor; // eax
  _BYTE *DelayloadDescriptor; // edi
  _BYTE *v11; // [esp+0h] [ebp-4h] BYREF

  v11 = this;
  if ( a5 )
    return -1073741811;
  v6 = 0;
  while ( 1 )
  {
    v7 = *(_BYTE *)(a3 + v6);
    if ( v7 != asc_4B291AA4[v6] )
      break;
    if ( ++v6 == 2 )
    {
      v8 = 0;
      goto LABEL_8;
    }
  }
  v8 = v7 < (unsigned __int8)asc_4B291AA4[v6] ? -1 : 1;
LABEL_8:
  if ( v8 )
  {
    DelayloadDescriptor = (_BYTE *)LdrpGetDelayloadDescriptor(a2);
    if ( !DelayloadDescriptor )
      return -1073741515;
    DelayloadedMethodInDescriptor = (char *)LdrpFindDelayloadedMethodInDescriptor(a4);
  }
  else
  {
    DelayloadedMethodInDescriptor = (char *)LdrpFindDelayloadedMethod(&v11);
    DelayloadDescriptor = v11;
  }
  if ( DelayloadedMethodInDescriptor )
    return LdrResolveDelayLoadedAPI(a2, DelayloadDescriptor, 0, 0, DelayloadedMethodInDescriptor, 0) != 0
         ? 0
         : -1073741511;
  return -1073741515;
}
