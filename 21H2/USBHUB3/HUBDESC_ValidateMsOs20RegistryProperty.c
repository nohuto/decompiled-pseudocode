/*
 * XREFs of HUBDESC_ValidateMsOs20RegistryProperty @ 0x1C003B660
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001C04 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0002130 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00437E0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall HUBDESC_ValidateMsOs20RegistryProperty(__int64 a1, __int64 a2, unsigned __int16 *a3, __int64 a4)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned __int64 v8; // r11
  __int64 v9; // rdx

  LOWORD(a4) = 1;
  if ( *a3 >= 0xDu )
  {
    v7 = a3[3];
    v8 = *a3;
    if ( v8 >= v7 + 11 )
    {
      if ( !(_WORD)v7 || (v7 & 1) != 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_d(
            *(_QWORD *)(a2 + 96),
            2u,
            5u,
            0x14Cu,
            (__int64)&WPP_4c38247a76be3626caea66f1aba69131_Traceguids,
            v7);
        v6 = 171LL;
      }
      else
      {
        v9 = *(unsigned __int16 *)((char *)a3 + v7 + 8);
        if ( v8 >= v9 + v7 + 10 )
        {
          if ( (_WORD)v9 )
          {
            if ( (unsigned __int16)(a3[2] - 1) <= 6u )
            {
              *(_DWORD *)a2 |= 0x40u;
              return a4;
            }
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_d(
                *(_QWORD *)(a2 + 96),
                2u,
                5u,
                0x14Fu,
                (__int64)&WPP_4c38247a76be3626caea66f1aba69131_Traceguids,
                a3[2]);
            v6 = 174LL;
          }
          else
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_d(
                *(_QWORD *)(a2 + 96),
                2u,
                5u,
                0x14Eu,
                (__int64)&WPP_4c38247a76be3626caea66f1aba69131_Traceguids,
                0);
            v6 = 173LL;
          }
        }
        else
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_d(
              *(_QWORD *)(a2 + 96),
              2u,
              5u,
              0x14Du,
              (__int64)&WPP_4c38247a76be3626caea66f1aba69131_Traceguids,
              v9);
          v6 = 172LL;
        }
      }
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_d(
          *(_QWORD *)(a2 + 96),
          2u,
          5u,
          0x14Bu,
          (__int64)&WPP_4c38247a76be3626caea66f1aba69131_Traceguids,
          v7);
      v6 = 170LL;
    }
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a2 + 96),
        2u,
        5u,
        0x14Au,
        (__int64)&WPP_4c38247a76be3626caea66f1aba69131_Traceguids,
        *a3);
    v6 = 169LL;
  }
  (*(void (__fastcall **)(_QWORD, __int64, unsigned __int16 *, __int64))(a1 + 24))(*(_QWORD *)(a1 + 40), v6, a3, a4);
  LOBYTE(a4) = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_(*(_QWORD *)(a2 + 96), 2u, 5u, 0x150u, (__int64)&WPP_4c38247a76be3626caea66f1aba69131_Traceguids);
    LOBYTE(a4) = 0;
  }
  return a4;
}
