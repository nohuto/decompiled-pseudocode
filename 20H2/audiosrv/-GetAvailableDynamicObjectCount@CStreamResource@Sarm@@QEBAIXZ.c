/*
 * XREFs of ?GetAvailableDynamicObjectCount@CStreamResource@Sarm@@QEBAIXZ @ 0x18010AFBC
 * Callers:
 *     ?CalculateDynamicObjectGrantCount@CStreamResource@Sarm@@QEBAII@Z @ 0x18010AD4C (-CalculateDynamicObjectGrantCount@CStreamResource@Sarm@@QEBAII@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180069C20 (__security_check_cookie.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180109524 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?GetAvailableDynamicObjectCount@CEndpointResourcePool@Sarm@@QEBAJAEAI@Z @ 0x18010A3DC (-GetAvailableDynamicObjectCount@CEndpointResourcePool@Sarm@@QEBAJAEAI@Z.c)
 */

__int64 __fastcall Sarm::CStreamResource::GetAvailableDynamicObjectCount(Sarm::CEndpointResourcePool **this)
{
  unsigned int v2; // ebx
  Sarm::CEndpointResourcePool *v3; // rax
  unsigned int v5; // [rsp+30h] [rbp-19h] BYREF
  Sarm::CEndpointResourcePool *v6; // [rsp+38h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+40h] [rbp-9h] BYREF
  Sarm::CEndpointResourcePool **v8; // [rsp+60h] [rbp+17h]
  int v9; // [rsp+68h] [rbp+1Fh]
  int v10; // [rsp+6Ch] [rbp+23h]
  char *v11; // [rsp+70h] [rbp+27h]
  int v12; // [rsp+78h] [rbp+2Fh]
  int v13; // [rsp+7Ch] [rbp+33h]
  unsigned int *v14; // [rsp+80h] [rbp+37h]
  int v15; // [rsp+88h] [rbp+3Fh]
  int v16; // [rsp+8Ch] [rbp+43h]

  v5 = 0;
  Sarm::CEndpointResourcePool::GetAvailableDynamicObjectCount(this[1], &v5);
  v2 = v5;
  if ( (unsigned int)dword_18019C350 > 5 )
  {
    v3 = this[5];
    v16 = 0;
    v13 = 0;
    v10 = 0;
    v6 = v3;
    v14 = &v5;
    v11 = (char *)(this + 2);
    v8 = &v6;
    v15 = 4;
    v12 = 16;
    v9 = 8;
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_18019C350,
      (unsigned __int8 *)dword_1801692B9,
      0LL,
      0LL,
      5u,
      &v7);
  }
  return v2;
}
