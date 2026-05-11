/*
 * XREFs of USBD_GetEndpointOffloadInformationForIndex @ 0x1C0011E90
 * Callers:
 *     USBHwSelectStreamingAudioInterfaceSideband @ 0x1C002D2AC (USBHwSelectStreamingAudioInterfaceSideband.c)
 * Callees:
 *     <none>
 */

unsigned int *__fastcall USBD_GetEndpointOffloadInformationForIndex(__int64 a1, unsigned int a2)
{
  unsigned int *v2; // rcx
  int v3; // r8d
  __int64 v4; // rax

  if ( a2 >= *(_DWORD *)(a1 + 32) )
    return 0LL;
  v2 = *(unsigned int **)(a1 + 40);
  v3 = 1;
  if ( a2 )
  {
    while ( 1 )
    {
      v4 = *v2;
      if ( !(_DWORD)v4 )
        break;
      v2 = (unsigned int *)((char *)v2 + v4);
      if ( ++v3 > a2 )
        return v2;
    }
    return 0LL;
  }
  return v2;
}
