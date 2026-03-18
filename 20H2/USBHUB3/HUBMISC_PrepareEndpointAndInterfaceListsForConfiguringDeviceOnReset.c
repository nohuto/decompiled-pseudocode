/*
 * XREFs of HUBMISC_PrepareEndpointAndInterfaceListsForConfiguringDeviceOnReset @ 0x1C002DCD0
 * Callers:
 *     HUBDSM_PreparingEndpointAndInterfaceListsOnClientReset @ 0x1C001CF10 (HUBDSM_PreparingEndpointAndInterfaceListsOnClientReset.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBMISC_PrepareEndpointAndInterfaceListsForConfiguringDeviceOnReset(__int64 a1)
{
  __int64 v2; // r11
  _QWORD *v3; // rdx
  __int64 v4; // rbx
  __int64 v5; // r8
  __int64 i; // rdx
  __int64 v7; // rax
  __int64 v8; // rcx

  *(_DWORD *)(a1 + 112) = 0;
  *(_DWORD *)(a1 + 144) = 0;
  *(_DWORD *)(a1 + 128) = 0;
  v2 = *(_QWORD *)(a1 + 104);
  v3 = (_QWORD *)(*(_QWORD *)(a1 + 48) + 16LL);
  v4 = *(_QWORD *)(a1 + 136);
  v5 = *v3 - 8LL;
  if ( v3 != (_QWORD *)*v3 )
  {
    do
    {
      if ( (*(_DWORD *)(v5 + 28) & 1) != 0 )
        _InterlockedOr((volatile signed __int32 *)(v5 + 28), 2u);
      for ( i = 0LL; (unsigned int)i < *(_DWORD *)(v5 + 24); i = (unsigned int)(i + 1) )
      {
        v7 = *(_QWORD *)(v5 + 72 * i + 40);
        if ( (*(_DWORD *)(v5 + 72 * i + 52) & 1) != 0 )
        {
          *(_DWORD *)(v5 + 72 * i + 48) = 6;
          *(_QWORD *)(v4 + 8LL * (unsigned int)(*(_DWORD *)(a1 + 144))++) = v7;
        }
        else
        {
          *(_DWORD *)(v5 + 72 * i + 48) = 3;
          *(_QWORD *)(v2 + 8LL * (unsigned int)(*(_DWORD *)(a1 + 112))++) = v7;
        }
      }
      v8 = *(_QWORD *)(v5 + 8);
      v5 = v8 - 8;
    }
    while ( *(_QWORD *)(a1 + 48) + 16LL != v8 );
  }
  return 4077LL;
}
