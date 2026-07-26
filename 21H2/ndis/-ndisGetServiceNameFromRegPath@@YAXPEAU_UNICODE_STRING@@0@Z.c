/*
 * XREFs of ?ndisGetServiceNameFromRegPath@@YAXPEAU_UNICODE_STRING@@0@Z @ 0x1C0036FF0
 * Callers:
 *     ?ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_MINIPORT_DRIVER_CHARACTERISTICS@@PEAPEAX@Z @ 0x1C0036BC0 (-ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_M.c)
 *     ?ndisRegisterMiniportDriver@@_Y2PAGENPNP@@AHPEAXPEAU_NDIS51_MINIPORT_CHARACTERISTICS@@IPEAPEAX@Z @ 0x1C0135AE4 (-ndisRegisterMiniportDriver@@_Y2PAGENPNP@@AHPEAXPEAU_NDIS51_MINIPORT_CHARACTERISTICS@@IPEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisGetServiceNameFromRegPath(struct _UNICODE_STRING *a1, struct _UNICODE_STRING *a2)
{
  char v3; // r11
  unsigned __int16 v4; // r9
  unsigned __int16 v5; // r10
  wchar_t *Buffer; // rbx
  wchar_t *v7; // rcx
  unsigned __int16 v8; // cx

  if ( a2 )
  {
    if ( a1 )
    {
      if ( a1->Buffer )
      {
        a2->Buffer = 0LL;
        v3 = 1;
        *(_DWORD *)&a2->Length = 0;
        v4 = 0;
        v5 = 0;
        Buffer = a1->Buffer;
        if ( (a1->Length & 0xFFFE) != 0 )
        {
          do
          {
            v7 = &Buffer[v5];
            if ( *v7 == 92 )
            {
              v3 = 1;
            }
            else if ( v3 )
            {
              a2->Buffer = v7;
              v4 = v5;
              v3 = 0;
            }
            ++v5;
          }
          while ( v5 < (unsigned __int16)(a1->Length >> 1) );
          if ( a2->Buffer )
          {
            v8 = a1->Length - 2 * v4;
            a2->MaximumLength = v8;
            a2->Length = v8;
          }
        }
      }
    }
  }
}
